// Default include in all modules
#include<vtkNew.h>
#include<vtkObjectBase.h>

// Include objects of this module
#include<vtkContourValues.h>
#include<vtkErrorCode.h>
#include<vtkExprTkFunctionParser.h>
#include<vtkFunctionParser.h>
#include<vtkHeap.h>
#include<vtkPolygonBuilder.h>
#include<vtkResourceFileLocator.h>

// Declare exported functions
extern "C" vtkNew < vtkContourValues > vtkContourValues_new () ;
extern "C" void vtkContourValues_destructor (vtkNew < vtkContourValues > sself) ;
extern "C" void * vtkContourValues_get_ptr (vtkNew < vtkContourValues > sself) ;
extern "C" void vtk_contour_values_set_value(vtkNew<vtkContourValues> sself, int i, double value);
extern "C" double vtk_contour_values_get_value(vtkNew<vtkContourValues> sself, int i);
extern "C" double* vtk_contour_values_get_values(vtkNew<vtkContourValues> sself);
extern "C" void vtk_contour_values_get_values(vtkNew<vtkContourValues> sself, double contourValues);
extern "C" void vtk_contour_values_set_number_of_contours(vtkNew<vtkContourValues> sself, const int number);
extern "C" int vtk_contour_values_get_number_of_contours(vtkNew<vtkContourValues> sself);
extern "C" void vtk_contour_values_generate_values(vtkNew<vtkContourValues> sself, int numContours, double range);
extern "C" void vtk_contour_values_generate_values(vtkNew<vtkContourValues> sself, int numContours, double rangeStart, double rangeEnd);
extern "C" vtkNew < vtkExprTkFunctionParser > vtkExprTkFunctionParser_new () ;
extern "C" void vtkExprTkFunctionParser_destructor (vtkNew < vtkExprTkFunctionParser > sself) ;
extern "C" void * vtkExprTkFunctionParser_get_ptr (vtkNew < vtkExprTkFunctionParser > sself) ;
extern "C" unsigned long vtk_expr_tk_function_parser_get_m_time(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" void vtk_expr_tk_function_parser_set_function(vtkNew<vtkExprTkFunctionParser> sself, const char function);
extern "C" const char* vtk_expr_tk_function_parser_get_function(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" int vtk_expr_tk_function_parser_is_scalar_result(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" int vtk_expr_tk_function_parser_is_vector_result(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" double vtk_expr_tk_function_parser_get_scalar_result(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" double* vtk_expr_tk_function_parser_get_vector_result(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" void vtk_expr_tk_function_parser_get_vector_result(vtkNew<vtkExprTkFunctionParser> sself, double result);
extern "C" void vtk_expr_tk_function_parser_set_scalar_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName, double value);
extern "C" void vtk_expr_tk_function_parser_set_scalar_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i, double value);
extern "C" double vtk_expr_tk_function_parser_get_scalar_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName);
extern "C" double vtk_expr_tk_function_parser_get_scalar_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i);
extern "C" void vtk_expr_tk_function_parser_set_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName, double xValue, double yValue, double zValue);
extern "C" void vtk_expr_tk_function_parser_set_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName, double values);
extern "C" void vtk_expr_tk_function_parser_set_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i, double xValue, double yValue, double zValue);
extern "C" void vtk_expr_tk_function_parser_set_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i, double values);
extern "C" double* vtk_expr_tk_function_parser_get_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName);
extern "C" void vtk_expr_tk_function_parser_get_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName, double value);
extern "C" double* vtk_expr_tk_function_parser_get_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i);
extern "C" void vtk_expr_tk_function_parser_get_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i, double value);
extern "C" int vtk_expr_tk_function_parser_get_number_of_scalar_variables(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" int vtk_expr_tk_function_parser_get_scalar_variable_index(vtkNew<vtkExprTkFunctionParser> sself, const char* name);
extern "C" int vtk_expr_tk_function_parser_get_number_of_vector_variables(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" int vtk_expr_tk_function_parser_get_vector_variable_index(vtkNew<vtkExprTkFunctionParser> sself, const char* name);
extern "C" const char* vtk_expr_tk_function_parser_get_scalar_variable_name(vtkNew<vtkExprTkFunctionParser> sself, int i);
extern "C" const char* vtk_expr_tk_function_parser_get_vector_variable_name(vtkNew<vtkExprTkFunctionParser> sself, int i);
extern "C" bool vtk_expr_tk_function_parser_get_scalar_variable_needed(vtkNew<vtkExprTkFunctionParser> sself, int i);
extern "C" bool vtk_expr_tk_function_parser_get_scalar_variable_needed(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName);
extern "C" bool vtk_expr_tk_function_parser_get_vector_variable_needed(vtkNew<vtkExprTkFunctionParser> sself, int i);
extern "C" bool vtk_expr_tk_function_parser_get_vector_variable_needed(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName);
extern "C" void vtk_expr_tk_function_parser_remove_all_variables(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" void vtk_expr_tk_function_parser_remove_scalar_variables(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" void vtk_expr_tk_function_parser_remove_vector_variables(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" void vtk_expr_tk_function_parser_set_replace_invalid_values(vtkNew<vtkExprTkFunctionParser> sself, int _arg);
extern "C" int vtk_expr_tk_function_parser_get_replace_invalid_values(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" void vtk_expr_tk_function_parser_replace_invalid_values_on(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" void vtk_expr_tk_function_parser_replace_invalid_values_off(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" void vtk_expr_tk_function_parser_set_replacement_value(vtkNew<vtkExprTkFunctionParser> sself, double _arg);
extern "C" double vtk_expr_tk_function_parser_get_replacement_value(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" void vtk_expr_tk_function_parser_invalidate_function(vtkNew<vtkExprTkFunctionParser> sself);
extern "C" const char* vtk_expr_tk_function_parser_sanitize_name(vtkNew<vtkExprTkFunctionParser> sself, const char name);
extern "C" vtkNew < vtkFunctionParser > vtkFunctionParser_new () ;
extern "C" void vtkFunctionParser_destructor (vtkNew < vtkFunctionParser > sself) ;
extern "C" void * vtkFunctionParser_get_ptr (vtkNew < vtkFunctionParser > sself) ;
extern "C" unsigned long vtk_function_parser_get_m_time(vtkNew<vtkFunctionParser> sself);
extern "C" void vtk_function_parser_set_function(vtkNew<vtkFunctionParser> sself, const char function);
extern "C" char* vtk_function_parser_get_function(vtkNew<vtkFunctionParser> sself);
extern "C" int vtk_function_parser_is_scalar_result(vtkNew<vtkFunctionParser> sself);
extern "C" int vtk_function_parser_is_vector_result(vtkNew<vtkFunctionParser> sself);
extern "C" double vtk_function_parser_get_scalar_result(vtkNew<vtkFunctionParser> sself);
extern "C" double* vtk_function_parser_get_vector_result(vtkNew<vtkFunctionParser> sself);
extern "C" void vtk_function_parser_get_vector_result(vtkNew<vtkFunctionParser> sself, double result);
extern "C" void vtk_function_parser_set_scalar_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName, double value);
extern "C" void vtk_function_parser_set_scalar_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName, double value);
extern "C" void vtk_function_parser_set_scalar_variable_value(vtkNew<vtkFunctionParser> sself, int i, double value);
extern "C" double vtk_function_parser_get_scalar_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName);
extern "C" double vtk_function_parser_get_scalar_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName);
extern "C" double vtk_function_parser_get_scalar_variable_value(vtkNew<vtkFunctionParser> sself, int i);
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName, double xValue, double yValue, double zValue);
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName, double xValue, double yValue, double zValue);
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName, const double values);
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName, const double values);
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, int i, double xValue, double yValue, double zValue);
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, int i, const double values);
extern "C" double* vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName);
extern "C" double* vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName);
extern "C" void vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName, double value);
extern "C" void vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName, double value);
extern "C" double* vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, int i);
extern "C" void vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, int i, double value);
extern "C" int vtk_function_parser_get_number_of_scalar_variables(vtkNew<vtkFunctionParser> sself);
extern "C" int vtk_function_parser_get_scalar_variable_index(vtkNew<vtkFunctionParser> sself, const char name);
extern "C" int vtk_function_parser_get_scalar_variable_index(vtkNew<vtkFunctionParser> sself, const char* name);
extern "C" int vtk_function_parser_get_number_of_vector_variables(vtkNew<vtkFunctionParser> sself);
extern "C" int vtk_function_parser_get_vector_variable_index(vtkNew<vtkFunctionParser> sself, const char name);
extern "C" int vtk_function_parser_get_vector_variable_index(vtkNew<vtkFunctionParser> sself, const char* name);
extern "C" const char* vtk_function_parser_get_scalar_variable_name(vtkNew<vtkFunctionParser> sself, int i);
extern "C" const char* vtk_function_parser_get_vector_variable_name(vtkNew<vtkFunctionParser> sself, int i);
extern "C" bool vtk_function_parser_get_scalar_variable_needed(vtkNew<vtkFunctionParser> sself, int i);
extern "C" bool vtk_function_parser_get_scalar_variable_needed(vtkNew<vtkFunctionParser> sself, const char variableName);
extern "C" bool vtk_function_parser_get_scalar_variable_needed(vtkNew<vtkFunctionParser> sself, const char* variableName);
extern "C" bool vtk_function_parser_get_vector_variable_needed(vtkNew<vtkFunctionParser> sself, int i);
extern "C" bool vtk_function_parser_get_vector_variable_needed(vtkNew<vtkFunctionParser> sself, const char variableName);
extern "C" bool vtk_function_parser_get_vector_variable_needed(vtkNew<vtkFunctionParser> sself, const char* variableName);
extern "C" void vtk_function_parser_remove_all_variables(vtkNew<vtkFunctionParser> sself);
extern "C" void vtk_function_parser_remove_scalar_variables(vtkNew<vtkFunctionParser> sself);
extern "C" void vtk_function_parser_remove_vector_variables(vtkNew<vtkFunctionParser> sself);
extern "C" void vtk_function_parser_set_replace_invalid_values(vtkNew<vtkFunctionParser> sself, int _arg);
extern "C" int vtk_function_parser_get_replace_invalid_values(vtkNew<vtkFunctionParser> sself);
extern "C" void vtk_function_parser_replace_invalid_values_on(vtkNew<vtkFunctionParser> sself);
extern "C" void vtk_function_parser_replace_invalid_values_off(vtkNew<vtkFunctionParser> sself);
extern "C" void vtk_function_parser_set_replacement_value(vtkNew<vtkFunctionParser> sself, double _arg);
extern "C" double vtk_function_parser_get_replacement_value(vtkNew<vtkFunctionParser> sself);
extern "C" void vtk_function_parser_check_expression(vtkNew<vtkFunctionParser> sself, int pos, char error);
extern "C" void vtk_function_parser_invalidate_function(vtkNew<vtkFunctionParser> sself);
extern "C" vtkNew < vtkHeap > vtkHeap_new () ;
extern "C" void vtkHeap_destructor (vtkNew < vtkHeap > sself) ;
extern "C" void * vtkHeap_get_ptr (vtkNew < vtkHeap > sself) ;
extern "C" void* vtk_heap_allocate_memory(vtkNew<vtkHeap> sself, size_t n);
extern "C" void vtk_heap_set_block_size(vtkNew<vtkHeap> sself, size_t p0);
extern "C" size_t vtk_heap_get_block_size(vtkNew<vtkHeap> sself);
extern "C" int vtk_heap_get_number_of_blocks(vtkNew<vtkHeap> sself);
extern "C" int vtk_heap_get_number_of_allocations(vtkNew<vtkHeap> sself);
extern "C" void vtk_heap_reset(vtkNew<vtkHeap> sself);
extern "C" char* vtk_heap_string_dup(vtkNew<vtkHeap> sself, const char str);
extern "C" vtkNew < vtkResourceFileLocator > vtkResourceFileLocator_new () ;
extern "C" void vtkResourceFileLocator_destructor (vtkNew < vtkResourceFileLocator > sself) ;
extern "C" void * vtkResourceFileLocator_get_ptr (vtkNew < vtkResourceFileLocator > sself) ;
extern "C" void vtk_resource_file_locator_set_print_debug_information(vtkNew<vtkResourceFileLocator> sself, bool p0);
extern "C" bool vtk_resource_file_locator_get_print_debug_information(vtkNew<vtkResourceFileLocator> sself);
extern "C" void vtk_resource_file_locator_print_debug_information_on(vtkNew<vtkResourceFileLocator> sself);
extern "C" void vtk_resource_file_locator_print_debug_information_off(vtkNew<vtkResourceFileLocator> sself);
extern "C" void vtk_resource_file_locator_set_log_verbosity(vtkNew<vtkResourceFileLocator> sself, int _arg);
extern "C" int vtk_resource_file_locator_get_log_verbosity(vtkNew<vtkResourceFileLocator> sself);
extern "C" const char* vtk_resource_file_locator_locate(vtkNew<vtkResourceFileLocator> sself, const char* anchor, const char* landmark, const char* defaultDir);
extern "C" const char* vtk_resource_file_locator_get_library_path_for_symbol_unix(vtkNew<vtkResourceFileLocator> sself, const char symbolname);
extern "C" const char* vtk_resource_file_locator_get_library_path_for_symbol_win_32(vtkNew<vtkResourceFileLocator> sself, const void fptr);
