// Default include in all modules
#include<vtkNew.h>
#include<vtkObjectBase.h>

// Include objects of this module
#include<vtkAmoebaMinimizer.h>
#include<vtkFFT.h>
#include<vtkFunctionSet.h>
#include<vtkInitialValueProblemSolver.h>
#include<vtkMatrix3x3.h>
#include<vtkMatrix4x4.h>
#include<vtkPolynomialSolversUnivariate.h>
#include<vtkQuaternion.h>
#include<vtkQuaternionInterpolator.h>
#include<vtkQuaternion.h>
#include<vtkQuaternion.h>
#include<vtkRungeKutta2.h>
#include<vtkRungeKutta4.h>
#include<vtkRungeKutta45.h>
#include<vtkTuple.h>

// Declare exported functions
extern "C" vtkNew < vtkAmoebaMinimizer > vtkAmoebaMinimizer_new () ;
extern "C" void vtkAmoebaMinimizer_destructor (vtkNew < vtkAmoebaMinimizer > sself) ;
extern "C" void * vtkAmoebaMinimizer_get_ptr (vtkNew < vtkAmoebaMinimizer > sself) ;
extern "C" void vtk_amoeba_minimizer_set_parameter_value(vtkNew<vtkAmoebaMinimizer> sself, const char name, double value);
extern "C" void vtk_amoeba_minimizer_set_parameter_value(vtkNew<vtkAmoebaMinimizer> sself, int i, double value);
extern "C" void vtk_amoeba_minimizer_set_parameter_scale(vtkNew<vtkAmoebaMinimizer> sself, const char name, double scale);
extern "C" double vtk_amoeba_minimizer_get_parameter_scale(vtkNew<vtkAmoebaMinimizer> sself, const char name);
extern "C" void vtk_amoeba_minimizer_set_parameter_scale(vtkNew<vtkAmoebaMinimizer> sself, int i, double scale);
extern "C" double vtk_amoeba_minimizer_get_parameter_scale(vtkNew<vtkAmoebaMinimizer> sself, int i);
extern "C" double vtk_amoeba_minimizer_get_parameter_value(vtkNew<vtkAmoebaMinimizer> sself, const char name);
extern "C" double vtk_amoeba_minimizer_get_parameter_value(vtkNew<vtkAmoebaMinimizer> sself, int i);
extern "C" const char* vtk_amoeba_minimizer_get_parameter_name(vtkNew<vtkAmoebaMinimizer> sself, int i);
extern "C" int vtk_amoeba_minimizer_get_number_of_parameters(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" void vtk_amoeba_minimizer_initialize(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" void vtk_amoeba_minimizer_minimize(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" int vtk_amoeba_minimizer_iterate(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" void vtk_amoeba_minimizer_set_function_value(vtkNew<vtkAmoebaMinimizer> sself, double _arg);
extern "C" double vtk_amoeba_minimizer_get_function_value(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" void vtk_amoeba_minimizer_set_contraction_ratio(vtkNew<vtkAmoebaMinimizer> sself, double _arg);
extern "C" double vtk_amoeba_minimizer_get_contraction_ratio_min_value(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" double vtk_amoeba_minimizer_get_contraction_ratio_max_value(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" double vtk_amoeba_minimizer_get_contraction_ratio(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" void vtk_amoeba_minimizer_set_expansion_ratio(vtkNew<vtkAmoebaMinimizer> sself, double _arg);
extern "C" double vtk_amoeba_minimizer_get_expansion_ratio_min_value(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" double vtk_amoeba_minimizer_get_expansion_ratio_max_value(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" double vtk_amoeba_minimizer_get_expansion_ratio(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" void vtk_amoeba_minimizer_set_tolerance(vtkNew<vtkAmoebaMinimizer> sself, double _arg);
extern "C" double vtk_amoeba_minimizer_get_tolerance(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" void vtk_amoeba_minimizer_set_parameter_tolerance(vtkNew<vtkAmoebaMinimizer> sself, double _arg);
extern "C" double vtk_amoeba_minimizer_get_parameter_tolerance(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" void vtk_amoeba_minimizer_set_max_iterations(vtkNew<vtkAmoebaMinimizer> sself, int _arg);
extern "C" int vtk_amoeba_minimizer_get_max_iterations(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" int vtk_amoeba_minimizer_get_iterations(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" int vtk_amoeba_minimizer_get_function_evaluations(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" void vtk_amoeba_minimizer_evaluate_function(vtkNew<vtkAmoebaMinimizer> sself);
extern "C" vtkNew < vtkFFT > vtkFFT_new () ;
extern "C" void vtkFFT_destructor (vtkNew < vtkFFT > sself) ;
extern "C" void * vtkFFT_get_ptr (vtkNew < vtkFFT > sself) ;
extern "C" double vtk_fft_hanning_generator(vtkNew<vtkFFT> sself, const size_t x, const size_t size);
extern "C" double vtk_fft_bartlett_generator(vtkNew<vtkFFT> sself, const size_t x, const size_t size);
extern "C" double vtk_fft_sine_generator(vtkNew<vtkFFT> sself, const size_t x, const size_t size);
extern "C" double vtk_fft_blackman_generator(vtkNew<vtkFFT> sself, const size_t x, const size_t size);
extern "C" double vtk_fft_rectangular_generator(vtkNew<vtkFFT> sself, const size_t x, const size_t size);
extern "C" vtkNew < vtkMatrix3x3 > vtkMatrix3x3_new () ;
extern "C" void vtkMatrix3x3_destructor (vtkNew < vtkMatrix3x3 > sself) ;
extern "C" void * vtkMatrix3x3_get_ptr (vtkNew < vtkMatrix3x3 > sself) ;
extern "C" void vtk_matrix_3_x_3_deep_copy(vtkNew<vtkMatrix3x3> sself, double elements, const double newElements);
extern "C" void vtk_matrix_3_x_3_deep_copy(vtkNew<vtkMatrix3x3> sself, const double elements);
extern "C" void vtk_matrix_3_x_3_zero(vtkNew<vtkMatrix3x3> sself);
extern "C" void vtk_matrix_3_x_3_zero(vtkNew<vtkMatrix3x3> sself, double elements);
extern "C" void vtk_matrix_3_x_3_identity(vtkNew<vtkMatrix3x3> sself);
extern "C" void vtk_matrix_3_x_3_identity(vtkNew<vtkMatrix3x3> sself, double elements);
extern "C" void vtk_matrix_3_x_3_invert(vtkNew<vtkMatrix3x3> sself);
extern "C" void vtk_matrix_3_x_3_invert(vtkNew<vtkMatrix3x3> sself, const double inElements, double outElements);
extern "C" void vtk_matrix_3_x_3_transpose(vtkNew<vtkMatrix3x3> sself);
extern "C" void vtk_matrix_3_x_3_transpose(vtkNew<vtkMatrix3x3> sself, const double inElements, double outElements);
extern "C" void vtk_matrix_3_x_3_multiply_point(vtkNew<vtkMatrix3x3> sself, const float in, float out);
extern "C" void vtk_matrix_3_x_3_multiply_point(vtkNew<vtkMatrix3x3> sself, const double in, double out);
extern "C" void vtk_matrix_3_x_3_multiply_point(vtkNew<vtkMatrix3x3> sself, const double elements, const float in, float out);
extern "C" void vtk_matrix_3_x_3_multiply_point(vtkNew<vtkMatrix3x3> sself, const double elements, const double in, double out);
extern "C" void vtk_matrix_3_x_3_multiply_3_x_3(vtkNew<vtkMatrix3x3> sself, const double a, const double b, double c);
extern "C" void vtk_matrix_3_x_3_adjoint(vtkNew<vtkMatrix3x3> sself, const double inElements, double outElements);
extern "C" double vtk_matrix_3_x_3_determinant(vtkNew<vtkMatrix3x3> sself);
extern "C" double vtk_matrix_3_x_3_determinant(vtkNew<vtkMatrix3x3> sself, const double elements);
extern "C" void vtk_matrix_3_x_3_set_element(vtkNew<vtkMatrix3x3> sself, int i, int j, double value);
extern "C" double vtk_matrix_3_x_3_get_element(vtkNew<vtkMatrix3x3> sself, int i, int j);
extern "C" bool vtk_matrix_3_x_3_is_identity(vtkNew<vtkMatrix3x3> sself);
extern "C" double* vtk_matrix_3_x_3_get_data(vtkNew<vtkMatrix3x3> sself);
extern "C" const double* vtk_matrix_3_x_3_get_data(vtkNew<vtkMatrix3x3> sself);
extern "C" vtkNew < vtkMatrix4x4 > vtkMatrix4x4_new () ;
extern "C" void vtkMatrix4x4_destructor (vtkNew < vtkMatrix4x4 > sself) ;
extern "C" void * vtkMatrix4x4_get_ptr (vtkNew < vtkMatrix4x4 > sself) ;
extern "C" void vtk_matrix_4_x_4_deep_copy(vtkNew<vtkMatrix4x4> sself, double destination, const double source);
extern "C" void vtk_matrix_4_x_4_deep_copy(vtkNew<vtkMatrix4x4> sself, const double elements);
extern "C" void vtk_matrix_4_x_4_zero(vtkNew<vtkMatrix4x4> sself);
extern "C" void vtk_matrix_4_x_4_zero(vtkNew<vtkMatrix4x4> sself, double elements);
extern "C" void vtk_matrix_4_x_4_identity(vtkNew<vtkMatrix4x4> sself);
extern "C" void vtk_matrix_4_x_4_identity(vtkNew<vtkMatrix4x4> sself, double elements);
extern "C" bool vtk_matrix_4_x_4_is_identity(vtkNew<vtkMatrix4x4> sself);
extern "C" void vtk_matrix_4_x_4_invert(vtkNew<vtkMatrix4x4> sself);
extern "C" void vtk_matrix_4_x_4_invert(vtkNew<vtkMatrix4x4> sself, const double inElements, double outElements);
extern "C" void vtk_matrix_4_x_4_transpose(vtkNew<vtkMatrix4x4> sself);
extern "C" void vtk_matrix_4_x_4_transpose(vtkNew<vtkMatrix4x4> sself, const double inElements, double outElements);
extern "C" void vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const float in, float out);
extern "C" void vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const double in, double out);
extern "C" void vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const double elements, const float in, float out);
extern "C" void vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const double elements, const double in, double out);
extern "C" float* vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const float in);
extern "C" double* vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const double in);
extern "C" float* vtk_matrix_4_x_4_multiply_float_point(vtkNew<vtkMatrix4x4> sself, const float in);
extern "C" double* vtk_matrix_4_x_4_multiply_double_point(vtkNew<vtkMatrix4x4> sself, const double in);
extern "C" void vtk_matrix_4_x_4_multiply_4_x_4(vtkNew<vtkMatrix4x4> sself, const double a, const double b, double c);
extern "C" void vtk_matrix_4_x_4_multiply_4_x_4(vtkNew<vtkMatrix4x4> sself, const double a, const double b, float c);
extern "C" void vtk_matrix_4_x_4_multiply_and_transpose_4_x_4(vtkNew<vtkMatrix4x4> sself, const double a, const double b, float c);
extern "C" void vtk_matrix_4_x_4_adjoint(vtkNew<vtkMatrix4x4> sself, const double inElements, double outElements);
extern "C" double vtk_matrix_4_x_4_determinant(vtkNew<vtkMatrix4x4> sself);
extern "C" double vtk_matrix_4_x_4_determinant(vtkNew<vtkMatrix4x4> sself, const double elements);
extern "C" void vtk_matrix_4_x_4_set_element(vtkNew<vtkMatrix4x4> sself, int i, int j, double value);
extern "C" double vtk_matrix_4_x_4_get_element(vtkNew<vtkMatrix4x4> sself, int i, int j);
extern "C" double* vtk_matrix_4_x_4_get_data(vtkNew<vtkMatrix4x4> sself);
extern "C" const double* vtk_matrix_4_x_4_get_data(vtkNew<vtkMatrix4x4> sself);
extern "C" vtkNew < vtkPolynomialSolversUnivariate > vtkPolynomialSolversUnivariate_new () ;
extern "C" void vtkPolynomialSolversUnivariate_destructor (vtkNew < vtkPolynomialSolversUnivariate > sself) ;
extern "C" void * vtkPolynomialSolversUnivariate_get_ptr (vtkNew < vtkPolynomialSolversUnivariate > sself) ;
extern "C" int vtk_polynomial_solvers_univariate_habicht_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol);
extern "C" int vtk_polynomial_solvers_univariate_habicht_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol, int intervalType);
extern "C" int vtk_polynomial_solvers_univariate_habicht_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol, int intervalType, bool divideGCD);
extern "C" int vtk_polynomial_solvers_univariate_sturm_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol);
extern "C" int vtk_polynomial_solvers_univariate_sturm_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol, int intervalType);
extern "C" int vtk_polynomial_solvers_univariate_sturm_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol, int intervalType, bool divideGCD);
extern "C" int vtk_polynomial_solvers_univariate_filter_roots(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double upperBnds, int rootcount, double diameter);
extern "C" int vtk_polynomial_solvers_univariate_lin_bairstow_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double c, int d, double r, double tolerance);
extern "C" int vtk_polynomial_solvers_univariate_ferrari_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double c, double r, int m, double tol);
extern "C" int vtk_polynomial_solvers_univariate_tartaglia_cardan_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double c, double r, int m, double tol);
extern "C" double* vtk_polynomial_solvers_univariate_solve_cubic(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1, double c2, double c3);
extern "C" double* vtk_polynomial_solvers_univariate_solve_quadratic(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1, double c2);
extern "C" double* vtk_polynomial_solvers_univariate_solve_linear(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1);
extern "C" int vtk_polynomial_solvers_univariate_solve_cubic(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1, double c2, double c3, double r1, double r2, double r3, int num_roots);
extern "C" int vtk_polynomial_solvers_univariate_solve_quadratic(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1, double c2, double r1, double r2, int num_roots);
extern "C" int vtk_polynomial_solvers_univariate_solve_quadratic(vtkNew<vtkPolynomialSolversUnivariate> sself, double c, double r, int m);
extern "C" int vtk_polynomial_solvers_univariate_solve_linear(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1, double r1, int num_roots);
extern "C" void vtk_polynomial_solvers_univariate_set_division_tolerance(vtkNew<vtkPolynomialSolversUnivariate> sself, double tol);
extern "C" double vtk_polynomial_solvers_univariate_get_division_tolerance(vtkNew<vtkPolynomialSolversUnivariate> sself);
extern "C" vtkNew < vtkQuaternionInterpolator > vtkQuaternionInterpolator_new () ;
extern "C" void vtkQuaternionInterpolator_destructor (vtkNew < vtkQuaternionInterpolator > sself) ;
extern "C" void * vtkQuaternionInterpolator_get_ptr (vtkNew < vtkQuaternionInterpolator > sself) ;
extern "C" int vtk_quaternion_interpolator_get_number_of_quaternions(vtkNew<vtkQuaternionInterpolator> sself);
extern "C" double vtk_quaternion_interpolator_get_minimum_t(vtkNew<vtkQuaternionInterpolator> sself);
extern "C" double vtk_quaternion_interpolator_get_maximum_t(vtkNew<vtkQuaternionInterpolator> sself);
extern "C" void vtk_quaternion_interpolator_initialize(vtkNew<vtkQuaternionInterpolator> sself);
extern "C" void vtk_quaternion_interpolator_add_quaternion(vtkNew<vtkQuaternionInterpolator> sself, double t, double q);
extern "C" void vtk_quaternion_interpolator_remove_quaternion(vtkNew<vtkQuaternionInterpolator> sself, double t);
extern "C" void vtk_quaternion_interpolator_interpolate_quaternion(vtkNew<vtkQuaternionInterpolator> sself, double t, double q);
extern "C" int vtk_quaternion_interpolator_get_search_method(vtkNew<vtkQuaternionInterpolator> sself);
extern "C" void vtk_quaternion_interpolator_set_search_method(vtkNew<vtkQuaternionInterpolator> sself, int type);
extern "C" void vtk_quaternion_interpolator_set_interpolation_type(vtkNew<vtkQuaternionInterpolator> sself, int _arg);
extern "C" int vtk_quaternion_interpolator_get_interpolation_type_min_value(vtkNew<vtkQuaternionInterpolator> sself);
extern "C" int vtk_quaternion_interpolator_get_interpolation_type_max_value(vtkNew<vtkQuaternionInterpolator> sself);
extern "C" int vtk_quaternion_interpolator_get_interpolation_type(vtkNew<vtkQuaternionInterpolator> sself);
extern "C" void vtk_quaternion_interpolator_set_interpolation_type_to_linear(vtkNew<vtkQuaternionInterpolator> sself);
extern "C" void vtk_quaternion_interpolator_set_interpolation_type_to_spline(vtkNew<vtkQuaternionInterpolator> sself);
extern "C" vtkNew < vtkRungeKutta2 > vtkRungeKutta2_new () ;
extern "C" void vtkRungeKutta2_destructor (vtkNew < vtkRungeKutta2 > sself) ;
extern "C" void * vtkRungeKutta2_get_ptr (vtkNew < vtkRungeKutta2 > sself) ;
extern "C" int vtk_runge_kutta_2_compute_next_step(vtkNew<vtkRungeKutta2> sself, double xprev, double xnext, double t, double delT, double maxError, double error, void userData);
extern "C" vtkNew < vtkRungeKutta4 > vtkRungeKutta4_new () ;
extern "C" void vtkRungeKutta4_destructor (vtkNew < vtkRungeKutta4 > sself) ;
extern "C" void * vtkRungeKutta4_get_ptr (vtkNew < vtkRungeKutta4 > sself) ;
extern "C" int vtk_runge_kutta_4_compute_next_step(vtkNew<vtkRungeKutta4> sself, double xprev, double xnext, double t, double delT, double maxError, double error, void userData);
extern "C" vtkNew < vtkRungeKutta45 > vtkRungeKutta45_new () ;
extern "C" void vtkRungeKutta45_destructor (vtkNew < vtkRungeKutta45 > sself) ;
extern "C" void * vtkRungeKutta45_get_ptr (vtkNew < vtkRungeKutta45 > sself) ;
extern "C" int vtk_runge_kutta_45_compute_next_step(vtkNew<vtkRungeKutta45> sself, double xprev, double xnext, double t, double delT, double maxError, double error, void userData);
extern "C" int vtk_runge_kutta_45_compute_next_step(vtkNew<vtkRungeKutta45> sself, double xprev, double dxprev, double xnext, double t, double delT, double delTActual, double minStep, double maxStep, double maxError, double estErr, void userData);
