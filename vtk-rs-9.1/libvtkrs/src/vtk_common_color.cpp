// Include header file
#include<vtk_common_color.h>

// Default include in all modules
#include<vtkNew.h>
#include<vtkObjectBase.h>

// Include objects of this module
#include<vtkColorSeries.h>
#include<vtkNamedColors.h>

// Implement declared functions
extern "C" vtkNew < vtkColorSeries > vtkColorSeries_new () {return vtkNew < vtkColorSeries > () ;}
extern "C" void vtkColorSeries_destructor (vtkNew < vtkColorSeries > sself) {sself . Reset () ; return ;}
extern "C" void * vtkColorSeries_get_ptr (vtkNew < vtkColorSeries > sself) {return sself . GetPointer () ;}
extern "C" void vtk_color_series_set_color_scheme(vtkNew<vtkColorSeries> sself, int scheme) { sself->SetColorScheme(scheme); }
extern "C" int vtk_color_series_get_number_of_color_schemes(vtkNew<vtkColorSeries> sself) { return sself->GetNumberOfColorSchemes(); }
extern "C" int vtk_color_series_get_color_scheme(vtkNew<vtkColorSeries> sself) { return sself->GetColorScheme(); }
extern "C" int vtk_color_series_get_number_of_colors(vtkNew<vtkColorSeries> sself) { return sself->GetNumberOfColors(); }
extern "C" void vtk_color_series_set_number_of_colors(vtkNew<vtkColorSeries> sself, int numColors) { sself->SetNumberOfColors(numColors); }
extern "C" void vtk_color_series_remove_color(vtkNew<vtkColorSeries> sself, int index) { sself->RemoveColor(index); }
extern "C" void vtk_color_series_clear_colors(vtkNew<vtkColorSeries> sself) { sself->ClearColors(); }
extern "C" vtkNew < vtkNamedColors > vtkNamedColors_new () {return vtkNew < vtkNamedColors > () ;}
extern "C" void vtkNamedColors_destructor (vtkNew < vtkNamedColors > sself) {sself . Reset () ; return ;}
extern "C" void * vtkNamedColors_get_ptr (vtkNew < vtkNamedColors > sself) {return sself . GetPointer () ;}
extern "C" int vtk_named_colors_get_number_of_colors(vtkNew<vtkNamedColors> sself) { return sself->GetNumberOfColors(); }
extern "C" void vtk_named_colors_reset_colors(vtkNew<vtkNamedColors> sself) { sself->ResetColors(); }
