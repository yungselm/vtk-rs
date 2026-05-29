// Include header file
#include<vtk_common_misc.h>

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

// Implement declared functions
extern "C" vtkNew < vtkContourValues > vtkContourValues_new () {return vtkNew < vtkContourValues > () ;}
extern "C" void vtkContourValues_destructor (vtkNew < vtkContourValues > sself) {sself . Reset () ; return ;}
extern "C" void * vtkContourValues_get_ptr (vtkNew < vtkContourValues > sself) {return sself . GetPointer () ;}
extern "C" void vtk_contour_values_set_value(vtkNew<vtkContourValues> sself, int i, double value) { sself->SetValue(i, value); }
extern "C" double vtk_contour_values_get_value(vtkNew<vtkContourValues> sself, int i) { return sself->GetValue(i); }
extern "C" double* vtk_contour_values_get_values(vtkNew<vtkContourValues> sself) { return sself->GetValues(); }
extern "C" void vtk_contour_values_get_values(vtkNew<vtkContourValues> sself, double contourValues) { sself->GetValues(contourValues); }
extern "C" void vtk_contour_values_set_number_of_contours(vtkNew<vtkContourValues> sself, const int number) { sself->SetNumberOfContours(number); }
extern "C" int vtk_contour_values_get_number_of_contours(vtkNew<vtkContourValues> sself) { return sself->GetNumberOfContours(); }
extern "C" void vtk_contour_values_generate_values(vtkNew<vtkContourValues> sself, int numContours, double range) { sself->GenerateValues(numContours, range); }
extern "C" void vtk_contour_values_generate_values(vtkNew<vtkContourValues> sself, int numContours, double rangeStart, double rangeEnd) { sself->GenerateValues(numContours, rangeStart, rangeEnd); }
extern "C" vtkNew < vtkExprTkFunctionParser > vtkExprTkFunctionParser_new () {return vtkNew < vtkExprTkFunctionParser > () ;}
extern "C" void vtkExprTkFunctionParser_destructor (vtkNew < vtkExprTkFunctionParser > sself) {sself . Reset () ; return ;}
extern "C" void * vtkExprTkFunctionParser_get_ptr (vtkNew < vtkExprTkFunctionParser > sself) {return sself . GetPointer () ;}
extern "C" unsigned long vtk_expr_tk_function_parser_get_m_time(vtkNew<vtkExprTkFunctionParser> sself) { return sself->GetMTime(); }
extern "C" void vtk_expr_tk_function_parser_set_function(vtkNew<vtkExprTkFunctionParser> sself, const char function) { sself->SetFunction(function); }
extern "C" const char* vtk_expr_tk_function_parser_get_function(vtkNew<vtkExprTkFunctionParser> sself) { return sself->GetFunction(); }
extern "C" int vtk_expr_tk_function_parser_is_scalar_result(vtkNew<vtkExprTkFunctionParser> sself) { return sself->IsScalarResult(); }
extern "C" int vtk_expr_tk_function_parser_is_vector_result(vtkNew<vtkExprTkFunctionParser> sself) { return sself->IsVectorResult(); }
extern "C" double vtk_expr_tk_function_parser_get_scalar_result(vtkNew<vtkExprTkFunctionParser> sself) { return sself->GetScalarResult(); }
extern "C" double* vtk_expr_tk_function_parser_get_vector_result(vtkNew<vtkExprTkFunctionParser> sself) { return sself->GetVectorResult(); }
extern "C" void vtk_expr_tk_function_parser_get_vector_result(vtkNew<vtkExprTkFunctionParser> sself, double result) { sself->GetVectorResult(result); }
extern "C" void vtk_expr_tk_function_parser_set_scalar_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName, double value) { sself->SetScalarVariableValue(variableName, value); }
extern "C" void vtk_expr_tk_function_parser_set_scalar_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i, double value) { sself->SetScalarVariableValue(i, value); }
extern "C" double vtk_expr_tk_function_parser_get_scalar_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName) { return sself->GetScalarVariableValue(variableName); }
extern "C" double vtk_expr_tk_function_parser_get_scalar_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i) { return sself->GetScalarVariableValue(i); }
extern "C" void vtk_expr_tk_function_parser_set_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName, double xValue, double yValue, double zValue) { sself->SetVectorVariableValue(variableName, xValue, yValue, zValue); }
extern "C" void vtk_expr_tk_function_parser_set_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName, double values) { sself->SetVectorVariableValue(variableName, values); }
extern "C" void vtk_expr_tk_function_parser_set_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i, double xValue, double yValue, double zValue) { sself->SetVectorVariableValue(i, xValue, yValue, zValue); }
extern "C" void vtk_expr_tk_function_parser_set_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i, double values) { sself->SetVectorVariableValue(i, values); }
extern "C" double* vtk_expr_tk_function_parser_get_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName) { return sself->GetVectorVariableValue(variableName); }
extern "C" void vtk_expr_tk_function_parser_get_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName, double value) { sself->GetVectorVariableValue(variableName, value); }
extern "C" double* vtk_expr_tk_function_parser_get_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i) { return sself->GetVectorVariableValue(i); }
extern "C" void vtk_expr_tk_function_parser_get_vector_variable_value(vtkNew<vtkExprTkFunctionParser> sself, int i, double value) { sself->GetVectorVariableValue(i, value); }
extern "C" int vtk_expr_tk_function_parser_get_number_of_scalar_variables(vtkNew<vtkExprTkFunctionParser> sself) { return sself->GetNumberOfScalarVariables(); }
extern "C" int vtk_expr_tk_function_parser_get_scalar_variable_index(vtkNew<vtkExprTkFunctionParser> sself, const char* name) { return sself->GetScalarVariableIndex(name); }
extern "C" int vtk_expr_tk_function_parser_get_number_of_vector_variables(vtkNew<vtkExprTkFunctionParser> sself) { return sself->GetNumberOfVectorVariables(); }
extern "C" int vtk_expr_tk_function_parser_get_vector_variable_index(vtkNew<vtkExprTkFunctionParser> sself, const char* name) { return sself->GetVectorVariableIndex(name); }
extern "C" const char* vtk_expr_tk_function_parser_get_scalar_variable_name(vtkNew<vtkExprTkFunctionParser> sself, int i) { return sself->GetScalarVariableName(i); }
extern "C" const char* vtk_expr_tk_function_parser_get_vector_variable_name(vtkNew<vtkExprTkFunctionParser> sself, int i) { return sself->GetVectorVariableName(i); }
extern "C" bool vtk_expr_tk_function_parser_get_scalar_variable_needed(vtkNew<vtkExprTkFunctionParser> sself, int i) { return sself->GetScalarVariableNeeded(i); }
extern "C" bool vtk_expr_tk_function_parser_get_scalar_variable_needed(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName) { return sself->GetScalarVariableNeeded(variableName); }
extern "C" bool vtk_expr_tk_function_parser_get_vector_variable_needed(vtkNew<vtkExprTkFunctionParser> sself, int i) { return sself->GetVectorVariableNeeded(i); }
extern "C" bool vtk_expr_tk_function_parser_get_vector_variable_needed(vtkNew<vtkExprTkFunctionParser> sself, const char* variableName) { return sself->GetVectorVariableNeeded(variableName); }
extern "C" void vtk_expr_tk_function_parser_remove_all_variables(vtkNew<vtkExprTkFunctionParser> sself) { sself->RemoveAllVariables(); }
extern "C" void vtk_expr_tk_function_parser_remove_scalar_variables(vtkNew<vtkExprTkFunctionParser> sself) { sself->RemoveScalarVariables(); }
extern "C" void vtk_expr_tk_function_parser_remove_vector_variables(vtkNew<vtkExprTkFunctionParser> sself) { sself->RemoveVectorVariables(); }
extern "C" void vtk_expr_tk_function_parser_set_replace_invalid_values(vtkNew<vtkExprTkFunctionParser> sself, int _arg) { sself->SetReplaceInvalidValues(_arg); }
extern "C" int vtk_expr_tk_function_parser_get_replace_invalid_values(vtkNew<vtkExprTkFunctionParser> sself) { return sself->GetReplaceInvalidValues(); }
extern "C" void vtk_expr_tk_function_parser_replace_invalid_values_on(vtkNew<vtkExprTkFunctionParser> sself) { sself->ReplaceInvalidValuesOn(); }
extern "C" void vtk_expr_tk_function_parser_replace_invalid_values_off(vtkNew<vtkExprTkFunctionParser> sself) { sself->ReplaceInvalidValuesOff(); }
extern "C" void vtk_expr_tk_function_parser_set_replacement_value(vtkNew<vtkExprTkFunctionParser> sself, double _arg) { sself->SetReplacementValue(_arg); }
extern "C" double vtk_expr_tk_function_parser_get_replacement_value(vtkNew<vtkExprTkFunctionParser> sself) { return sself->GetReplacementValue(); }
extern "C" void vtk_expr_tk_function_parser_invalidate_function(vtkNew<vtkExprTkFunctionParser> sself) { sself->InvalidateFunction(); }
extern "C" const char* vtk_expr_tk_function_parser_sanitize_name(vtkNew<vtkExprTkFunctionParser> sself, const char name) { return sself->SanitizeName(name); }
extern "C" vtkNew < vtkFunctionParser > vtkFunctionParser_new () {return vtkNew < vtkFunctionParser > () ;}
extern "C" void vtkFunctionParser_destructor (vtkNew < vtkFunctionParser > sself) {sself . Reset () ; return ;}
extern "C" void * vtkFunctionParser_get_ptr (vtkNew < vtkFunctionParser > sself) {return sself . GetPointer () ;}
extern "C" unsigned long vtk_function_parser_get_m_time(vtkNew<vtkFunctionParser> sself) { return sself->GetMTime(); }
extern "C" void vtk_function_parser_set_function(vtkNew<vtkFunctionParser> sself, const char function) { sself->SetFunction(function); }
extern "C" char* vtk_function_parser_get_function(vtkNew<vtkFunctionParser> sself) { return sself->GetFunction(); }
extern "C" int vtk_function_parser_is_scalar_result(vtkNew<vtkFunctionParser> sself) { return sself->IsScalarResult(); }
extern "C" int vtk_function_parser_is_vector_result(vtkNew<vtkFunctionParser> sself) { return sself->IsVectorResult(); }
extern "C" double vtk_function_parser_get_scalar_result(vtkNew<vtkFunctionParser> sself) { return sself->GetScalarResult(); }
extern "C" double* vtk_function_parser_get_vector_result(vtkNew<vtkFunctionParser> sself) { return sself->GetVectorResult(); }
extern "C" void vtk_function_parser_get_vector_result(vtkNew<vtkFunctionParser> sself, double result) { sself->GetVectorResult(result); }
extern "C" void vtk_function_parser_set_scalar_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName, double value) { sself->SetScalarVariableValue(variableName, value); }
extern "C" void vtk_function_parser_set_scalar_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName, double value) { sself->SetScalarVariableValue(variableName, value); }
extern "C" void vtk_function_parser_set_scalar_variable_value(vtkNew<vtkFunctionParser> sself, int i, double value) { sself->SetScalarVariableValue(i, value); }
extern "C" double vtk_function_parser_get_scalar_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName) { return sself->GetScalarVariableValue(variableName); }
extern "C" double vtk_function_parser_get_scalar_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName) { return sself->GetScalarVariableValue(variableName); }
extern "C" double vtk_function_parser_get_scalar_variable_value(vtkNew<vtkFunctionParser> sself, int i) { return sself->GetScalarVariableValue(i); }
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName, double xValue, double yValue, double zValue) { sself->SetVectorVariableValue(variableName, xValue, yValue, zValue); }
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName, double xValue, double yValue, double zValue) { sself->SetVectorVariableValue(variableName, xValue, yValue, zValue); }
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName, const double values) { sself->SetVectorVariableValue(variableName, values); }
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName, const double values) { sself->SetVectorVariableValue(variableName, values); }
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, int i, double xValue, double yValue, double zValue) { sself->SetVectorVariableValue(i, xValue, yValue, zValue); }
extern "C" void vtk_function_parser_set_vector_variable_value(vtkNew<vtkFunctionParser> sself, int i, const double values) { sself->SetVectorVariableValue(i, values); }
extern "C" double* vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName) { return sself->GetVectorVariableValue(variableName); }
extern "C" double* vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName) { return sself->GetVectorVariableValue(variableName); }
extern "C" void vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char variableName, double value) { sself->GetVectorVariableValue(variableName, value); }
extern "C" void vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, const char* variableName, double value) { sself->GetVectorVariableValue(variableName, value); }
extern "C" double* vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, int i) { return sself->GetVectorVariableValue(i); }
extern "C" void vtk_function_parser_get_vector_variable_value(vtkNew<vtkFunctionParser> sself, int i, double value) { sself->GetVectorVariableValue(i, value); }
extern "C" int vtk_function_parser_get_number_of_scalar_variables(vtkNew<vtkFunctionParser> sself) { return sself->GetNumberOfScalarVariables(); }
extern "C" int vtk_function_parser_get_scalar_variable_index(vtkNew<vtkFunctionParser> sself, const char name) { return sself->GetScalarVariableIndex(name); }
extern "C" int vtk_function_parser_get_scalar_variable_index(vtkNew<vtkFunctionParser> sself, const char* name) { return sself->GetScalarVariableIndex(name); }
extern "C" int vtk_function_parser_get_number_of_vector_variables(vtkNew<vtkFunctionParser> sself) { return sself->GetNumberOfVectorVariables(); }
extern "C" int vtk_function_parser_get_vector_variable_index(vtkNew<vtkFunctionParser> sself, const char name) { return sself->GetVectorVariableIndex(name); }
extern "C" int vtk_function_parser_get_vector_variable_index(vtkNew<vtkFunctionParser> sself, const char* name) { return sself->GetVectorVariableIndex(name); }
extern "C" const char* vtk_function_parser_get_scalar_variable_name(vtkNew<vtkFunctionParser> sself, int i) { return sself->GetScalarVariableName(i); }
extern "C" const char* vtk_function_parser_get_vector_variable_name(vtkNew<vtkFunctionParser> sself, int i) { return sself->GetVectorVariableName(i); }
extern "C" bool vtk_function_parser_get_scalar_variable_needed(vtkNew<vtkFunctionParser> sself, int i) { return sself->GetScalarVariableNeeded(i); }
extern "C" bool vtk_function_parser_get_scalar_variable_needed(vtkNew<vtkFunctionParser> sself, const char variableName) { return sself->GetScalarVariableNeeded(variableName); }
extern "C" bool vtk_function_parser_get_scalar_variable_needed(vtkNew<vtkFunctionParser> sself, const char* variableName) { return sself->GetScalarVariableNeeded(variableName); }
extern "C" bool vtk_function_parser_get_vector_variable_needed(vtkNew<vtkFunctionParser> sself, int i) { return sself->GetVectorVariableNeeded(i); }
extern "C" bool vtk_function_parser_get_vector_variable_needed(vtkNew<vtkFunctionParser> sself, const char variableName) { return sself->GetVectorVariableNeeded(variableName); }
extern "C" bool vtk_function_parser_get_vector_variable_needed(vtkNew<vtkFunctionParser> sself, const char* variableName) { return sself->GetVectorVariableNeeded(variableName); }
extern "C" void vtk_function_parser_remove_all_variables(vtkNew<vtkFunctionParser> sself) { sself->RemoveAllVariables(); }
extern "C" void vtk_function_parser_remove_scalar_variables(vtkNew<vtkFunctionParser> sself) { sself->RemoveScalarVariables(); }
extern "C" void vtk_function_parser_remove_vector_variables(vtkNew<vtkFunctionParser> sself) { sself->RemoveVectorVariables(); }
extern "C" void vtk_function_parser_set_replace_invalid_values(vtkNew<vtkFunctionParser> sself, int _arg) { sself->SetReplaceInvalidValues(_arg); }
extern "C" int vtk_function_parser_get_replace_invalid_values(vtkNew<vtkFunctionParser> sself) { return sself->GetReplaceInvalidValues(); }
extern "C" void vtk_function_parser_replace_invalid_values_on(vtkNew<vtkFunctionParser> sself) { sself->ReplaceInvalidValuesOn(); }
extern "C" void vtk_function_parser_replace_invalid_values_off(vtkNew<vtkFunctionParser> sself) { sself->ReplaceInvalidValuesOff(); }
extern "C" void vtk_function_parser_set_replacement_value(vtkNew<vtkFunctionParser> sself, double _arg) { sself->SetReplacementValue(_arg); }
extern "C" double vtk_function_parser_get_replacement_value(vtkNew<vtkFunctionParser> sself) { return sself->GetReplacementValue(); }
extern "C" void vtk_function_parser_check_expression(vtkNew<vtkFunctionParser> sself, int pos, char error) { sself->CheckExpression(pos, error); }
extern "C" void vtk_function_parser_invalidate_function(vtkNew<vtkFunctionParser> sself) { sself->InvalidateFunction(); }
extern "C" vtkNew < vtkHeap > vtkHeap_new () {return vtkNew < vtkHeap > () ;}
extern "C" void vtkHeap_destructor (vtkNew < vtkHeap > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHeap_get_ptr (vtkNew < vtkHeap > sself) {return sself . GetPointer () ;}
extern "C" void* vtk_heap_allocate_memory(vtkNew<vtkHeap> sself, size_t n) { return sself->AllocateMemory(n); }
extern "C" void vtk_heap_set_block_size(vtkNew<vtkHeap> sself, size_t p0) { sself->SetBlockSize(p0); }
extern "C" size_t vtk_heap_get_block_size(vtkNew<vtkHeap> sself) { return sself->GetBlockSize(); }
extern "C" int vtk_heap_get_number_of_blocks(vtkNew<vtkHeap> sself) { return sself->GetNumberOfBlocks(); }
extern "C" int vtk_heap_get_number_of_allocations(vtkNew<vtkHeap> sself) { return sself->GetNumberOfAllocations(); }
extern "C" void vtk_heap_reset(vtkNew<vtkHeap> sself) { sself->Reset(); }
extern "C" char* vtk_heap_string_dup(vtkNew<vtkHeap> sself, const char str) { return sself->StringDup(str); }
extern "C" vtkNew < vtkResourceFileLocator > vtkResourceFileLocator_new () {return vtkNew < vtkResourceFileLocator > () ;}
extern "C" void vtkResourceFileLocator_destructor (vtkNew < vtkResourceFileLocator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkResourceFileLocator_get_ptr (vtkNew < vtkResourceFileLocator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_resource_file_locator_set_print_debug_information(vtkNew<vtkResourceFileLocator> sself, bool p0) { sself->SetPrintDebugInformation(p0); }
extern "C" bool vtk_resource_file_locator_get_print_debug_information(vtkNew<vtkResourceFileLocator> sself) { return sself->GetPrintDebugInformation(); }
extern "C" void vtk_resource_file_locator_print_debug_information_on(vtkNew<vtkResourceFileLocator> sself) { sself->PrintDebugInformationOn(); }
extern "C" void vtk_resource_file_locator_print_debug_information_off(vtkNew<vtkResourceFileLocator> sself) { sself->PrintDebugInformationOff(); }
extern "C" void vtk_resource_file_locator_set_log_verbosity(vtkNew<vtkResourceFileLocator> sself, int _arg) { sself->SetLogVerbosity(_arg); }
extern "C" int vtk_resource_file_locator_get_log_verbosity(vtkNew<vtkResourceFileLocator> sself) { return sself->GetLogVerbosity(); }
extern "C" const char* vtk_resource_file_locator_locate(vtkNew<vtkResourceFileLocator> sself, const char* anchor, const char* landmark, const char* defaultDir) { return sself->Locate(anchor, landmark, defaultDir); }
extern "C" const char* vtk_resource_file_locator_get_library_path_for_symbol_unix(vtkNew<vtkResourceFileLocator> sself, const char symbolname) { return sself->GetLibraryPathForSymbolUnix(symbolname); }
extern "C" const char* vtk_resource_file_locator_get_library_path_for_symbol_win_32(vtkNew<vtkResourceFileLocator> sself, const void fptr) { return sself->GetLibraryPathForSymbolWin32(fptr); }
