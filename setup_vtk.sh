#!/usr/bin/env bash
# setup_vtk.sh — Download VTK from source, build WrapVTK, and generate XML files.
#
# Usage:
#   ./setup_vtk.sh [VTK_VERSION]
#
# Example:
#   ./setup_vtk.sh 9.1.0   (default)
#   ./setup_vtk.sh 9.3.0
#
# What this script does:
#   1. Wipes any existing ~/VTK clone and WrapVTK/build directory.
#   2. Clones VTK at the exact tag v<VTK_VERSION> into ~/VTK.
#   3. Builds VTK (static libs, no Python/Java/testing).
#   4. Builds WrapVTK against the fresh VTK build.
#   5. Verifies that XML files were generated.

set -euo pipefail

# ---------------------------------------------------------------------------
# Configuration
# ---------------------------------------------------------------------------
VTK_VERSION="${1:-9.1.0}"
VTK_TAG="v${VTK_VERSION}"
VTK_SRC="${HOME}/VTK"
VTK_BUILD="${VTK_SRC}/build"
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
WRAP_VTK_DIR="${SCRIPT_DIR}/WrapVTK"
WRAP_BUILD="${WRAP_VTK_DIR}/build"
JOBS="$(nproc)"

echo "=========================================="
echo "  VTK setup script"
echo "  VTK version : ${VTK_TAG}"
echo "  VTK source  : ${VTK_SRC}"
echo "  WrapVTK dir : ${WRAP_VTK_DIR}"
echo "  Parallel jobs: ${JOBS}"
echo "=========================================="

# ---------------------------------------------------------------------------
# Step 0: Wipe existing builds
# ---------------------------------------------------------------------------
echo ""
echo "[0/4] Wiping existing builds..."

if [ -d "${VTK_SRC}" ]; then
    echo "  Removing ${VTK_SRC} ..."
    rm -rf "${VTK_SRC}"
fi

if [ -d "${WRAP_BUILD}" ]; then
    echo "  Removing ${WRAP_BUILD} ..."
    rm -rf "${WRAP_BUILD}"
fi

echo "  Done."

# ---------------------------------------------------------------------------
# Step 1: Clone VTK at the exact version tag
# ---------------------------------------------------------------------------
echo ""
echo "[1/4] Cloning VTK ${VTK_TAG} into ${VTK_SRC} ..."

git clone \
    https://github.com/Kitware/VTK.git \
    --branch "${VTK_TAG}" \
    --depth 1 \
    "${VTK_SRC}"

echo "  Clone complete."

# ---------------------------------------------------------------------------
# Step 2: Build VTK from source
# ---------------------------------------------------------------------------
echo ""
echo "[2/4] Building VTK (this takes 15-30 minutes) ..."

mkdir -p "${VTK_BUILD}"
cmake -S "${VTK_SRC}" -B "${VTK_BUILD}" \
    -DVTK_WRAP_PYTHON=ON \
    -DVTK_WRAP_JAVA=OFF \
    -DBUILD_TESTING=OFF \
    -DBUILD_SHARED_LIBS=OFF \
    -DCMAKE_BUILD_TYPE=Release \
    -DVTK_MODULE_ENABLE_VTK_CommonArchive=YES \
    -DVTK_MODULE_ENABLE_VTK_CommonPython=YES

cmake --build "${VTK_BUILD}" -j"${JOBS}"

echo "  VTK build complete."

# Sanity check: ensure wrapping headers are present
if [ ! -f "${VTK_BUILD}/Wrapping/Tools/vtkParseAttributes.h" ] && \
   [ ! -f "${VTK_SRC}/Wrapping/Tools/vtkParseAttributes.h" ]; then
    echo ""
    echo "WARNING: vtkParseAttributes.h not found."
    echo "         WrapVTK may fail if wrapping headers are missing."
fi

# ---------------------------------------------------------------------------
# Step 3: Build WrapVTK
# ---------------------------------------------------------------------------
echo ""
echo "[3/4] Building WrapVTK ..."

# Ensure the submodule is initialised
if [ ! -f "${WRAP_VTK_DIR}/CMakeLists.txt" ]; then
    echo "  WrapVTK source not found at ${WRAP_VTK_DIR}."
    echo "  Run: git submodule update --init --recursive"
    exit 1
fi

mkdir -p "${WRAP_BUILD}"
cmake -S "${WRAP_VTK_DIR}" -B "${WRAP_BUILD}" \
    -DVTK_DIR="${VTK_BUILD}"

cmake --build "${WRAP_BUILD}" -j"${JOBS}"

echo "  WrapVTK build complete."

# ---------------------------------------------------------------------------
# Step 4: Verify XML output
# ---------------------------------------------------------------------------
echo ""
echo "[4/4] Verifying XML output ..."

XML_DIR="${WRAP_BUILD}/xml"

if [ ! -d "${XML_DIR}" ]; then
    echo "ERROR: XML directory not found at ${XML_DIR}"
    echo "       Something went wrong during the WrapVTK build."
    exit 1
fi

XML_COUNT="$(ls -1 "${XML_DIR}" | wc -l)"
echo "  Found ${XML_COUNT} XML module directories in ${XML_DIR}."

if [ "${XML_COUNT}" -eq 0 ]; then
    echo "ERROR: No XML files were generated. Check the WrapVTK build output."
    exit 1
fi

echo ""
echo "=========================================="
echo "  Setup complete for VTK ${VTK_TAG}!"
echo ""
echo "  VTK build : ${VTK_BUILD}"
echo "  XML output: ${XML_DIR}"
echo ""
echo "  Next step — regenerate Rust bindings:"
echo "    cargo run -p vtk-gen -- \\"
echo "      --opath vtk-rs-${VTK_VERSION%.*} \\"
echo "      --wrap-vtk WrapVTK"
echo "=========================================="
