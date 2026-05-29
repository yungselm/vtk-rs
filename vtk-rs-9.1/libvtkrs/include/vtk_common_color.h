// Default include in all modules
#include<vtkNew.h>
#include<vtkObjectBase.h>

// Include objects of this module
#include<vtkColorSeries.h>
#include<vtkNamedColors.h>

// Declare exported functions
extern "C" vtkNew < vtkColorSeries > vtkColorSeries_new () ;
extern "C" void vtkColorSeries_destructor (vtkNew < vtkColorSeries > sself) ;
extern "C" void * vtkColorSeries_get_ptr (vtkNew < vtkColorSeries > sself) ;
extern "C" void vtk_color_series_set_color_scheme(vtkNew<vtkColorSeries> sself, int scheme);
extern "C" int vtk_color_series_get_number_of_color_schemes(vtkNew<vtkColorSeries> sself);
extern "C" int vtk_color_series_get_color_scheme(vtkNew<vtkColorSeries> sself);
extern "C" int vtk_color_series_get_number_of_colors(vtkNew<vtkColorSeries> sself);
extern "C" void vtk_color_series_set_number_of_colors(vtkNew<vtkColorSeries> sself, int numColors);
extern "C" void vtk_color_series_remove_color(vtkNew<vtkColorSeries> sself, int index);
extern "C" void vtk_color_series_clear_colors(vtkNew<vtkColorSeries> sself);
extern "C" vtkNew < vtkNamedColors > vtkNamedColors_new () ;
extern "C" void vtkNamedColors_destructor (vtkNew < vtkNamedColors > sself) ;
extern "C" void * vtkNamedColors_get_ptr (vtkNew < vtkNamedColors > sself) ;
extern "C" int vtk_named_colors_get_number_of_colors(vtkNew<vtkNamedColors> sself);
extern "C" void vtk_named_colors_reset_colors(vtkNew<vtkNamedColors> sself);
