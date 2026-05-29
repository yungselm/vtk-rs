// Include header file
#include<vtk_common_computational_geometry.h>

// Default include in all modules
#include<vtkNew.h>
#include<vtkObjectBase.h>

// Include objects of this module
#include<vtkBilinearQuadIntersection.h>
#include<vtkCardinalSpline.h>
#include<vtkKochanekSpline.h>
#include<vtkParametricBohemianDome.h>
#include<vtkParametricBour.h>
#include<vtkParametricBoy.h>
#include<vtkParametricCatalanMinimal.h>
#include<vtkParametricConicSpiral.h>
#include<vtkParametricCrossCap.h>
#include<vtkParametricDini.h>
#include<vtkParametricEllipsoid.h>
#include<vtkParametricEnneper.h>
#include<vtkParametricFigure8Klein.h>
#include<vtkParametricFunction.h>
#include<vtkParametricHenneberg.h>
#include<vtkParametricKlein.h>
#include<vtkParametricKuen.h>
#include<vtkParametricMobius.h>
#include<vtkParametricPluckerConoid.h>
#include<vtkParametricPseudosphere.h>
#include<vtkParametricRandomHills.h>
#include<vtkParametricRoman.h>
#include<vtkParametricSpline.h>
#include<vtkParametricSuperEllipsoid.h>
#include<vtkParametricSuperToroid.h>
#include<vtkParametricTorus.h>

// Implement declared functions
extern "C" vtkNew < vtkCardinalSpline > vtkCardinalSpline_new () {return vtkNew < vtkCardinalSpline > () ;}
extern "C" void vtkCardinalSpline_destructor (vtkNew < vtkCardinalSpline > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCardinalSpline_get_ptr (vtkNew < vtkCardinalSpline > sself) {return sself . GetPointer () ;}
extern "C" void vtk_cardinal_spline_compute(vtkNew<vtkCardinalSpline> sself) { sself->Compute(); }
extern "C" double vtk_cardinal_spline_evaluate(vtkNew<vtkCardinalSpline> sself, double t) { return sself->Evaluate(t); }
extern "C" vtkNew < vtkKochanekSpline > vtkKochanekSpline_new () {return vtkNew < vtkKochanekSpline > () ;}
extern "C" void vtkKochanekSpline_destructor (vtkNew < vtkKochanekSpline > sself) {sself . Reset () ; return ;}
extern "C" void * vtkKochanekSpline_get_ptr (vtkNew < vtkKochanekSpline > sself) {return sself . GetPointer () ;}
extern "C" void vtk_kochanek_spline_compute(vtkNew<vtkKochanekSpline> sself) { sself->Compute(); }
extern "C" double vtk_kochanek_spline_evaluate(vtkNew<vtkKochanekSpline> sself, double t) { return sself->Evaluate(t); }
extern "C" void vtk_kochanek_spline_set_default_bias(vtkNew<vtkKochanekSpline> sself, double _arg) { sself->SetDefaultBias(_arg); }
extern "C" double vtk_kochanek_spline_get_default_bias(vtkNew<vtkKochanekSpline> sself) { return sself->GetDefaultBias(); }
extern "C" void vtk_kochanek_spline_set_default_tension(vtkNew<vtkKochanekSpline> sself, double _arg) { sself->SetDefaultTension(_arg); }
extern "C" double vtk_kochanek_spline_get_default_tension(vtkNew<vtkKochanekSpline> sself) { return sself->GetDefaultTension(); }
extern "C" void vtk_kochanek_spline_set_default_continuity(vtkNew<vtkKochanekSpline> sself, double _arg) { sself->SetDefaultContinuity(_arg); }
extern "C" double vtk_kochanek_spline_get_default_continuity(vtkNew<vtkKochanekSpline> sself) { return sself->GetDefaultContinuity(); }
extern "C" vtkNew < vtkParametricBohemianDome > vtkParametricBohemianDome_new () {return vtkNew < vtkParametricBohemianDome > () ;}
extern "C" void vtkParametricBohemianDome_destructor (vtkNew < vtkParametricBohemianDome > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricBohemianDome_get_ptr (vtkNew < vtkParametricBohemianDome > sself) {return sself . GetPointer () ;}
extern "C" double vtk_parametric_bohemian_dome_get_a(vtkNew<vtkParametricBohemianDome> sself) { return sself->GetA(); }
extern "C" void vtk_parametric_bohemian_dome_set_a(vtkNew<vtkParametricBohemianDome> sself, double _arg) { sself->SetA(_arg); }
extern "C" double vtk_parametric_bohemian_dome_get_b(vtkNew<vtkParametricBohemianDome> sself) { return sself->GetB(); }
extern "C" void vtk_parametric_bohemian_dome_set_b(vtkNew<vtkParametricBohemianDome> sself, double _arg) { sself->SetB(_arg); }
extern "C" double vtk_parametric_bohemian_dome_get_c(vtkNew<vtkParametricBohemianDome> sself) { return sself->GetC(); }
extern "C" void vtk_parametric_bohemian_dome_set_c(vtkNew<vtkParametricBohemianDome> sself, double _arg) { sself->SetC(_arg); }
extern "C" int vtk_parametric_bohemian_dome_get_dimension(vtkNew<vtkParametricBohemianDome> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_bohemian_dome_evaluate(vtkNew<vtkParametricBohemianDome> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_bohemian_dome_evaluate_scalar(vtkNew<vtkParametricBohemianDome> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricBour > vtkParametricBour_new () {return vtkNew < vtkParametricBour > () ;}
extern "C" void vtkParametricBour_destructor (vtkNew < vtkParametricBour > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricBour_get_ptr (vtkNew < vtkParametricBour > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_bour_get_dimension(vtkNew<vtkParametricBour> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_bour_evaluate(vtkNew<vtkParametricBour> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_bour_evaluate_scalar(vtkNew<vtkParametricBour> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricBoy > vtkParametricBoy_new () {return vtkNew < vtkParametricBoy > () ;}
extern "C" void vtkParametricBoy_destructor (vtkNew < vtkParametricBoy > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricBoy_get_ptr (vtkNew < vtkParametricBoy > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_boy_get_dimension(vtkNew<vtkParametricBoy> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_boy_set_z_scale(vtkNew<vtkParametricBoy> sself, double _arg) { sself->SetZScale(_arg); }
extern "C" double vtk_parametric_boy_get_z_scale(vtkNew<vtkParametricBoy> sself) { return sself->GetZScale(); }
extern "C" void vtk_parametric_boy_evaluate(vtkNew<vtkParametricBoy> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_boy_evaluate_scalar(vtkNew<vtkParametricBoy> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricCatalanMinimal > vtkParametricCatalanMinimal_new () {return vtkNew < vtkParametricCatalanMinimal > () ;}
extern "C" void vtkParametricCatalanMinimal_destructor (vtkNew < vtkParametricCatalanMinimal > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricCatalanMinimal_get_ptr (vtkNew < vtkParametricCatalanMinimal > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_catalan_minimal_get_dimension(vtkNew<vtkParametricCatalanMinimal> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_catalan_minimal_evaluate(vtkNew<vtkParametricCatalanMinimal> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_catalan_minimal_evaluate_scalar(vtkNew<vtkParametricCatalanMinimal> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricConicSpiral > vtkParametricConicSpiral_new () {return vtkNew < vtkParametricConicSpiral > () ;}
extern "C" void vtkParametricConicSpiral_destructor (vtkNew < vtkParametricConicSpiral > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricConicSpiral_get_ptr (vtkNew < vtkParametricConicSpiral > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_conic_spiral_get_dimension(vtkNew<vtkParametricConicSpiral> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_conic_spiral_set_a(vtkNew<vtkParametricConicSpiral> sself, double _arg) { sself->SetA(_arg); }
extern "C" double vtk_parametric_conic_spiral_get_a(vtkNew<vtkParametricConicSpiral> sself) { return sself->GetA(); }
extern "C" void vtk_parametric_conic_spiral_set_b(vtkNew<vtkParametricConicSpiral> sself, double _arg) { sself->SetB(_arg); }
extern "C" double vtk_parametric_conic_spiral_get_b(vtkNew<vtkParametricConicSpiral> sself) { return sself->GetB(); }
extern "C" void vtk_parametric_conic_spiral_set_c(vtkNew<vtkParametricConicSpiral> sself, double _arg) { sself->SetC(_arg); }
extern "C" double vtk_parametric_conic_spiral_get_c(vtkNew<vtkParametricConicSpiral> sself) { return sself->GetC(); }
extern "C" void vtk_parametric_conic_spiral_set_n(vtkNew<vtkParametricConicSpiral> sself, double _arg) { sself->SetN(_arg); }
extern "C" double vtk_parametric_conic_spiral_get_n(vtkNew<vtkParametricConicSpiral> sself) { return sself->GetN(); }
extern "C" void vtk_parametric_conic_spiral_evaluate(vtkNew<vtkParametricConicSpiral> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_conic_spiral_evaluate_scalar(vtkNew<vtkParametricConicSpiral> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricCrossCap > vtkParametricCrossCap_new () {return vtkNew < vtkParametricCrossCap > () ;}
extern "C" void vtkParametricCrossCap_destructor (vtkNew < vtkParametricCrossCap > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricCrossCap_get_ptr (vtkNew < vtkParametricCrossCap > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_cross_cap_get_dimension(vtkNew<vtkParametricCrossCap> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_cross_cap_evaluate(vtkNew<vtkParametricCrossCap> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_cross_cap_evaluate_scalar(vtkNew<vtkParametricCrossCap> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricDini > vtkParametricDini_new () {return vtkNew < vtkParametricDini > () ;}
extern "C" void vtkParametricDini_destructor (vtkNew < vtkParametricDini > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricDini_get_ptr (vtkNew < vtkParametricDini > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_dini_get_dimension(vtkNew<vtkParametricDini> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_dini_set_a(vtkNew<vtkParametricDini> sself, double _arg) { sself->SetA(_arg); }
extern "C" double vtk_parametric_dini_get_a(vtkNew<vtkParametricDini> sself) { return sself->GetA(); }
extern "C" void vtk_parametric_dini_set_b(vtkNew<vtkParametricDini> sself, double _arg) { sself->SetB(_arg); }
extern "C" double vtk_parametric_dini_get_b(vtkNew<vtkParametricDini> sself) { return sself->GetB(); }
extern "C" void vtk_parametric_dini_evaluate(vtkNew<vtkParametricDini> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_dini_evaluate_scalar(vtkNew<vtkParametricDini> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricEllipsoid > vtkParametricEllipsoid_new () {return vtkNew < vtkParametricEllipsoid > () ;}
extern "C" void vtkParametricEllipsoid_destructor (vtkNew < vtkParametricEllipsoid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricEllipsoid_get_ptr (vtkNew < vtkParametricEllipsoid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_ellipsoid_get_dimension(vtkNew<vtkParametricEllipsoid> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_ellipsoid_set_x_radius(vtkNew<vtkParametricEllipsoid> sself, double _arg) { sself->SetXRadius(_arg); }
extern "C" double vtk_parametric_ellipsoid_get_x_radius(vtkNew<vtkParametricEllipsoid> sself) { return sself->GetXRadius(); }
extern "C" void vtk_parametric_ellipsoid_set_y_radius(vtkNew<vtkParametricEllipsoid> sself, double _arg) { sself->SetYRadius(_arg); }
extern "C" double vtk_parametric_ellipsoid_get_y_radius(vtkNew<vtkParametricEllipsoid> sself) { return sself->GetYRadius(); }
extern "C" void vtk_parametric_ellipsoid_set_z_radius(vtkNew<vtkParametricEllipsoid> sself, double _arg) { sself->SetZRadius(_arg); }
extern "C" double vtk_parametric_ellipsoid_get_z_radius(vtkNew<vtkParametricEllipsoid> sself) { return sself->GetZRadius(); }
extern "C" void vtk_parametric_ellipsoid_evaluate(vtkNew<vtkParametricEllipsoid> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_ellipsoid_evaluate_scalar(vtkNew<vtkParametricEllipsoid> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricEnneper > vtkParametricEnneper_new () {return vtkNew < vtkParametricEnneper > () ;}
extern "C" void vtkParametricEnneper_destructor (vtkNew < vtkParametricEnneper > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricEnneper_get_ptr (vtkNew < vtkParametricEnneper > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_enneper_get_dimension(vtkNew<vtkParametricEnneper> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_enneper_evaluate(vtkNew<vtkParametricEnneper> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_enneper_evaluate_scalar(vtkNew<vtkParametricEnneper> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricFigure8Klein > vtkParametricFigure8Klein_new () {return vtkNew < vtkParametricFigure8Klein > () ;}
extern "C" void vtkParametricFigure8Klein_destructor (vtkNew < vtkParametricFigure8Klein > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricFigure8Klein_get_ptr (vtkNew < vtkParametricFigure8Klein > sself) {return sself . GetPointer () ;}
extern "C" void vtk_parametric_figure_8_klein_set_radius(vtkNew<vtkParametricFigure8Klein> sself, double _arg) { sself->SetRadius(_arg); }
extern "C" double vtk_parametric_figure_8_klein_get_radius(vtkNew<vtkParametricFigure8Klein> sself) { return sself->GetRadius(); }
extern "C" int vtk_parametric_figure_8_klein_get_dimension(vtkNew<vtkParametricFigure8Klein> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_figure_8_klein_evaluate(vtkNew<vtkParametricFigure8Klein> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_figure_8_klein_evaluate_scalar(vtkNew<vtkParametricFigure8Klein> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricHenneberg > vtkParametricHenneberg_new () {return vtkNew < vtkParametricHenneberg > () ;}
extern "C" void vtkParametricHenneberg_destructor (vtkNew < vtkParametricHenneberg > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricHenneberg_get_ptr (vtkNew < vtkParametricHenneberg > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_henneberg_get_dimension(vtkNew<vtkParametricHenneberg> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_henneberg_evaluate(vtkNew<vtkParametricHenneberg> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_henneberg_evaluate_scalar(vtkNew<vtkParametricHenneberg> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricKlein > vtkParametricKlein_new () {return vtkNew < vtkParametricKlein > () ;}
extern "C" void vtkParametricKlein_destructor (vtkNew < vtkParametricKlein > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricKlein_get_ptr (vtkNew < vtkParametricKlein > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_klein_get_dimension(vtkNew<vtkParametricKlein> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_klein_evaluate(vtkNew<vtkParametricKlein> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_klein_evaluate_scalar(vtkNew<vtkParametricKlein> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricKuen > vtkParametricKuen_new () {return vtkNew < vtkParametricKuen > () ;}
extern "C" void vtkParametricKuen_destructor (vtkNew < vtkParametricKuen > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricKuen_get_ptr (vtkNew < vtkParametricKuen > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_kuen_get_dimension(vtkNew<vtkParametricKuen> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_kuen_set_delta_v_0(vtkNew<vtkParametricKuen> sself, double _arg) { sself->SetDeltaV0(_arg); }
extern "C" double vtk_parametric_kuen_get_delta_v_0(vtkNew<vtkParametricKuen> sself) { return sself->GetDeltaV0(); }
extern "C" void vtk_parametric_kuen_evaluate(vtkNew<vtkParametricKuen> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_kuen_evaluate_scalar(vtkNew<vtkParametricKuen> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricMobius > vtkParametricMobius_new () {return vtkNew < vtkParametricMobius > () ;}
extern "C" void vtkParametricMobius_destructor (vtkNew < vtkParametricMobius > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricMobius_get_ptr (vtkNew < vtkParametricMobius > sself) {return sself . GetPointer () ;}
extern "C" void vtk_parametric_mobius_set_radius(vtkNew<vtkParametricMobius> sself, double _arg) { sself->SetRadius(_arg); }
extern "C" double vtk_parametric_mobius_get_radius(vtkNew<vtkParametricMobius> sself) { return sself->GetRadius(); }
extern "C" int vtk_parametric_mobius_get_dimension(vtkNew<vtkParametricMobius> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_mobius_evaluate(vtkNew<vtkParametricMobius> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_mobius_evaluate_scalar(vtkNew<vtkParametricMobius> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricPluckerConoid > vtkParametricPluckerConoid_new () {return vtkNew < vtkParametricPluckerConoid > () ;}
extern "C" void vtkParametricPluckerConoid_destructor (vtkNew < vtkParametricPluckerConoid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricPluckerConoid_get_ptr (vtkNew < vtkParametricPluckerConoid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_plucker_conoid_get_n(vtkNew<vtkParametricPluckerConoid> sself) { return sself->GetN(); }
extern "C" void vtk_parametric_plucker_conoid_set_n(vtkNew<vtkParametricPluckerConoid> sself, int _arg) { sself->SetN(_arg); }
extern "C" int vtk_parametric_plucker_conoid_get_dimension(vtkNew<vtkParametricPluckerConoid> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_plucker_conoid_evaluate(vtkNew<vtkParametricPluckerConoid> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_plucker_conoid_evaluate_scalar(vtkNew<vtkParametricPluckerConoid> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricPseudosphere > vtkParametricPseudosphere_new () {return vtkNew < vtkParametricPseudosphere > () ;}
extern "C" void vtkParametricPseudosphere_destructor (vtkNew < vtkParametricPseudosphere > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricPseudosphere_get_ptr (vtkNew < vtkParametricPseudosphere > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_pseudosphere_get_dimension(vtkNew<vtkParametricPseudosphere> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_pseudosphere_evaluate(vtkNew<vtkParametricPseudosphere> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_pseudosphere_evaluate_scalar(vtkNew<vtkParametricPseudosphere> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricRandomHills > vtkParametricRandomHills_new () {return vtkNew < vtkParametricRandomHills > () ;}
extern "C" void vtkParametricRandomHills_destructor (vtkNew < vtkParametricRandomHills > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricRandomHills_get_ptr (vtkNew < vtkParametricRandomHills > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_random_hills_get_dimension(vtkNew<vtkParametricRandomHills> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_random_hills_set_number_of_hills(vtkNew<vtkParametricRandomHills> sself, int _arg) { sself->SetNumberOfHills(_arg); }
extern "C" int vtk_parametric_random_hills_get_number_of_hills(vtkNew<vtkParametricRandomHills> sself) { return sself->GetNumberOfHills(); }
extern "C" void vtk_parametric_random_hills_set_hill_x_variance(vtkNew<vtkParametricRandomHills> sself, double _arg) { sself->SetHillXVariance(_arg); }
extern "C" double vtk_parametric_random_hills_get_hill_x_variance(vtkNew<vtkParametricRandomHills> sself) { return sself->GetHillXVariance(); }
extern "C" void vtk_parametric_random_hills_set_hill_y_variance(vtkNew<vtkParametricRandomHills> sself, double _arg) { sself->SetHillYVariance(_arg); }
extern "C" double vtk_parametric_random_hills_get_hill_y_variance(vtkNew<vtkParametricRandomHills> sself) { return sself->GetHillYVariance(); }
extern "C" void vtk_parametric_random_hills_set_hill_amplitude(vtkNew<vtkParametricRandomHills> sself, double _arg) { sself->SetHillAmplitude(_arg); }
extern "C" double vtk_parametric_random_hills_get_hill_amplitude(vtkNew<vtkParametricRandomHills> sself) { return sself->GetHillAmplitude(); }
extern "C" void vtk_parametric_random_hills_set_random_seed(vtkNew<vtkParametricRandomHills> sself, int _arg) { sself->SetRandomSeed(_arg); }
extern "C" int vtk_parametric_random_hills_get_random_seed(vtkNew<vtkParametricRandomHills> sself) { return sself->GetRandomSeed(); }
extern "C" void vtk_parametric_random_hills_set_allow_random_generation(vtkNew<vtkParametricRandomHills> sself, int _arg) { sself->SetAllowRandomGeneration(_arg); }
extern "C" int vtk_parametric_random_hills_get_allow_random_generation_min_value(vtkNew<vtkParametricRandomHills> sself) { return sself->GetAllowRandomGenerationMinValue(); }
extern "C" int vtk_parametric_random_hills_get_allow_random_generation_max_value(vtkNew<vtkParametricRandomHills> sself) { return sself->GetAllowRandomGenerationMaxValue(); }
extern "C" int vtk_parametric_random_hills_get_allow_random_generation(vtkNew<vtkParametricRandomHills> sself) { return sself->GetAllowRandomGeneration(); }
extern "C" void vtk_parametric_random_hills_allow_random_generation_on(vtkNew<vtkParametricRandomHills> sself) { sself->AllowRandomGenerationOn(); }
extern "C" void vtk_parametric_random_hills_allow_random_generation_off(vtkNew<vtkParametricRandomHills> sself) { sself->AllowRandomGenerationOff(); }
extern "C" void vtk_parametric_random_hills_set_x_variance_scale_factor(vtkNew<vtkParametricRandomHills> sself, double _arg) { sself->SetXVarianceScaleFactor(_arg); }
extern "C" double vtk_parametric_random_hills_get_x_variance_scale_factor(vtkNew<vtkParametricRandomHills> sself) { return sself->GetXVarianceScaleFactor(); }
extern "C" void vtk_parametric_random_hills_set_y_variance_scale_factor(vtkNew<vtkParametricRandomHills> sself, double _arg) { sself->SetYVarianceScaleFactor(_arg); }
extern "C" double vtk_parametric_random_hills_get_y_variance_scale_factor(vtkNew<vtkParametricRandomHills> sself) { return sself->GetYVarianceScaleFactor(); }
extern "C" void vtk_parametric_random_hills_set_amplitude_scale_factor(vtkNew<vtkParametricRandomHills> sself, double _arg) { sself->SetAmplitudeScaleFactor(_arg); }
extern "C" double vtk_parametric_random_hills_get_amplitude_scale_factor(vtkNew<vtkParametricRandomHills> sself) { return sself->GetAmplitudeScaleFactor(); }
extern "C" void vtk_parametric_random_hills_evaluate(vtkNew<vtkParametricRandomHills> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_random_hills_evaluate_scalar(vtkNew<vtkParametricRandomHills> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricRoman > vtkParametricRoman_new () {return vtkNew < vtkParametricRoman > () ;}
extern "C" void vtkParametricRoman_destructor (vtkNew < vtkParametricRoman > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricRoman_get_ptr (vtkNew < vtkParametricRoman > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_roman_get_dimension(vtkNew<vtkParametricRoman> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_roman_set_radius(vtkNew<vtkParametricRoman> sself, double _arg) { sself->SetRadius(_arg); }
extern "C" double vtk_parametric_roman_get_radius(vtkNew<vtkParametricRoman> sself) { return sself->GetRadius(); }
extern "C" void vtk_parametric_roman_evaluate(vtkNew<vtkParametricRoman> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_roman_evaluate_scalar(vtkNew<vtkParametricRoman> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricSpline > vtkParametricSpline_new () {return vtkNew < vtkParametricSpline > () ;}
extern "C" void vtkParametricSpline_destructor (vtkNew < vtkParametricSpline > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricSpline_get_ptr (vtkNew < vtkParametricSpline > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_spline_get_dimension(vtkNew<vtkParametricSpline> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_spline_evaluate(vtkNew<vtkParametricSpline> sself, double u, double Pt, double Du) { sself->Evaluate(u, Pt, Du); }
extern "C" double vtk_parametric_spline_evaluate_scalar(vtkNew<vtkParametricSpline> sself, double u, double Pt, double Du) { return sself->EvaluateScalar(u, Pt, Du); }
extern "C" void vtk_parametric_spline_set_number_of_points(vtkNew<vtkParametricSpline> sself, long long numPts) { sself->SetNumberOfPoints(numPts); }
extern "C" void vtk_parametric_spline_set_point(vtkNew<vtkParametricSpline> sself, long long index, double x, double y, double z) { sself->SetPoint(index, x, y, z); }
extern "C" void vtk_parametric_spline_set_closed(vtkNew<vtkParametricSpline> sself, int _arg) { sself->SetClosed(_arg); }
extern "C" int vtk_parametric_spline_get_closed(vtkNew<vtkParametricSpline> sself) { return sself->GetClosed(); }
extern "C" void vtk_parametric_spline_closed_on(vtkNew<vtkParametricSpline> sself) { sself->ClosedOn(); }
extern "C" void vtk_parametric_spline_closed_off(vtkNew<vtkParametricSpline> sself) { sself->ClosedOff(); }
extern "C" void vtk_parametric_spline_set_parameterize_by_length(vtkNew<vtkParametricSpline> sself, int _arg) { sself->SetParameterizeByLength(_arg); }
extern "C" int vtk_parametric_spline_get_parameterize_by_length(vtkNew<vtkParametricSpline> sself) { return sself->GetParameterizeByLength(); }
extern "C" void vtk_parametric_spline_parameterize_by_length_on(vtkNew<vtkParametricSpline> sself) { sself->ParameterizeByLengthOn(); }
extern "C" void vtk_parametric_spline_parameterize_by_length_off(vtkNew<vtkParametricSpline> sself) { sself->ParameterizeByLengthOff(); }
extern "C" void vtk_parametric_spline_set_left_constraint(vtkNew<vtkParametricSpline> sself, int _arg) { sself->SetLeftConstraint(_arg); }
extern "C" int vtk_parametric_spline_get_left_constraint_min_value(vtkNew<vtkParametricSpline> sself) { return sself->GetLeftConstraintMinValue(); }
extern "C" int vtk_parametric_spline_get_left_constraint_max_value(vtkNew<vtkParametricSpline> sself) { return sself->GetLeftConstraintMaxValue(); }
extern "C" int vtk_parametric_spline_get_left_constraint(vtkNew<vtkParametricSpline> sself) { return sself->GetLeftConstraint(); }
extern "C" void vtk_parametric_spline_set_right_constraint(vtkNew<vtkParametricSpline> sself, int _arg) { sself->SetRightConstraint(_arg); }
extern "C" int vtk_parametric_spline_get_right_constraint_min_value(vtkNew<vtkParametricSpline> sself) { return sself->GetRightConstraintMinValue(); }
extern "C" int vtk_parametric_spline_get_right_constraint_max_value(vtkNew<vtkParametricSpline> sself) { return sself->GetRightConstraintMaxValue(); }
extern "C" int vtk_parametric_spline_get_right_constraint(vtkNew<vtkParametricSpline> sself) { return sself->GetRightConstraint(); }
extern "C" void vtk_parametric_spline_set_left_value(vtkNew<vtkParametricSpline> sself, double _arg) { sself->SetLeftValue(_arg); }
extern "C" double vtk_parametric_spline_get_left_value(vtkNew<vtkParametricSpline> sself) { return sself->GetLeftValue(); }
extern "C" void vtk_parametric_spline_set_right_value(vtkNew<vtkParametricSpline> sself, double _arg) { sself->SetRightValue(_arg); }
extern "C" double vtk_parametric_spline_get_right_value(vtkNew<vtkParametricSpline> sself) { return sself->GetRightValue(); }
extern "C" vtkNew < vtkParametricSuperEllipsoid > vtkParametricSuperEllipsoid_new () {return vtkNew < vtkParametricSuperEllipsoid > () ;}
extern "C" void vtkParametricSuperEllipsoid_destructor (vtkNew < vtkParametricSuperEllipsoid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricSuperEllipsoid_get_ptr (vtkNew < vtkParametricSuperEllipsoid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_super_ellipsoid_get_dimension(vtkNew<vtkParametricSuperEllipsoid> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_super_ellipsoid_set_x_radius(vtkNew<vtkParametricSuperEllipsoid> sself, double _arg) { sself->SetXRadius(_arg); }
extern "C" double vtk_parametric_super_ellipsoid_get_x_radius(vtkNew<vtkParametricSuperEllipsoid> sself) { return sself->GetXRadius(); }
extern "C" void vtk_parametric_super_ellipsoid_set_y_radius(vtkNew<vtkParametricSuperEllipsoid> sself, double _arg) { sself->SetYRadius(_arg); }
extern "C" double vtk_parametric_super_ellipsoid_get_y_radius(vtkNew<vtkParametricSuperEllipsoid> sself) { return sself->GetYRadius(); }
extern "C" void vtk_parametric_super_ellipsoid_set_z_radius(vtkNew<vtkParametricSuperEllipsoid> sself, double _arg) { sself->SetZRadius(_arg); }
extern "C" double vtk_parametric_super_ellipsoid_get_z_radius(vtkNew<vtkParametricSuperEllipsoid> sself) { return sself->GetZRadius(); }
extern "C" void vtk_parametric_super_ellipsoid_set_n_1(vtkNew<vtkParametricSuperEllipsoid> sself, double _arg) { sself->SetN1(_arg); }
extern "C" double vtk_parametric_super_ellipsoid_get_n_1(vtkNew<vtkParametricSuperEllipsoid> sself) { return sself->GetN1(); }
extern "C" void vtk_parametric_super_ellipsoid_set_n_2(vtkNew<vtkParametricSuperEllipsoid> sself, double _arg) { sself->SetN2(_arg); }
extern "C" double vtk_parametric_super_ellipsoid_get_n_2(vtkNew<vtkParametricSuperEllipsoid> sself) { return sself->GetN2(); }
extern "C" void vtk_parametric_super_ellipsoid_evaluate(vtkNew<vtkParametricSuperEllipsoid> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_super_ellipsoid_evaluate_scalar(vtkNew<vtkParametricSuperEllipsoid> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricSuperToroid > vtkParametricSuperToroid_new () {return vtkNew < vtkParametricSuperToroid > () ;}
extern "C" void vtkParametricSuperToroid_destructor (vtkNew < vtkParametricSuperToroid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricSuperToroid_get_ptr (vtkNew < vtkParametricSuperToroid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_parametric_super_toroid_get_dimension(vtkNew<vtkParametricSuperToroid> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_super_toroid_set_ring_radius(vtkNew<vtkParametricSuperToroid> sself, double _arg) { sself->SetRingRadius(_arg); }
extern "C" double vtk_parametric_super_toroid_get_ring_radius(vtkNew<vtkParametricSuperToroid> sself) { return sself->GetRingRadius(); }
extern "C" void vtk_parametric_super_toroid_set_cross_section_radius(vtkNew<vtkParametricSuperToroid> sself, double _arg) { sself->SetCrossSectionRadius(_arg); }
extern "C" double vtk_parametric_super_toroid_get_cross_section_radius(vtkNew<vtkParametricSuperToroid> sself) { return sself->GetCrossSectionRadius(); }
extern "C" void vtk_parametric_super_toroid_set_x_radius(vtkNew<vtkParametricSuperToroid> sself, double _arg) { sself->SetXRadius(_arg); }
extern "C" double vtk_parametric_super_toroid_get_x_radius(vtkNew<vtkParametricSuperToroid> sself) { return sself->GetXRadius(); }
extern "C" void vtk_parametric_super_toroid_set_y_radius(vtkNew<vtkParametricSuperToroid> sself, double _arg) { sself->SetYRadius(_arg); }
extern "C" double vtk_parametric_super_toroid_get_y_radius(vtkNew<vtkParametricSuperToroid> sself) { return sself->GetYRadius(); }
extern "C" void vtk_parametric_super_toroid_set_z_radius(vtkNew<vtkParametricSuperToroid> sself, double _arg) { sself->SetZRadius(_arg); }
extern "C" double vtk_parametric_super_toroid_get_z_radius(vtkNew<vtkParametricSuperToroid> sself) { return sself->GetZRadius(); }
extern "C" void vtk_parametric_super_toroid_set_n_1(vtkNew<vtkParametricSuperToroid> sself, double _arg) { sself->SetN1(_arg); }
extern "C" double vtk_parametric_super_toroid_get_n_1(vtkNew<vtkParametricSuperToroid> sself) { return sself->GetN1(); }
extern "C" void vtk_parametric_super_toroid_set_n_2(vtkNew<vtkParametricSuperToroid> sself, double _arg) { sself->SetN2(_arg); }
extern "C" double vtk_parametric_super_toroid_get_n_2(vtkNew<vtkParametricSuperToroid> sself) { return sself->GetN2(); }
extern "C" void vtk_parametric_super_toroid_evaluate(vtkNew<vtkParametricSuperToroid> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_super_toroid_evaluate_scalar(vtkNew<vtkParametricSuperToroid> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
extern "C" vtkNew < vtkParametricTorus > vtkParametricTorus_new () {return vtkNew < vtkParametricTorus > () ;}
extern "C" void vtkParametricTorus_destructor (vtkNew < vtkParametricTorus > sself) {sself . Reset () ; return ;}
extern "C" void * vtkParametricTorus_get_ptr (vtkNew < vtkParametricTorus > sself) {return sself . GetPointer () ;}
extern "C" void vtk_parametric_torus_set_ring_radius(vtkNew<vtkParametricTorus> sself, double _arg) { sself->SetRingRadius(_arg); }
extern "C" double vtk_parametric_torus_get_ring_radius(vtkNew<vtkParametricTorus> sself) { return sself->GetRingRadius(); }
extern "C" void vtk_parametric_torus_set_cross_section_radius(vtkNew<vtkParametricTorus> sself, double _arg) { sself->SetCrossSectionRadius(_arg); }
extern "C" double vtk_parametric_torus_get_cross_section_radius(vtkNew<vtkParametricTorus> sself) { return sself->GetCrossSectionRadius(); }
extern "C" int vtk_parametric_torus_get_dimension(vtkNew<vtkParametricTorus> sself) { return sself->GetDimension(); }
extern "C" void vtk_parametric_torus_evaluate(vtkNew<vtkParametricTorus> sself, double uvw, double Pt, double Duvw) { sself->Evaluate(uvw, Pt, Duvw); }
extern "C" double vtk_parametric_torus_evaluate_scalar(vtkNew<vtkParametricTorus> sself, double uvw, double Pt, double Duvw) { return sself->EvaluateScalar(uvw, Pt, Duvw); }
