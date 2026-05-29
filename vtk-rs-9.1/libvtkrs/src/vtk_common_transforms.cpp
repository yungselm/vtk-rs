// Include header file
#include<vtk_common_transforms.h>

// Default include in all modules
#include<vtkNew.h>
#include<vtkObjectBase.h>

// Include objects of this module
#include<vtkAbstractTransform.h>
#include<vtkCylindricalTransform.h>
#include<vtkGeneralTransform.h>
#include<vtkHomogeneousTransform.h>
#include<vtkIdentityTransform.h>
#include<vtkLandmarkTransform.h>
#include<vtkLinearTransform.h>
#include<vtkMatrixToHomogeneousTransform.h>
#include<vtkMatrixToLinearTransform.h>
#include<vtkPerspectiveTransform.h>
#include<vtkSphericalTransform.h>
#include<vtkThinPlateSplineTransform.h>
#include<vtkTransform.h>
#include<vtkTransform2D.h>
#include<vtkTransformCollection.h>
#include<vtkAbstractTransform.h>
#include<vtkAbstractTransform.h>
#include<vtkAbstractTransform.h>
#include<vtkWarpTransform.h>

// Implement declared functions
extern "C" vtkNew < vtkCylindricalTransform > vtkCylindricalTransform_new () {return vtkNew < vtkCylindricalTransform > () ;}
extern "C" void vtkCylindricalTransform_destructor (vtkNew < vtkCylindricalTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCylindricalTransform_get_ptr (vtkNew < vtkCylindricalTransform > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkGeneralTransform > vtkGeneralTransform_new () {return vtkNew < vtkGeneralTransform > () ;}
extern "C" void vtkGeneralTransform_destructor (vtkNew < vtkGeneralTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkGeneralTransform_get_ptr (vtkNew < vtkGeneralTransform > sself) {return sself . GetPointer () ;}
extern "C" void vtk_general_transform_identity(vtkNew<vtkGeneralTransform> sself) { sself->Identity(); }
extern "C" void vtk_general_transform_inverse(vtkNew<vtkGeneralTransform> sself) { sself->Inverse(); }
extern "C" void vtk_general_transform_translate(vtkNew<vtkGeneralTransform> sself, double x, double y, double z) { sself->Translate(x, y, z); }
extern "C" void vtk_general_transform_translate(vtkNew<vtkGeneralTransform> sself, const double x) { sself->Translate(x); }
extern "C" void vtk_general_transform_translate(vtkNew<vtkGeneralTransform> sself, const float x) { sself->Translate(x); }
extern "C" void vtk_general_transform_rotate_wxyz(vtkNew<vtkGeneralTransform> sself, double angle, double x, double y, double z) { sself->RotateWXYZ(angle, x, y, z); }
extern "C" void vtk_general_transform_rotate_wxyz(vtkNew<vtkGeneralTransform> sself, double angle, const double axis) { sself->RotateWXYZ(angle, axis); }
extern "C" void vtk_general_transform_rotate_wxyz(vtkNew<vtkGeneralTransform> sself, double angle, const float axis) { sself->RotateWXYZ(angle, axis); }
extern "C" void vtk_general_transform_rotate_x(vtkNew<vtkGeneralTransform> sself, double angle) { sself->RotateX(angle); }
extern "C" void vtk_general_transform_rotate_y(vtkNew<vtkGeneralTransform> sself, double angle) { sself->RotateY(angle); }
extern "C" void vtk_general_transform_rotate_z(vtkNew<vtkGeneralTransform> sself, double angle) { sself->RotateZ(angle); }
extern "C" void vtk_general_transform_scale(vtkNew<vtkGeneralTransform> sself, double x, double y, double z) { sself->Scale(x, y, z); }
extern "C" void vtk_general_transform_scale(vtkNew<vtkGeneralTransform> sself, const double s) { sself->Scale(s); }
extern "C" void vtk_general_transform_scale(vtkNew<vtkGeneralTransform> sself, const float s) { sself->Scale(s); }
extern "C" void vtk_general_transform_concatenate(vtkNew<vtkGeneralTransform> sself, const double elements) { sself->Concatenate(elements); }
extern "C" void vtk_general_transform_pre_multiply(vtkNew<vtkGeneralTransform> sself) { sself->PreMultiply(); }
extern "C" void vtk_general_transform_post_multiply(vtkNew<vtkGeneralTransform> sself) { sself->PostMultiply(); }
extern "C" int vtk_general_transform_get_number_of_concatenated_transforms(vtkNew<vtkGeneralTransform> sself) { return sself->GetNumberOfConcatenatedTransforms(); }
extern "C" int vtk_general_transform_get_inverse_flag(vtkNew<vtkGeneralTransform> sself) { return sself->GetInverseFlag(); }
extern "C" void vtk_general_transform_push(vtkNew<vtkGeneralTransform> sself) { sself->Push(); }
extern "C" void vtk_general_transform_pop(vtkNew<vtkGeneralTransform> sself) { sself->Pop(); }
extern "C" void vtk_general_transform_internal_transform_point(vtkNew<vtkGeneralTransform> sself, const float in, float out) { sself->InternalTransformPoint(in, out); }
extern "C" void vtk_general_transform_internal_transform_point(vtkNew<vtkGeneralTransform> sself, const double in, double out) { sself->InternalTransformPoint(in, out); }
extern "C" void vtk_general_transform_internal_transform_derivative(vtkNew<vtkGeneralTransform> sself, const float in, float out, float derivative) { sself->InternalTransformDerivative(in, out, derivative); }
extern "C" void vtk_general_transform_internal_transform_derivative(vtkNew<vtkGeneralTransform> sself, const double in, double out, double derivative) { sself->InternalTransformDerivative(in, out, derivative); }
extern "C" unsigned long vtk_general_transform_get_m_time(vtkNew<vtkGeneralTransform> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkIdentityTransform > vtkIdentityTransform_new () {return vtkNew < vtkIdentityTransform > () ;}
extern "C" void vtkIdentityTransform_destructor (vtkNew < vtkIdentityTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkIdentityTransform_get_ptr (vtkNew < vtkIdentityTransform > sself) {return sself . GetPointer () ;}
extern "C" void vtk_identity_transform_inverse(vtkNew<vtkIdentityTransform> sself) { sself->Inverse(); }
extern "C" vtkNew < vtkLandmarkTransform > vtkLandmarkTransform_new () {return vtkNew < vtkLandmarkTransform > () ;}
extern "C" void vtkLandmarkTransform_destructor (vtkNew < vtkLandmarkTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLandmarkTransform_get_ptr (vtkNew < vtkLandmarkTransform > sself) {return sself . GetPointer () ;}
extern "C" void vtk_landmark_transform_set_mode(vtkNew<vtkLandmarkTransform> sself, int _arg) { sself->SetMode(_arg); }
extern "C" void vtk_landmark_transform_set_mode_to_rigid_body(vtkNew<vtkLandmarkTransform> sself) { sself->SetModeToRigidBody(); }
extern "C" void vtk_landmark_transform_set_mode_to_similarity(vtkNew<vtkLandmarkTransform> sself) { sself->SetModeToSimilarity(); }
extern "C" void vtk_landmark_transform_set_mode_to_affine(vtkNew<vtkLandmarkTransform> sself) { sself->SetModeToAffine(); }
extern "C" int vtk_landmark_transform_get_mode(vtkNew<vtkLandmarkTransform> sself) { return sself->GetMode(); }
extern "C" const char* vtk_landmark_transform_get_mode_as_string(vtkNew<vtkLandmarkTransform> sself) { return sself->GetModeAsString(); }
extern "C" void vtk_landmark_transform_inverse(vtkNew<vtkLandmarkTransform> sself) { sself->Inverse(); }
extern "C" unsigned long vtk_landmark_transform_get_m_time(vtkNew<vtkLandmarkTransform> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkMatrixToHomogeneousTransform > vtkMatrixToHomogeneousTransform_new () {return vtkNew < vtkMatrixToHomogeneousTransform > () ;}
extern "C" void vtkMatrixToHomogeneousTransform_destructor (vtkNew < vtkMatrixToHomogeneousTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMatrixToHomogeneousTransform_get_ptr (vtkNew < vtkMatrixToHomogeneousTransform > sself) {return sself . GetPointer () ;}
extern "C" void vtk_matrix_to_homogeneous_transform_inverse(vtkNew<vtkMatrixToHomogeneousTransform> sself) { sself->Inverse(); }
extern "C" unsigned long vtk_matrix_to_homogeneous_transform_get_m_time(vtkNew<vtkMatrixToHomogeneousTransform> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkMatrixToLinearTransform > vtkMatrixToLinearTransform_new () {return vtkNew < vtkMatrixToLinearTransform > () ;}
extern "C" void vtkMatrixToLinearTransform_destructor (vtkNew < vtkMatrixToLinearTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMatrixToLinearTransform_get_ptr (vtkNew < vtkMatrixToLinearTransform > sself) {return sself . GetPointer () ;}
extern "C" void vtk_matrix_to_linear_transform_inverse(vtkNew<vtkMatrixToLinearTransform> sself) { sself->Inverse(); }
extern "C" unsigned long vtk_matrix_to_linear_transform_get_m_time(vtkNew<vtkMatrixToLinearTransform> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkPerspectiveTransform > vtkPerspectiveTransform_new () {return vtkNew < vtkPerspectiveTransform > () ;}
extern "C" void vtkPerspectiveTransform_destructor (vtkNew < vtkPerspectiveTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPerspectiveTransform_get_ptr (vtkNew < vtkPerspectiveTransform > sself) {return sself . GetPointer () ;}
extern "C" void vtk_perspective_transform_identity(vtkNew<vtkPerspectiveTransform> sself) { sself->Identity(); }
extern "C" void vtk_perspective_transform_inverse(vtkNew<vtkPerspectiveTransform> sself) { sself->Inverse(); }
extern "C" void vtk_perspective_transform_adjust_viewport(vtkNew<vtkPerspectiveTransform> sself, double oldXMin, double oldXMax, double oldYMin, double oldYMax, double newXMin, double newXMax, double newYMin, double newYMax) { sself->AdjustViewport(oldXMin, oldXMax, oldYMin, oldYMax, newXMin, newXMax, newYMin, newYMax); }
extern "C" void vtk_perspective_transform_adjust_z_buffer(vtkNew<vtkPerspectiveTransform> sself, double oldNearZ, double oldFarZ, double newNearZ, double newFarZ) { sself->AdjustZBuffer(oldNearZ, oldFarZ, newNearZ, newFarZ); }
extern "C" void vtk_perspective_transform_ortho(vtkNew<vtkPerspectiveTransform> sself, double xmin, double xmax, double ymin, double ymax, double znear, double zfar) { sself->Ortho(xmin, xmax, ymin, ymax, znear, zfar); }
extern "C" void vtk_perspective_transform_frustum(vtkNew<vtkPerspectiveTransform> sself, double xmin, double xmax, double ymin, double ymax, double znear, double zfar) { sself->Frustum(xmin, xmax, ymin, ymax, znear, zfar); }
extern "C" void vtk_perspective_transform_perspective(vtkNew<vtkPerspectiveTransform> sself, double angle, double aspect, double znear, double zfar) { sself->Perspective(angle, aspect, znear, zfar); }
extern "C" void vtk_perspective_transform_shear(vtkNew<vtkPerspectiveTransform> sself, double dxdz, double dydz, double zplane) { sself->Shear(dxdz, dydz, zplane); }
extern "C" void vtk_perspective_transform_stereo(vtkNew<vtkPerspectiveTransform> sself, double angle, double focaldistance) { sself->Stereo(angle, focaldistance); }
extern "C" void vtk_perspective_transform_setup_camera(vtkNew<vtkPerspectiveTransform> sself, const double position, const double focalpoint, const double viewup) { sself->SetupCamera(position, focalpoint, viewup); }
extern "C" void vtk_perspective_transform_setup_camera(vtkNew<vtkPerspectiveTransform> sself, double p0, double p1, double p2, double fp0, double fp1, double fp2, double vup0, double vup1, double vup2) { sself->SetupCamera(p0, p1, p2, fp0, fp1, fp2, vup0, vup1, vup2); }
extern "C" void vtk_perspective_transform_translate(vtkNew<vtkPerspectiveTransform> sself, double x, double y, double z) { sself->Translate(x, y, z); }
extern "C" void vtk_perspective_transform_translate(vtkNew<vtkPerspectiveTransform> sself, const double x) { sself->Translate(x); }
extern "C" void vtk_perspective_transform_translate(vtkNew<vtkPerspectiveTransform> sself, const float x) { sself->Translate(x); }
extern "C" void vtk_perspective_transform_rotate_wxyz(vtkNew<vtkPerspectiveTransform> sself, double angle, double x, double y, double z) { sself->RotateWXYZ(angle, x, y, z); }
extern "C" void vtk_perspective_transform_rotate_wxyz(vtkNew<vtkPerspectiveTransform> sself, double angle, const double axis) { sself->RotateWXYZ(angle, axis); }
extern "C" void vtk_perspective_transform_rotate_wxyz(vtkNew<vtkPerspectiveTransform> sself, double angle, const float axis) { sself->RotateWXYZ(angle, axis); }
extern "C" void vtk_perspective_transform_rotate_x(vtkNew<vtkPerspectiveTransform> sself, double angle) { sself->RotateX(angle); }
extern "C" void vtk_perspective_transform_rotate_y(vtkNew<vtkPerspectiveTransform> sself, double angle) { sself->RotateY(angle); }
extern "C" void vtk_perspective_transform_rotate_z(vtkNew<vtkPerspectiveTransform> sself, double angle) { sself->RotateZ(angle); }
extern "C" void vtk_perspective_transform_scale(vtkNew<vtkPerspectiveTransform> sself, double x, double y, double z) { sself->Scale(x, y, z); }
extern "C" void vtk_perspective_transform_scale(vtkNew<vtkPerspectiveTransform> sself, const double s) { sself->Scale(s); }
extern "C" void vtk_perspective_transform_scale(vtkNew<vtkPerspectiveTransform> sself, const float s) { sself->Scale(s); }
extern "C" void vtk_perspective_transform_set_matrix(vtkNew<vtkPerspectiveTransform> sself, const double elements) { sself->SetMatrix(elements); }
extern "C" void vtk_perspective_transform_concatenate(vtkNew<vtkPerspectiveTransform> sself, const double elements) { sself->Concatenate(elements); }
extern "C" void vtk_perspective_transform_pre_multiply(vtkNew<vtkPerspectiveTransform> sself) { sself->PreMultiply(); }
extern "C" void vtk_perspective_transform_post_multiply(vtkNew<vtkPerspectiveTransform> sself) { sself->PostMultiply(); }
extern "C" int vtk_perspective_transform_get_number_of_concatenated_transforms(vtkNew<vtkPerspectiveTransform> sself) { return sself->GetNumberOfConcatenatedTransforms(); }
extern "C" int vtk_perspective_transform_get_inverse_flag(vtkNew<vtkPerspectiveTransform> sself) { return sself->GetInverseFlag(); }
extern "C" void vtk_perspective_transform_push(vtkNew<vtkPerspectiveTransform> sself) { sself->Push(); }
extern "C" void vtk_perspective_transform_pop(vtkNew<vtkPerspectiveTransform> sself) { sself->Pop(); }
extern "C" unsigned long vtk_perspective_transform_get_m_time(vtkNew<vtkPerspectiveTransform> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkSphericalTransform > vtkSphericalTransform_new () {return vtkNew < vtkSphericalTransform > () ;}
extern "C" void vtkSphericalTransform_destructor (vtkNew < vtkSphericalTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSphericalTransform_get_ptr (vtkNew < vtkSphericalTransform > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkThinPlateSplineTransform > vtkThinPlateSplineTransform_new () {return vtkNew < vtkThinPlateSplineTransform > () ;}
extern "C" void vtkThinPlateSplineTransform_destructor (vtkNew < vtkThinPlateSplineTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkThinPlateSplineTransform_get_ptr (vtkNew < vtkThinPlateSplineTransform > sself) {return sself . GetPointer () ;}
extern "C" double vtk_thin_plate_spline_transform_get_sigma(vtkNew<vtkThinPlateSplineTransform> sself) { return sself->GetSigma(); }
extern "C" void vtk_thin_plate_spline_transform_set_sigma(vtkNew<vtkThinPlateSplineTransform> sself, double _arg) { sself->SetSigma(_arg); }
extern "C" void vtk_thin_plate_spline_transform_set_basis(vtkNew<vtkThinPlateSplineTransform> sself, int basis) { sself->SetBasis(basis); }
extern "C" int vtk_thin_plate_spline_transform_get_basis(vtkNew<vtkThinPlateSplineTransform> sself) { return sself->GetBasis(); }
extern "C" void vtk_thin_plate_spline_transform_set_basis_to_r(vtkNew<vtkThinPlateSplineTransform> sself) { sself->SetBasisToR(); }
extern "C" void vtk_thin_plate_spline_transform_set_basis_to_r_2_log_r(vtkNew<vtkThinPlateSplineTransform> sself) { sself->SetBasisToR2LogR(); }
extern "C" const char* vtk_thin_plate_spline_transform_get_basis_as_string(vtkNew<vtkThinPlateSplineTransform> sself) { return sself->GetBasisAsString(); }
extern "C" unsigned long vtk_thin_plate_spline_transform_get_m_time(vtkNew<vtkThinPlateSplineTransform> sself) { return sself->GetMTime(); }
extern "C" bool vtk_thin_plate_spline_transform_get_regularize_bulk_transform(vtkNew<vtkThinPlateSplineTransform> sself) { return sself->GetRegularizeBulkTransform(); }
extern "C" void vtk_thin_plate_spline_transform_set_regularize_bulk_transform(vtkNew<vtkThinPlateSplineTransform> sself, bool _arg) { sself->SetRegularizeBulkTransform(_arg); }
extern "C" void vtk_thin_plate_spline_transform_regularize_bulk_transform_on(vtkNew<vtkThinPlateSplineTransform> sself) { sself->RegularizeBulkTransformOn(); }
extern "C" void vtk_thin_plate_spline_transform_regularize_bulk_transform_off(vtkNew<vtkThinPlateSplineTransform> sself) { sself->RegularizeBulkTransformOff(); }
extern "C" vtkNew < vtkTransform > vtkTransform_new () {return vtkNew < vtkTransform > () ;}
extern "C" void vtkTransform_destructor (vtkNew < vtkTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTransform_get_ptr (vtkNew < vtkTransform > sself) {return sself . GetPointer () ;}
extern "C" void vtk_transform_identity(vtkNew<vtkTransform> sself) { sself->Identity(); }
extern "C" void vtk_transform_inverse(vtkNew<vtkTransform> sself) { sself->Inverse(); }
extern "C" void vtk_transform_translate(vtkNew<vtkTransform> sself, double x, double y, double z) { sself->Translate(x, y, z); }
extern "C" void vtk_transform_translate(vtkNew<vtkTransform> sself, const double x) { sself->Translate(x); }
extern "C" void vtk_transform_translate(vtkNew<vtkTransform> sself, const float x) { sself->Translate(x); }
extern "C" void vtk_transform_rotate_wxyz(vtkNew<vtkTransform> sself, double angle, double x, double y, double z) { sself->RotateWXYZ(angle, x, y, z); }
extern "C" void vtk_transform_rotate_wxyz(vtkNew<vtkTransform> sself, double angle, const double axis) { sself->RotateWXYZ(angle, axis); }
extern "C" void vtk_transform_rotate_wxyz(vtkNew<vtkTransform> sself, double angle, const float axis) { sself->RotateWXYZ(angle, axis); }
extern "C" void vtk_transform_rotate_x(vtkNew<vtkTransform> sself, double angle) { sself->RotateX(angle); }
extern "C" void vtk_transform_rotate_y(vtkNew<vtkTransform> sself, double angle) { sself->RotateY(angle); }
extern "C" void vtk_transform_rotate_z(vtkNew<vtkTransform> sself, double angle) { sself->RotateZ(angle); }
extern "C" void vtk_transform_scale(vtkNew<vtkTransform> sself, double x, double y, double z) { sself->Scale(x, y, z); }
extern "C" void vtk_transform_scale(vtkNew<vtkTransform> sself, const double s) { sself->Scale(s); }
extern "C" void vtk_transform_scale(vtkNew<vtkTransform> sself, const float s) { sself->Scale(s); }
extern "C" void vtk_transform_set_matrix(vtkNew<vtkTransform> sself, const double elements) { sself->SetMatrix(elements); }
extern "C" void vtk_transform_concatenate(vtkNew<vtkTransform> sself, const double elements) { sself->Concatenate(elements); }
extern "C" void vtk_transform_pre_multiply(vtkNew<vtkTransform> sself) { sself->PreMultiply(); }
extern "C" void vtk_transform_post_multiply(vtkNew<vtkTransform> sself) { sself->PostMultiply(); }
extern "C" int vtk_transform_get_number_of_concatenated_transforms(vtkNew<vtkTransform> sself) { return sself->GetNumberOfConcatenatedTransforms(); }
extern "C" void vtk_transform_get_orientation(vtkNew<vtkTransform> sself, double orient) { sself->GetOrientation(orient); }
extern "C" void vtk_transform_get_orientation(vtkNew<vtkTransform> sself, float orient) { sself->GetOrientation(orient); }
extern "C" double* vtk_transform_get_orientation(vtkNew<vtkTransform> sself) { return sself->GetOrientation(); }
extern "C" void vtk_transform_get_orientation_wxyz(vtkNew<vtkTransform> sself, double wxyz) { sself->GetOrientationWXYZ(wxyz); }
extern "C" void vtk_transform_get_orientation_wxyz(vtkNew<vtkTransform> sself, float wxyz) { sself->GetOrientationWXYZ(wxyz); }
extern "C" double* vtk_transform_get_orientation_wxyz(vtkNew<vtkTransform> sself) { return sself->GetOrientationWXYZ(); }
extern "C" void vtk_transform_get_position(vtkNew<vtkTransform> sself, double pos) { sself->GetPosition(pos); }
extern "C" void vtk_transform_get_position(vtkNew<vtkTransform> sself, float pos) { sself->GetPosition(pos); }
extern "C" double* vtk_transform_get_position(vtkNew<vtkTransform> sself) { return sself->GetPosition(); }
extern "C" void vtk_transform_get_scale(vtkNew<vtkTransform> sself, double scale) { sself->GetScale(scale); }
extern "C" void vtk_transform_get_scale(vtkNew<vtkTransform> sself, float scale) { sself->GetScale(scale); }
extern "C" double* vtk_transform_get_scale(vtkNew<vtkTransform> sself) { return sself->GetScale(); }
extern "C" int vtk_transform_get_inverse_flag(vtkNew<vtkTransform> sself) { return sself->GetInverseFlag(); }
extern "C" void vtk_transform_push(vtkNew<vtkTransform> sself) { sself->Push(); }
extern "C" void vtk_transform_pop(vtkNew<vtkTransform> sself) { sself->Pop(); }
extern "C" unsigned long vtk_transform_get_m_time(vtkNew<vtkTransform> sself) { return sself->GetMTime(); }
extern "C" void vtk_transform_multiply_point(vtkNew<vtkTransform> sself, const float in, float out) { sself->MultiplyPoint(in, out); }
extern "C" void vtk_transform_multiply_point(vtkNew<vtkTransform> sself, const double in, double out) { sself->MultiplyPoint(in, out); }
extern "C" vtkNew < vtkTransform2D > vtkTransform2D_new () {return vtkNew < vtkTransform2D > () ;}
extern "C" void vtkTransform2D_destructor (vtkNew < vtkTransform2D > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTransform2D_get_ptr (vtkNew < vtkTransform2D > sself) {return sself . GetPointer () ;}
extern "C" void vtk_transform_2_d_identity(vtkNew<vtkTransform2D> sself) { sself->Identity(); }
extern "C" void vtk_transform_2_d_inverse(vtkNew<vtkTransform2D> sself) { sself->Inverse(); }
extern "C" void vtk_transform_2_d_translate(vtkNew<vtkTransform2D> sself, double x, double y) { sself->Translate(x, y); }
extern "C" void vtk_transform_2_d_translate(vtkNew<vtkTransform2D> sself, const double x) { sself->Translate(x); }
extern "C" void vtk_transform_2_d_translate(vtkNew<vtkTransform2D> sself, const float x) { sself->Translate(x); }
extern "C" void vtk_transform_2_d_rotate(vtkNew<vtkTransform2D> sself, double angle) { sself->Rotate(angle); }
extern "C" void vtk_transform_2_d_scale(vtkNew<vtkTransform2D> sself, double x, double y) { sself->Scale(x, y); }
extern "C" void vtk_transform_2_d_scale(vtkNew<vtkTransform2D> sself, const double s) { sself->Scale(s); }
extern "C" void vtk_transform_2_d_scale(vtkNew<vtkTransform2D> sself, const float s) { sself->Scale(s); }
extern "C" void vtk_transform_2_d_set_matrix(vtkNew<vtkTransform2D> sself, const double elements) { sself->SetMatrix(elements); }
extern "C" void vtk_transform_2_d_get_position(vtkNew<vtkTransform2D> sself, double pos) { sself->GetPosition(pos); }
extern "C" void vtk_transform_2_d_get_position(vtkNew<vtkTransform2D> sself, float pos) { sself->GetPosition(pos); }
extern "C" void vtk_transform_2_d_get_scale(vtkNew<vtkTransform2D> sself, double scale) { sself->GetScale(scale); }
extern "C" void vtk_transform_2_d_get_scale(vtkNew<vtkTransform2D> sself, float pos) { sself->GetScale(pos); }
extern "C" unsigned long vtk_transform_2_d_get_m_time(vtkNew<vtkTransform2D> sself) { return sself->GetMTime(); }
extern "C" void vtk_transform_2_d_transform_points(vtkNew<vtkTransform2D> sself, const float inPts, float outPts, int n) { sself->TransformPoints(inPts, outPts, n); }
extern "C" void vtk_transform_2_d_transform_points(vtkNew<vtkTransform2D> sself, const double inPts, double outPts, int n) { sself->TransformPoints(inPts, outPts, n); }
extern "C" void vtk_transform_2_d_inverse_transform_points(vtkNew<vtkTransform2D> sself, const float inPts, float outPts, int n) { sself->InverseTransformPoints(inPts, outPts, n); }
extern "C" void vtk_transform_2_d_inverse_transform_points(vtkNew<vtkTransform2D> sself, const double inPts, double outPts, int n) { sself->InverseTransformPoints(inPts, outPts, n); }
extern "C" void vtk_transform_2_d_multiply_point(vtkNew<vtkTransform2D> sself, const float in, float out) { sself->MultiplyPoint(in, out); }
extern "C" void vtk_transform_2_d_multiply_point(vtkNew<vtkTransform2D> sself, const double in, double out) { sself->MultiplyPoint(in, out); }
extern "C" vtkNew < vtkTransformCollection > vtkTransformCollection_new () {return vtkNew < vtkTransformCollection > () ;}
extern "C" void vtkTransformCollection_destructor (vtkNew < vtkTransformCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTransformCollection_get_ptr (vtkNew < vtkTransformCollection > sself) {return sself . GetPointer () ;}
