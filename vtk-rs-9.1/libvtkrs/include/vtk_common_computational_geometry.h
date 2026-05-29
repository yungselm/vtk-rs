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

// Declare exported functions
extern "C" vtkNew < vtkCardinalSpline > vtkCardinalSpline_new () ;
extern "C" void vtkCardinalSpline_destructor (vtkNew < vtkCardinalSpline > sself) ;
extern "C" void * vtkCardinalSpline_get_ptr (vtkNew < vtkCardinalSpline > sself) ;
extern "C" void vtk_cardinal_spline_compute(vtkNew<vtkCardinalSpline> sself);
extern "C" double vtk_cardinal_spline_evaluate(vtkNew<vtkCardinalSpline> sself, double t);
extern "C" vtkNew < vtkKochanekSpline > vtkKochanekSpline_new () ;
extern "C" void vtkKochanekSpline_destructor (vtkNew < vtkKochanekSpline > sself) ;
extern "C" void * vtkKochanekSpline_get_ptr (vtkNew < vtkKochanekSpline > sself) ;
extern "C" void vtk_kochanek_spline_compute(vtkNew<vtkKochanekSpline> sself);
extern "C" double vtk_kochanek_spline_evaluate(vtkNew<vtkKochanekSpline> sself, double t);
extern "C" void vtk_kochanek_spline_set_default_bias(vtkNew<vtkKochanekSpline> sself, double _arg);
extern "C" double vtk_kochanek_spline_get_default_bias(vtkNew<vtkKochanekSpline> sself);
extern "C" void vtk_kochanek_spline_set_default_tension(vtkNew<vtkKochanekSpline> sself, double _arg);
extern "C" double vtk_kochanek_spline_get_default_tension(vtkNew<vtkKochanekSpline> sself);
extern "C" void vtk_kochanek_spline_set_default_continuity(vtkNew<vtkKochanekSpline> sself, double _arg);
extern "C" double vtk_kochanek_spline_get_default_continuity(vtkNew<vtkKochanekSpline> sself);
extern "C" vtkNew < vtkParametricBohemianDome > vtkParametricBohemianDome_new () ;
extern "C" void vtkParametricBohemianDome_destructor (vtkNew < vtkParametricBohemianDome > sself) ;
extern "C" void * vtkParametricBohemianDome_get_ptr (vtkNew < vtkParametricBohemianDome > sself) ;
extern "C" double vtk_parametric_bohemian_dome_get_a(vtkNew<vtkParametricBohemianDome> sself);
extern "C" void vtk_parametric_bohemian_dome_set_a(vtkNew<vtkParametricBohemianDome> sself, double _arg);
extern "C" double vtk_parametric_bohemian_dome_get_b(vtkNew<vtkParametricBohemianDome> sself);
extern "C" void vtk_parametric_bohemian_dome_set_b(vtkNew<vtkParametricBohemianDome> sself, double _arg);
extern "C" double vtk_parametric_bohemian_dome_get_c(vtkNew<vtkParametricBohemianDome> sself);
extern "C" void vtk_parametric_bohemian_dome_set_c(vtkNew<vtkParametricBohemianDome> sself, double _arg);
extern "C" int vtk_parametric_bohemian_dome_get_dimension(vtkNew<vtkParametricBohemianDome> sself);
extern "C" void vtk_parametric_bohemian_dome_evaluate(vtkNew<vtkParametricBohemianDome> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_bohemian_dome_evaluate_scalar(vtkNew<vtkParametricBohemianDome> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricBour > vtkParametricBour_new () ;
extern "C" void vtkParametricBour_destructor (vtkNew < vtkParametricBour > sself) ;
extern "C" void * vtkParametricBour_get_ptr (vtkNew < vtkParametricBour > sself) ;
extern "C" int vtk_parametric_bour_get_dimension(vtkNew<vtkParametricBour> sself);
extern "C" void vtk_parametric_bour_evaluate(vtkNew<vtkParametricBour> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_bour_evaluate_scalar(vtkNew<vtkParametricBour> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricBoy > vtkParametricBoy_new () ;
extern "C" void vtkParametricBoy_destructor (vtkNew < vtkParametricBoy > sself) ;
extern "C" void * vtkParametricBoy_get_ptr (vtkNew < vtkParametricBoy > sself) ;
extern "C" int vtk_parametric_boy_get_dimension(vtkNew<vtkParametricBoy> sself);
extern "C" void vtk_parametric_boy_set_z_scale(vtkNew<vtkParametricBoy> sself, double _arg);
extern "C" double vtk_parametric_boy_get_z_scale(vtkNew<vtkParametricBoy> sself);
extern "C" void vtk_parametric_boy_evaluate(vtkNew<vtkParametricBoy> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_boy_evaluate_scalar(vtkNew<vtkParametricBoy> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricCatalanMinimal > vtkParametricCatalanMinimal_new () ;
extern "C" void vtkParametricCatalanMinimal_destructor (vtkNew < vtkParametricCatalanMinimal > sself) ;
extern "C" void * vtkParametricCatalanMinimal_get_ptr (vtkNew < vtkParametricCatalanMinimal > sself) ;
extern "C" int vtk_parametric_catalan_minimal_get_dimension(vtkNew<vtkParametricCatalanMinimal> sself);
extern "C" void vtk_parametric_catalan_minimal_evaluate(vtkNew<vtkParametricCatalanMinimal> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_catalan_minimal_evaluate_scalar(vtkNew<vtkParametricCatalanMinimal> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricConicSpiral > vtkParametricConicSpiral_new () ;
extern "C" void vtkParametricConicSpiral_destructor (vtkNew < vtkParametricConicSpiral > sself) ;
extern "C" void * vtkParametricConicSpiral_get_ptr (vtkNew < vtkParametricConicSpiral > sself) ;
extern "C" int vtk_parametric_conic_spiral_get_dimension(vtkNew<vtkParametricConicSpiral> sself);
extern "C" void vtk_parametric_conic_spiral_set_a(vtkNew<vtkParametricConicSpiral> sself, double _arg);
extern "C" double vtk_parametric_conic_spiral_get_a(vtkNew<vtkParametricConicSpiral> sself);
extern "C" void vtk_parametric_conic_spiral_set_b(vtkNew<vtkParametricConicSpiral> sself, double _arg);
extern "C" double vtk_parametric_conic_spiral_get_b(vtkNew<vtkParametricConicSpiral> sself);
extern "C" void vtk_parametric_conic_spiral_set_c(vtkNew<vtkParametricConicSpiral> sself, double _arg);
extern "C" double vtk_parametric_conic_spiral_get_c(vtkNew<vtkParametricConicSpiral> sself);
extern "C" void vtk_parametric_conic_spiral_set_n(vtkNew<vtkParametricConicSpiral> sself, double _arg);
extern "C" double vtk_parametric_conic_spiral_get_n(vtkNew<vtkParametricConicSpiral> sself);
extern "C" void vtk_parametric_conic_spiral_evaluate(vtkNew<vtkParametricConicSpiral> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_conic_spiral_evaluate_scalar(vtkNew<vtkParametricConicSpiral> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricCrossCap > vtkParametricCrossCap_new () ;
extern "C" void vtkParametricCrossCap_destructor (vtkNew < vtkParametricCrossCap > sself) ;
extern "C" void * vtkParametricCrossCap_get_ptr (vtkNew < vtkParametricCrossCap > sself) ;
extern "C" int vtk_parametric_cross_cap_get_dimension(vtkNew<vtkParametricCrossCap> sself);
extern "C" void vtk_parametric_cross_cap_evaluate(vtkNew<vtkParametricCrossCap> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_cross_cap_evaluate_scalar(vtkNew<vtkParametricCrossCap> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricDini > vtkParametricDini_new () ;
extern "C" void vtkParametricDini_destructor (vtkNew < vtkParametricDini > sself) ;
extern "C" void * vtkParametricDini_get_ptr (vtkNew < vtkParametricDini > sself) ;
extern "C" int vtk_parametric_dini_get_dimension(vtkNew<vtkParametricDini> sself);
extern "C" void vtk_parametric_dini_set_a(vtkNew<vtkParametricDini> sself, double _arg);
extern "C" double vtk_parametric_dini_get_a(vtkNew<vtkParametricDini> sself);
extern "C" void vtk_parametric_dini_set_b(vtkNew<vtkParametricDini> sself, double _arg);
extern "C" double vtk_parametric_dini_get_b(vtkNew<vtkParametricDini> sself);
extern "C" void vtk_parametric_dini_evaluate(vtkNew<vtkParametricDini> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_dini_evaluate_scalar(vtkNew<vtkParametricDini> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricEllipsoid > vtkParametricEllipsoid_new () ;
extern "C" void vtkParametricEllipsoid_destructor (vtkNew < vtkParametricEllipsoid > sself) ;
extern "C" void * vtkParametricEllipsoid_get_ptr (vtkNew < vtkParametricEllipsoid > sself) ;
extern "C" int vtk_parametric_ellipsoid_get_dimension(vtkNew<vtkParametricEllipsoid> sself);
extern "C" void vtk_parametric_ellipsoid_set_x_radius(vtkNew<vtkParametricEllipsoid> sself, double _arg);
extern "C" double vtk_parametric_ellipsoid_get_x_radius(vtkNew<vtkParametricEllipsoid> sself);
extern "C" void vtk_parametric_ellipsoid_set_y_radius(vtkNew<vtkParametricEllipsoid> sself, double _arg);
extern "C" double vtk_parametric_ellipsoid_get_y_radius(vtkNew<vtkParametricEllipsoid> sself);
extern "C" void vtk_parametric_ellipsoid_set_z_radius(vtkNew<vtkParametricEllipsoid> sself, double _arg);
extern "C" double vtk_parametric_ellipsoid_get_z_radius(vtkNew<vtkParametricEllipsoid> sself);
extern "C" void vtk_parametric_ellipsoid_evaluate(vtkNew<vtkParametricEllipsoid> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_ellipsoid_evaluate_scalar(vtkNew<vtkParametricEllipsoid> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricEnneper > vtkParametricEnneper_new () ;
extern "C" void vtkParametricEnneper_destructor (vtkNew < vtkParametricEnneper > sself) ;
extern "C" void * vtkParametricEnneper_get_ptr (vtkNew < vtkParametricEnneper > sself) ;
extern "C" int vtk_parametric_enneper_get_dimension(vtkNew<vtkParametricEnneper> sself);
extern "C" void vtk_parametric_enneper_evaluate(vtkNew<vtkParametricEnneper> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_enneper_evaluate_scalar(vtkNew<vtkParametricEnneper> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricFigure8Klein > vtkParametricFigure8Klein_new () ;
extern "C" void vtkParametricFigure8Klein_destructor (vtkNew < vtkParametricFigure8Klein > sself) ;
extern "C" void * vtkParametricFigure8Klein_get_ptr (vtkNew < vtkParametricFigure8Klein > sself) ;
extern "C" void vtk_parametric_figure_8_klein_set_radius(vtkNew<vtkParametricFigure8Klein> sself, double _arg);
extern "C" double vtk_parametric_figure_8_klein_get_radius(vtkNew<vtkParametricFigure8Klein> sself);
extern "C" int vtk_parametric_figure_8_klein_get_dimension(vtkNew<vtkParametricFigure8Klein> sself);
extern "C" void vtk_parametric_figure_8_klein_evaluate(vtkNew<vtkParametricFigure8Klein> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_figure_8_klein_evaluate_scalar(vtkNew<vtkParametricFigure8Klein> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricHenneberg > vtkParametricHenneberg_new () ;
extern "C" void vtkParametricHenneberg_destructor (vtkNew < vtkParametricHenneberg > sself) ;
extern "C" void * vtkParametricHenneberg_get_ptr (vtkNew < vtkParametricHenneberg > sself) ;
extern "C" int vtk_parametric_henneberg_get_dimension(vtkNew<vtkParametricHenneberg> sself);
extern "C" void vtk_parametric_henneberg_evaluate(vtkNew<vtkParametricHenneberg> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_henneberg_evaluate_scalar(vtkNew<vtkParametricHenneberg> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricKlein > vtkParametricKlein_new () ;
extern "C" void vtkParametricKlein_destructor (vtkNew < vtkParametricKlein > sself) ;
extern "C" void * vtkParametricKlein_get_ptr (vtkNew < vtkParametricKlein > sself) ;
extern "C" int vtk_parametric_klein_get_dimension(vtkNew<vtkParametricKlein> sself);
extern "C" void vtk_parametric_klein_evaluate(vtkNew<vtkParametricKlein> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_klein_evaluate_scalar(vtkNew<vtkParametricKlein> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricKuen > vtkParametricKuen_new () ;
extern "C" void vtkParametricKuen_destructor (vtkNew < vtkParametricKuen > sself) ;
extern "C" void * vtkParametricKuen_get_ptr (vtkNew < vtkParametricKuen > sself) ;
extern "C" int vtk_parametric_kuen_get_dimension(vtkNew<vtkParametricKuen> sself);
extern "C" void vtk_parametric_kuen_set_delta_v_0(vtkNew<vtkParametricKuen> sself, double _arg);
extern "C" double vtk_parametric_kuen_get_delta_v_0(vtkNew<vtkParametricKuen> sself);
extern "C" void vtk_parametric_kuen_evaluate(vtkNew<vtkParametricKuen> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_kuen_evaluate_scalar(vtkNew<vtkParametricKuen> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricMobius > vtkParametricMobius_new () ;
extern "C" void vtkParametricMobius_destructor (vtkNew < vtkParametricMobius > sself) ;
extern "C" void * vtkParametricMobius_get_ptr (vtkNew < vtkParametricMobius > sself) ;
extern "C" void vtk_parametric_mobius_set_radius(vtkNew<vtkParametricMobius> sself, double _arg);
extern "C" double vtk_parametric_mobius_get_radius(vtkNew<vtkParametricMobius> sself);
extern "C" int vtk_parametric_mobius_get_dimension(vtkNew<vtkParametricMobius> sself);
extern "C" void vtk_parametric_mobius_evaluate(vtkNew<vtkParametricMobius> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_mobius_evaluate_scalar(vtkNew<vtkParametricMobius> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricPluckerConoid > vtkParametricPluckerConoid_new () ;
extern "C" void vtkParametricPluckerConoid_destructor (vtkNew < vtkParametricPluckerConoid > sself) ;
extern "C" void * vtkParametricPluckerConoid_get_ptr (vtkNew < vtkParametricPluckerConoid > sself) ;
extern "C" int vtk_parametric_plucker_conoid_get_n(vtkNew<vtkParametricPluckerConoid> sself);
extern "C" void vtk_parametric_plucker_conoid_set_n(vtkNew<vtkParametricPluckerConoid> sself, int _arg);
extern "C" int vtk_parametric_plucker_conoid_get_dimension(vtkNew<vtkParametricPluckerConoid> sself);
extern "C" void vtk_parametric_plucker_conoid_evaluate(vtkNew<vtkParametricPluckerConoid> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_plucker_conoid_evaluate_scalar(vtkNew<vtkParametricPluckerConoid> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricPseudosphere > vtkParametricPseudosphere_new () ;
extern "C" void vtkParametricPseudosphere_destructor (vtkNew < vtkParametricPseudosphere > sself) ;
extern "C" void * vtkParametricPseudosphere_get_ptr (vtkNew < vtkParametricPseudosphere > sself) ;
extern "C" int vtk_parametric_pseudosphere_get_dimension(vtkNew<vtkParametricPseudosphere> sself);
extern "C" void vtk_parametric_pseudosphere_evaluate(vtkNew<vtkParametricPseudosphere> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_pseudosphere_evaluate_scalar(vtkNew<vtkParametricPseudosphere> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricRandomHills > vtkParametricRandomHills_new () ;
extern "C" void vtkParametricRandomHills_destructor (vtkNew < vtkParametricRandomHills > sself) ;
extern "C" void * vtkParametricRandomHills_get_ptr (vtkNew < vtkParametricRandomHills > sself) ;
extern "C" int vtk_parametric_random_hills_get_dimension(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_set_number_of_hills(vtkNew<vtkParametricRandomHills> sself, int _arg);
extern "C" int vtk_parametric_random_hills_get_number_of_hills(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_set_hill_x_variance(vtkNew<vtkParametricRandomHills> sself, double _arg);
extern "C" double vtk_parametric_random_hills_get_hill_x_variance(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_set_hill_y_variance(vtkNew<vtkParametricRandomHills> sself, double _arg);
extern "C" double vtk_parametric_random_hills_get_hill_y_variance(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_set_hill_amplitude(vtkNew<vtkParametricRandomHills> sself, double _arg);
extern "C" double vtk_parametric_random_hills_get_hill_amplitude(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_set_random_seed(vtkNew<vtkParametricRandomHills> sself, int _arg);
extern "C" int vtk_parametric_random_hills_get_random_seed(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_set_allow_random_generation(vtkNew<vtkParametricRandomHills> sself, int _arg);
extern "C" int vtk_parametric_random_hills_get_allow_random_generation_min_value(vtkNew<vtkParametricRandomHills> sself);
extern "C" int vtk_parametric_random_hills_get_allow_random_generation_max_value(vtkNew<vtkParametricRandomHills> sself);
extern "C" int vtk_parametric_random_hills_get_allow_random_generation(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_allow_random_generation_on(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_allow_random_generation_off(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_set_x_variance_scale_factor(vtkNew<vtkParametricRandomHills> sself, double _arg);
extern "C" double vtk_parametric_random_hills_get_x_variance_scale_factor(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_set_y_variance_scale_factor(vtkNew<vtkParametricRandomHills> sself, double _arg);
extern "C" double vtk_parametric_random_hills_get_y_variance_scale_factor(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_set_amplitude_scale_factor(vtkNew<vtkParametricRandomHills> sself, double _arg);
extern "C" double vtk_parametric_random_hills_get_amplitude_scale_factor(vtkNew<vtkParametricRandomHills> sself);
extern "C" void vtk_parametric_random_hills_evaluate(vtkNew<vtkParametricRandomHills> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_random_hills_evaluate_scalar(vtkNew<vtkParametricRandomHills> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricRoman > vtkParametricRoman_new () ;
extern "C" void vtkParametricRoman_destructor (vtkNew < vtkParametricRoman > sself) ;
extern "C" void * vtkParametricRoman_get_ptr (vtkNew < vtkParametricRoman > sself) ;
extern "C" int vtk_parametric_roman_get_dimension(vtkNew<vtkParametricRoman> sself);
extern "C" void vtk_parametric_roman_set_radius(vtkNew<vtkParametricRoman> sself, double _arg);
extern "C" double vtk_parametric_roman_get_radius(vtkNew<vtkParametricRoman> sself);
extern "C" void vtk_parametric_roman_evaluate(vtkNew<vtkParametricRoman> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_roman_evaluate_scalar(vtkNew<vtkParametricRoman> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricSpline > vtkParametricSpline_new () ;
extern "C" void vtkParametricSpline_destructor (vtkNew < vtkParametricSpline > sself) ;
extern "C" void * vtkParametricSpline_get_ptr (vtkNew < vtkParametricSpline > sself) ;
extern "C" int vtk_parametric_spline_get_dimension(vtkNew<vtkParametricSpline> sself);
extern "C" void vtk_parametric_spline_evaluate(vtkNew<vtkParametricSpline> sself, double u, double Pt, double Du);
extern "C" double vtk_parametric_spline_evaluate_scalar(vtkNew<vtkParametricSpline> sself, double u, double Pt, double Du);
extern "C" void vtk_parametric_spline_set_number_of_points(vtkNew<vtkParametricSpline> sself, long long numPts);
extern "C" void vtk_parametric_spline_set_point(vtkNew<vtkParametricSpline> sself, long long index, double x, double y, double z);
extern "C" void vtk_parametric_spline_set_closed(vtkNew<vtkParametricSpline> sself, int _arg);
extern "C" int vtk_parametric_spline_get_closed(vtkNew<vtkParametricSpline> sself);
extern "C" void vtk_parametric_spline_closed_on(vtkNew<vtkParametricSpline> sself);
extern "C" void vtk_parametric_spline_closed_off(vtkNew<vtkParametricSpline> sself);
extern "C" void vtk_parametric_spline_set_parameterize_by_length(vtkNew<vtkParametricSpline> sself, int _arg);
extern "C" int vtk_parametric_spline_get_parameterize_by_length(vtkNew<vtkParametricSpline> sself);
extern "C" void vtk_parametric_spline_parameterize_by_length_on(vtkNew<vtkParametricSpline> sself);
extern "C" void vtk_parametric_spline_parameterize_by_length_off(vtkNew<vtkParametricSpline> sself);
extern "C" void vtk_parametric_spline_set_left_constraint(vtkNew<vtkParametricSpline> sself, int _arg);
extern "C" int vtk_parametric_spline_get_left_constraint_min_value(vtkNew<vtkParametricSpline> sself);
extern "C" int vtk_parametric_spline_get_left_constraint_max_value(vtkNew<vtkParametricSpline> sself);
extern "C" int vtk_parametric_spline_get_left_constraint(vtkNew<vtkParametricSpline> sself);
extern "C" void vtk_parametric_spline_set_right_constraint(vtkNew<vtkParametricSpline> sself, int _arg);
extern "C" int vtk_parametric_spline_get_right_constraint_min_value(vtkNew<vtkParametricSpline> sself);
extern "C" int vtk_parametric_spline_get_right_constraint_max_value(vtkNew<vtkParametricSpline> sself);
extern "C" int vtk_parametric_spline_get_right_constraint(vtkNew<vtkParametricSpline> sself);
extern "C" void vtk_parametric_spline_set_left_value(vtkNew<vtkParametricSpline> sself, double _arg);
extern "C" double vtk_parametric_spline_get_left_value(vtkNew<vtkParametricSpline> sself);
extern "C" void vtk_parametric_spline_set_right_value(vtkNew<vtkParametricSpline> sself, double _arg);
extern "C" double vtk_parametric_spline_get_right_value(vtkNew<vtkParametricSpline> sself);
extern "C" vtkNew < vtkParametricSuperEllipsoid > vtkParametricSuperEllipsoid_new () ;
extern "C" void vtkParametricSuperEllipsoid_destructor (vtkNew < vtkParametricSuperEllipsoid > sself) ;
extern "C" void * vtkParametricSuperEllipsoid_get_ptr (vtkNew < vtkParametricSuperEllipsoid > sself) ;
extern "C" int vtk_parametric_super_ellipsoid_get_dimension(vtkNew<vtkParametricSuperEllipsoid> sself);
extern "C" void vtk_parametric_super_ellipsoid_set_x_radius(vtkNew<vtkParametricSuperEllipsoid> sself, double _arg);
extern "C" double vtk_parametric_super_ellipsoid_get_x_radius(vtkNew<vtkParametricSuperEllipsoid> sself);
extern "C" void vtk_parametric_super_ellipsoid_set_y_radius(vtkNew<vtkParametricSuperEllipsoid> sself, double _arg);
extern "C" double vtk_parametric_super_ellipsoid_get_y_radius(vtkNew<vtkParametricSuperEllipsoid> sself);
extern "C" void vtk_parametric_super_ellipsoid_set_z_radius(vtkNew<vtkParametricSuperEllipsoid> sself, double _arg);
extern "C" double vtk_parametric_super_ellipsoid_get_z_radius(vtkNew<vtkParametricSuperEllipsoid> sself);
extern "C" void vtk_parametric_super_ellipsoid_set_n_1(vtkNew<vtkParametricSuperEllipsoid> sself, double _arg);
extern "C" double vtk_parametric_super_ellipsoid_get_n_1(vtkNew<vtkParametricSuperEllipsoid> sself);
extern "C" void vtk_parametric_super_ellipsoid_set_n_2(vtkNew<vtkParametricSuperEllipsoid> sself, double _arg);
extern "C" double vtk_parametric_super_ellipsoid_get_n_2(vtkNew<vtkParametricSuperEllipsoid> sself);
extern "C" void vtk_parametric_super_ellipsoid_evaluate(vtkNew<vtkParametricSuperEllipsoid> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_super_ellipsoid_evaluate_scalar(vtkNew<vtkParametricSuperEllipsoid> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricSuperToroid > vtkParametricSuperToroid_new () ;
extern "C" void vtkParametricSuperToroid_destructor (vtkNew < vtkParametricSuperToroid > sself) ;
extern "C" void * vtkParametricSuperToroid_get_ptr (vtkNew < vtkParametricSuperToroid > sself) ;
extern "C" int vtk_parametric_super_toroid_get_dimension(vtkNew<vtkParametricSuperToroid> sself);
extern "C" void vtk_parametric_super_toroid_set_ring_radius(vtkNew<vtkParametricSuperToroid> sself, double _arg);
extern "C" double vtk_parametric_super_toroid_get_ring_radius(vtkNew<vtkParametricSuperToroid> sself);
extern "C" void vtk_parametric_super_toroid_set_cross_section_radius(vtkNew<vtkParametricSuperToroid> sself, double _arg);
extern "C" double vtk_parametric_super_toroid_get_cross_section_radius(vtkNew<vtkParametricSuperToroid> sself);
extern "C" void vtk_parametric_super_toroid_set_x_radius(vtkNew<vtkParametricSuperToroid> sself, double _arg);
extern "C" double vtk_parametric_super_toroid_get_x_radius(vtkNew<vtkParametricSuperToroid> sself);
extern "C" void vtk_parametric_super_toroid_set_y_radius(vtkNew<vtkParametricSuperToroid> sself, double _arg);
extern "C" double vtk_parametric_super_toroid_get_y_radius(vtkNew<vtkParametricSuperToroid> sself);
extern "C" void vtk_parametric_super_toroid_set_z_radius(vtkNew<vtkParametricSuperToroid> sself, double _arg);
extern "C" double vtk_parametric_super_toroid_get_z_radius(vtkNew<vtkParametricSuperToroid> sself);
extern "C" void vtk_parametric_super_toroid_set_n_1(vtkNew<vtkParametricSuperToroid> sself, double _arg);
extern "C" double vtk_parametric_super_toroid_get_n_1(vtkNew<vtkParametricSuperToroid> sself);
extern "C" void vtk_parametric_super_toroid_set_n_2(vtkNew<vtkParametricSuperToroid> sself, double _arg);
extern "C" double vtk_parametric_super_toroid_get_n_2(vtkNew<vtkParametricSuperToroid> sself);
extern "C" void vtk_parametric_super_toroid_evaluate(vtkNew<vtkParametricSuperToroid> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_super_toroid_evaluate_scalar(vtkNew<vtkParametricSuperToroid> sself, double uvw, double Pt, double Duvw);
extern "C" vtkNew < vtkParametricTorus > vtkParametricTorus_new () ;
extern "C" void vtkParametricTorus_destructor (vtkNew < vtkParametricTorus > sself) ;
extern "C" void * vtkParametricTorus_get_ptr (vtkNew < vtkParametricTorus > sself) ;
extern "C" void vtk_parametric_torus_set_ring_radius(vtkNew<vtkParametricTorus> sself, double _arg);
extern "C" double vtk_parametric_torus_get_ring_radius(vtkNew<vtkParametricTorus> sself);
extern "C" void vtk_parametric_torus_set_cross_section_radius(vtkNew<vtkParametricTorus> sself, double _arg);
extern "C" double vtk_parametric_torus_get_cross_section_radius(vtkNew<vtkParametricTorus> sself);
extern "C" int vtk_parametric_torus_get_dimension(vtkNew<vtkParametricTorus> sself);
extern "C" void vtk_parametric_torus_evaluate(vtkNew<vtkParametricTorus> sself, double uvw, double Pt, double Duvw);
extern "C" double vtk_parametric_torus_evaluate_scalar(vtkNew<vtkParametricTorus> sself, double uvw, double Pt, double Duvw);
