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

// Declare exported functions
extern "C" vtkNew < vtkCylindricalTransform > vtkCylindricalTransform_new () ;
extern "C" void vtkCylindricalTransform_destructor (vtkNew < vtkCylindricalTransform > sself) ;
extern "C" void * vtkCylindricalTransform_get_ptr (vtkNew < vtkCylindricalTransform > sself) ;
extern "C" vtkNew < vtkGeneralTransform > vtkGeneralTransform_new () ;
extern "C" void vtkGeneralTransform_destructor (vtkNew < vtkGeneralTransform > sself) ;
extern "C" void * vtkGeneralTransform_get_ptr (vtkNew < vtkGeneralTransform > sself) ;
extern "C" void vtk_general_transform_identity(vtkNew<vtkGeneralTransform> sself);
extern "C" void vtk_general_transform_inverse(vtkNew<vtkGeneralTransform> sself);
extern "C" void vtk_general_transform_translate(vtkNew<vtkGeneralTransform> sself, double x, double y, double z);
extern "C" void vtk_general_transform_translate(vtkNew<vtkGeneralTransform> sself, const double x);
extern "C" void vtk_general_transform_translate(vtkNew<vtkGeneralTransform> sself, const float x);
extern "C" void vtk_general_transform_rotate_wxyz(vtkNew<vtkGeneralTransform> sself, double angle, double x, double y, double z);
extern "C" void vtk_general_transform_rotate_wxyz(vtkNew<vtkGeneralTransform> sself, double angle, const double axis);
extern "C" void vtk_general_transform_rotate_wxyz(vtkNew<vtkGeneralTransform> sself, double angle, const float axis);
extern "C" void vtk_general_transform_rotate_x(vtkNew<vtkGeneralTransform> sself, double angle);
extern "C" void vtk_general_transform_rotate_y(vtkNew<vtkGeneralTransform> sself, double angle);
extern "C" void vtk_general_transform_rotate_z(vtkNew<vtkGeneralTransform> sself, double angle);
extern "C" void vtk_general_transform_scale(vtkNew<vtkGeneralTransform> sself, double x, double y, double z);
extern "C" void vtk_general_transform_scale(vtkNew<vtkGeneralTransform> sself, const double s);
extern "C" void vtk_general_transform_scale(vtkNew<vtkGeneralTransform> sself, const float s);
extern "C" void vtk_general_transform_concatenate(vtkNew<vtkGeneralTransform> sself, const double elements);
extern "C" void vtk_general_transform_pre_multiply(vtkNew<vtkGeneralTransform> sself);
extern "C" void vtk_general_transform_post_multiply(vtkNew<vtkGeneralTransform> sself);
extern "C" int vtk_general_transform_get_number_of_concatenated_transforms(vtkNew<vtkGeneralTransform> sself);
extern "C" int vtk_general_transform_get_inverse_flag(vtkNew<vtkGeneralTransform> sself);
extern "C" void vtk_general_transform_push(vtkNew<vtkGeneralTransform> sself);
extern "C" void vtk_general_transform_pop(vtkNew<vtkGeneralTransform> sself);
extern "C" void vtk_general_transform_internal_transform_point(vtkNew<vtkGeneralTransform> sself, const float in, float out);
extern "C" void vtk_general_transform_internal_transform_point(vtkNew<vtkGeneralTransform> sself, const double in, double out);
extern "C" void vtk_general_transform_internal_transform_derivative(vtkNew<vtkGeneralTransform> sself, const float in, float out, float derivative);
extern "C" void vtk_general_transform_internal_transform_derivative(vtkNew<vtkGeneralTransform> sself, const double in, double out, double derivative);
extern "C" unsigned long vtk_general_transform_get_m_time(vtkNew<vtkGeneralTransform> sself);
extern "C" vtkNew < vtkIdentityTransform > vtkIdentityTransform_new () ;
extern "C" void vtkIdentityTransform_destructor (vtkNew < vtkIdentityTransform > sself) ;
extern "C" void * vtkIdentityTransform_get_ptr (vtkNew < vtkIdentityTransform > sself) ;
extern "C" void vtk_identity_transform_inverse(vtkNew<vtkIdentityTransform> sself);
extern "C" vtkNew < vtkLandmarkTransform > vtkLandmarkTransform_new () ;
extern "C" void vtkLandmarkTransform_destructor (vtkNew < vtkLandmarkTransform > sself) ;
extern "C" void * vtkLandmarkTransform_get_ptr (vtkNew < vtkLandmarkTransform > sself) ;
extern "C" void vtk_landmark_transform_set_mode(vtkNew<vtkLandmarkTransform> sself, int _arg);
extern "C" void vtk_landmark_transform_set_mode_to_rigid_body(vtkNew<vtkLandmarkTransform> sself);
extern "C" void vtk_landmark_transform_set_mode_to_similarity(vtkNew<vtkLandmarkTransform> sself);
extern "C" void vtk_landmark_transform_set_mode_to_affine(vtkNew<vtkLandmarkTransform> sself);
extern "C" int vtk_landmark_transform_get_mode(vtkNew<vtkLandmarkTransform> sself);
extern "C" const char* vtk_landmark_transform_get_mode_as_string(vtkNew<vtkLandmarkTransform> sself);
extern "C" void vtk_landmark_transform_inverse(vtkNew<vtkLandmarkTransform> sself);
extern "C" unsigned long vtk_landmark_transform_get_m_time(vtkNew<vtkLandmarkTransform> sself);
extern "C" vtkNew < vtkMatrixToHomogeneousTransform > vtkMatrixToHomogeneousTransform_new () ;
extern "C" void vtkMatrixToHomogeneousTransform_destructor (vtkNew < vtkMatrixToHomogeneousTransform > sself) ;
extern "C" void * vtkMatrixToHomogeneousTransform_get_ptr (vtkNew < vtkMatrixToHomogeneousTransform > sself) ;
extern "C" void vtk_matrix_to_homogeneous_transform_inverse(vtkNew<vtkMatrixToHomogeneousTransform> sself);
extern "C" unsigned long vtk_matrix_to_homogeneous_transform_get_m_time(vtkNew<vtkMatrixToHomogeneousTransform> sself);
extern "C" vtkNew < vtkMatrixToLinearTransform > vtkMatrixToLinearTransform_new () ;
extern "C" void vtkMatrixToLinearTransform_destructor (vtkNew < vtkMatrixToLinearTransform > sself) ;
extern "C" void * vtkMatrixToLinearTransform_get_ptr (vtkNew < vtkMatrixToLinearTransform > sself) ;
extern "C" void vtk_matrix_to_linear_transform_inverse(vtkNew<vtkMatrixToLinearTransform> sself);
extern "C" unsigned long vtk_matrix_to_linear_transform_get_m_time(vtkNew<vtkMatrixToLinearTransform> sself);
extern "C" vtkNew < vtkPerspectiveTransform > vtkPerspectiveTransform_new () ;
extern "C" void vtkPerspectiveTransform_destructor (vtkNew < vtkPerspectiveTransform > sself) ;
extern "C" void * vtkPerspectiveTransform_get_ptr (vtkNew < vtkPerspectiveTransform > sself) ;
extern "C" void vtk_perspective_transform_identity(vtkNew<vtkPerspectiveTransform> sself);
extern "C" void vtk_perspective_transform_inverse(vtkNew<vtkPerspectiveTransform> sself);
extern "C" void vtk_perspective_transform_adjust_viewport(vtkNew<vtkPerspectiveTransform> sself, double oldXMin, double oldXMax, double oldYMin, double oldYMax, double newXMin, double newXMax, double newYMin, double newYMax);
extern "C" void vtk_perspective_transform_adjust_z_buffer(vtkNew<vtkPerspectiveTransform> sself, double oldNearZ, double oldFarZ, double newNearZ, double newFarZ);
extern "C" void vtk_perspective_transform_ortho(vtkNew<vtkPerspectiveTransform> sself, double xmin, double xmax, double ymin, double ymax, double znear, double zfar);
extern "C" void vtk_perspective_transform_frustum(vtkNew<vtkPerspectiveTransform> sself, double xmin, double xmax, double ymin, double ymax, double znear, double zfar);
extern "C" void vtk_perspective_transform_perspective(vtkNew<vtkPerspectiveTransform> sself, double angle, double aspect, double znear, double zfar);
extern "C" void vtk_perspective_transform_shear(vtkNew<vtkPerspectiveTransform> sself, double dxdz, double dydz, double zplane);
extern "C" void vtk_perspective_transform_stereo(vtkNew<vtkPerspectiveTransform> sself, double angle, double focaldistance);
extern "C" void vtk_perspective_transform_setup_camera(vtkNew<vtkPerspectiveTransform> sself, const double position, const double focalpoint, const double viewup);
extern "C" void vtk_perspective_transform_setup_camera(vtkNew<vtkPerspectiveTransform> sself, double p0, double p1, double p2, double fp0, double fp1, double fp2, double vup0, double vup1, double vup2);
extern "C" void vtk_perspective_transform_translate(vtkNew<vtkPerspectiveTransform> sself, double x, double y, double z);
extern "C" void vtk_perspective_transform_translate(vtkNew<vtkPerspectiveTransform> sself, const double x);
extern "C" void vtk_perspective_transform_translate(vtkNew<vtkPerspectiveTransform> sself, const float x);
extern "C" void vtk_perspective_transform_rotate_wxyz(vtkNew<vtkPerspectiveTransform> sself, double angle, double x, double y, double z);
extern "C" void vtk_perspective_transform_rotate_wxyz(vtkNew<vtkPerspectiveTransform> sself, double angle, const double axis);
extern "C" void vtk_perspective_transform_rotate_wxyz(vtkNew<vtkPerspectiveTransform> sself, double angle, const float axis);
extern "C" void vtk_perspective_transform_rotate_x(vtkNew<vtkPerspectiveTransform> sself, double angle);
extern "C" void vtk_perspective_transform_rotate_y(vtkNew<vtkPerspectiveTransform> sself, double angle);
extern "C" void vtk_perspective_transform_rotate_z(vtkNew<vtkPerspectiveTransform> sself, double angle);
extern "C" void vtk_perspective_transform_scale(vtkNew<vtkPerspectiveTransform> sself, double x, double y, double z);
extern "C" void vtk_perspective_transform_scale(vtkNew<vtkPerspectiveTransform> sself, const double s);
extern "C" void vtk_perspective_transform_scale(vtkNew<vtkPerspectiveTransform> sself, const float s);
extern "C" void vtk_perspective_transform_set_matrix(vtkNew<vtkPerspectiveTransform> sself, const double elements);
extern "C" void vtk_perspective_transform_concatenate(vtkNew<vtkPerspectiveTransform> sself, const double elements);
extern "C" void vtk_perspective_transform_pre_multiply(vtkNew<vtkPerspectiveTransform> sself);
extern "C" void vtk_perspective_transform_post_multiply(vtkNew<vtkPerspectiveTransform> sself);
extern "C" int vtk_perspective_transform_get_number_of_concatenated_transforms(vtkNew<vtkPerspectiveTransform> sself);
extern "C" int vtk_perspective_transform_get_inverse_flag(vtkNew<vtkPerspectiveTransform> sself);
extern "C" void vtk_perspective_transform_push(vtkNew<vtkPerspectiveTransform> sself);
extern "C" void vtk_perspective_transform_pop(vtkNew<vtkPerspectiveTransform> sself);
extern "C" unsigned long vtk_perspective_transform_get_m_time(vtkNew<vtkPerspectiveTransform> sself);
extern "C" vtkNew < vtkSphericalTransform > vtkSphericalTransform_new () ;
extern "C" void vtkSphericalTransform_destructor (vtkNew < vtkSphericalTransform > sself) ;
extern "C" void * vtkSphericalTransform_get_ptr (vtkNew < vtkSphericalTransform > sself) ;
extern "C" vtkNew < vtkThinPlateSplineTransform > vtkThinPlateSplineTransform_new () ;
extern "C" void vtkThinPlateSplineTransform_destructor (vtkNew < vtkThinPlateSplineTransform > sself) ;
extern "C" void * vtkThinPlateSplineTransform_get_ptr (vtkNew < vtkThinPlateSplineTransform > sself) ;
extern "C" double vtk_thin_plate_spline_transform_get_sigma(vtkNew<vtkThinPlateSplineTransform> sself);
extern "C" void vtk_thin_plate_spline_transform_set_sigma(vtkNew<vtkThinPlateSplineTransform> sself, double _arg);
extern "C" void vtk_thin_plate_spline_transform_set_basis(vtkNew<vtkThinPlateSplineTransform> sself, int basis);
extern "C" int vtk_thin_plate_spline_transform_get_basis(vtkNew<vtkThinPlateSplineTransform> sself);
extern "C" void vtk_thin_plate_spline_transform_set_basis_to_r(vtkNew<vtkThinPlateSplineTransform> sself);
extern "C" void vtk_thin_plate_spline_transform_set_basis_to_r_2_log_r(vtkNew<vtkThinPlateSplineTransform> sself);
extern "C" const char* vtk_thin_plate_spline_transform_get_basis_as_string(vtkNew<vtkThinPlateSplineTransform> sself);
extern "C" unsigned long vtk_thin_plate_spline_transform_get_m_time(vtkNew<vtkThinPlateSplineTransform> sself);
extern "C" bool vtk_thin_plate_spline_transform_get_regularize_bulk_transform(vtkNew<vtkThinPlateSplineTransform> sself);
extern "C" void vtk_thin_plate_spline_transform_set_regularize_bulk_transform(vtkNew<vtkThinPlateSplineTransform> sself, bool _arg);
extern "C" void vtk_thin_plate_spline_transform_regularize_bulk_transform_on(vtkNew<vtkThinPlateSplineTransform> sself);
extern "C" void vtk_thin_plate_spline_transform_regularize_bulk_transform_off(vtkNew<vtkThinPlateSplineTransform> sself);
extern "C" vtkNew < vtkTransform > vtkTransform_new () ;
extern "C" void vtkTransform_destructor (vtkNew < vtkTransform > sself) ;
extern "C" void * vtkTransform_get_ptr (vtkNew < vtkTransform > sself) ;
extern "C" void vtk_transform_identity(vtkNew<vtkTransform> sself);
extern "C" void vtk_transform_inverse(vtkNew<vtkTransform> sself);
extern "C" void vtk_transform_translate(vtkNew<vtkTransform> sself, double x, double y, double z);
extern "C" void vtk_transform_translate(vtkNew<vtkTransform> sself, const double x);
extern "C" void vtk_transform_translate(vtkNew<vtkTransform> sself, const float x);
extern "C" void vtk_transform_rotate_wxyz(vtkNew<vtkTransform> sself, double angle, double x, double y, double z);
extern "C" void vtk_transform_rotate_wxyz(vtkNew<vtkTransform> sself, double angle, const double axis);
extern "C" void vtk_transform_rotate_wxyz(vtkNew<vtkTransform> sself, double angle, const float axis);
extern "C" void vtk_transform_rotate_x(vtkNew<vtkTransform> sself, double angle);
extern "C" void vtk_transform_rotate_y(vtkNew<vtkTransform> sself, double angle);
extern "C" void vtk_transform_rotate_z(vtkNew<vtkTransform> sself, double angle);
extern "C" void vtk_transform_scale(vtkNew<vtkTransform> sself, double x, double y, double z);
extern "C" void vtk_transform_scale(vtkNew<vtkTransform> sself, const double s);
extern "C" void vtk_transform_scale(vtkNew<vtkTransform> sself, const float s);
extern "C" void vtk_transform_set_matrix(vtkNew<vtkTransform> sself, const double elements);
extern "C" void vtk_transform_concatenate(vtkNew<vtkTransform> sself, const double elements);
extern "C" void vtk_transform_pre_multiply(vtkNew<vtkTransform> sself);
extern "C" void vtk_transform_post_multiply(vtkNew<vtkTransform> sself);
extern "C" int vtk_transform_get_number_of_concatenated_transforms(vtkNew<vtkTransform> sself);
extern "C" void vtk_transform_get_orientation(vtkNew<vtkTransform> sself, double orient);
extern "C" void vtk_transform_get_orientation(vtkNew<vtkTransform> sself, float orient);
extern "C" double* vtk_transform_get_orientation(vtkNew<vtkTransform> sself);
extern "C" void vtk_transform_get_orientation_wxyz(vtkNew<vtkTransform> sself, double wxyz);
extern "C" void vtk_transform_get_orientation_wxyz(vtkNew<vtkTransform> sself, float wxyz);
extern "C" double* vtk_transform_get_orientation_wxyz(vtkNew<vtkTransform> sself);
extern "C" void vtk_transform_get_position(vtkNew<vtkTransform> sself, double pos);
extern "C" void vtk_transform_get_position(vtkNew<vtkTransform> sself, float pos);
extern "C" double* vtk_transform_get_position(vtkNew<vtkTransform> sself);
extern "C" void vtk_transform_get_scale(vtkNew<vtkTransform> sself, double scale);
extern "C" void vtk_transform_get_scale(vtkNew<vtkTransform> sself, float scale);
extern "C" double* vtk_transform_get_scale(vtkNew<vtkTransform> sself);
extern "C" int vtk_transform_get_inverse_flag(vtkNew<vtkTransform> sself);
extern "C" void vtk_transform_push(vtkNew<vtkTransform> sself);
extern "C" void vtk_transform_pop(vtkNew<vtkTransform> sself);
extern "C" unsigned long vtk_transform_get_m_time(vtkNew<vtkTransform> sself);
extern "C" void vtk_transform_multiply_point(vtkNew<vtkTransform> sself, const float in, float out);
extern "C" void vtk_transform_multiply_point(vtkNew<vtkTransform> sself, const double in, double out);
extern "C" vtkNew < vtkTransform2D > vtkTransform2D_new () ;
extern "C" void vtkTransform2D_destructor (vtkNew < vtkTransform2D > sself) ;
extern "C" void * vtkTransform2D_get_ptr (vtkNew < vtkTransform2D > sself) ;
extern "C" void vtk_transform_2_d_identity(vtkNew<vtkTransform2D> sself);
extern "C" void vtk_transform_2_d_inverse(vtkNew<vtkTransform2D> sself);
extern "C" void vtk_transform_2_d_translate(vtkNew<vtkTransform2D> sself, double x, double y);
extern "C" void vtk_transform_2_d_translate(vtkNew<vtkTransform2D> sself, const double x);
extern "C" void vtk_transform_2_d_translate(vtkNew<vtkTransform2D> sself, const float x);
extern "C" void vtk_transform_2_d_rotate(vtkNew<vtkTransform2D> sself, double angle);
extern "C" void vtk_transform_2_d_scale(vtkNew<vtkTransform2D> sself, double x, double y);
extern "C" void vtk_transform_2_d_scale(vtkNew<vtkTransform2D> sself, const double s);
extern "C" void vtk_transform_2_d_scale(vtkNew<vtkTransform2D> sself, const float s);
extern "C" void vtk_transform_2_d_set_matrix(vtkNew<vtkTransform2D> sself, const double elements);
extern "C" void vtk_transform_2_d_get_position(vtkNew<vtkTransform2D> sself, double pos);
extern "C" void vtk_transform_2_d_get_position(vtkNew<vtkTransform2D> sself, float pos);
extern "C" void vtk_transform_2_d_get_scale(vtkNew<vtkTransform2D> sself, double scale);
extern "C" void vtk_transform_2_d_get_scale(vtkNew<vtkTransform2D> sself, float pos);
extern "C" unsigned long vtk_transform_2_d_get_m_time(vtkNew<vtkTransform2D> sself);
extern "C" void vtk_transform_2_d_transform_points(vtkNew<vtkTransform2D> sself, const float inPts, float outPts, int n);
extern "C" void vtk_transform_2_d_transform_points(vtkNew<vtkTransform2D> sself, const double inPts, double outPts, int n);
extern "C" void vtk_transform_2_d_inverse_transform_points(vtkNew<vtkTransform2D> sself, const float inPts, float outPts, int n);
extern "C" void vtk_transform_2_d_inverse_transform_points(vtkNew<vtkTransform2D> sself, const double inPts, double outPts, int n);
extern "C" void vtk_transform_2_d_multiply_point(vtkNew<vtkTransform2D> sself, const float in, float out);
extern "C" void vtk_transform_2_d_multiply_point(vtkNew<vtkTransform2D> sself, const double in, double out);
extern "C" vtkNew < vtkTransformCollection > vtkTransformCollection_new () ;
extern "C" void vtkTransformCollection_destructor (vtkNew < vtkTransformCollection > sself) ;
extern "C" void * vtkTransformCollection_get_ptr (vtkNew < vtkTransformCollection > sself) ;
