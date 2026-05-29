// Include header file
#include<vtk_common_math.h>

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

// Implement declared functions
extern "C" vtkNew < vtkAmoebaMinimizer > vtkAmoebaMinimizer_new () {return vtkNew < vtkAmoebaMinimizer > () ;}
extern "C" void vtkAmoebaMinimizer_destructor (vtkNew < vtkAmoebaMinimizer > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAmoebaMinimizer_get_ptr (vtkNew < vtkAmoebaMinimizer > sself) {return sself . GetPointer () ;}
extern "C" void vtk_amoeba_minimizer_set_parameter_value(vtkNew<vtkAmoebaMinimizer> sself, const char name, double value) { sself->SetParameterValue(name, value); }
extern "C" void vtk_amoeba_minimizer_set_parameter_value(vtkNew<vtkAmoebaMinimizer> sself, int i, double value) { sself->SetParameterValue(i, value); }
extern "C" void vtk_amoeba_minimizer_set_parameter_scale(vtkNew<vtkAmoebaMinimizer> sself, const char name, double scale) { sself->SetParameterScale(name, scale); }
extern "C" double vtk_amoeba_minimizer_get_parameter_scale(vtkNew<vtkAmoebaMinimizer> sself, const char name) { return sself->GetParameterScale(name); }
extern "C" void vtk_amoeba_minimizer_set_parameter_scale(vtkNew<vtkAmoebaMinimizer> sself, int i, double scale) { sself->SetParameterScale(i, scale); }
extern "C" double vtk_amoeba_minimizer_get_parameter_scale(vtkNew<vtkAmoebaMinimizer> sself, int i) { return sself->GetParameterScale(i); }
extern "C" double vtk_amoeba_minimizer_get_parameter_value(vtkNew<vtkAmoebaMinimizer> sself, const char name) { return sself->GetParameterValue(name); }
extern "C" double vtk_amoeba_minimizer_get_parameter_value(vtkNew<vtkAmoebaMinimizer> sself, int i) { return sself->GetParameterValue(i); }
extern "C" const char* vtk_amoeba_minimizer_get_parameter_name(vtkNew<vtkAmoebaMinimizer> sself, int i) { return sself->GetParameterName(i); }
extern "C" int vtk_amoeba_minimizer_get_number_of_parameters(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetNumberOfParameters(); }
extern "C" void vtk_amoeba_minimizer_initialize(vtkNew<vtkAmoebaMinimizer> sself) { sself->Initialize(); }
extern "C" void vtk_amoeba_minimizer_minimize(vtkNew<vtkAmoebaMinimizer> sself) { sself->Minimize(); }
extern "C" int vtk_amoeba_minimizer_iterate(vtkNew<vtkAmoebaMinimizer> sself) { return sself->Iterate(); }
extern "C" void vtk_amoeba_minimizer_set_function_value(vtkNew<vtkAmoebaMinimizer> sself, double _arg) { sself->SetFunctionValue(_arg); }
extern "C" double vtk_amoeba_minimizer_get_function_value(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetFunctionValue(); }
extern "C" void vtk_amoeba_minimizer_set_contraction_ratio(vtkNew<vtkAmoebaMinimizer> sself, double _arg) { sself->SetContractionRatio(_arg); }
extern "C" double vtk_amoeba_minimizer_get_contraction_ratio_min_value(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetContractionRatioMinValue(); }
extern "C" double vtk_amoeba_minimizer_get_contraction_ratio_max_value(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetContractionRatioMaxValue(); }
extern "C" double vtk_amoeba_minimizer_get_contraction_ratio(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetContractionRatio(); }
extern "C" void vtk_amoeba_minimizer_set_expansion_ratio(vtkNew<vtkAmoebaMinimizer> sself, double _arg) { sself->SetExpansionRatio(_arg); }
extern "C" double vtk_amoeba_minimizer_get_expansion_ratio_min_value(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetExpansionRatioMinValue(); }
extern "C" double vtk_amoeba_minimizer_get_expansion_ratio_max_value(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetExpansionRatioMaxValue(); }
extern "C" double vtk_amoeba_minimizer_get_expansion_ratio(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetExpansionRatio(); }
extern "C" void vtk_amoeba_minimizer_set_tolerance(vtkNew<vtkAmoebaMinimizer> sself, double _arg) { sself->SetTolerance(_arg); }
extern "C" double vtk_amoeba_minimizer_get_tolerance(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetTolerance(); }
extern "C" void vtk_amoeba_minimizer_set_parameter_tolerance(vtkNew<vtkAmoebaMinimizer> sself, double _arg) { sself->SetParameterTolerance(_arg); }
extern "C" double vtk_amoeba_minimizer_get_parameter_tolerance(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetParameterTolerance(); }
extern "C" void vtk_amoeba_minimizer_set_max_iterations(vtkNew<vtkAmoebaMinimizer> sself, int _arg) { sself->SetMaxIterations(_arg); }
extern "C" int vtk_amoeba_minimizer_get_max_iterations(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetMaxIterations(); }
extern "C" int vtk_amoeba_minimizer_get_iterations(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetIterations(); }
extern "C" int vtk_amoeba_minimizer_get_function_evaluations(vtkNew<vtkAmoebaMinimizer> sself) { return sself->GetFunctionEvaluations(); }
extern "C" void vtk_amoeba_minimizer_evaluate_function(vtkNew<vtkAmoebaMinimizer> sself) { sself->EvaluateFunction(); }
extern "C" vtkNew < vtkFFT > vtkFFT_new () {return vtkNew < vtkFFT > () ;}
extern "C" void vtkFFT_destructor (vtkNew < vtkFFT > sself) {sself . Reset () ; return ;}
extern "C" void * vtkFFT_get_ptr (vtkNew < vtkFFT > sself) {return sself . GetPointer () ;}
extern "C" double vtk_fft_hanning_generator(vtkNew<vtkFFT> sself, const size_t x, const size_t size) { return sself->HanningGenerator(x, size); }
extern "C" double vtk_fft_bartlett_generator(vtkNew<vtkFFT> sself, const size_t x, const size_t size) { return sself->BartlettGenerator(x, size); }
extern "C" double vtk_fft_sine_generator(vtkNew<vtkFFT> sself, const size_t x, const size_t size) { return sself->SineGenerator(x, size); }
extern "C" double vtk_fft_blackman_generator(vtkNew<vtkFFT> sself, const size_t x, const size_t size) { return sself->BlackmanGenerator(x, size); }
extern "C" double vtk_fft_rectangular_generator(vtkNew<vtkFFT> sself, const size_t x, const size_t size) { return sself->RectangularGenerator(x, size); }
extern "C" vtkNew < vtkMatrix3x3 > vtkMatrix3x3_new () {return vtkNew < vtkMatrix3x3 > () ;}
extern "C" void vtkMatrix3x3_destructor (vtkNew < vtkMatrix3x3 > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMatrix3x3_get_ptr (vtkNew < vtkMatrix3x3 > sself) {return sself . GetPointer () ;}
extern "C" void vtk_matrix_3_x_3_deep_copy(vtkNew<vtkMatrix3x3> sself, double elements, const double newElements) { sself->DeepCopy(elements, newElements); }
extern "C" void vtk_matrix_3_x_3_deep_copy(vtkNew<vtkMatrix3x3> sself, const double elements) { sself->DeepCopy(elements); }
extern "C" void vtk_matrix_3_x_3_zero(vtkNew<vtkMatrix3x3> sself) { sself->Zero(); }
extern "C" void vtk_matrix_3_x_3_zero(vtkNew<vtkMatrix3x3> sself, double elements) { sself->Zero(elements); }
extern "C" void vtk_matrix_3_x_3_identity(vtkNew<vtkMatrix3x3> sself) { sself->Identity(); }
extern "C" void vtk_matrix_3_x_3_identity(vtkNew<vtkMatrix3x3> sself, double elements) { sself->Identity(elements); }
extern "C" void vtk_matrix_3_x_3_invert(vtkNew<vtkMatrix3x3> sself) { sself->Invert(); }
extern "C" void vtk_matrix_3_x_3_invert(vtkNew<vtkMatrix3x3> sself, const double inElements, double outElements) { sself->Invert(inElements, outElements); }
extern "C" void vtk_matrix_3_x_3_transpose(vtkNew<vtkMatrix3x3> sself) { sself->Transpose(); }
extern "C" void vtk_matrix_3_x_3_transpose(vtkNew<vtkMatrix3x3> sself, const double inElements, double outElements) { sself->Transpose(inElements, outElements); }
extern "C" void vtk_matrix_3_x_3_multiply_point(vtkNew<vtkMatrix3x3> sself, const float in, float out) { sself->MultiplyPoint(in, out); }
extern "C" void vtk_matrix_3_x_3_multiply_point(vtkNew<vtkMatrix3x3> sself, const double in, double out) { sself->MultiplyPoint(in, out); }
extern "C" void vtk_matrix_3_x_3_multiply_point(vtkNew<vtkMatrix3x3> sself, const double elements, const float in, float out) { sself->MultiplyPoint(elements, in, out); }
extern "C" void vtk_matrix_3_x_3_multiply_point(vtkNew<vtkMatrix3x3> sself, const double elements, const double in, double out) { sself->MultiplyPoint(elements, in, out); }
extern "C" void vtk_matrix_3_x_3_multiply_3_x_3(vtkNew<vtkMatrix3x3> sself, const double a, const double b, double c) { sself->Multiply3x3(a, b, c); }
extern "C" void vtk_matrix_3_x_3_adjoint(vtkNew<vtkMatrix3x3> sself, const double inElements, double outElements) { sself->Adjoint(inElements, outElements); }
extern "C" double vtk_matrix_3_x_3_determinant(vtkNew<vtkMatrix3x3> sself) { return sself->Determinant(); }
extern "C" double vtk_matrix_3_x_3_determinant(vtkNew<vtkMatrix3x3> sself, const double elements) { return sself->Determinant(elements); }
extern "C" void vtk_matrix_3_x_3_set_element(vtkNew<vtkMatrix3x3> sself, int i, int j, double value) { sself->SetElement(i, j, value); }
extern "C" double vtk_matrix_3_x_3_get_element(vtkNew<vtkMatrix3x3> sself, int i, int j) { return sself->GetElement(i, j); }
extern "C" bool vtk_matrix_3_x_3_is_identity(vtkNew<vtkMatrix3x3> sself) { return sself->IsIdentity(); }
extern "C" double* vtk_matrix_3_x_3_get_data(vtkNew<vtkMatrix3x3> sself) { return sself->GetData(); }
extern "C" const double* vtk_matrix_3_x_3_get_data(vtkNew<vtkMatrix3x3> sself) { return sself->GetData(); }
extern "C" vtkNew < vtkMatrix4x4 > vtkMatrix4x4_new () {return vtkNew < vtkMatrix4x4 > () ;}
extern "C" void vtkMatrix4x4_destructor (vtkNew < vtkMatrix4x4 > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMatrix4x4_get_ptr (vtkNew < vtkMatrix4x4 > sself) {return sself . GetPointer () ;}
extern "C" void vtk_matrix_4_x_4_deep_copy(vtkNew<vtkMatrix4x4> sself, double destination, const double source) { sself->DeepCopy(destination, source); }
extern "C" void vtk_matrix_4_x_4_deep_copy(vtkNew<vtkMatrix4x4> sself, const double elements) { sself->DeepCopy(elements); }
extern "C" void vtk_matrix_4_x_4_zero(vtkNew<vtkMatrix4x4> sself) { sself->Zero(); }
extern "C" void vtk_matrix_4_x_4_zero(vtkNew<vtkMatrix4x4> sself, double elements) { sself->Zero(elements); }
extern "C" void vtk_matrix_4_x_4_identity(vtkNew<vtkMatrix4x4> sself) { sself->Identity(); }
extern "C" void vtk_matrix_4_x_4_identity(vtkNew<vtkMatrix4x4> sself, double elements) { sself->Identity(elements); }
extern "C" bool vtk_matrix_4_x_4_is_identity(vtkNew<vtkMatrix4x4> sself) { return sself->IsIdentity(); }
extern "C" void vtk_matrix_4_x_4_invert(vtkNew<vtkMatrix4x4> sself) { sself->Invert(); }
extern "C" void vtk_matrix_4_x_4_invert(vtkNew<vtkMatrix4x4> sself, const double inElements, double outElements) { sself->Invert(inElements, outElements); }
extern "C" void vtk_matrix_4_x_4_transpose(vtkNew<vtkMatrix4x4> sself) { sself->Transpose(); }
extern "C" void vtk_matrix_4_x_4_transpose(vtkNew<vtkMatrix4x4> sself, const double inElements, double outElements) { sself->Transpose(inElements, outElements); }
extern "C" void vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const float in, float out) { sself->MultiplyPoint(in, out); }
extern "C" void vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const double in, double out) { sself->MultiplyPoint(in, out); }
extern "C" void vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const double elements, const float in, float out) { sself->MultiplyPoint(elements, in, out); }
extern "C" void vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const double elements, const double in, double out) { sself->MultiplyPoint(elements, in, out); }
extern "C" float* vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const float in) { return sself->MultiplyPoint(in); }
extern "C" double* vtk_matrix_4_x_4_multiply_point(vtkNew<vtkMatrix4x4> sself, const double in) { return sself->MultiplyPoint(in); }
extern "C" float* vtk_matrix_4_x_4_multiply_float_point(vtkNew<vtkMatrix4x4> sself, const float in) { return sself->MultiplyFloatPoint(in); }
extern "C" double* vtk_matrix_4_x_4_multiply_double_point(vtkNew<vtkMatrix4x4> sself, const double in) { return sself->MultiplyDoublePoint(in); }
extern "C" void vtk_matrix_4_x_4_multiply_4_x_4(vtkNew<vtkMatrix4x4> sself, const double a, const double b, double c) { sself->Multiply4x4(a, b, c); }
extern "C" void vtk_matrix_4_x_4_multiply_4_x_4(vtkNew<vtkMatrix4x4> sself, const double a, const double b, float c) { sself->Multiply4x4(a, b, c); }
extern "C" void vtk_matrix_4_x_4_multiply_and_transpose_4_x_4(vtkNew<vtkMatrix4x4> sself, const double a, const double b, float c) { sself->MultiplyAndTranspose4x4(a, b, c); }
extern "C" void vtk_matrix_4_x_4_adjoint(vtkNew<vtkMatrix4x4> sself, const double inElements, double outElements) { sself->Adjoint(inElements, outElements); }
extern "C" double vtk_matrix_4_x_4_determinant(vtkNew<vtkMatrix4x4> sself) { return sself->Determinant(); }
extern "C" double vtk_matrix_4_x_4_determinant(vtkNew<vtkMatrix4x4> sself, const double elements) { return sself->Determinant(elements); }
extern "C" void vtk_matrix_4_x_4_set_element(vtkNew<vtkMatrix4x4> sself, int i, int j, double value) { sself->SetElement(i, j, value); }
extern "C" double vtk_matrix_4_x_4_get_element(vtkNew<vtkMatrix4x4> sself, int i, int j) { return sself->GetElement(i, j); }
extern "C" double* vtk_matrix_4_x_4_get_data(vtkNew<vtkMatrix4x4> sself) { return sself->GetData(); }
extern "C" const double* vtk_matrix_4_x_4_get_data(vtkNew<vtkMatrix4x4> sself) { return sself->GetData(); }
extern "C" vtkNew < vtkPolynomialSolversUnivariate > vtkPolynomialSolversUnivariate_new () {return vtkNew < vtkPolynomialSolversUnivariate > () ;}
extern "C" void vtkPolynomialSolversUnivariate_destructor (vtkNew < vtkPolynomialSolversUnivariate > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPolynomialSolversUnivariate_get_ptr (vtkNew < vtkPolynomialSolversUnivariate > sself) {return sself . GetPointer () ;}
extern "C" int vtk_polynomial_solvers_univariate_habicht_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol) { return sself->HabichtBisectionSolve(P, d, a, upperBnds, tol); }
extern "C" int vtk_polynomial_solvers_univariate_habicht_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol, int intervalType) { return sself->HabichtBisectionSolve(P, d, a, upperBnds, tol, intervalType); }
extern "C" int vtk_polynomial_solvers_univariate_habicht_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol, int intervalType, bool divideGCD) { return sself->HabichtBisectionSolve(P, d, a, upperBnds, tol, intervalType, divideGCD); }
extern "C" int vtk_polynomial_solvers_univariate_sturm_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol) { return sself->SturmBisectionSolve(P, d, a, upperBnds, tol); }
extern "C" int vtk_polynomial_solvers_univariate_sturm_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol, int intervalType) { return sself->SturmBisectionSolve(P, d, a, upperBnds, tol, intervalType); }
extern "C" int vtk_polynomial_solvers_univariate_sturm_bisection_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double a, double upperBnds, double tol, int intervalType, bool divideGCD) { return sself->SturmBisectionSolve(P, d, a, upperBnds, tol, intervalType, divideGCD); }
extern "C" int vtk_polynomial_solvers_univariate_filter_roots(vtkNew<vtkPolynomialSolversUnivariate> sself, double P, int d, double upperBnds, int rootcount, double diameter) { return sself->FilterRoots(P, d, upperBnds, rootcount, diameter); }
extern "C" int vtk_polynomial_solvers_univariate_lin_bairstow_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double c, int d, double r, double tolerance) { return sself->LinBairstowSolve(c, d, r, tolerance); }
extern "C" int vtk_polynomial_solvers_univariate_ferrari_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double c, double r, int m, double tol) { return sself->FerrariSolve(c, r, m, tol); }
extern "C" int vtk_polynomial_solvers_univariate_tartaglia_cardan_solve(vtkNew<vtkPolynomialSolversUnivariate> sself, double c, double r, int m, double tol) { return sself->TartagliaCardanSolve(c, r, m, tol); }
extern "C" double* vtk_polynomial_solvers_univariate_solve_cubic(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1, double c2, double c3) { return sself->SolveCubic(c0, c1, c2, c3); }
extern "C" double* vtk_polynomial_solvers_univariate_solve_quadratic(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1, double c2) { return sself->SolveQuadratic(c0, c1, c2); }
extern "C" double* vtk_polynomial_solvers_univariate_solve_linear(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1) { return sself->SolveLinear(c0, c1); }
extern "C" int vtk_polynomial_solvers_univariate_solve_cubic(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1, double c2, double c3, double r1, double r2, double r3, int num_roots) { return sself->SolveCubic(c0, c1, c2, c3, r1, r2, r3, num_roots); }
extern "C" int vtk_polynomial_solvers_univariate_solve_quadratic(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1, double c2, double r1, double r2, int num_roots) { return sself->SolveQuadratic(c0, c1, c2, r1, r2, num_roots); }
extern "C" int vtk_polynomial_solvers_univariate_solve_quadratic(vtkNew<vtkPolynomialSolversUnivariate> sself, double c, double r, int m) { return sself->SolveQuadratic(c, r, m); }
extern "C" int vtk_polynomial_solvers_univariate_solve_linear(vtkNew<vtkPolynomialSolversUnivariate> sself, double c0, double c1, double r1, int num_roots) { return sself->SolveLinear(c0, c1, r1, num_roots); }
extern "C" void vtk_polynomial_solvers_univariate_set_division_tolerance(vtkNew<vtkPolynomialSolversUnivariate> sself, double tol) { sself->SetDivisionTolerance(tol); }
extern "C" double vtk_polynomial_solvers_univariate_get_division_tolerance(vtkNew<vtkPolynomialSolversUnivariate> sself) { return sself->GetDivisionTolerance(); }
extern "C" vtkNew < vtkQuaternionInterpolator > vtkQuaternionInterpolator_new () {return vtkNew < vtkQuaternionInterpolator > () ;}
extern "C" void vtkQuaternionInterpolator_destructor (vtkNew < vtkQuaternionInterpolator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuaternionInterpolator_get_ptr (vtkNew < vtkQuaternionInterpolator > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quaternion_interpolator_get_number_of_quaternions(vtkNew<vtkQuaternionInterpolator> sself) { return sself->GetNumberOfQuaternions(); }
extern "C" double vtk_quaternion_interpolator_get_minimum_t(vtkNew<vtkQuaternionInterpolator> sself) { return sself->GetMinimumT(); }
extern "C" double vtk_quaternion_interpolator_get_maximum_t(vtkNew<vtkQuaternionInterpolator> sself) { return sself->GetMaximumT(); }
extern "C" void vtk_quaternion_interpolator_initialize(vtkNew<vtkQuaternionInterpolator> sself) { sself->Initialize(); }
extern "C" void vtk_quaternion_interpolator_add_quaternion(vtkNew<vtkQuaternionInterpolator> sself, double t, double q) { sself->AddQuaternion(t, q); }
extern "C" void vtk_quaternion_interpolator_remove_quaternion(vtkNew<vtkQuaternionInterpolator> sself, double t) { sself->RemoveQuaternion(t); }
extern "C" void vtk_quaternion_interpolator_interpolate_quaternion(vtkNew<vtkQuaternionInterpolator> sself, double t, double q) { sself->InterpolateQuaternion(t, q); }
extern "C" int vtk_quaternion_interpolator_get_search_method(vtkNew<vtkQuaternionInterpolator> sself) { return sself->GetSearchMethod(); }
extern "C" void vtk_quaternion_interpolator_set_search_method(vtkNew<vtkQuaternionInterpolator> sself, int type) { sself->SetSearchMethod(type); }
extern "C" void vtk_quaternion_interpolator_set_interpolation_type(vtkNew<vtkQuaternionInterpolator> sself, int _arg) { sself->SetInterpolationType(_arg); }
extern "C" int vtk_quaternion_interpolator_get_interpolation_type_min_value(vtkNew<vtkQuaternionInterpolator> sself) { return sself->GetInterpolationTypeMinValue(); }
extern "C" int vtk_quaternion_interpolator_get_interpolation_type_max_value(vtkNew<vtkQuaternionInterpolator> sself) { return sself->GetInterpolationTypeMaxValue(); }
extern "C" int vtk_quaternion_interpolator_get_interpolation_type(vtkNew<vtkQuaternionInterpolator> sself) { return sself->GetInterpolationType(); }
extern "C" void vtk_quaternion_interpolator_set_interpolation_type_to_linear(vtkNew<vtkQuaternionInterpolator> sself) { sself->SetInterpolationTypeToLinear(); }
extern "C" void vtk_quaternion_interpolator_set_interpolation_type_to_spline(vtkNew<vtkQuaternionInterpolator> sself) { sself->SetInterpolationTypeToSpline(); }
extern "C" vtkNew < vtkRungeKutta2 > vtkRungeKutta2_new () {return vtkNew < vtkRungeKutta2 > () ;}
extern "C" void vtkRungeKutta2_destructor (vtkNew < vtkRungeKutta2 > sself) {sself . Reset () ; return ;}
extern "C" void * vtkRungeKutta2_get_ptr (vtkNew < vtkRungeKutta2 > sself) {return sself . GetPointer () ;}
extern "C" int vtk_runge_kutta_2_compute_next_step(vtkNew<vtkRungeKutta2> sself, double xprev, double xnext, double t, double delT, double maxError, double error, void userData) { return sself->ComputeNextStep(xprev, xnext, t, delT, maxError, error, userData); }
extern "C" vtkNew < vtkRungeKutta4 > vtkRungeKutta4_new () {return vtkNew < vtkRungeKutta4 > () ;}
extern "C" void vtkRungeKutta4_destructor (vtkNew < vtkRungeKutta4 > sself) {sself . Reset () ; return ;}
extern "C" void * vtkRungeKutta4_get_ptr (vtkNew < vtkRungeKutta4 > sself) {return sself . GetPointer () ;}
extern "C" int vtk_runge_kutta_4_compute_next_step(vtkNew<vtkRungeKutta4> sself, double xprev, double xnext, double t, double delT, double maxError, double error, void userData) { return sself->ComputeNextStep(xprev, xnext, t, delT, maxError, error, userData); }
extern "C" vtkNew < vtkRungeKutta45 > vtkRungeKutta45_new () {return vtkNew < vtkRungeKutta45 > () ;}
extern "C" void vtkRungeKutta45_destructor (vtkNew < vtkRungeKutta45 > sself) {sself . Reset () ; return ;}
extern "C" void * vtkRungeKutta45_get_ptr (vtkNew < vtkRungeKutta45 > sself) {return sself . GetPointer () ;}
extern "C" int vtk_runge_kutta_45_compute_next_step(vtkNew<vtkRungeKutta45> sself, double xprev, double xnext, double t, double delT, double maxError, double error, void userData) { return sself->ComputeNextStep(xprev, xnext, t, delT, maxError, error, userData); }
extern "C" int vtk_runge_kutta_45_compute_next_step(vtkNew<vtkRungeKutta45> sself, double xprev, double dxprev, double xnext, double t, double delT, double delTActual, double minStep, double maxStep, double maxError, double estErr, void userData) { return sself->ComputeNextStep(xprev, dxprev, xnext, t, delT, delTActual, minStep, maxStep, maxError, estErr, userData); }
