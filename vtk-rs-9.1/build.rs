use cmake::Config;
use vtk_rs_link::{Result, WARN, log, find_vtk_info};

fn build_cmake() {
    println!("cargo:rerun-if-changed=libvtkrs");
    println!("cargo:rerun-if-env-changed=VTK_DIR");
    println!("cargo:rerun-if-env-changed=VTK_VERSION");
    let mut config = Config::new("libvtkrs");

    if let Ok(vtk_dir) = std::env::var("VTK_DIR") {
        config.define("VTK_DIR", &vtk_dir);
        // Also add the lib subdirectory to the linker search path so that
        // source-built VTK libraries (e.g. ~/VTK/build/lib) are found.
        println!("cargo:rustc-link-search=native={}/lib", vtk_dir);
    }

    let dst = config.build();
    println!("cargo:rustc-link-search=native={}", dst.display());
    println!("cargo:rustc-link-lib=static=vtkrs");
}

fn main() -> Result<()> {
    if std::env::var("DOCS_RS").is_ok() {
        return Ok(());
    }
    if let Ok(val) = std::env::var("VERBOSE") {
        if val == "1" || val.to_lowercase() == "true" {
            WARN.store(true, std::sync::atomic::Ordering::Relaxed);
            log!("-- Verbose Logging Enabled");
        }
    }
    build_cmake();

    let info = find_vtk_info()?;
    let v = &info.version_suffix;

    // VTK modules
    let modules = [
        // "vtktoken",
        "vtkCommonArchive",
        "vtkCommonColor",
        "vtkCommonComputationalGeometry",
        "vtkCommonCore",
        "vtkCommonDataModel",
        "vtkCommonExecutionModel",
        "vtkCommonMath",
        "vtkCommonMisc",
        "vtkCommonPython",
        "vtkCommonSystem",
        "vtkCommonTransforms",
    ];

    // Bundled third-party libs that VTK modules depend on
    let third_party = [
        "vtkpugixml",
        "vtkkissfft",
        "vtkloguru",
        "vtksys",
        "vtkdoubleconversion",
    ];

    // Build a single -Wl,--start-group,...,--end-group argument so the linker
    // makes multiple passes and resolves out-of-order static dependencies.
    // -lm is included inside the group so it is available when VTK libs need it.
    let libs: Vec<String> = modules
        .iter()
        .map(|m| format!("-l{}{}", m, v))
        .chain(third_party.iter().map(|m| format!("-l{}{}", m, v)))
        .chain(["-lm".to_string(), "-lstdc++".to_string(), "-larchive".to_string(), "-lc".to_string()])
        .collect();

    println!(
        "cargo:rustc-link-arg=-Wl,--start-group,{},--end-group",
        libs.join(",")
    );

    Ok(())
}
