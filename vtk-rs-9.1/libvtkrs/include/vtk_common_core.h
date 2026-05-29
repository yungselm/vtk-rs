// Default include in all modules
#include<vtkNew.h>
#include<vtkObjectBase.h>

// Include objects of this module
#include<vtkAOSDataArrayTemplate.h>
#include<vtkAbstractArray.h>
#include<vtkAnimationCue.h>
#include<vtkArchiver.h>
#include<vtkArray.h>
#include<vtkArrayCoordinates.h>
#include<vtkArrayExtents.h>
#include<vtkArrayExtentsList.h>
#include<vtkArrayIterator.h>
#include<vtkArrayIteratorTemplate.h>
#include<vtkArrayRange.h>
#include<vtkArraySort.h>
#include<vtkArrayWeights.h>
#include<vtkBitArray.h>
#include<vtkBitArrayIterator.h>
#include<vtkBoxMuellerRandomSequence.h>
#include<vtkBreakPoint.h>
#include<vtkBuffer.h>
#include<vtkByteSwap.h>
#include<vtkCallbackCommand.h>
#include<vtkCharArray.h>
#include<vtkCollection.h>
#include<vtkCollection.h>
#include<vtkCollectionIterator.h>
#include<vtkCommand.h>
#include<vtkCommonInformationKeyManager.h>
#include<vtkConditionVariable.h>
#include<vtkCriticalSection.h>
#include<vtkDataArray.h>
#include<vtkDataArrayCollection.h>
#include<vtkDataArrayCollectionIterator.h>
#include<vtkDataArraySelection.h>
#include<vtkDebugLeaks.h>
#include<vtkDebugLeaksManager.h>
#include<vtkDebugLeaks.h>
#include<vtkDenseArray.h>
#include<vtkDoubleArray.h>
#include<vtkDynamicLoader.h>
#include<vtkEventData.h>
#include<vtkEventData.h>
#include<vtkEventData.h>
#include<vtkEventForwarderCommand.h>
#include<vtkFileOutputWindow.h>
#include<vtkFloatArray.h>
#include<vtkFloatingPointExceptions.h>
#include<vtkGarbageCollector.h>
#include<vtkGarbageCollectorManager.h>
#include<vtkGaussianRandomSequence.h>
#include<vtkGenericDataArray.h>
#include<vtkGenericDataArrayLookupHelper.h>
#include<vtkIdList.h>
#include<vtkIdListCollection.h>
#include<vtkIdTypeArray.h>
#include<vtkIndent.h>
#include<vtkInformation.h>
#include<vtkInformationDataObjectKey.h>
#include<vtkInformationDoubleKey.h>
#include<vtkInformationDoubleVectorKey.h>
#include<vtkInformationIdTypeKey.h>
#include<vtkInformationInformationKey.h>
#include<vtkInformationInformationVectorKey.h>
#include<vtkInformationIntegerKey.h>
#include<vtkInformationIntegerPointerKey.h>
#include<vtkInformationIntegerVectorKey.h>
#include<vtkInformationInternals.h>
#include<vtkInformationIterator.h>
#include<vtkInformationKey.h>
#include<vtkInformationKeyLookup.h>
#include<vtkInformationKeyVectorKey.h>
#include<vtkInformationObjectBaseKey.h>
#include<vtkInformationObjectBaseVectorKey.h>
#include<vtkInformationRequestKey.h>
#include<vtkInformationStringKey.h>
#include<vtkInformationStringVectorKey.h>
#include<vtkInformationUnsignedLongKey.h>
#include<vtkInformationVariantKey.h>
#include<vtkInformationVariantVectorKey.h>
#include<vtkInformationVector.h>
#include<vtkIntArray.h>
#include<vtkLargeInteger.h>
#include<vtkLogger.h>
#include<vtkLongArray.h>
#include<vtkLongLongArray.h>
#include<vtkLookupTable.h>
#include<vtkMappedDataArray.h>
#include<vtkMath.h>
#include<vtkMersenneTwister.h>
#include<vtkMinimalStandardRandomSequence.h>
#include<vtkMultiThreader.h>
#include<vtkMutexLock.h>
#include<vtkNew.h>
#include<vtkOStrStreamWrapper.h>
#include<vtkObject.h>
#include<vtkObjectBase.h>
#include<vtkObjectFactory.h>
#include<vtkObjectFactoryCollection.h>
#include<vtkObjectFactory.h>
#include<vtkOldStyleCallbackCommand.h>
#include<vtkOutputWindow.h>
#include<vtkOutputWindow.h>
#include<vtkOverrideInformation.h>
#include<vtkOverrideInformationCollection.h>
#include<vtkPoints.h>
#include<vtkPoints2D.h>
#include<vtkPriorityQueue.h>
#include<vtkRandomPool.h>
#include<vtkRandomSequence.h>
#include<vtkReferenceCount.h>
#include<vtkSMPThreadLocal.h>
#include<vtkSMPThreadLocalObject.h>
#include<vtkSMPTools.h>
#include<vtkSOADataArrayTemplate.h>
#include<vtkScalarsToColors.h>
#include<vtkShortArray.h>
#include<vtkSignedCharArray.h>
#include<vtkConditionVariable.h>
#include<vtkSimpleCriticalSection.h>
#include<vtkMutexLock.h>
#include<vtkSmartPointer.h>
#include<vtkSmartPointerBase.h>
#include<vtkSortDataArray.h>
#include<vtkSparseArray.h>
#include<vtkStdString.h>
#include<vtkStringArray.h>
#include<vtkStringOutputWindow.h>
#include<vtkTestDataArray.h>
#include<vtkTimePointUtility.h>
#include<vtkTimeStamp.h>
#include<vtkTypeFloat32Array.h>
#include<vtkTypeFloat64Array.h>
#include<vtkTypeInt16Array.h>
#include<vtkTypeInt32Array.h>
#include<vtkTypeInt64Array.h>
#include<vtkTypeInt8Array.h>
#include<vtkTypeUInt16Array.h>
#include<vtkTypeUInt32Array.h>
#include<vtkTypeUInt64Array.h>
#include<vtkTypeUInt8Array.h>
#include<vtkTypedArray.h>
#include<vtkTypedDataArray.h>
#include<vtkTypedDataArrayIterator.h>
#include<vtkUnicodeString.h>
#include<vtkUnicodeStringArray.h>
#include<vtkUnsignedCharArray.h>
#include<vtkUnsignedIntArray.h>
#include<vtkUnsignedLongArray.h>
#include<vtkUnsignedLongLongArray.h>
#include<vtkUnsignedShortArray.h>
#include<vtkVariant.h>
#include<vtkVariantArray.h>
#include<vtkVersion.h>
#include<vtkVoidArray.h>
#include<vtkWeakPointer.h>
#include<vtkWeakPointerBase.h>
#include<vtkWeakReference.h>
#include<vtkWindow.h>
#include<vtkXMLFileOutputWindow.h>

// Declare exported functions
extern "C" vtkNew < vtkAnimationCue > vtkAnimationCue_new () ;
extern "C" void vtkAnimationCue_destructor (vtkNew < vtkAnimationCue > sself) ;
extern "C" void * vtkAnimationCue_get_ptr (vtkNew < vtkAnimationCue > sself) ;
extern "C" void vtk_animation_cue_set_time_mode(vtkNew<vtkAnimationCue> sself, int mode);
extern "C" int vtk_animation_cue_get_time_mode(vtkNew<vtkAnimationCue> sself);
extern "C" void vtk_animation_cue_set_time_mode_to_relative(vtkNew<vtkAnimationCue> sself);
extern "C" void vtk_animation_cue_set_time_mode_to_normalized(vtkNew<vtkAnimationCue> sself);
extern "C" void vtk_animation_cue_set_start_time(vtkNew<vtkAnimationCue> sself, double _arg);
extern "C" double vtk_animation_cue_get_start_time(vtkNew<vtkAnimationCue> sself);
extern "C" void vtk_animation_cue_set_end_time(vtkNew<vtkAnimationCue> sself, double _arg);
extern "C" double vtk_animation_cue_get_end_time(vtkNew<vtkAnimationCue> sself);
extern "C" void vtk_animation_cue_tick(vtkNew<vtkAnimationCue> sself, double currenttime, double deltatime, double clocktime);
extern "C" void vtk_animation_cue_initialize(vtkNew<vtkAnimationCue> sself);
extern "C" void vtk_animation_cue_finalize(vtkNew<vtkAnimationCue> sself);
extern "C" double vtk_animation_cue_get_animation_time(vtkNew<vtkAnimationCue> sself);
extern "C" double vtk_animation_cue_get_delta_time(vtkNew<vtkAnimationCue> sself);
extern "C" double vtk_animation_cue_get_clock_time(vtkNew<vtkAnimationCue> sself);
extern "C" vtkNew < vtkArchiver > vtkArchiver_new () ;
extern "C" void vtkArchiver_destructor (vtkNew < vtkArchiver > sself) ;
extern "C" void * vtkArchiver_get_ptr (vtkNew < vtkArchiver > sself) ;
extern "C" char* vtk_archiver_get_archive_name(vtkNew<vtkArchiver> sself);
extern "C" void vtk_archiver_set_archive_name(vtkNew<vtkArchiver> sself, const char _arg);
extern "C" void vtk_archiver_open_archive(vtkNew<vtkArchiver> sself);
extern "C" void vtk_archiver_close_archive(vtkNew<vtkArchiver> sself);
extern "C" void vtk_archiver_insert_into_archive(vtkNew<vtkArchiver> sself, const char* relativePath, const char data, size_t size);
extern "C" bool vtk_archiver_contains(vtkNew<vtkArchiver> sself, const char* relativePath);
extern "C" vtkNew < vtkBitArray > vtkBitArray_new () ;
extern "C" void vtkBitArray_destructor (vtkNew < vtkBitArray > sself) ;
extern "C" void * vtkBitArray_get_ptr (vtkNew < vtkBitArray > sself) ;
extern "C" int vtk_bit_array_allocate(vtkNew<vtkBitArray> sself, long long sz, long long ext);
extern "C" void vtk_bit_array_initialize(vtkNew<vtkBitArray> sself);
extern "C" int vtk_bit_array_get_data_type(vtkNew<vtkBitArray> sself);
extern "C" int vtk_bit_array_get_data_type_size(vtkNew<vtkBitArray> sself);
extern "C" void vtk_bit_array_set_number_of_tuples(vtkNew<vtkBitArray> sself, long long number);
extern "C" bool vtk_bit_array_set_number_of_values(vtkNew<vtkBitArray> sself, long long number);
extern "C" double* vtk_bit_array_get_tuple(vtkNew<vtkBitArray> sself, long long i);
extern "C" void vtk_bit_array_get_tuple(vtkNew<vtkBitArray> sself, long long i, double tuple);
extern "C" void vtk_bit_array_set_tuple(vtkNew<vtkBitArray> sself, long long i, const float tuple);
extern "C" void vtk_bit_array_set_tuple(vtkNew<vtkBitArray> sself, long long i, const double tuple);
extern "C" void vtk_bit_array_insert_tuple(vtkNew<vtkBitArray> sself, long long i, const float tuple);
extern "C" void vtk_bit_array_insert_tuple(vtkNew<vtkBitArray> sself, long long i, const double tuple);
extern "C" long long vtk_bit_array_insert_next_tuple(vtkNew<vtkBitArray> sself, const float tuple);
extern "C" long long vtk_bit_array_insert_next_tuple(vtkNew<vtkBitArray> sself, const double tuple);
extern "C" void vtk_bit_array_remove_tuple(vtkNew<vtkBitArray> sself, long long id);
extern "C" void vtk_bit_array_set_component(vtkNew<vtkBitArray> sself, long long i, int j, double c);
extern "C" void vtk_bit_array_squeeze(vtkNew<vtkBitArray> sself);
extern "C" int vtk_bit_array_resize(vtkNew<vtkBitArray> sself, long long numTuples);
extern "C" int vtk_bit_array_get_value(vtkNew<vtkBitArray> sself, long long id);
extern "C" void vtk_bit_array_set_value(vtkNew<vtkBitArray> sself, long long id, int value);
extern "C" void vtk_bit_array_insert_value(vtkNew<vtkBitArray> sself, long long id, int i);
extern "C" long long vtk_bit_array_insert_next_value(vtkNew<vtkBitArray> sself, int i);
extern "C" void vtk_bit_array_insert_component(vtkNew<vtkBitArray> sself, long long i, int j, double c);
extern "C" unsigned char* vtk_bit_array_get_pointer(vtkNew<vtkBitArray> sself, long long id);
extern "C" unsigned char* vtk_bit_array_write_pointer(vtkNew<vtkBitArray> sself, long long id, long long number);
extern "C" void* vtk_bit_array_write_void_pointer(vtkNew<vtkBitArray> sself, long long id, long long number);
extern "C" void* vtk_bit_array_get_void_pointer(vtkNew<vtkBitArray> sself, long long id);
extern "C" void vtk_bit_array_set_void_array(vtkNew<vtkBitArray> sself, void array, long long size, int save);
extern "C" long long vtk_bit_array_lookup_value(vtkNew<vtkBitArray> sself, int value);
extern "C" void vtk_bit_array_data_changed(vtkNew<vtkBitArray> sself);
extern "C" void vtk_bit_array_clear_lookup(vtkNew<vtkBitArray> sself);
extern "C" vtkNew < vtkBitArrayIterator > vtkBitArrayIterator_new () ;
extern "C" void vtkBitArrayIterator_destructor (vtkNew < vtkBitArrayIterator > sself) ;
extern "C" void * vtkBitArrayIterator_get_ptr (vtkNew < vtkBitArrayIterator > sself) ;
extern "C" int* vtk_bit_array_iterator_get_tuple(vtkNew<vtkBitArrayIterator> sself, long long id);
extern "C" int vtk_bit_array_iterator_get_value(vtkNew<vtkBitArrayIterator> sself, long long id);
extern "C" long long vtk_bit_array_iterator_get_number_of_tuples(vtkNew<vtkBitArrayIterator> sself);
extern "C" long long vtk_bit_array_iterator_get_number_of_values(vtkNew<vtkBitArrayIterator> sself);
extern "C" int vtk_bit_array_iterator_get_number_of_components(vtkNew<vtkBitArrayIterator> sself);
extern "C" int vtk_bit_array_iterator_get_data_type(vtkNew<vtkBitArrayIterator> sself);
extern "C" int vtk_bit_array_iterator_get_data_type_size(vtkNew<vtkBitArrayIterator> sself);
extern "C" void vtk_bit_array_iterator_set_value(vtkNew<vtkBitArrayIterator> sself, long long id, int value);
extern "C" vtkNew < vtkBoxMuellerRandomSequence > vtkBoxMuellerRandomSequence_new () ;
extern "C" void vtkBoxMuellerRandomSequence_destructor (vtkNew < vtkBoxMuellerRandomSequence > sself) ;
extern "C" void * vtkBoxMuellerRandomSequence_get_ptr (vtkNew < vtkBoxMuellerRandomSequence > sself) ;
extern "C" void vtk_box_mueller_random_sequence_initialize(vtkNew<vtkBoxMuellerRandomSequence> sself, unsigned int seed);
extern "C" double vtk_box_mueller_random_sequence_get_value(vtkNew<vtkBoxMuellerRandomSequence> sself);
extern "C" void vtk_box_mueller_random_sequence_next(vtkNew<vtkBoxMuellerRandomSequence> sself);
extern "C" vtkNew < vtkByteSwap > vtkByteSwap_new () ;
extern "C" void vtkByteSwap_destructor (vtkNew < vtkByteSwap > sself) ;
extern "C" void * vtkByteSwap_get_ptr (vtkNew < vtkByteSwap > sself) ;
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, float p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, float p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, float p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, float p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, double p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, double p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, double p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, double p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, char p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, char p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, char p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, char p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, short p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, short p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, short p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, short p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, int p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, int p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, int p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, int p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, long p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, long p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, long p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, long p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, long long p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, long long p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, long long p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, long long p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, char p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, char p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, char p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, char p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, unsigned char p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, unsigned char p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, unsigned char p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, unsigned char p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, unsigned short p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, unsigned short p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, unsigned short p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, unsigned short p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, unsigned int p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, unsigned int p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, unsigned int p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, unsigned int p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, unsigned long p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, unsigned long p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, unsigned long p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, unsigned long p, size_t num);
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, unsigned long long p);
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, unsigned long long p);
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, unsigned long long p, size_t num);
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, unsigned long long p, size_t num);
extern "C" void vtk_byte_swap_swap_2_le(vtkNew<vtkByteSwap> sself, void p);
extern "C" void vtk_byte_swap_swap_4_le(vtkNew<vtkByteSwap> sself, void p);
extern "C" void vtk_byte_swap_swap_8_le(vtkNew<vtkByteSwap> sself, void p);
extern "C" void vtk_byte_swap_swap_2_le_range(vtkNew<vtkByteSwap> sself, void p, size_t num);
extern "C" void vtk_byte_swap_swap_4_le_range(vtkNew<vtkByteSwap> sself, void p, size_t num);
extern "C" void vtk_byte_swap_swap_8_le_range(vtkNew<vtkByteSwap> sself, void p, size_t num);
extern "C" void vtk_byte_swap_swap_2_be(vtkNew<vtkByteSwap> sself, void p);
extern "C" void vtk_byte_swap_swap_4_be(vtkNew<vtkByteSwap> sself, void p);
extern "C" void vtk_byte_swap_swap_8_be(vtkNew<vtkByteSwap> sself, void p);
extern "C" void vtk_byte_swap_swap_2_be_range(vtkNew<vtkByteSwap> sself, void p, size_t num);
extern "C" void vtk_byte_swap_swap_4_be_range(vtkNew<vtkByteSwap> sself, void p, size_t num);
extern "C" void vtk_byte_swap_swap_8_be_range(vtkNew<vtkByteSwap> sself, void p, size_t num);
extern "C" void vtk_byte_swap_swap_void_range(vtkNew<vtkByteSwap> sself, void buffer, size_t numWords, size_t wordSize);
extern "C" vtkNew < vtkCallbackCommand > vtkCallbackCommand_new () ;
extern "C" void vtkCallbackCommand_destructor (vtkNew < vtkCallbackCommand > sself) ;
extern "C" void * vtkCallbackCommand_get_ptr (vtkNew < vtkCallbackCommand > sself) ;
extern "C" void vtk_callback_command_set_client_data(vtkNew<vtkCallbackCommand> sself, void cd);
extern "C" void* vtk_callback_command_get_client_data(vtkNew<vtkCallbackCommand> sself);
extern "C" void vtk_callback_command_set_abort_flag_on_execute(vtkNew<vtkCallbackCommand> sself, int f);
extern "C" int vtk_callback_command_get_abort_flag_on_execute(vtkNew<vtkCallbackCommand> sself);
extern "C" void vtk_callback_command_abort_flag_on_execute_on(vtkNew<vtkCallbackCommand> sself);
extern "C" void vtk_callback_command_abort_flag_on_execute_off(vtkNew<vtkCallbackCommand> sself);
extern "C" vtkNew < vtkCharArray > vtkCharArray_new () ;
extern "C" void vtkCharArray_destructor (vtkNew < vtkCharArray > sself) ;
extern "C" void * vtkCharArray_get_ptr (vtkNew < vtkCharArray > sself) ;
extern "C" int vtk_char_array_get_data_type(vtkNew<vtkCharArray> sself);
extern "C" void vtk_char_array_get_typed_tuple(vtkNew<vtkCharArray> sself, long long i, char tuple);
extern "C" void vtk_char_array_set_typed_tuple(vtkNew<vtkCharArray> sself, long long i, const char tuple);
extern "C" void vtk_char_array_insert_typed_tuple(vtkNew<vtkCharArray> sself, long long i, const char tuple);
extern "C" long long vtk_char_array_insert_next_typed_tuple(vtkNew<vtkCharArray> sself, const char tuple);
extern "C" char vtk_char_array_get_value(vtkNew<vtkCharArray> sself, long long id);
extern "C" void vtk_char_array_set_value(vtkNew<vtkCharArray> sself, long long id, char value);
extern "C" bool vtk_char_array_set_number_of_values(vtkNew<vtkCharArray> sself, long long number);
extern "C" void vtk_char_array_insert_value(vtkNew<vtkCharArray> sself, long long id, char f);
extern "C" long long vtk_char_array_insert_next_value(vtkNew<vtkCharArray> sself, char f);
extern "C" char* vtk_char_array_get_value_range(vtkNew<vtkCharArray> sself, int comp);
extern "C" char* vtk_char_array_get_value_range(vtkNew<vtkCharArray> sself);
extern "C" char* vtk_char_array_write_pointer(vtkNew<vtkCharArray> sself, long long id, long long number);
extern "C" char* vtk_char_array_get_pointer(vtkNew<vtkCharArray> sself, long long id);
extern "C" void vtk_char_array_set_array(vtkNew<vtkCharArray> sself, char array, long long size, int save);
extern "C" void vtk_char_array_set_array(vtkNew<vtkCharArray> sself, char array, long long size, int save, int deleteMethod);
extern "C" char vtk_char_array_get_data_type_value_min(vtkNew<vtkCharArray> sself);
extern "C" char vtk_char_array_get_data_type_value_max(vtkNew<vtkCharArray> sself);
extern "C" vtkNew < vtkCollection > vtkCollection_new () ;
extern "C" void vtkCollection_destructor (vtkNew < vtkCollection > sself) ;
extern "C" void * vtkCollection_get_ptr (vtkNew < vtkCollection > sself) ;
extern "C" void vtk_collection_remove_item(vtkNew<vtkCollection> sself, int i);
extern "C" void vtk_collection_remove_all_items(vtkNew<vtkCollection> sself);
extern "C" int vtk_collection_get_number_of_items(vtkNew<vtkCollection> sself);
extern "C" void vtk_collection_init_traversal(vtkNew<vtkCollection> sself);
extern "C" void vtk_collection_init_traversal(vtkNew<vtkCollection> sself, void cookie);
extern "C" vtkNew < vtkCollectionIterator > vtkCollectionIterator_new () ;
extern "C" void vtkCollectionIterator_destructor (vtkNew < vtkCollectionIterator > sself) ;
extern "C" void * vtkCollectionIterator_get_ptr (vtkNew < vtkCollectionIterator > sself) ;
extern "C" void vtk_collection_iterator_init_traversal(vtkNew<vtkCollectionIterator> sself);
extern "C" void vtk_collection_iterator_go_to_first_item(vtkNew<vtkCollectionIterator> sself);
extern "C" void vtk_collection_iterator_go_to_next_item(vtkNew<vtkCollectionIterator> sself);
extern "C" int vtk_collection_iterator_is_done_with_traversal(vtkNew<vtkCollectionIterator> sself);
extern "C" vtkNew < vtkCriticalSection > vtkCriticalSection_new () ;
extern "C" void vtkCriticalSection_destructor (vtkNew < vtkCriticalSection > sself) ;
extern "C" void * vtkCriticalSection_get_ptr (vtkNew < vtkCriticalSection > sself) ;
extern "C" void vtk_critical_section_lock(vtkNew<vtkCriticalSection> sself);
extern "C" void vtk_critical_section_unlock(vtkNew<vtkCriticalSection> sself);
extern "C" vtkNew < vtkDataArrayCollection > vtkDataArrayCollection_new () ;
extern "C" void vtkDataArrayCollection_destructor (vtkNew < vtkDataArrayCollection > sself) ;
extern "C" void * vtkDataArrayCollection_get_ptr (vtkNew < vtkDataArrayCollection > sself) ;
extern "C" int vtk_data_array_collection_get_number_of_items(vtkNew<vtkDataArrayCollection> sself);
extern "C" vtkNew < vtkDataArrayCollectionIterator > vtkDataArrayCollectionIterator_new () ;
extern "C" void vtkDataArrayCollectionIterator_destructor (vtkNew < vtkDataArrayCollectionIterator > sself) ;
extern "C" void * vtkDataArrayCollectionIterator_get_ptr (vtkNew < vtkDataArrayCollectionIterator > sself) ;
extern "C" vtkNew < vtkDataArraySelection > vtkDataArraySelection_new () ;
extern "C" void vtkDataArraySelection_destructor (vtkNew < vtkDataArraySelection > sself) ;
extern "C" void * vtkDataArraySelection_get_ptr (vtkNew < vtkDataArraySelection > sself) ;
extern "C" void vtk_data_array_selection_enable_array(vtkNew<vtkDataArraySelection> sself, const char name);
extern "C" void vtk_data_array_selection_disable_array(vtkNew<vtkDataArraySelection> sself, const char name);
extern "C" int vtk_data_array_selection_array_is_enabled(vtkNew<vtkDataArraySelection> sself, const char name);
extern "C" int vtk_data_array_selection_array_exists(vtkNew<vtkDataArraySelection> sself, const char name);
extern "C" void vtk_data_array_selection_enable_all_arrays(vtkNew<vtkDataArraySelection> sself);
extern "C" void vtk_data_array_selection_disable_all_arrays(vtkNew<vtkDataArraySelection> sself);
extern "C" int vtk_data_array_selection_get_number_of_arrays(vtkNew<vtkDataArraySelection> sself);
extern "C" int vtk_data_array_selection_get_number_of_arrays_enabled(vtkNew<vtkDataArraySelection> sself);
extern "C" const char* vtk_data_array_selection_get_array_name(vtkNew<vtkDataArraySelection> sself, int index);
extern "C" int vtk_data_array_selection_get_array_index(vtkNew<vtkDataArraySelection> sself, const char name);
extern "C" int vtk_data_array_selection_get_enabled_array_index(vtkNew<vtkDataArraySelection> sself, const char name);
extern "C" int vtk_data_array_selection_get_array_setting(vtkNew<vtkDataArraySelection> sself, int index);
extern "C" int vtk_data_array_selection_get_array_setting(vtkNew<vtkDataArraySelection> sself, const char name);
extern "C" void vtk_data_array_selection_set_array_setting(vtkNew<vtkDataArraySelection> sself, const char name, int setting);
extern "C" void vtk_data_array_selection_remove_all_arrays(vtkNew<vtkDataArraySelection> sself);
extern "C" int vtk_data_array_selection_add_array(vtkNew<vtkDataArraySelection> sself, const char name, bool state);
extern "C" void vtk_data_array_selection_remove_array_by_index(vtkNew<vtkDataArraySelection> sself, int index);
extern "C" void vtk_data_array_selection_remove_array_by_name(vtkNew<vtkDataArraySelection> sself, const char name);
extern "C" void vtk_data_array_selection_set_arrays(vtkNew<vtkDataArraySelection> sself, const char names, int numArrays);
extern "C" void vtk_data_array_selection_set_arrays_with_default(vtkNew<vtkDataArraySelection> sself, const char names, int numArrays, int defaultStatus);
extern "C" void vtk_data_array_selection_set_unknown_array_setting(vtkNew<vtkDataArraySelection> sself, int _arg);
extern "C" int vtk_data_array_selection_get_unknown_array_setting(vtkNew<vtkDataArraySelection> sself);
extern "C" vtkNew < vtkDebugLeaks > vtkDebugLeaks_new () ;
extern "C" void vtkDebugLeaks_destructor (vtkNew < vtkDebugLeaks > sself) ;
extern "C" void * vtkDebugLeaks_get_ptr (vtkNew < vtkDebugLeaks > sself) ;
extern "C" void vtk_debug_leaks_construct_class(vtkNew<vtkDebugLeaks> sself, const char className);
extern "C" void vtk_debug_leaks_destruct_class(vtkNew<vtkDebugLeaks> sself, const char className);
extern "C" int vtk_debug_leaks_print_current_leaks(vtkNew<vtkDebugLeaks> sself);
extern "C" int vtk_debug_leaks_get_exit_error(vtkNew<vtkDebugLeaks> sself);
extern "C" void vtk_debug_leaks_set_exit_error(vtkNew<vtkDebugLeaks> sself, int p0);
extern "C" vtkNew < vtkDoubleArray > vtkDoubleArray_new () ;
extern "C" void vtkDoubleArray_destructor (vtkNew < vtkDoubleArray > sself) ;
extern "C" void * vtkDoubleArray_get_ptr (vtkNew < vtkDoubleArray > sself) ;
extern "C" int vtk_double_array_get_data_type(vtkNew<vtkDoubleArray> sself);
extern "C" void vtk_double_array_get_typed_tuple(vtkNew<vtkDoubleArray> sself, long long i, double tuple);
extern "C" void vtk_double_array_set_typed_tuple(vtkNew<vtkDoubleArray> sself, long long i, const double tuple);
extern "C" void vtk_double_array_insert_typed_tuple(vtkNew<vtkDoubleArray> sself, long long i, const double tuple);
extern "C" long long vtk_double_array_insert_next_typed_tuple(vtkNew<vtkDoubleArray> sself, const double tuple);
extern "C" double vtk_double_array_get_value(vtkNew<vtkDoubleArray> sself, long long id);
extern "C" void vtk_double_array_set_value(vtkNew<vtkDoubleArray> sself, long long id, double value);
extern "C" bool vtk_double_array_set_number_of_values(vtkNew<vtkDoubleArray> sself, long long number);
extern "C" void vtk_double_array_insert_value(vtkNew<vtkDoubleArray> sself, long long id, double f);
extern "C" long long vtk_double_array_insert_next_value(vtkNew<vtkDoubleArray> sself, double f);
extern "C" double* vtk_double_array_get_value_range(vtkNew<vtkDoubleArray> sself, int comp);
extern "C" double* vtk_double_array_get_value_range(vtkNew<vtkDoubleArray> sself);
extern "C" double* vtk_double_array_write_pointer(vtkNew<vtkDoubleArray> sself, long long id, long long number);
extern "C" double* vtk_double_array_get_pointer(vtkNew<vtkDoubleArray> sself, long long id);
extern "C" void vtk_double_array_set_array(vtkNew<vtkDoubleArray> sself, double array, long long size, int save);
extern "C" void vtk_double_array_set_array(vtkNew<vtkDoubleArray> sself, double array, long long size, int save, int deleteMethod);
extern "C" double vtk_double_array_get_data_type_value_min(vtkNew<vtkDoubleArray> sself);
extern "C" double vtk_double_array_get_data_type_value_max(vtkNew<vtkDoubleArray> sself);
extern "C" vtkNew < vtkDynamicLoader > vtkDynamicLoader_new () ;
extern "C" void vtkDynamicLoader_destructor (vtkNew < vtkDynamicLoader > sself) ;
extern "C" void * vtkDynamicLoader_get_ptr (vtkNew < vtkDynamicLoader > sself) ;
extern "C" const char* vtk_dynamic_loader_lib_prefix(vtkNew<vtkDynamicLoader> sself);
extern "C" const char* vtk_dynamic_loader_lib_extension(vtkNew<vtkDynamicLoader> sself);
extern "C" const char* vtk_dynamic_loader_last_error(vtkNew<vtkDynamicLoader> sself);
extern "C" vtkNew < vtkEventDataDevice3D > vtkEventDataDevice3D_new () ;
extern "C" void vtkEventDataDevice3D_destructor (vtkNew < vtkEventDataDevice3D > sself) ;
extern "C" void * vtkEventDataDevice3D_get_ptr (vtkNew < vtkEventDataDevice3D > sself) ;
extern "C" void vtk_event_data_device_3_d_get_world_position(vtkNew<vtkEventDataDevice3D> sself, double v);
extern "C" const double* vtk_event_data_device_3_d_get_world_position(vtkNew<vtkEventDataDevice3D> sself);
extern "C" void vtk_event_data_device_3_d_set_world_position(vtkNew<vtkEventDataDevice3D> sself, const double p);
extern "C" void vtk_event_data_device_3_d_get_world_direction(vtkNew<vtkEventDataDevice3D> sself, double v);
extern "C" const double* vtk_event_data_device_3_d_get_world_direction(vtkNew<vtkEventDataDevice3D> sself);
extern "C" void vtk_event_data_device_3_d_set_world_direction(vtkNew<vtkEventDataDevice3D> sself, const double p);
extern "C" void vtk_event_data_device_3_d_get_world_orientation(vtkNew<vtkEventDataDevice3D> sself, double v);
extern "C" const double* vtk_event_data_device_3_d_get_world_orientation(vtkNew<vtkEventDataDevice3D> sself);
extern "C" void vtk_event_data_device_3_d_set_world_orientation(vtkNew<vtkEventDataDevice3D> sself, const double p);
extern "C" void vtk_event_data_device_3_d_get_track_pad_position(vtkNew<vtkEventDataDevice3D> sself, double v);
extern "C" const double* vtk_event_data_device_3_d_get_track_pad_position(vtkNew<vtkEventDataDevice3D> sself);
extern "C" void vtk_event_data_device_3_d_set_track_pad_position(vtkNew<vtkEventDataDevice3D> sself, const double p);
extern "C" void vtk_event_data_device_3_d_set_track_pad_position(vtkNew<vtkEventDataDevice3D> sself, double x, double y);
extern "C" vtkNew < vtkEventDataForDevice > vtkEventDataForDevice_new () ;
extern "C" void vtkEventDataForDevice_destructor (vtkNew < vtkEventDataForDevice > sself) ;
extern "C" void * vtkEventDataForDevice_get_ptr (vtkNew < vtkEventDataForDevice > sself) ;
extern "C" vtkNew < vtkEventForwarderCommand > vtkEventForwarderCommand_new () ;
extern "C" void vtkEventForwarderCommand_destructor (vtkNew < vtkEventForwarderCommand > sself) ;
extern "C" void * vtkEventForwarderCommand_get_ptr (vtkNew < vtkEventForwarderCommand > sself) ;
extern "C" void* vtk_event_forwarder_command_get_target(vtkNew<vtkEventForwarderCommand> sself);
extern "C" vtkNew < vtkFileOutputWindow > vtkFileOutputWindow_new () ;
extern "C" void vtkFileOutputWindow_destructor (vtkNew < vtkFileOutputWindow > sself) ;
extern "C" void * vtkFileOutputWindow_get_ptr (vtkNew < vtkFileOutputWindow > sself) ;
extern "C" void vtk_file_output_window_display_text(vtkNew<vtkFileOutputWindow> sself, const char p0);
extern "C" void vtk_file_output_window_set_file_name(vtkNew<vtkFileOutputWindow> sself, const char _arg);
extern "C" char* vtk_file_output_window_get_file_name(vtkNew<vtkFileOutputWindow> sself);
extern "C" void vtk_file_output_window_set_flush(vtkNew<vtkFileOutputWindow> sself, int _arg);
extern "C" int vtk_file_output_window_get_flush(vtkNew<vtkFileOutputWindow> sself);
extern "C" void vtk_file_output_window_flush_on(vtkNew<vtkFileOutputWindow> sself);
extern "C" void vtk_file_output_window_flush_off(vtkNew<vtkFileOutputWindow> sself);
extern "C" void vtk_file_output_window_set_append(vtkNew<vtkFileOutputWindow> sself, int _arg);
extern "C" int vtk_file_output_window_get_append(vtkNew<vtkFileOutputWindow> sself);
extern "C" void vtk_file_output_window_append_on(vtkNew<vtkFileOutputWindow> sself);
extern "C" void vtk_file_output_window_append_off(vtkNew<vtkFileOutputWindow> sself);
extern "C" vtkNew < vtkFloatArray > vtkFloatArray_new () ;
extern "C" void vtkFloatArray_destructor (vtkNew < vtkFloatArray > sself) ;
extern "C" void * vtkFloatArray_get_ptr (vtkNew < vtkFloatArray > sself) ;
extern "C" int vtk_float_array_get_data_type(vtkNew<vtkFloatArray> sself);
extern "C" void vtk_float_array_get_typed_tuple(vtkNew<vtkFloatArray> sself, long long i, float tuple);
extern "C" void vtk_float_array_set_typed_tuple(vtkNew<vtkFloatArray> sself, long long i, const float tuple);
extern "C" void vtk_float_array_insert_typed_tuple(vtkNew<vtkFloatArray> sself, long long i, const float tuple);
extern "C" long long vtk_float_array_insert_next_typed_tuple(vtkNew<vtkFloatArray> sself, const float tuple);
extern "C" float vtk_float_array_get_value(vtkNew<vtkFloatArray> sself, long long id);
extern "C" void vtk_float_array_set_value(vtkNew<vtkFloatArray> sself, long long id, float value);
extern "C" bool vtk_float_array_set_number_of_values(vtkNew<vtkFloatArray> sself, long long number);
extern "C" void vtk_float_array_insert_value(vtkNew<vtkFloatArray> sself, long long id, float f);
extern "C" long long vtk_float_array_insert_next_value(vtkNew<vtkFloatArray> sself, float f);
extern "C" float* vtk_float_array_get_value_range(vtkNew<vtkFloatArray> sself, int comp);
extern "C" float* vtk_float_array_get_value_range(vtkNew<vtkFloatArray> sself);
extern "C" float* vtk_float_array_write_pointer(vtkNew<vtkFloatArray> sself, long long id, long long number);
extern "C" float* vtk_float_array_get_pointer(vtkNew<vtkFloatArray> sself, long long id);
extern "C" void vtk_float_array_set_array(vtkNew<vtkFloatArray> sself, float array, long long size, int save);
extern "C" void vtk_float_array_set_array(vtkNew<vtkFloatArray> sself, float array, long long size, int save, int deleteMethod);
extern "C" float vtk_float_array_get_data_type_value_min(vtkNew<vtkFloatArray> sself);
extern "C" float vtk_float_array_get_data_type_value_max(vtkNew<vtkFloatArray> sself);
extern "C" vtkNew < vtkGarbageCollector > vtkGarbageCollector_new () ;
extern "C" void vtkGarbageCollector_destructor (vtkNew < vtkGarbageCollector > sself) ;
extern "C" void * vtkGarbageCollector_get_ptr (vtkNew < vtkGarbageCollector > sself) ;
extern "C" void vtk_garbage_collector_collect(vtkNew<vtkGarbageCollector> sself);
extern "C" void vtk_garbage_collector_deferred_collection_push(vtkNew<vtkGarbageCollector> sself);
extern "C" void vtk_garbage_collector_deferred_collection_pop(vtkNew<vtkGarbageCollector> sself);
extern "C" void vtk_garbage_collector_set_global_debug_flag(vtkNew<vtkGarbageCollector> sself, bool flag);
extern "C" bool vtk_garbage_collector_get_global_debug_flag(vtkNew<vtkGarbageCollector> sself);
extern "C" vtkNew < vtkIdList > vtkIdList_new () ;
extern "C" void vtkIdList_destructor (vtkNew < vtkIdList > sself) ;
extern "C" void * vtkIdList_get_ptr (vtkNew < vtkIdList > sself) ;
extern "C" void vtk_id_list_initialize(vtkNew<vtkIdList> sself);
extern "C" int vtk_id_list_allocate(vtkNew<vtkIdList> sself, const long long sz, const int strategy);
extern "C" long long vtk_id_list_get_number_of_ids(vtkNew<vtkIdList> sself);
extern "C" long long vtk_id_list_get_id(vtkNew<vtkIdList> sself, const long long i);
extern "C" long long vtk_id_list_find_id_location(vtkNew<vtkIdList> sself, const long long id);
extern "C" void vtk_id_list_set_number_of_ids(vtkNew<vtkIdList> sself, const long long number);
extern "C" void vtk_id_list_set_id(vtkNew<vtkIdList> sself, const long long i, const long long vtkid);
extern "C" void vtk_id_list_insert_id(vtkNew<vtkIdList> sself, const long long i, const long long vtkid);
extern "C" long long vtk_id_list_insert_next_id(vtkNew<vtkIdList> sself, const long long vtkid);
extern "C" long long vtk_id_list_insert_unique_id(vtkNew<vtkIdList> sself, const long long vtkid);
extern "C" void vtk_id_list_sort(vtkNew<vtkIdList> sself);
extern "C" void vtk_id_list_fill(vtkNew<vtkIdList> sself, long long value);
extern "C" long long* vtk_id_list_get_pointer(vtkNew<vtkIdList> sself, const long long i);
extern "C" long long* vtk_id_list_write_pointer(vtkNew<vtkIdList> sself, const long long i, const long long number);
extern "C" void vtk_id_list_set_array(vtkNew<vtkIdList> sself, long long array, long long size);
extern "C" void vtk_id_list_reset(vtkNew<vtkIdList> sself);
extern "C" void vtk_id_list_squeeze(vtkNew<vtkIdList> sself);
extern "C" void vtk_id_list_delete_id(vtkNew<vtkIdList> sself, long long vtkid);
extern "C" long long vtk_id_list_is_id(vtkNew<vtkIdList> sself, long long vtkid);
extern "C" long long* vtk_id_list_resize(vtkNew<vtkIdList> sself, const long long sz);
extern "C" long long* vtk_id_list_begin(vtkNew<vtkIdList> sself);
extern "C" long long* vtk_id_list_end(vtkNew<vtkIdList> sself);
extern "C" const long long* vtk_id_list_begin(vtkNew<vtkIdList> sself);
extern "C" const long long* vtk_id_list_end(vtkNew<vtkIdList> sself);
extern "C" vtkNew < vtkIdListCollection > vtkIdListCollection_new () ;
extern "C" void vtkIdListCollection_destructor (vtkNew < vtkIdListCollection > sself) ;
extern "C" void * vtkIdListCollection_get_ptr (vtkNew < vtkIdListCollection > sself) ;
extern "C" int vtk_id_list_collection_get_number_of_items(vtkNew<vtkIdListCollection> sself);
extern "C" vtkNew < vtkIdTypeArray > vtkIdTypeArray_new () ;
extern "C" void vtkIdTypeArray_destructor (vtkNew < vtkIdTypeArray > sself) ;
extern "C" void * vtkIdTypeArray_get_ptr (vtkNew < vtkIdTypeArray > sself) ;
extern "C" int vtk_id_type_array_get_data_type(vtkNew<vtkIdTypeArray> sself);
extern "C" void vtk_id_type_array_get_typed_tuple(vtkNew<vtkIdTypeArray> sself, long long i, long long tuple);
extern "C" void vtk_id_type_array_set_typed_tuple(vtkNew<vtkIdTypeArray> sself, long long i, const long long tuple);
extern "C" void vtk_id_type_array_insert_typed_tuple(vtkNew<vtkIdTypeArray> sself, long long i, const long long tuple);
extern "C" long long vtk_id_type_array_insert_next_typed_tuple(vtkNew<vtkIdTypeArray> sself, const long long tuple);
extern "C" long long vtk_id_type_array_get_value(vtkNew<vtkIdTypeArray> sself, long long id);
extern "C" void vtk_id_type_array_set_value(vtkNew<vtkIdTypeArray> sself, long long id, long long value);
extern "C" bool vtk_id_type_array_set_number_of_values(vtkNew<vtkIdTypeArray> sself, long long number);
extern "C" void vtk_id_type_array_insert_value(vtkNew<vtkIdTypeArray> sself, long long id, long long f);
extern "C" long long vtk_id_type_array_insert_next_value(vtkNew<vtkIdTypeArray> sself, long long f);
extern "C" long long* vtk_id_type_array_get_value_range(vtkNew<vtkIdTypeArray> sself, int comp);
extern "C" long long* vtk_id_type_array_get_value_range(vtkNew<vtkIdTypeArray> sself);
extern "C" long long* vtk_id_type_array_write_pointer(vtkNew<vtkIdTypeArray> sself, long long id, long long number);
extern "C" long long* vtk_id_type_array_get_pointer(vtkNew<vtkIdTypeArray> sself, long long id);
extern "C" void vtk_id_type_array_set_array(vtkNew<vtkIdTypeArray> sself, long long array, long long size, int save);
extern "C" void vtk_id_type_array_set_array(vtkNew<vtkIdTypeArray> sself, long long array, long long size, int save, int deleteMethod);
extern "C" long long vtk_id_type_array_get_data_type_value_min(vtkNew<vtkIdTypeArray> sself);
extern "C" long long vtk_id_type_array_get_data_type_value_max(vtkNew<vtkIdTypeArray> sself);
extern "C" vtkNew < vtkInformation > vtkInformation_new () ;
extern "C" void vtkInformation_destructor (vtkNew < vtkInformation > sself) ;
extern "C" void * vtkInformation_get_ptr (vtkNew < vtkInformation > sself) ;
extern "C" void vtk_information_modified(vtkNew<vtkInformation> sself);
extern "C" void vtk_information_clear(vtkNew<vtkInformation> sself);
extern "C" int vtk_information_get_number_of_keys(vtkNew<vtkInformation> sself);
extern "C" vtkNew < vtkInformationIterator > vtkInformationIterator_new () ;
extern "C" void vtkInformationIterator_destructor (vtkNew < vtkInformationIterator > sself) ;
extern "C" void * vtkInformationIterator_get_ptr (vtkNew < vtkInformationIterator > sself) ;
extern "C" void vtk_information_iterator_init_traversal(vtkNew<vtkInformationIterator> sself);
extern "C" void vtk_information_iterator_go_to_first_item(vtkNew<vtkInformationIterator> sself);
extern "C" void vtk_information_iterator_go_to_next_item(vtkNew<vtkInformationIterator> sself);
extern "C" int vtk_information_iterator_is_done_with_traversal(vtkNew<vtkInformationIterator> sself);
extern "C" vtkNew < vtkInformationKeyLookup > vtkInformationKeyLookup_new () ;
extern "C" void vtkInformationKeyLookup_destructor (vtkNew < vtkInformationKeyLookup > sself) ;
extern "C" void * vtkInformationKeyLookup_get_ptr (vtkNew < vtkInformationKeyLookup > sself) ;
extern "C" vtkNew < vtkInformationVector > vtkInformationVector_new () ;
extern "C" void vtkInformationVector_destructor (vtkNew < vtkInformationVector > sself) ;
extern "C" void * vtkInformationVector_get_ptr (vtkNew < vtkInformationVector > sself) ;
extern "C" int vtk_information_vector_get_number_of_information_objects(vtkNew<vtkInformationVector> sself);
extern "C" void vtk_information_vector_set_number_of_information_objects(vtkNew<vtkInformationVector> sself, int n);
extern "C" void vtk_information_vector_remove(vtkNew<vtkInformationVector> sself, int idx);
extern "C" vtkNew < vtkIntArray > vtkIntArray_new () ;
extern "C" void vtkIntArray_destructor (vtkNew < vtkIntArray > sself) ;
extern "C" void * vtkIntArray_get_ptr (vtkNew < vtkIntArray > sself) ;
extern "C" int vtk_int_array_get_data_type(vtkNew<vtkIntArray> sself);
extern "C" void vtk_int_array_get_typed_tuple(vtkNew<vtkIntArray> sself, long long i, int tuple);
extern "C" void vtk_int_array_set_typed_tuple(vtkNew<vtkIntArray> sself, long long i, const int tuple);
extern "C" void vtk_int_array_insert_typed_tuple(vtkNew<vtkIntArray> sself, long long i, const int tuple);
extern "C" long long vtk_int_array_insert_next_typed_tuple(vtkNew<vtkIntArray> sself, const int tuple);
extern "C" int vtk_int_array_get_value(vtkNew<vtkIntArray> sself, long long id);
extern "C" void vtk_int_array_set_value(vtkNew<vtkIntArray> sself, long long id, int value);
extern "C" bool vtk_int_array_set_number_of_values(vtkNew<vtkIntArray> sself, long long number);
extern "C" void vtk_int_array_insert_value(vtkNew<vtkIntArray> sself, long long id, int f);
extern "C" long long vtk_int_array_insert_next_value(vtkNew<vtkIntArray> sself, int f);
extern "C" int* vtk_int_array_get_value_range(vtkNew<vtkIntArray> sself, int comp);
extern "C" int* vtk_int_array_get_value_range(vtkNew<vtkIntArray> sself);
extern "C" int* vtk_int_array_write_pointer(vtkNew<vtkIntArray> sself, long long id, long long number);
extern "C" int* vtk_int_array_get_pointer(vtkNew<vtkIntArray> sself, long long id);
extern "C" void vtk_int_array_set_array(vtkNew<vtkIntArray> sself, int array, long long size, int save);
extern "C" void vtk_int_array_set_array(vtkNew<vtkIntArray> sself, int array, long long size, int save, int deleteMethod);
extern "C" int vtk_int_array_get_data_type_value_min(vtkNew<vtkIntArray> sself);
extern "C" int vtk_int_array_get_data_type_value_max(vtkNew<vtkIntArray> sself);
extern "C" vtkNew < vtkLongArray > vtkLongArray_new () ;
extern "C" void vtkLongArray_destructor (vtkNew < vtkLongArray > sself) ;
extern "C" void * vtkLongArray_get_ptr (vtkNew < vtkLongArray > sself) ;
extern "C" int vtk_long_array_get_data_type(vtkNew<vtkLongArray> sself);
extern "C" void vtk_long_array_get_typed_tuple(vtkNew<vtkLongArray> sself, long long i, long tuple);
extern "C" void vtk_long_array_set_typed_tuple(vtkNew<vtkLongArray> sself, long long i, const long tuple);
extern "C" void vtk_long_array_insert_typed_tuple(vtkNew<vtkLongArray> sself, long long i, const long tuple);
extern "C" long long vtk_long_array_insert_next_typed_tuple(vtkNew<vtkLongArray> sself, const long tuple);
extern "C" long vtk_long_array_get_value(vtkNew<vtkLongArray> sself, long long id);
extern "C" void vtk_long_array_set_value(vtkNew<vtkLongArray> sself, long long id, long value);
extern "C" bool vtk_long_array_set_number_of_values(vtkNew<vtkLongArray> sself, long long number);
extern "C" void vtk_long_array_insert_value(vtkNew<vtkLongArray> sself, long long id, long f);
extern "C" long long vtk_long_array_insert_next_value(vtkNew<vtkLongArray> sself, long f);
extern "C" long* vtk_long_array_get_value_range(vtkNew<vtkLongArray> sself, int comp);
extern "C" long* vtk_long_array_get_value_range(vtkNew<vtkLongArray> sself);
extern "C" long* vtk_long_array_write_pointer(vtkNew<vtkLongArray> sself, long long id, long long number);
extern "C" long* vtk_long_array_get_pointer(vtkNew<vtkLongArray> sself, long long id);
extern "C" void vtk_long_array_set_array(vtkNew<vtkLongArray> sself, long array, long long size, int save);
extern "C" void vtk_long_array_set_array(vtkNew<vtkLongArray> sself, long array, long long size, int save, int deleteMethod);
extern "C" long vtk_long_array_get_data_type_value_min(vtkNew<vtkLongArray> sself);
extern "C" long vtk_long_array_get_data_type_value_max(vtkNew<vtkLongArray> sself);
extern "C" vtkNew < vtkLongLongArray > vtkLongLongArray_new () ;
extern "C" void vtkLongLongArray_destructor (vtkNew < vtkLongLongArray > sself) ;
extern "C" void * vtkLongLongArray_get_ptr (vtkNew < vtkLongLongArray > sself) ;
extern "C" int vtk_long_long_array_get_data_type(vtkNew<vtkLongLongArray> sself);
extern "C" void vtk_long_long_array_get_typed_tuple(vtkNew<vtkLongLongArray> sself, long long i, long long tuple);
extern "C" void vtk_long_long_array_set_typed_tuple(vtkNew<vtkLongLongArray> sself, long long i, const long long tuple);
extern "C" void vtk_long_long_array_insert_typed_tuple(vtkNew<vtkLongLongArray> sself, long long i, const long long tuple);
extern "C" long long vtk_long_long_array_insert_next_typed_tuple(vtkNew<vtkLongLongArray> sself, const long long tuple);
extern "C" long long vtk_long_long_array_get_value(vtkNew<vtkLongLongArray> sself, long long id);
extern "C" void vtk_long_long_array_set_value(vtkNew<vtkLongLongArray> sself, long long id, long long value);
extern "C" bool vtk_long_long_array_set_number_of_values(vtkNew<vtkLongLongArray> sself, long long number);
extern "C" void vtk_long_long_array_insert_value(vtkNew<vtkLongLongArray> sself, long long id, long long f);
extern "C" long long vtk_long_long_array_insert_next_value(vtkNew<vtkLongLongArray> sself, long long f);
extern "C" long long* vtk_long_long_array_get_value_range(vtkNew<vtkLongLongArray> sself, int comp);
extern "C" long long* vtk_long_long_array_get_value_range(vtkNew<vtkLongLongArray> sself);
extern "C" long long* vtk_long_long_array_write_pointer(vtkNew<vtkLongLongArray> sself, long long id, long long number);
extern "C" long long* vtk_long_long_array_get_pointer(vtkNew<vtkLongLongArray> sself, long long id);
extern "C" void vtk_long_long_array_set_array(vtkNew<vtkLongLongArray> sself, long long array, long long size, int save);
extern "C" void vtk_long_long_array_set_array(vtkNew<vtkLongLongArray> sself, long long array, long long size, int save, int deleteMethod);
extern "C" long long vtk_long_long_array_get_data_type_value_min(vtkNew<vtkLongLongArray> sself);
extern "C" long long vtk_long_long_array_get_data_type_value_max(vtkNew<vtkLongLongArray> sself);
extern "C" vtkNew < vtkLookupTable > vtkLookupTable_new () ;
extern "C" void vtkLookupTable_destructor (vtkNew < vtkLookupTable > sself) ;
extern "C" void * vtkLookupTable_get_ptr (vtkNew < vtkLookupTable > sself) ;
extern "C" int vtk_lookup_table_is_opaque(vtkNew<vtkLookupTable> sself);
extern "C" int vtk_lookup_table_allocate(vtkNew<vtkLookupTable> sself, int sz, int ext);
extern "C" void vtk_lookup_table_build(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_force_build(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_build_special_colors(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_set_ramp(vtkNew<vtkLookupTable> sself, int _arg);
extern "C" void vtk_lookup_table_set_ramp_to_linear(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_set_ramp_to_s_curve(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_set_ramp_to_sqrt(vtkNew<vtkLookupTable> sself);
extern "C" int vtk_lookup_table_get_ramp(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_set_scale(vtkNew<vtkLookupTable> sself, int scale);
extern "C" void vtk_lookup_table_set_scale_to_linear(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_set_scale_to_log_10(vtkNew<vtkLookupTable> sself);
extern "C" int vtk_lookup_table_get_scale(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_set_table_range(vtkNew<vtkLookupTable> sself, const double r);
extern "C" void vtk_lookup_table_set_table_range(vtkNew<vtkLookupTable> sself, double min, double max);
extern "C" double* vtk_lookup_table_get_table_range(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_table_range(vtkNew<vtkLookupTable> sself, double data);
extern "C" void vtk_lookup_table_set_hue_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2);
extern "C" void vtk_lookup_table_set_hue_range(vtkNew<vtkLookupTable> sself, const double _arg);
extern "C" double* vtk_lookup_table_get_hue_range(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_hue_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2);
extern "C" void vtk_lookup_table_get_hue_range(vtkNew<vtkLookupTable> sself, double _arg);
extern "C" void vtk_lookup_table_set_saturation_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2);
extern "C" void vtk_lookup_table_set_saturation_range(vtkNew<vtkLookupTable> sself, const double _arg);
extern "C" double* vtk_lookup_table_get_saturation_range(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_saturation_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2);
extern "C" void vtk_lookup_table_get_saturation_range(vtkNew<vtkLookupTable> sself, double _arg);
extern "C" void vtk_lookup_table_set_value_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2);
extern "C" void vtk_lookup_table_set_value_range(vtkNew<vtkLookupTable> sself, const double _arg);
extern "C" double* vtk_lookup_table_get_value_range(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_value_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2);
extern "C" void vtk_lookup_table_get_value_range(vtkNew<vtkLookupTable> sself, double _arg);
extern "C" void vtk_lookup_table_set_alpha_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2);
extern "C" void vtk_lookup_table_set_alpha_range(vtkNew<vtkLookupTable> sself, const double _arg);
extern "C" double* vtk_lookup_table_get_alpha_range(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_alpha_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2);
extern "C" void vtk_lookup_table_get_alpha_range(vtkNew<vtkLookupTable> sself, double _arg);
extern "C" void vtk_lookup_table_set_nan_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4);
extern "C" void vtk_lookup_table_set_nan_color(vtkNew<vtkLookupTable> sself, const double _arg);
extern "C" double* vtk_lookup_table_get_nan_color(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_nan_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4);
extern "C" void vtk_lookup_table_get_nan_color(vtkNew<vtkLookupTable> sself, double _arg);
extern "C" unsigned char* vtk_lookup_table_get_nan_color_as_unsigned_chars(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_color_as_unsigned_chars(vtkNew<vtkLookupTable> sself, const double colorIn, unsigned char colorOut);
extern "C" void vtk_lookup_table_set_below_range_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4);
extern "C" void vtk_lookup_table_set_below_range_color(vtkNew<vtkLookupTable> sself, const double _arg);
extern "C" double* vtk_lookup_table_get_below_range_color(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_below_range_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4);
extern "C" void vtk_lookup_table_get_below_range_color(vtkNew<vtkLookupTable> sself, double _arg);
extern "C" void vtk_lookup_table_set_use_below_range_color(vtkNew<vtkLookupTable> sself, int _arg);
extern "C" int vtk_lookup_table_get_use_below_range_color(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_use_below_range_color_on(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_use_below_range_color_off(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_set_above_range_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4);
extern "C" void vtk_lookup_table_set_above_range_color(vtkNew<vtkLookupTable> sself, const double _arg);
extern "C" double* vtk_lookup_table_get_above_range_color(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_above_range_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4);
extern "C" void vtk_lookup_table_get_above_range_color(vtkNew<vtkLookupTable> sself, double _arg);
extern "C" void vtk_lookup_table_set_use_above_range_color(vtkNew<vtkLookupTable> sself, int _arg);
extern "C" int vtk_lookup_table_get_use_above_range_color(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_use_above_range_color_on(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_use_above_range_color_off(vtkNew<vtkLookupTable> sself);
extern "C" const unsigned char* vtk_lookup_table_map_value(vtkNew<vtkLookupTable> sself, double v);
extern "C" void vtk_lookup_table_get_color(vtkNew<vtkLookupTable> sself, double v, double rgb);
extern "C" double vtk_lookup_table_get_opacity(vtkNew<vtkLookupTable> sself, double v);
extern "C" long long vtk_lookup_table_get_index(vtkNew<vtkLookupTable> sself, double v);
extern "C" void vtk_lookup_table_set_number_of_table_values(vtkNew<vtkLookupTable> sself, long long number);
extern "C" long long vtk_lookup_table_get_number_of_table_values(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_set_table_value(vtkNew<vtkLookupTable> sself, long long indx, const double rgba);
extern "C" void vtk_lookup_table_set_table_value(vtkNew<vtkLookupTable> sself, long long indx, double r, double g, double b, double a);
extern "C" double* vtk_lookup_table_get_table_value(vtkNew<vtkLookupTable> sself, long long indx);
extern "C" void vtk_lookup_table_get_table_value(vtkNew<vtkLookupTable> sself, long long indx, double rgba);
extern "C" unsigned char* vtk_lookup_table_get_pointer(vtkNew<vtkLookupTable> sself, long long id);
extern "C" unsigned char* vtk_lookup_table_write_pointer(vtkNew<vtkLookupTable> sself, long long id, int number);
extern "C" double* vtk_lookup_table_get_range(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_log_range(vtkNew<vtkLookupTable> sself, const double range, double log_range);
extern "C" double vtk_lookup_table_apply_log_scale(vtkNew<vtkLookupTable> sself, double v, const double range, const double log_range);
extern "C" void vtk_lookup_table_set_number_of_colors(vtkNew<vtkLookupTable> sself, long long _arg);
extern "C" long long vtk_lookup_table_get_number_of_colors_min_value(vtkNew<vtkLookupTable> sself);
extern "C" long long vtk_lookup_table_get_number_of_colors_max_value(vtkNew<vtkLookupTable> sself);
extern "C" long long vtk_lookup_table_get_number_of_colors(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_map_scalars_through_table_2(vtkNew<vtkLookupTable> sself, void input, unsigned char output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat);
extern "C" int vtk_lookup_table_using_log_scale(vtkNew<vtkLookupTable> sself);
extern "C" void vtk_lookup_table_get_indexed_color(vtkNew<vtkLookupTable> sself, long long idx, double rgba);
extern "C" vtkNew < vtkMath > vtkMath_new () ;
extern "C" void vtkMath_destructor (vtkNew < vtkMath > sself) ;
extern "C" void * vtkMath_get_ptr (vtkNew < vtkMath > sself) ;
extern "C" double vtk_math_pi(vtkNew<vtkMath> sself);
extern "C" float vtk_math_radians_from_degrees(vtkNew<vtkMath> sself, float degrees);
extern "C" double vtk_math_radians_from_degrees(vtkNew<vtkMath> sself, double degrees);
extern "C" float vtk_math_degrees_from_radians(vtkNew<vtkMath> sself, float radians);
extern "C" double vtk_math_degrees_from_radians(vtkNew<vtkMath> sself, double radians);
extern "C" int vtk_math_round(vtkNew<vtkMath> sself, float f);
extern "C" int vtk_math_round(vtkNew<vtkMath> sself, double f);
extern "C" int vtk_math_floor(vtkNew<vtkMath> sself, double x);
extern "C" int vtk_math_ceil(vtkNew<vtkMath> sself, double x);
extern "C" int vtk_math_ceil_log_2(vtkNew<vtkMath> sself, unsigned long long x);
extern "C" bool vtk_math_is_power_of_two(vtkNew<vtkMath> sself, unsigned long long x);
extern "C" int vtk_math_nearest_power_of_two(vtkNew<vtkMath> sself, int x);
extern "C" long long vtk_math_factorial(vtkNew<vtkMath> sself, int N);
extern "C" long long vtk_math_binomial(vtkNew<vtkMath> sself, int m, int n);
extern "C" int* vtk_math_begin_combination(vtkNew<vtkMath> sself, int m, int n);
extern "C" int vtk_math_next_combination(vtkNew<vtkMath> sself, int m, int n, int combination);
extern "C" void vtk_math_free_combination(vtkNew<vtkMath> sself, int combination);
extern "C" void vtk_math_random_seed(vtkNew<vtkMath> sself, int s);
extern "C" int vtk_math_get_seed(vtkNew<vtkMath> sself);
extern "C" double vtk_math_random(vtkNew<vtkMath> sself);
extern "C" double vtk_math_random(vtkNew<vtkMath> sself, double min, double max);
extern "C" double vtk_math_gaussian(vtkNew<vtkMath> sself);
extern "C" double vtk_math_gaussian(vtkNew<vtkMath> sself, double mean, double std);
extern "C" void vtk_math_assign(vtkNew<vtkMath> sself, const double a, double b);
extern "C" void vtk_math_add(vtkNew<vtkMath> sself, const float a, const float b, float c);
extern "C" void vtk_math_add(vtkNew<vtkMath> sself, const double a, const double b, double c);
extern "C" void vtk_math_subtract(vtkNew<vtkMath> sself, const float a, const float b, float c);
extern "C" void vtk_math_subtract(vtkNew<vtkMath> sself, const double a, const double b, double c);
extern "C" void vtk_math_multiply_scalar(vtkNew<vtkMath> sself, float a, float s);
extern "C" void vtk_math_multiply_scalar_2_d(vtkNew<vtkMath> sself, float a, float s);
extern "C" void vtk_math_multiply_scalar(vtkNew<vtkMath> sself, double a, double s);
extern "C" void vtk_math_multiply_scalar_2_d(vtkNew<vtkMath> sself, double a, double s);
extern "C" float vtk_math_dot(vtkNew<vtkMath> sself, const float a, const float b);
extern "C" double vtk_math_dot(vtkNew<vtkMath> sself, const double a, const double b);
extern "C" void vtk_math_outer(vtkNew<vtkMath> sself, const float a, const float b, float c);
extern "C" void vtk_math_outer(vtkNew<vtkMath> sself, const double a, const double b, double c);
extern "C" void vtk_math_cross(vtkNew<vtkMath> sself, const float a, const float b, float c);
extern "C" void vtk_math_cross(vtkNew<vtkMath> sself, const double a, const double b, double c);
extern "C" float vtk_math_norm(vtkNew<vtkMath> sself, const float x, int n);
extern "C" double vtk_math_norm(vtkNew<vtkMath> sself, const double x, int n);
extern "C" float vtk_math_norm(vtkNew<vtkMath> sself, const float v);
extern "C" double vtk_math_norm(vtkNew<vtkMath> sself, const double v);
extern "C" float vtk_math_normalize(vtkNew<vtkMath> sself, float v);
extern "C" double vtk_math_normalize(vtkNew<vtkMath> sself, double v);
extern "C" void vtk_math_perpendiculars(vtkNew<vtkMath> sself, const double v1, double v2, double v3, double theta);
extern "C" void vtk_math_perpendiculars(vtkNew<vtkMath> sself, const float v1, float v2, float v3, double theta);
extern "C" bool vtk_math_project_vector(vtkNew<vtkMath> sself, const float a, const float b, float projection);
extern "C" bool vtk_math_project_vector(vtkNew<vtkMath> sself, const double a, const double b, double projection);
extern "C" bool vtk_math_project_vector_2_d(vtkNew<vtkMath> sself, const float a, const float b, float projection);
extern "C" bool vtk_math_project_vector_2_d(vtkNew<vtkMath> sself, const double a, const double b, double projection);
extern "C" float vtk_math_distance_2_between_points(vtkNew<vtkMath> sself, const float p1, const float p2);
extern "C" double vtk_math_distance_2_between_points(vtkNew<vtkMath> sself, const double p1, const double p2);
extern "C" double vtk_math_angle_between_vectors(vtkNew<vtkMath> sself, const double v1, const double v2);
extern "C" double vtk_math_signed_angle_between_vectors(vtkNew<vtkMath> sself, const double v1, const double v2, const double vn);
extern "C" double vtk_math_gaussian_amplitude(vtkNew<vtkMath> sself, const double variance, const double distanceFromMean);
extern "C" double vtk_math_gaussian_amplitude(vtkNew<vtkMath> sself, const double mean, const double variance, const double position);
extern "C" double vtk_math_gaussian_weight(vtkNew<vtkMath> sself, const double variance, const double distanceFromMean);
extern "C" double vtk_math_gaussian_weight(vtkNew<vtkMath> sself, const double mean, const double variance, const double position);
extern "C" float vtk_math_dot_2_d(vtkNew<vtkMath> sself, const float x, const float y);
extern "C" double vtk_math_dot_2_d(vtkNew<vtkMath> sself, const double x, const double y);
extern "C" void vtk_math_outer_2_d(vtkNew<vtkMath> sself, const float x, const float y, float A);
extern "C" void vtk_math_outer_2_d(vtkNew<vtkMath> sself, const double x, const double y, double A);
extern "C" float vtk_math_norm_2_d(vtkNew<vtkMath> sself, const float x);
extern "C" double vtk_math_norm_2_d(vtkNew<vtkMath> sself, const double x);
extern "C" float vtk_math_normalize_2_d(vtkNew<vtkMath> sself, float v);
extern "C" double vtk_math_normalize_2_d(vtkNew<vtkMath> sself, double v);
extern "C" float vtk_math_determinant_2_x_2(vtkNew<vtkMath> sself, const float c1, const float c2);
extern "C" double vtk_math_determinant_2_x_2(vtkNew<vtkMath> sself, double a, double b, double c, double d);
extern "C" double vtk_math_determinant_2_x_2(vtkNew<vtkMath> sself, const double c1, const double c2);
extern "C" void vtk_math_lu_factor_3_x_3(vtkNew<vtkMath> sself, float A, int index);
extern "C" void vtk_math_lu_factor_3_x_3(vtkNew<vtkMath> sself, double A, int index);
extern "C" void vtk_math_lu_solve_3_x_3(vtkNew<vtkMath> sself, const float A, const int index, float x);
extern "C" void vtk_math_lu_solve_3_x_3(vtkNew<vtkMath> sself, const double A, const int index, double x);
extern "C" void vtk_math_linear_solve_3_x_3(vtkNew<vtkMath> sself, const float A, const float x, float y);
extern "C" void vtk_math_linear_solve_3_x_3(vtkNew<vtkMath> sself, const double A, const double x, double y);
extern "C" void vtk_math_multiply_3_x_3(vtkNew<vtkMath> sself, const float A, const float v, float u);
extern "C" void vtk_math_multiply_3_x_3(vtkNew<vtkMath> sself, const double A, const double v, double u);
extern "C" void vtk_math_multiply_3_x_3(vtkNew<vtkMath> sself, const float A, const float B, float C);
extern "C" void vtk_math_multiply_3_x_3(vtkNew<vtkMath> sself, const double A, const double B, double C);
extern "C" void vtk_math_multiply_matrix(vtkNew<vtkMath> sself, const double A, const double B, unsigned int rowA, unsigned int colA, unsigned int rowB, unsigned int colB, double C);
extern "C" void vtk_math_transpose_3_x_3(vtkNew<vtkMath> sself, const float A, float AT);
extern "C" void vtk_math_transpose_3_x_3(vtkNew<vtkMath> sself, const double A, double AT);
extern "C" void vtk_math_invert_3_x_3(vtkNew<vtkMath> sself, const float A, float AI);
extern "C" void vtk_math_invert_3_x_3(vtkNew<vtkMath> sself, const double A, double AI);
extern "C" void vtk_math_identity_3_x_3(vtkNew<vtkMath> sself, float A);
extern "C" void vtk_math_identity_3_x_3(vtkNew<vtkMath> sself, double A);
extern "C" double vtk_math_determinant_3_x_3(vtkNew<vtkMath> sself, const float A);
extern "C" double vtk_math_determinant_3_x_3(vtkNew<vtkMath> sself, const double A);
extern "C" float vtk_math_determinant_3_x_3(vtkNew<vtkMath> sself, const float c1, const float c2, const float c3);
extern "C" double vtk_math_determinant_3_x_3(vtkNew<vtkMath> sself, const double c1, const double c2, const double c3);
extern "C" double vtk_math_determinant_3_x_3(vtkNew<vtkMath> sself, double a1, double a2, double a3, double b1, double b2, double b3, double c1, double c2, double c3);
extern "C" void vtk_math_quaternion_to_matrix_3_x_3(vtkNew<vtkMath> sself, const float quat, float A);
extern "C" void vtk_math_quaternion_to_matrix_3_x_3(vtkNew<vtkMath> sself, const double quat, double A);
extern "C" void vtk_math_matrix_3_x_3_to_quaternion(vtkNew<vtkMath> sself, const float A, float quat);
extern "C" void vtk_math_matrix_3_x_3_to_quaternion(vtkNew<vtkMath> sself, const double A, double quat);
extern "C" void vtk_math_multiply_quaternion(vtkNew<vtkMath> sself, const float q1, const float q2, float q);
extern "C" void vtk_math_multiply_quaternion(vtkNew<vtkMath> sself, const double q1, const double q2, double q);
extern "C" void vtk_math_rotate_vector_by_normalized_quaternion(vtkNew<vtkMath> sself, const float v, const float q, float r);
extern "C" void vtk_math_rotate_vector_by_normalized_quaternion(vtkNew<vtkMath> sself, const double v, const double q, double r);
extern "C" void vtk_math_rotate_vector_by_wxyz(vtkNew<vtkMath> sself, const float v, const float q, float r);
extern "C" void vtk_math_rotate_vector_by_wxyz(vtkNew<vtkMath> sself, const double v, const double q, double r);
extern "C" void vtk_math_orthogonalize_3_x_3(vtkNew<vtkMath> sself, const float A, float B);
extern "C" void vtk_math_orthogonalize_3_x_3(vtkNew<vtkMath> sself, const double A, double B);
extern "C" void vtk_math_diagonalize_3_x_3(vtkNew<vtkMath> sself, const float A, float w, float V);
extern "C" void vtk_math_diagonalize_3_x_3(vtkNew<vtkMath> sself, const double A, double w, double V);
extern "C" void vtk_math_singular_value_decomposition_3_x_3(vtkNew<vtkMath> sself, const float A, float U, float w, float VT);
extern "C" void vtk_math_singular_value_decomposition_3_x_3(vtkNew<vtkMath> sself, const double A, double U, double w, double VT);
extern "C" int vtk_math_solve_linear_system_gepp_2_x_2(vtkNew<vtkMath> sself, double a00, double a01, double a10, double a11, double b0, double b1, double x0, double x1);
extern "C" int vtk_math_solve_linear_system(vtkNew<vtkMath> sself, double A, double x, int size);
extern "C" int vtk_math_invert_matrix(vtkNew<vtkMath> sself, double A, double AI, int size);
extern "C" int vtk_math_invert_matrix(vtkNew<vtkMath> sself, double A, double AI, int size, int tmp1Size, double tmp2Size);
extern "C" int vtk_math_lu_factor_linear_system(vtkNew<vtkMath> sself, double A, int index, int size);
extern "C" int vtk_math_lu_factor_linear_system(vtkNew<vtkMath> sself, double A, int index, int size, double tmpSize);
extern "C" void vtk_math_lu_solve_linear_system(vtkNew<vtkMath> sself, double A, int index, double x, int size);
extern "C" double vtk_math_estimate_matrix_condition(vtkNew<vtkMath> sself, const double A, int size);
extern "C" int vtk_math_jacobi(vtkNew<vtkMath> sself, float a, float w, float v);
extern "C" int vtk_math_jacobi(vtkNew<vtkMath> sself, double a, double w, double v);
extern "C" int vtk_math_jacobi_n(vtkNew<vtkMath> sself, float a, int n, float w, float v);
extern "C" int vtk_math_jacobi_n(vtkNew<vtkMath> sself, double a, int n, double w, double v);
extern "C" int vtk_math_solve_homogeneous_least_squares(vtkNew<vtkMath> sself, int numberOfSamples, double xt, int xOrder, double mt);
extern "C" int vtk_math_solve_least_squares(vtkNew<vtkMath> sself, int numberOfSamples, double xt, int xOrder, double yt, int yOrder, double mt, int checkHomogeneous);
extern "C" void vtk_math_rgb_to_hsv(vtkNew<vtkMath> sself, const float rgb, float hsv);
extern "C" void vtk_math_rgb_to_hsv(vtkNew<vtkMath> sself, float r, float g, float b, float h, float s, float v);
extern "C" void vtk_math_rgb_to_hsv(vtkNew<vtkMath> sself, const double rgb, double hsv);
extern "C" void vtk_math_rgb_to_hsv(vtkNew<vtkMath> sself, double r, double g, double b, double h, double s, double v);
extern "C" void vtk_math_hsv_to_rgb(vtkNew<vtkMath> sself, const float hsv, float rgb);
extern "C" void vtk_math_hsv_to_rgb(vtkNew<vtkMath> sself, float h, float s, float v, float r, float g, float b);
extern "C" void vtk_math_hsv_to_rgb(vtkNew<vtkMath> sself, const double hsv, double rgb);
extern "C" void vtk_math_hsv_to_rgb(vtkNew<vtkMath> sself, double h, double s, double v, double r, double g, double b);
extern "C" void vtk_math_lab_to_xyz(vtkNew<vtkMath> sself, const double lab, double xyz);
extern "C" void vtk_math_lab_to_xyz(vtkNew<vtkMath> sself, double L, double a, double b, double x, double y, double z);
extern "C" void vtk_math_xyz_to_lab(vtkNew<vtkMath> sself, const double xyz, double lab);
extern "C" void vtk_math_xyz_to_lab(vtkNew<vtkMath> sself, double x, double y, double z, double L, double a, double b);
extern "C" void vtk_math_xyz_to_rgb(vtkNew<vtkMath> sself, const double xyz, double rgb);
extern "C" void vtk_math_xyz_to_rgb(vtkNew<vtkMath> sself, double x, double y, double z, double r, double g, double b);
extern "C" void vtk_math_rgb_to_xyz(vtkNew<vtkMath> sself, const double rgb, double xyz);
extern "C" void vtk_math_rgb_to_xyz(vtkNew<vtkMath> sself, double r, double g, double b, double x, double y, double z);
extern "C" void vtk_math_rgb_to_lab(vtkNew<vtkMath> sself, const double rgb, double lab);
extern "C" void vtk_math_rgb_to_lab(vtkNew<vtkMath> sself, double red, double green, double blue, double L, double a, double b);
extern "C" void vtk_math_lab_to_rgb(vtkNew<vtkMath> sself, const double lab, double rgb);
extern "C" void vtk_math_lab_to_rgb(vtkNew<vtkMath> sself, double L, double a, double b, double red, double green, double blue);
extern "C" void vtk_math_uninitialize_bounds(vtkNew<vtkMath> sself, double bounds);
extern "C" int vtk_math_are_bounds_initialized(vtkNew<vtkMath> sself, const double bounds);
extern "C" void vtk_math_clamp_value(vtkNew<vtkMath> sself, double value, const double range);
extern "C" void vtk_math_clamp_value(vtkNew<vtkMath> sself, double value, const double range, double clamped_value);
extern "C" void vtk_math_clamp_values(vtkNew<vtkMath> sself, double values, int nb_values, const double range);
extern "C" void vtk_math_clamp_values(vtkNew<vtkMath> sself, const double values, int nb_values, const double range, double clamped_values);
extern "C" double vtk_math_clamp_and_normalize_value(vtkNew<vtkMath> sself, double value, const double range);
extern "C" int vtk_math_get_scalar_type_fitting_range(vtkNew<vtkMath> sself, double range_min, double range_max, double scale, double shift);
extern "C" int vtk_math_extent_is_within_other_extent(vtkNew<vtkMath> sself, const int extent1, const int extent2);
extern "C" int vtk_math_bounds_is_within_other_bounds(vtkNew<vtkMath> sself, const double bounds1, const double bounds2, const double delta);
extern "C" int vtk_math_point_is_within_bounds(vtkNew<vtkMath> sself, const double point, const double bounds, const double delta);
extern "C" int vtk_math_plane_intersects_aabb(vtkNew<vtkMath> sself, const double bounds, const double normal, const double point);
extern "C" double vtk_math_solve_3_point_circle(vtkNew<vtkMath> sself, const double p1, const double p2, const double p3, double center);
extern "C" double vtk_math_inf(vtkNew<vtkMath> sself);
extern "C" double vtk_math_neg_inf(vtkNew<vtkMath> sself);
extern "C" double vtk_math_nan(vtkNew<vtkMath> sself);
extern "C" int vtk_math_is_inf(vtkNew<vtkMath> sself, double x);
extern "C" int vtk_math_is_nan(vtkNew<vtkMath> sself, double x);
extern "C" bool vtk_math_is_finite(vtkNew<vtkMath> sself, double x);
extern "C" int vtk_math_quadratic_root(vtkNew<vtkMath> sself, double a, double b, double c, double min, double max, double u);
extern "C" vtkNew < vtkMersenneTwister > vtkMersenneTwister_new () ;
extern "C" void vtkMersenneTwister_destructor (vtkNew < vtkMersenneTwister > sself) ;
extern "C" void * vtkMersenneTwister_get_ptr (vtkNew < vtkMersenneTwister > sself) ;
extern "C" void vtk_mersenne_twister_initialize(vtkNew<vtkMersenneTwister> sself, unsigned int seed);
extern "C" unsigned int vtk_mersenne_twister_initialize_new_sequence(vtkNew<vtkMersenneTwister> sself, unsigned int seed, int p);
extern "C" void vtk_mersenne_twister_initialize_sequence(vtkNew<vtkMersenneTwister> sself, unsigned int id, unsigned int seed, int p);
extern "C" double vtk_mersenne_twister_get_value(vtkNew<vtkMersenneTwister> sself, unsigned int id);
extern "C" double vtk_mersenne_twister_get_value(vtkNew<vtkMersenneTwister> sself);
extern "C" void vtk_mersenne_twister_next(vtkNew<vtkMersenneTwister> sself, unsigned int id);
extern "C" void vtk_mersenne_twister_next(vtkNew<vtkMersenneTwister> sself);
extern "C" vtkNew < vtkMinimalStandardRandomSequence > vtkMinimalStandardRandomSequence_new () ;
extern "C" void vtkMinimalStandardRandomSequence_destructor (vtkNew < vtkMinimalStandardRandomSequence > sself) ;
extern "C" void * vtkMinimalStandardRandomSequence_get_ptr (vtkNew < vtkMinimalStandardRandomSequence > sself) ;
extern "C" void vtk_minimal_standard_random_sequence_initialize(vtkNew<vtkMinimalStandardRandomSequence> sself, unsigned int seed);
extern "C" void vtk_minimal_standard_random_sequence_set_seed(vtkNew<vtkMinimalStandardRandomSequence> sself, int value);
extern "C" void vtk_minimal_standard_random_sequence_set_seed_only(vtkNew<vtkMinimalStandardRandomSequence> sself, int value);
extern "C" int vtk_minimal_standard_random_sequence_get_seed(vtkNew<vtkMinimalStandardRandomSequence> sself);
extern "C" double vtk_minimal_standard_random_sequence_get_value(vtkNew<vtkMinimalStandardRandomSequence> sself);
extern "C" void vtk_minimal_standard_random_sequence_next(vtkNew<vtkMinimalStandardRandomSequence> sself);
extern "C" double vtk_minimal_standard_random_sequence_get_range_value(vtkNew<vtkMinimalStandardRandomSequence> sself, double rangeMin, double rangeMax);
extern "C" double vtk_minimal_standard_random_sequence_get_next_range_value(vtkNew<vtkMinimalStandardRandomSequence> sself, double rangeMin, double rangeMax);
extern "C" vtkNew < vtkMultiThreader > vtkMultiThreader_new () ;
extern "C" void vtkMultiThreader_destructor (vtkNew < vtkMultiThreader > sself) ;
extern "C" void * vtkMultiThreader_get_ptr (vtkNew < vtkMultiThreader > sself) ;
extern "C" void vtk_multi_threader_set_number_of_threads(vtkNew<vtkMultiThreader> sself, int _arg);
extern "C" int vtk_multi_threader_get_number_of_threads_min_value(vtkNew<vtkMultiThreader> sself);
extern "C" int vtk_multi_threader_get_number_of_threads_max_value(vtkNew<vtkMultiThreader> sself);
extern "C" int vtk_multi_threader_get_number_of_threads(vtkNew<vtkMultiThreader> sself);
extern "C" int vtk_multi_threader_get_global_static_maximum_number_of_threads(vtkNew<vtkMultiThreader> sself);
extern "C" void vtk_multi_threader_set_global_maximum_number_of_threads(vtkNew<vtkMultiThreader> sself, int val);
extern "C" int vtk_multi_threader_get_global_maximum_number_of_threads(vtkNew<vtkMultiThreader> sself);
extern "C" void vtk_multi_threader_set_global_default_number_of_threads(vtkNew<vtkMultiThreader> sself, int val);
extern "C" int vtk_multi_threader_get_global_default_number_of_threads(vtkNew<vtkMultiThreader> sself);
extern "C" void vtk_multi_threader_single_method_execute(vtkNew<vtkMultiThreader> sself);
extern "C" void vtk_multi_threader_multiple_method_execute(vtkNew<vtkMultiThreader> sself);
extern "C" void vtk_multi_threader_terminate_thread(vtkNew<vtkMultiThreader> sself, int threadId);
extern "C" int vtk_multi_threader_is_thread_active(vtkNew<vtkMultiThreader> sself, int threadId);
extern "C" vtkNew < vtkObject > vtkObject_new () ;
extern "C" void vtkObject_destructor (vtkNew < vtkObject > sself) ;
extern "C" void * vtkObject_get_ptr (vtkNew < vtkObject > sself) ;
extern "C" int vtk_object_is_type_of(vtkNew<vtkObject> sself, const char type);
extern "C" int vtk_object_is_a(vtkNew<vtkObject> sself, const char type);
extern "C" long long vtk_object_get_number_of_generations_from_base_type(vtkNew<vtkObject> sself, const char type);
extern "C" long long vtk_object_get_number_of_generations_from_base(vtkNew<vtkObject> sself, const char type);
extern "C" void vtk_object_debug_on(vtkNew<vtkObject> sself);
extern "C" void vtk_object_debug_off(vtkNew<vtkObject> sself);
extern "C" bool vtk_object_get_debug(vtkNew<vtkObject> sself);
extern "C" void vtk_object_set_debug(vtkNew<vtkObject> sself, bool debugFlag);
extern "C" void vtk_object_break_on_error(vtkNew<vtkObject> sself);
extern "C" void vtk_object_modified(vtkNew<vtkObject> sself);
extern "C" unsigned long vtk_object_get_m_time(vtkNew<vtkObject> sself);
extern "C" void vtk_object_set_global_warning_display(vtkNew<vtkObject> sself, int val);
extern "C" void vtk_object_global_warning_display_on(vtkNew<vtkObject> sself);
extern "C" void vtk_object_global_warning_display_off(vtkNew<vtkObject> sself);
extern "C" int vtk_object_get_global_warning_display(vtkNew<vtkObject> sself);
extern "C" void vtk_object_remove_observer(vtkNew<vtkObject> sself, unsigned long tag);
extern "C" void vtk_object_remove_observers(vtkNew<vtkObject> sself, unsigned long event);
extern "C" void vtk_object_remove_observers(vtkNew<vtkObject> sself, const char event);
extern "C" void vtk_object_remove_all_observers(vtkNew<vtkObject> sself);
extern "C" int vtk_object_has_observer(vtkNew<vtkObject> sself, unsigned long event);
extern "C" int vtk_object_has_observer(vtkNew<vtkObject> sself, const char event);
extern "C" int vtk_object_invoke_event(vtkNew<vtkObject> sself, unsigned long event, void callData);
extern "C" int vtk_object_invoke_event(vtkNew<vtkObject> sself, const char event, void callData);
extern "C" int vtk_object_invoke_event(vtkNew<vtkObject> sself, unsigned long event);
extern "C" int vtk_object_invoke_event(vtkNew<vtkObject> sself, const char event);
extern "C" vtkNew < vtkObjectFactoryCollection > vtkObjectFactoryCollection_new () ;
extern "C" void vtkObjectFactoryCollection_destructor (vtkNew < vtkObjectFactoryCollection > sself) ;
extern "C" void * vtkObjectFactoryCollection_get_ptr (vtkNew < vtkObjectFactoryCollection > sself) ;
extern "C" vtkNew < vtkOldStyleCallbackCommand > vtkOldStyleCallbackCommand_new () ;
extern "C" void vtkOldStyleCallbackCommand_destructor (vtkNew < vtkOldStyleCallbackCommand > sself) ;
extern "C" void * vtkOldStyleCallbackCommand_get_ptr (vtkNew < vtkOldStyleCallbackCommand > sself) ;
extern "C" void vtk_old_style_callback_command_set_client_data(vtkNew<vtkOldStyleCallbackCommand> sself, void cd);
extern "C" vtkNew < vtkOutputWindow > vtkOutputWindow_new () ;
extern "C" void vtkOutputWindow_destructor (vtkNew < vtkOutputWindow > sself) ;
extern "C" void * vtkOutputWindow_get_ptr (vtkNew < vtkOutputWindow > sself) ;
extern "C" void vtk_output_window_display_text(vtkNew<vtkOutputWindow> sself, const char p0);
extern "C" void vtk_output_window_display_error_text(vtkNew<vtkOutputWindow> sself, const char p0);
extern "C" void vtk_output_window_display_warning_text(vtkNew<vtkOutputWindow> sself, const char p0);
extern "C" void vtk_output_window_display_generic_warning_text(vtkNew<vtkOutputWindow> sself, const char p0);
extern "C" void vtk_output_window_display_debug_text(vtkNew<vtkOutputWindow> sself, const char p0);
extern "C" void vtk_output_window_prompt_user_on(vtkNew<vtkOutputWindow> sself);
extern "C" void vtk_output_window_prompt_user_off(vtkNew<vtkOutputWindow> sself);
extern "C" void vtk_output_window_set_prompt_user(vtkNew<vtkOutputWindow> sself, bool _arg);
extern "C" void vtk_output_window_set_use_std_error_for_all_messages(vtkNew<vtkOutputWindow> sself, bool p0);
extern "C" bool vtk_output_window_get_use_std_error_for_all_messages(vtkNew<vtkOutputWindow> sself);
extern "C" void vtk_output_window_use_std_error_for_all_messages_on(vtkNew<vtkOutputWindow> sself);
extern "C" void vtk_output_window_use_std_error_for_all_messages_off(vtkNew<vtkOutputWindow> sself);
extern "C" void vtk_output_window_set_display_mode(vtkNew<vtkOutputWindow> sself, int _arg);
extern "C" int vtk_output_window_get_display_mode_min_value(vtkNew<vtkOutputWindow> sself);
extern "C" int vtk_output_window_get_display_mode_max_value(vtkNew<vtkOutputWindow> sself);
extern "C" int vtk_output_window_get_display_mode(vtkNew<vtkOutputWindow> sself);
extern "C" void vtk_output_window_set_display_mode_to_default(vtkNew<vtkOutputWindow> sself);
extern "C" void vtk_output_window_set_display_mode_to_never(vtkNew<vtkOutputWindow> sself);
extern "C" void vtk_output_window_set_display_mode_to_always(vtkNew<vtkOutputWindow> sself);
extern "C" void vtk_output_window_set_display_mode_to_always_std_err(vtkNew<vtkOutputWindow> sself);
extern "C" vtkNew < vtkOverrideInformationCollection > vtkOverrideInformationCollection_new () ;
extern "C" void vtkOverrideInformationCollection_destructor (vtkNew < vtkOverrideInformationCollection > sself) ;
extern "C" void * vtkOverrideInformationCollection_get_ptr (vtkNew < vtkOverrideInformationCollection > sself) ;
extern "C" vtkNew < vtkPoints > vtkPoints_new () ;
extern "C" void vtkPoints_destructor (vtkNew < vtkPoints > sself) ;
extern "C" void * vtkPoints_get_ptr (vtkNew < vtkPoints > sself) ;
extern "C" int vtk_points_allocate(vtkNew<vtkPoints> sself, long long sz, long long ext);
extern "C" void vtk_points_initialize(vtkNew<vtkPoints> sself);
extern "C" int vtk_points_get_data_type(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type(vtkNew<vtkPoints> sself, int dataType);
extern "C" void vtk_points_set_data_type_to_bit(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type_to_char(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type_to_unsigned_char(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type_to_short(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type_to_unsigned_short(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type_to_int(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type_to_unsigned_int(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type_to_long(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type_to_unsigned_long(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type_to_float(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_set_data_type_to_double(vtkNew<vtkPoints> sself);
extern "C" void* vtk_points_get_void_pointer(vtkNew<vtkPoints> sself, const int id);
extern "C" void vtk_points_squeeze(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_reset(vtkNew<vtkPoints> sself);
extern "C" unsigned long vtk_points_get_actual_memory_size(vtkNew<vtkPoints> sself);
extern "C" long long vtk_points_get_number_of_points(vtkNew<vtkPoints> sself);
extern "C" double* vtk_points_get_point(vtkNew<vtkPoints> sself, long long id);
extern "C" void vtk_points_get_point(vtkNew<vtkPoints> sself, long long id, double x);
extern "C" void vtk_points_set_point(vtkNew<vtkPoints> sself, long long id, const float x);
extern "C" void vtk_points_set_point(vtkNew<vtkPoints> sself, long long id, const double x);
extern "C" void vtk_points_set_point(vtkNew<vtkPoints> sself, long long id, double x, double y, double z);
extern "C" void vtk_points_insert_point(vtkNew<vtkPoints> sself, long long id, const float x);
extern "C" void vtk_points_insert_point(vtkNew<vtkPoints> sself, long long id, const double x);
extern "C" void vtk_points_insert_point(vtkNew<vtkPoints> sself, long long id, double x, double y, double z);
extern "C" long long vtk_points_insert_next_point(vtkNew<vtkPoints> sself, const float x);
extern "C" long long vtk_points_insert_next_point(vtkNew<vtkPoints> sself, const double x);
extern "C" long long vtk_points_insert_next_point(vtkNew<vtkPoints> sself, double x, double y, double z);
extern "C" void vtk_points_set_number_of_points(vtkNew<vtkPoints> sself, long long numPoints);
extern "C" int vtk_points_resize(vtkNew<vtkPoints> sself, long long numPoints);
extern "C" void vtk_points_compute_bounds(vtkNew<vtkPoints> sself);
extern "C" double* vtk_points_get_bounds(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_get_bounds(vtkNew<vtkPoints> sself, double bounds);
extern "C" unsigned long vtk_points_get_m_time(vtkNew<vtkPoints> sself);
extern "C" void vtk_points_modified(vtkNew<vtkPoints> sself);
extern "C" vtkNew < vtkPoints2D > vtkPoints2D_new () ;
extern "C" void vtkPoints2D_destructor (vtkNew < vtkPoints2D > sself) ;
extern "C" void * vtkPoints2D_get_ptr (vtkNew < vtkPoints2D > sself) ;
extern "C" int vtk_points_2_d_allocate(vtkNew<vtkPoints2D> sself, long long sz, long long ext);
extern "C" void vtk_points_2_d_initialize(vtkNew<vtkPoints2D> sself);
extern "C" int vtk_points_2_d_get_data_type(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type(vtkNew<vtkPoints2D> sself, int dataType);
extern "C" void vtk_points_2_d_set_data_type_to_bit(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type_to_char(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type_to_unsigned_char(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type_to_short(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type_to_unsigned_short(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type_to_int(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type_to_unsigned_int(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type_to_long(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type_to_unsigned_long(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type_to_float(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_set_data_type_to_double(vtkNew<vtkPoints2D> sself);
extern "C" void* vtk_points_2_d_get_void_pointer(vtkNew<vtkPoints2D> sself, const int id);
extern "C" void vtk_points_2_d_squeeze(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_reset(vtkNew<vtkPoints2D> sself);
extern "C" unsigned long vtk_points_2_d_get_actual_memory_size(vtkNew<vtkPoints2D> sself);
extern "C" long long vtk_points_2_d_get_number_of_points(vtkNew<vtkPoints2D> sself);
extern "C" double* vtk_points_2_d_get_point(vtkNew<vtkPoints2D> sself, long long id);
extern "C" void vtk_points_2_d_get_point(vtkNew<vtkPoints2D> sself, long long id, double x);
extern "C" void vtk_points_2_d_set_point(vtkNew<vtkPoints2D> sself, long long id, const float x);
extern "C" void vtk_points_2_d_set_point(vtkNew<vtkPoints2D> sself, long long id, const double x);
extern "C" void vtk_points_2_d_set_point(vtkNew<vtkPoints2D> sself, long long id, double x, double y);
extern "C" void vtk_points_2_d_insert_point(vtkNew<vtkPoints2D> sself, long long id, const float x);
extern "C" void vtk_points_2_d_insert_point(vtkNew<vtkPoints2D> sself, long long id, const double x);
extern "C" void vtk_points_2_d_insert_point(vtkNew<vtkPoints2D> sself, long long id, double x, double y);
extern "C" long long vtk_points_2_d_insert_next_point(vtkNew<vtkPoints2D> sself, const float x);
extern "C" long long vtk_points_2_d_insert_next_point(vtkNew<vtkPoints2D> sself, const double x);
extern "C" long long vtk_points_2_d_insert_next_point(vtkNew<vtkPoints2D> sself, double x, double y);
extern "C" void vtk_points_2_d_remove_point(vtkNew<vtkPoints2D> sself, long long id);
extern "C" void vtk_points_2_d_set_number_of_points(vtkNew<vtkPoints2D> sself, long long numPoints);
extern "C" int vtk_points_2_d_resize(vtkNew<vtkPoints2D> sself, long long numPoints);
extern "C" void vtk_points_2_d_compute_bounds(vtkNew<vtkPoints2D> sself);
extern "C" double* vtk_points_2_d_get_bounds(vtkNew<vtkPoints2D> sself);
extern "C" void vtk_points_2_d_get_bounds(vtkNew<vtkPoints2D> sself, double bounds);
extern "C" vtkNew < vtkPriorityQueue > vtkPriorityQueue_new () ;
extern "C" void vtkPriorityQueue_destructor (vtkNew < vtkPriorityQueue > sself) ;
extern "C" void * vtkPriorityQueue_get_ptr (vtkNew < vtkPriorityQueue > sself) ;
extern "C" void vtk_priority_queue_allocate(vtkNew<vtkPriorityQueue> sself, long long sz, long long ext);
extern "C" void vtk_priority_queue_insert(vtkNew<vtkPriorityQueue> sself, double priority, long long id);
extern "C" long long vtk_priority_queue_pop(vtkNew<vtkPriorityQueue> sself, long long location, double priority);
extern "C" long long vtk_priority_queue_pop(vtkNew<vtkPriorityQueue> sself, long long location);
extern "C" long long vtk_priority_queue_peek(vtkNew<vtkPriorityQueue> sself, long long location, double priority);
extern "C" long long vtk_priority_queue_peek(vtkNew<vtkPriorityQueue> sself, long long location);
extern "C" double vtk_priority_queue_delete_id(vtkNew<vtkPriorityQueue> sself, long long id);
extern "C" double vtk_priority_queue_get_priority(vtkNew<vtkPriorityQueue> sself, long long id);
extern "C" long long vtk_priority_queue_get_number_of_items(vtkNew<vtkPriorityQueue> sself);
extern "C" void vtk_priority_queue_reset(vtkNew<vtkPriorityQueue> sself);
extern "C" vtkNew < vtkRandomPool > vtkRandomPool_new () ;
extern "C" void vtkRandomPool_destructor (vtkNew < vtkRandomPool > sself) ;
extern "C" void * vtkRandomPool_get_ptr (vtkNew < vtkRandomPool > sself) ;
extern "C" void vtk_random_pool_set_size(vtkNew<vtkRandomPool> sself, long long _arg);
extern "C" long long vtk_random_pool_get_size_min_value(vtkNew<vtkRandomPool> sself);
extern "C" long long vtk_random_pool_get_size_max_value(vtkNew<vtkRandomPool> sself);
extern "C" long long vtk_random_pool_get_size(vtkNew<vtkRandomPool> sself);
extern "C" void vtk_random_pool_set_number_of_components(vtkNew<vtkRandomPool> sself, long long _arg);
extern "C" long long vtk_random_pool_get_number_of_components_min_value(vtkNew<vtkRandomPool> sself);
extern "C" long long vtk_random_pool_get_number_of_components_max_value(vtkNew<vtkRandomPool> sself);
extern "C" long long vtk_random_pool_get_number_of_components(vtkNew<vtkRandomPool> sself);
extern "C" long long vtk_random_pool_get_total_size(vtkNew<vtkRandomPool> sself);
extern "C" const double* vtk_random_pool_generate_pool(vtkNew<vtkRandomPool> sself);
extern "C" const double* vtk_random_pool_get_pool(vtkNew<vtkRandomPool> sself);
extern "C" double vtk_random_pool_get_value(vtkNew<vtkRandomPool> sself, long long i);
extern "C" double vtk_random_pool_get_value(vtkNew<vtkRandomPool> sself, long long i, int compNum);
extern "C" void vtk_random_pool_set_chunk_size(vtkNew<vtkRandomPool> sself, long long _arg);
extern "C" long long vtk_random_pool_get_chunk_size_min_value(vtkNew<vtkRandomPool> sself);
extern "C" long long vtk_random_pool_get_chunk_size_max_value(vtkNew<vtkRandomPool> sself);
extern "C" long long vtk_random_pool_get_chunk_size(vtkNew<vtkRandomPool> sself);
extern "C" vtkNew < vtkReferenceCount > vtkReferenceCount_new () ;
extern "C" void vtkReferenceCount_destructor (vtkNew < vtkReferenceCount > sself) ;
extern "C" void * vtkReferenceCount_get_ptr (vtkNew < vtkReferenceCount > sself) ;
extern "C" vtkNew < vtkScalarsToColors > vtkScalarsToColors_new () ;
extern "C" void vtkScalarsToColors_destructor (vtkNew < vtkScalarsToColors > sself) ;
extern "C" void * vtkScalarsToColors_get_ptr (vtkNew < vtkScalarsToColors > sself) ;
extern "C" int vtk_scalars_to_colors_is_opaque(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_build(vtkNew<vtkScalarsToColors> sself);
extern "C" double* vtk_scalars_to_colors_get_range(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_set_range(vtkNew<vtkScalarsToColors> sself, double min, double max);
extern "C" void vtk_scalars_to_colors_set_range(vtkNew<vtkScalarsToColors> sself, const double rng);
extern "C" const unsigned char* vtk_scalars_to_colors_map_value(vtkNew<vtkScalarsToColors> sself, double v);
extern "C" void vtk_scalars_to_colors_get_color(vtkNew<vtkScalarsToColors> sself, double v, double rgb);
extern "C" double* vtk_scalars_to_colors_get_color(vtkNew<vtkScalarsToColors> sself, double v);
extern "C" double vtk_scalars_to_colors_get_opacity(vtkNew<vtkScalarsToColors> sself, double v);
extern "C" double vtk_scalars_to_colors_get_luminance(vtkNew<vtkScalarsToColors> sself, double x);
extern "C" void vtk_scalars_to_colors_set_alpha(vtkNew<vtkScalarsToColors> sself, double alpha);
extern "C" double vtk_scalars_to_colors_get_alpha(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_set_vector_mode(vtkNew<vtkScalarsToColors> sself, int _arg);
extern "C" int vtk_scalars_to_colors_get_vector_mode(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_set_vector_mode_to_magnitude(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_set_vector_mode_to_component(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_set_vector_mode_to_rgb_colors(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_set_vector_component(vtkNew<vtkScalarsToColors> sself, int _arg);
extern "C" int vtk_scalars_to_colors_get_vector_component(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_set_vector_size(vtkNew<vtkScalarsToColors> sself, int _arg);
extern "C" int vtk_scalars_to_colors_get_vector_size(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_map_vectors_through_table(vtkNew<vtkScalarsToColors> sself, void input, unsigned char output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat, int vectorComponent, int vectorSize);
extern "C" void vtk_scalars_to_colors_map_vectors_through_table(vtkNew<vtkScalarsToColors> sself, void input, unsigned char output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat);
extern "C" void vtk_scalars_to_colors_map_scalars_through_table(vtkNew<vtkScalarsToColors> sself, void input, unsigned char output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat);
extern "C" void vtk_scalars_to_colors_map_scalars_through_table_2(vtkNew<vtkScalarsToColors> sself, void input, unsigned char output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat);
extern "C" int vtk_scalars_to_colors_using_log_scale(vtkNew<vtkScalarsToColors> sself);
extern "C" long long vtk_scalars_to_colors_get_number_of_available_colors(vtkNew<vtkScalarsToColors> sself);
extern "C" long long vtk_scalars_to_colors_get_number_of_annotated_values(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_get_indexed_color(vtkNew<vtkScalarsToColors> sself, long long i, double rgba);
extern "C" void vtk_scalars_to_colors_reset_annotations(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_set_indexed_lookup(vtkNew<vtkScalarsToColors> sself, int _arg);
extern "C" int vtk_scalars_to_colors_get_indexed_lookup(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_indexed_lookup_on(vtkNew<vtkScalarsToColors> sself);
extern "C" void vtk_scalars_to_colors_indexed_lookup_off(vtkNew<vtkScalarsToColors> sself);
extern "C" vtkNew < vtkShortArray > vtkShortArray_new () ;
extern "C" void vtkShortArray_destructor (vtkNew < vtkShortArray > sself) ;
extern "C" void * vtkShortArray_get_ptr (vtkNew < vtkShortArray > sself) ;
extern "C" int vtk_short_array_get_data_type(vtkNew<vtkShortArray> sself);
extern "C" void vtk_short_array_get_typed_tuple(vtkNew<vtkShortArray> sself, long long i, short tuple);
extern "C" void vtk_short_array_set_typed_tuple(vtkNew<vtkShortArray> sself, long long i, const short tuple);
extern "C" void vtk_short_array_insert_typed_tuple(vtkNew<vtkShortArray> sself, long long i, const short tuple);
extern "C" long long vtk_short_array_insert_next_typed_tuple(vtkNew<vtkShortArray> sself, const short tuple);
extern "C" short vtk_short_array_get_value(vtkNew<vtkShortArray> sself, long long id);
extern "C" void vtk_short_array_set_value(vtkNew<vtkShortArray> sself, long long id, short value);
extern "C" bool vtk_short_array_set_number_of_values(vtkNew<vtkShortArray> sself, long long number);
extern "C" void vtk_short_array_insert_value(vtkNew<vtkShortArray> sself, long long id, short f);
extern "C" long long vtk_short_array_insert_next_value(vtkNew<vtkShortArray> sself, short f);
extern "C" short* vtk_short_array_get_value_range(vtkNew<vtkShortArray> sself, int comp);
extern "C" short* vtk_short_array_get_value_range(vtkNew<vtkShortArray> sself);
extern "C" short* vtk_short_array_write_pointer(vtkNew<vtkShortArray> sself, long long id, long long number);
extern "C" short* vtk_short_array_get_pointer(vtkNew<vtkShortArray> sself, long long id);
extern "C" void vtk_short_array_set_array(vtkNew<vtkShortArray> sself, short array, long long size, int save);
extern "C" void vtk_short_array_set_array(vtkNew<vtkShortArray> sself, short array, long long size, int save, int deleteMethod);
extern "C" short vtk_short_array_get_data_type_value_min(vtkNew<vtkShortArray> sself);
extern "C" short vtk_short_array_get_data_type_value_max(vtkNew<vtkShortArray> sself);
extern "C" vtkNew < vtkSignedCharArray > vtkSignedCharArray_new () ;
extern "C" void vtkSignedCharArray_destructor (vtkNew < vtkSignedCharArray > sself) ;
extern "C" void * vtkSignedCharArray_get_ptr (vtkNew < vtkSignedCharArray > sself) ;
extern "C" int vtk_signed_char_array_get_data_type(vtkNew<vtkSignedCharArray> sself);
extern "C" void vtk_signed_char_array_get_typed_tuple(vtkNew<vtkSignedCharArray> sself, long long i, char tuple);
extern "C" void vtk_signed_char_array_set_typed_tuple(vtkNew<vtkSignedCharArray> sself, long long i, const char tuple);
extern "C" void vtk_signed_char_array_insert_typed_tuple(vtkNew<vtkSignedCharArray> sself, long long i, const char tuple);
extern "C" long long vtk_signed_char_array_insert_next_typed_tuple(vtkNew<vtkSignedCharArray> sself, const char tuple);
extern "C" char vtk_signed_char_array_get_value(vtkNew<vtkSignedCharArray> sself, long long id);
extern "C" void vtk_signed_char_array_set_value(vtkNew<vtkSignedCharArray> sself, long long id, char value);
extern "C" bool vtk_signed_char_array_set_number_of_values(vtkNew<vtkSignedCharArray> sself, long long number);
extern "C" void vtk_signed_char_array_insert_value(vtkNew<vtkSignedCharArray> sself, long long id, char f);
extern "C" long long vtk_signed_char_array_insert_next_value(vtkNew<vtkSignedCharArray> sself, char f);
extern "C" char* vtk_signed_char_array_get_value_range(vtkNew<vtkSignedCharArray> sself, int comp);
extern "C" char* vtk_signed_char_array_get_value_range(vtkNew<vtkSignedCharArray> sself);
extern "C" char* vtk_signed_char_array_write_pointer(vtkNew<vtkSignedCharArray> sself, long long id, long long number);
extern "C" char* vtk_signed_char_array_get_pointer(vtkNew<vtkSignedCharArray> sself, long long id);
extern "C" void vtk_signed_char_array_set_array(vtkNew<vtkSignedCharArray> sself, char array, long long size, int save);
extern "C" void vtk_signed_char_array_set_array(vtkNew<vtkSignedCharArray> sself, char array, long long size, int save, int deleteMethod);
extern "C" char vtk_signed_char_array_get_data_type_value_min(vtkNew<vtkSignedCharArray> sself);
extern "C" char vtk_signed_char_array_get_data_type_value_max(vtkNew<vtkSignedCharArray> sself);
extern "C" vtkNew < vtkSortDataArray > vtkSortDataArray_new () ;
extern "C" void vtkSortDataArray_destructor (vtkNew < vtkSortDataArray > sself) ;
extern "C" void * vtkSortDataArray_get_ptr (vtkNew < vtkSortDataArray > sself) ;
extern "C" long long* vtk_sort_data_array_initialize_sort_indices(vtkNew<vtkSortDataArray> sself, long long numKeys);
extern "C" void vtk_sort_data_array_generate_sort_indices(vtkNew<vtkSortDataArray> sself, int dataType, void dataIn, long long numKeys, int numComp, int k, long long idx);
extern "C" vtkNew < vtkStringArray > vtkStringArray_new () ;
extern "C" void vtkStringArray_destructor (vtkNew < vtkStringArray > sself) ;
extern "C" void * vtkStringArray_get_ptr (vtkNew < vtkStringArray > sself) ;
extern "C" int vtk_string_array_get_data_type(vtkNew<vtkStringArray> sself);
extern "C" int vtk_string_array_is_numeric(vtkNew<vtkStringArray> sself);
extern "C" void vtk_string_array_initialize(vtkNew<vtkStringArray> sself);
extern "C" int vtk_string_array_get_data_type_size(vtkNew<vtkStringArray> sself);
extern "C" void vtk_string_array_squeeze(vtkNew<vtkStringArray> sself);
extern "C" int vtk_string_array_resize(vtkNew<vtkStringArray> sself, long long numTuples);
extern "C" int vtk_string_array_allocate(vtkNew<vtkStringArray> sself, long long sz, long long ext);
extern "C" void vtk_string_array_set_value(vtkNew<vtkStringArray> sself, long long id, const char value);
extern "C" void vtk_string_array_set_number_of_tuples(vtkNew<vtkStringArray> sself, long long number);
extern "C" long long vtk_string_array_get_number_of_values(vtkNew<vtkStringArray> sself);
extern "C" int vtk_string_array_get_number_of_element_components(vtkNew<vtkStringArray> sself);
extern "C" int vtk_string_array_get_element_component_size(vtkNew<vtkStringArray> sself);
extern "C" void vtk_string_array_insert_value(vtkNew<vtkStringArray> sself, long long id, const char val);
extern "C" long long vtk_string_array_insert_next_value(vtkNew<vtkStringArray> sself, const char f);
extern "C" void* vtk_string_array_get_void_pointer(vtkNew<vtkStringArray> sself, long long id);
extern "C" void vtk_string_array_set_void_array(vtkNew<vtkStringArray> sself, void array, long long size, int save);
extern "C" unsigned long vtk_string_array_get_actual_memory_size(vtkNew<vtkStringArray> sself);
extern "C" long long vtk_string_array_get_data_size(vtkNew<vtkStringArray> sself);
extern "C" long long vtk_string_array_lookup_value(vtkNew<vtkStringArray> sself, const char value);
extern "C" void vtk_string_array_data_changed(vtkNew<vtkStringArray> sself);
extern "C" void vtk_string_array_data_element_changed(vtkNew<vtkStringArray> sself, long long id);
extern "C" void vtk_string_array_clear_lookup(vtkNew<vtkStringArray> sself);
extern "C" vtkNew < vtkStringOutputWindow > vtkStringOutputWindow_new () ;
extern "C" void vtkStringOutputWindow_destructor (vtkNew < vtkStringOutputWindow > sself) ;
extern "C" void * vtkStringOutputWindow_get_ptr (vtkNew < vtkStringOutputWindow > sself) ;
extern "C" void vtk_string_output_window_display_text(vtkNew<vtkStringOutputWindow> sself, const char p0);
extern "C" const char* vtk_string_output_window_get_output(vtkNew<vtkStringOutputWindow> sself);
extern "C" vtkNew < vtkTimePointUtility > vtkTimePointUtility_new () ;
extern "C" void vtkTimePointUtility_destructor (vtkNew < vtkTimePointUtility > sself) ;
extern "C" void * vtkTimePointUtility_get_ptr (vtkNew < vtkTimePointUtility > sself) ;
extern "C" unsigned long long vtk_time_point_utility_date_to_time_point(vtkNew<vtkTimePointUtility> sself, int year, int month, int day);
extern "C" unsigned long long vtk_time_point_utility_time_to_time_point(vtkNew<vtkTimePointUtility> sself, int hour, int minute, int second, int millis);
extern "C" unsigned long long vtk_time_point_utility_date_time_to_time_point(vtkNew<vtkTimePointUtility> sself, int year, int month, int day, int hour, int minute, int sec, int millis);
extern "C" void vtk_time_point_utility_get_date(vtkNew<vtkTimePointUtility> sself, unsigned long long time, int year, int month, int day);
extern "C" void vtk_time_point_utility_get_time(vtkNew<vtkTimePointUtility> sself, unsigned long long time, int hour, int minute, int second, int millis);
extern "C" void vtk_time_point_utility_get_date_time(vtkNew<vtkTimePointUtility> sself, unsigned long long time, int year, int month, int day, int hour, int minute, int second, int millis);
extern "C" int vtk_time_point_utility_get_year(vtkNew<vtkTimePointUtility> sself, unsigned long long time);
extern "C" int vtk_time_point_utility_get_month(vtkNew<vtkTimePointUtility> sself, unsigned long long time);
extern "C" int vtk_time_point_utility_get_day(vtkNew<vtkTimePointUtility> sself, unsigned long long time);
extern "C" int vtk_time_point_utility_get_hour(vtkNew<vtkTimePointUtility> sself, unsigned long long time);
extern "C" int vtk_time_point_utility_get_minute(vtkNew<vtkTimePointUtility> sself, unsigned long long time);
extern "C" int vtk_time_point_utility_get_second(vtkNew<vtkTimePointUtility> sself, unsigned long long time);
extern "C" int vtk_time_point_utility_get_millisecond(vtkNew<vtkTimePointUtility> sself, unsigned long long time);
extern "C" unsigned long long vtk_time_point_utility_iso_8601_to_time_point(vtkNew<vtkTimePointUtility> sself, const char str, bool ok);
extern "C" const char* vtk_time_point_utility_time_point_to_iso_8601(vtkNew<vtkTimePointUtility> sself, unsigned long long p0, int format);
extern "C" vtkNew < vtkTypeFloat32Array > vtkTypeFloat32Array_new () ;
extern "C" void vtkTypeFloat32Array_destructor (vtkNew < vtkTypeFloat32Array > sself) ;
extern "C" void * vtkTypeFloat32Array_get_ptr (vtkNew < vtkTypeFloat32Array > sself) ;
extern "C" vtkNew < vtkTypeFloat64Array > vtkTypeFloat64Array_new () ;
extern "C" void vtkTypeFloat64Array_destructor (vtkNew < vtkTypeFloat64Array > sself) ;
extern "C" void * vtkTypeFloat64Array_get_ptr (vtkNew < vtkTypeFloat64Array > sself) ;
extern "C" vtkNew < vtkTypeInt16Array > vtkTypeInt16Array_new () ;
extern "C" void vtkTypeInt16Array_destructor (vtkNew < vtkTypeInt16Array > sself) ;
extern "C" void * vtkTypeInt16Array_get_ptr (vtkNew < vtkTypeInt16Array > sself) ;
extern "C" vtkNew < vtkTypeInt32Array > vtkTypeInt32Array_new () ;
extern "C" void vtkTypeInt32Array_destructor (vtkNew < vtkTypeInt32Array > sself) ;
extern "C" void * vtkTypeInt32Array_get_ptr (vtkNew < vtkTypeInt32Array > sself) ;
extern "C" vtkNew < vtkTypeInt64Array > vtkTypeInt64Array_new () ;
extern "C" void vtkTypeInt64Array_destructor (vtkNew < vtkTypeInt64Array > sself) ;
extern "C" void * vtkTypeInt64Array_get_ptr (vtkNew < vtkTypeInt64Array > sself) ;
extern "C" vtkNew < vtkTypeInt8Array > vtkTypeInt8Array_new () ;
extern "C" void vtkTypeInt8Array_destructor (vtkNew < vtkTypeInt8Array > sself) ;
extern "C" void * vtkTypeInt8Array_get_ptr (vtkNew < vtkTypeInt8Array > sself) ;
extern "C" vtkNew < vtkTypeUInt16Array > vtkTypeUInt16Array_new () ;
extern "C" void vtkTypeUInt16Array_destructor (vtkNew < vtkTypeUInt16Array > sself) ;
extern "C" void * vtkTypeUInt16Array_get_ptr (vtkNew < vtkTypeUInt16Array > sself) ;
extern "C" vtkNew < vtkTypeUInt32Array > vtkTypeUInt32Array_new () ;
extern "C" void vtkTypeUInt32Array_destructor (vtkNew < vtkTypeUInt32Array > sself) ;
extern "C" void * vtkTypeUInt32Array_get_ptr (vtkNew < vtkTypeUInt32Array > sself) ;
extern "C" vtkNew < vtkTypeUInt64Array > vtkTypeUInt64Array_new () ;
extern "C" void vtkTypeUInt64Array_destructor (vtkNew < vtkTypeUInt64Array > sself) ;
extern "C" void * vtkTypeUInt64Array_get_ptr (vtkNew < vtkTypeUInt64Array > sself) ;
extern "C" vtkNew < vtkTypeUInt8Array > vtkTypeUInt8Array_new () ;
extern "C" void vtkTypeUInt8Array_destructor (vtkNew < vtkTypeUInt8Array > sself) ;
extern "C" void * vtkTypeUInt8Array_get_ptr (vtkNew < vtkTypeUInt8Array > sself) ;
extern "C" vtkNew < vtkUnicodeStringArray > vtkUnicodeStringArray_new () ;
extern "C" void vtkUnicodeStringArray_destructor (vtkNew < vtkUnicodeStringArray > sself) ;
extern "C" void * vtkUnicodeStringArray_get_ptr (vtkNew < vtkUnicodeStringArray > sself) ;
extern "C" int vtk_unicode_string_array_allocate(vtkNew<vtkUnicodeStringArray> sself, long long sz, long long ext);
extern "C" void vtk_unicode_string_array_initialize(vtkNew<vtkUnicodeStringArray> sself);
extern "C" int vtk_unicode_string_array_get_data_type(vtkNew<vtkUnicodeStringArray> sself);
extern "C" int vtk_unicode_string_array_get_data_type_size(vtkNew<vtkUnicodeStringArray> sself);
extern "C" int vtk_unicode_string_array_get_element_component_size(vtkNew<vtkUnicodeStringArray> sself);
extern "C" void vtk_unicode_string_array_set_number_of_tuples(vtkNew<vtkUnicodeStringArray> sself, long long number);
extern "C" void* vtk_unicode_string_array_get_void_pointer(vtkNew<vtkUnicodeStringArray> sself, long long id);
extern "C" void vtk_unicode_string_array_squeeze(vtkNew<vtkUnicodeStringArray> sself);
extern "C" int vtk_unicode_string_array_resize(vtkNew<vtkUnicodeStringArray> sself, long long numTuples);
extern "C" void vtk_unicode_string_array_set_void_array(vtkNew<vtkUnicodeStringArray> sself, void array, long long size, int save);
extern "C" unsigned long vtk_unicode_string_array_get_actual_memory_size(vtkNew<vtkUnicodeStringArray> sself);
extern "C" int vtk_unicode_string_array_is_numeric(vtkNew<vtkUnicodeStringArray> sself);
extern "C" void vtk_unicode_string_array_data_changed(vtkNew<vtkUnicodeStringArray> sself);
extern "C" void vtk_unicode_string_array_clear_lookup(vtkNew<vtkUnicodeStringArray> sself);
extern "C" void vtk_unicode_string_array_insert_next_utf_8_value(vtkNew<vtkUnicodeStringArray> sself, const char p0);
extern "C" void vtk_unicode_string_array_set_utf_8_value(vtkNew<vtkUnicodeStringArray> sself, long long i, const char p1);
extern "C" const char* vtk_unicode_string_array_get_utf_8_value(vtkNew<vtkUnicodeStringArray> sself, long long i);
extern "C" vtkNew < vtkUnsignedCharArray > vtkUnsignedCharArray_new () ;
extern "C" void vtkUnsignedCharArray_destructor (vtkNew < vtkUnsignedCharArray > sself) ;
extern "C" void * vtkUnsignedCharArray_get_ptr (vtkNew < vtkUnsignedCharArray > sself) ;
extern "C" int vtk_unsigned_char_array_get_data_type(vtkNew<vtkUnsignedCharArray> sself);
extern "C" void vtk_unsigned_char_array_get_typed_tuple(vtkNew<vtkUnsignedCharArray> sself, long long i, unsigned char tuple);
extern "C" void vtk_unsigned_char_array_set_typed_tuple(vtkNew<vtkUnsignedCharArray> sself, long long i, const unsigned char tuple);
extern "C" void vtk_unsigned_char_array_insert_typed_tuple(vtkNew<vtkUnsignedCharArray> sself, long long i, const unsigned char tuple);
extern "C" long long vtk_unsigned_char_array_insert_next_typed_tuple(vtkNew<vtkUnsignedCharArray> sself, const unsigned char tuple);
extern "C" unsigned char vtk_unsigned_char_array_get_value(vtkNew<vtkUnsignedCharArray> sself, long long id);
extern "C" void vtk_unsigned_char_array_set_value(vtkNew<vtkUnsignedCharArray> sself, long long id, unsigned char value);
extern "C" bool vtk_unsigned_char_array_set_number_of_values(vtkNew<vtkUnsignedCharArray> sself, long long number);
extern "C" void vtk_unsigned_char_array_insert_value(vtkNew<vtkUnsignedCharArray> sself, long long id, unsigned char f);
extern "C" long long vtk_unsigned_char_array_insert_next_value(vtkNew<vtkUnsignedCharArray> sself, unsigned char f);
extern "C" unsigned char* vtk_unsigned_char_array_get_value_range(vtkNew<vtkUnsignedCharArray> sself, int comp);
extern "C" unsigned char* vtk_unsigned_char_array_get_value_range(vtkNew<vtkUnsignedCharArray> sself);
extern "C" unsigned char* vtk_unsigned_char_array_write_pointer(vtkNew<vtkUnsignedCharArray> sself, long long id, long long number);
extern "C" unsigned char* vtk_unsigned_char_array_get_pointer(vtkNew<vtkUnsignedCharArray> sself, long long id);
extern "C" void vtk_unsigned_char_array_set_array(vtkNew<vtkUnsignedCharArray> sself, unsigned char array, long long size, int save);
extern "C" void vtk_unsigned_char_array_set_array(vtkNew<vtkUnsignedCharArray> sself, unsigned char array, long long size, int save, int deleteMethod);
extern "C" unsigned char vtk_unsigned_char_array_get_data_type_value_min(vtkNew<vtkUnsignedCharArray> sself);
extern "C" unsigned char vtk_unsigned_char_array_get_data_type_value_max(vtkNew<vtkUnsignedCharArray> sself);
extern "C" vtkNew < vtkUnsignedIntArray > vtkUnsignedIntArray_new () ;
extern "C" void vtkUnsignedIntArray_destructor (vtkNew < vtkUnsignedIntArray > sself) ;
extern "C" void * vtkUnsignedIntArray_get_ptr (vtkNew < vtkUnsignedIntArray > sself) ;
extern "C" int vtk_unsigned_int_array_get_data_type(vtkNew<vtkUnsignedIntArray> sself);
extern "C" void vtk_unsigned_int_array_get_typed_tuple(vtkNew<vtkUnsignedIntArray> sself, long long i, unsigned int tuple);
extern "C" void vtk_unsigned_int_array_set_typed_tuple(vtkNew<vtkUnsignedIntArray> sself, long long i, const unsigned int tuple);
extern "C" void vtk_unsigned_int_array_insert_typed_tuple(vtkNew<vtkUnsignedIntArray> sself, long long i, const unsigned int tuple);
extern "C" long long vtk_unsigned_int_array_insert_next_typed_tuple(vtkNew<vtkUnsignedIntArray> sself, const unsigned int tuple);
extern "C" unsigned int vtk_unsigned_int_array_get_value(vtkNew<vtkUnsignedIntArray> sself, long long id);
extern "C" void vtk_unsigned_int_array_set_value(vtkNew<vtkUnsignedIntArray> sself, long long id, unsigned int value);
extern "C" bool vtk_unsigned_int_array_set_number_of_values(vtkNew<vtkUnsignedIntArray> sself, long long number);
extern "C" void vtk_unsigned_int_array_insert_value(vtkNew<vtkUnsignedIntArray> sself, long long id, unsigned int f);
extern "C" long long vtk_unsigned_int_array_insert_next_value(vtkNew<vtkUnsignedIntArray> sself, unsigned int f);
extern "C" unsigned int* vtk_unsigned_int_array_get_value_range(vtkNew<vtkUnsignedIntArray> sself, int comp);
extern "C" unsigned int* vtk_unsigned_int_array_get_value_range(vtkNew<vtkUnsignedIntArray> sself);
extern "C" unsigned int* vtk_unsigned_int_array_write_pointer(vtkNew<vtkUnsignedIntArray> sself, long long id, long long number);
extern "C" unsigned int* vtk_unsigned_int_array_get_pointer(vtkNew<vtkUnsignedIntArray> sself, long long id);
extern "C" void vtk_unsigned_int_array_set_array(vtkNew<vtkUnsignedIntArray> sself, unsigned int array, long long size, int save);
extern "C" void vtk_unsigned_int_array_set_array(vtkNew<vtkUnsignedIntArray> sself, unsigned int array, long long size, int save, int deleteMethod);
extern "C" unsigned int vtk_unsigned_int_array_get_data_type_value_min(vtkNew<vtkUnsignedIntArray> sself);
extern "C" unsigned int vtk_unsigned_int_array_get_data_type_value_max(vtkNew<vtkUnsignedIntArray> sself);
extern "C" vtkNew < vtkUnsignedLongArray > vtkUnsignedLongArray_new () ;
extern "C" void vtkUnsignedLongArray_destructor (vtkNew < vtkUnsignedLongArray > sself) ;
extern "C" void * vtkUnsignedLongArray_get_ptr (vtkNew < vtkUnsignedLongArray > sself) ;
extern "C" int vtk_unsigned_long_array_get_data_type(vtkNew<vtkUnsignedLongArray> sself);
extern "C" void vtk_unsigned_long_array_get_typed_tuple(vtkNew<vtkUnsignedLongArray> sself, long long i, unsigned long tuple);
extern "C" void vtk_unsigned_long_array_set_typed_tuple(vtkNew<vtkUnsignedLongArray> sself, long long i, const unsigned long tuple);
extern "C" void vtk_unsigned_long_array_insert_typed_tuple(vtkNew<vtkUnsignedLongArray> sself, long long i, const unsigned long tuple);
extern "C" long long vtk_unsigned_long_array_insert_next_typed_tuple(vtkNew<vtkUnsignedLongArray> sself, const unsigned long tuple);
extern "C" unsigned long vtk_unsigned_long_array_get_value(vtkNew<vtkUnsignedLongArray> sself, long long id);
extern "C" void vtk_unsigned_long_array_set_value(vtkNew<vtkUnsignedLongArray> sself, long long id, unsigned long value);
extern "C" bool vtk_unsigned_long_array_set_number_of_values(vtkNew<vtkUnsignedLongArray> sself, long long number);
extern "C" void vtk_unsigned_long_array_insert_value(vtkNew<vtkUnsignedLongArray> sself, long long id, unsigned long f);
extern "C" long long vtk_unsigned_long_array_insert_next_value(vtkNew<vtkUnsignedLongArray> sself, unsigned long f);
extern "C" unsigned long* vtk_unsigned_long_array_get_value_range(vtkNew<vtkUnsignedLongArray> sself, int comp);
extern "C" unsigned long* vtk_unsigned_long_array_get_value_range(vtkNew<vtkUnsignedLongArray> sself);
extern "C" unsigned long* vtk_unsigned_long_array_write_pointer(vtkNew<vtkUnsignedLongArray> sself, long long id, long long number);
extern "C" unsigned long* vtk_unsigned_long_array_get_pointer(vtkNew<vtkUnsignedLongArray> sself, long long id);
extern "C" void vtk_unsigned_long_array_set_array(vtkNew<vtkUnsignedLongArray> sself, unsigned long array, long long size, int save);
extern "C" void vtk_unsigned_long_array_set_array(vtkNew<vtkUnsignedLongArray> sself, unsigned long array, long long size, int save, int deleteMethod);
extern "C" unsigned long vtk_unsigned_long_array_get_data_type_value_min(vtkNew<vtkUnsignedLongArray> sself);
extern "C" unsigned long vtk_unsigned_long_array_get_data_type_value_max(vtkNew<vtkUnsignedLongArray> sself);
extern "C" vtkNew < vtkUnsignedLongLongArray > vtkUnsignedLongLongArray_new () ;
extern "C" void vtkUnsignedLongLongArray_destructor (vtkNew < vtkUnsignedLongLongArray > sself) ;
extern "C" void * vtkUnsignedLongLongArray_get_ptr (vtkNew < vtkUnsignedLongLongArray > sself) ;
extern "C" int vtk_unsigned_long_long_array_get_data_type(vtkNew<vtkUnsignedLongLongArray> sself);
extern "C" void vtk_unsigned_long_long_array_get_typed_tuple(vtkNew<vtkUnsignedLongLongArray> sself, long long i, unsigned long long tuple);
extern "C" void vtk_unsigned_long_long_array_set_typed_tuple(vtkNew<vtkUnsignedLongLongArray> sself, long long i, const unsigned long long tuple);
extern "C" void vtk_unsigned_long_long_array_insert_typed_tuple(vtkNew<vtkUnsignedLongLongArray> sself, long long i, const unsigned long long tuple);
extern "C" long long vtk_unsigned_long_long_array_insert_next_typed_tuple(vtkNew<vtkUnsignedLongLongArray> sself, const unsigned long long tuple);
extern "C" unsigned long long vtk_unsigned_long_long_array_get_value(vtkNew<vtkUnsignedLongLongArray> sself, long long id);
extern "C" void vtk_unsigned_long_long_array_set_value(vtkNew<vtkUnsignedLongLongArray> sself, long long id, unsigned long long value);
extern "C" bool vtk_unsigned_long_long_array_set_number_of_values(vtkNew<vtkUnsignedLongLongArray> sself, long long number);
extern "C" void vtk_unsigned_long_long_array_insert_value(vtkNew<vtkUnsignedLongLongArray> sself, long long id, unsigned long long f);
extern "C" long long vtk_unsigned_long_long_array_insert_next_value(vtkNew<vtkUnsignedLongLongArray> sself, unsigned long long f);
extern "C" unsigned long long* vtk_unsigned_long_long_array_get_value_range(vtkNew<vtkUnsignedLongLongArray> sself, int comp);
extern "C" unsigned long long* vtk_unsigned_long_long_array_get_value_range(vtkNew<vtkUnsignedLongLongArray> sself);
extern "C" unsigned long long* vtk_unsigned_long_long_array_write_pointer(vtkNew<vtkUnsignedLongLongArray> sself, long long id, long long number);
extern "C" unsigned long long* vtk_unsigned_long_long_array_get_pointer(vtkNew<vtkUnsignedLongLongArray> sself, long long id);
extern "C" void vtk_unsigned_long_long_array_set_array(vtkNew<vtkUnsignedLongLongArray> sself, unsigned long long array, long long size, int save);
extern "C" void vtk_unsigned_long_long_array_set_array(vtkNew<vtkUnsignedLongLongArray> sself, unsigned long long array, long long size, int save, int deleteMethod);
extern "C" unsigned long long vtk_unsigned_long_long_array_get_data_type_value_min(vtkNew<vtkUnsignedLongLongArray> sself);
extern "C" unsigned long long vtk_unsigned_long_long_array_get_data_type_value_max(vtkNew<vtkUnsignedLongLongArray> sself);
extern "C" vtkNew < vtkUnsignedShortArray > vtkUnsignedShortArray_new () ;
extern "C" void vtkUnsignedShortArray_destructor (vtkNew < vtkUnsignedShortArray > sself) ;
extern "C" void * vtkUnsignedShortArray_get_ptr (vtkNew < vtkUnsignedShortArray > sself) ;
extern "C" int vtk_unsigned_short_array_get_data_type(vtkNew<vtkUnsignedShortArray> sself);
extern "C" void vtk_unsigned_short_array_get_typed_tuple(vtkNew<vtkUnsignedShortArray> sself, long long i, unsigned short tuple);
extern "C" void vtk_unsigned_short_array_set_typed_tuple(vtkNew<vtkUnsignedShortArray> sself, long long i, const unsigned short tuple);
extern "C" void vtk_unsigned_short_array_insert_typed_tuple(vtkNew<vtkUnsignedShortArray> sself, long long i, const unsigned short tuple);
extern "C" long long vtk_unsigned_short_array_insert_next_typed_tuple(vtkNew<vtkUnsignedShortArray> sself, const unsigned short tuple);
extern "C" unsigned short vtk_unsigned_short_array_get_value(vtkNew<vtkUnsignedShortArray> sself, long long id);
extern "C" void vtk_unsigned_short_array_set_value(vtkNew<vtkUnsignedShortArray> sself, long long id, unsigned short value);
extern "C" bool vtk_unsigned_short_array_set_number_of_values(vtkNew<vtkUnsignedShortArray> sself, long long number);
extern "C" void vtk_unsigned_short_array_insert_value(vtkNew<vtkUnsignedShortArray> sself, long long id, unsigned short f);
extern "C" long long vtk_unsigned_short_array_insert_next_value(vtkNew<vtkUnsignedShortArray> sself, unsigned short f);
extern "C" unsigned short* vtk_unsigned_short_array_get_value_range(vtkNew<vtkUnsignedShortArray> sself, int comp);
extern "C" unsigned short* vtk_unsigned_short_array_get_value_range(vtkNew<vtkUnsignedShortArray> sself);
extern "C" unsigned short* vtk_unsigned_short_array_write_pointer(vtkNew<vtkUnsignedShortArray> sself, long long id, long long number);
extern "C" unsigned short* vtk_unsigned_short_array_get_pointer(vtkNew<vtkUnsignedShortArray> sself, long long id);
extern "C" void vtk_unsigned_short_array_set_array(vtkNew<vtkUnsignedShortArray> sself, unsigned short array, long long size, int save);
extern "C" void vtk_unsigned_short_array_set_array(vtkNew<vtkUnsignedShortArray> sself, unsigned short array, long long size, int save, int deleteMethod);
extern "C" unsigned short vtk_unsigned_short_array_get_data_type_value_min(vtkNew<vtkUnsignedShortArray> sself);
extern "C" unsigned short vtk_unsigned_short_array_get_data_type_value_max(vtkNew<vtkUnsignedShortArray> sself);
extern "C" vtkNew < vtkVariantArray > vtkVariantArray_new () ;
extern "C" void vtkVariantArray_destructor (vtkNew < vtkVariantArray > sself) ;
extern "C" void * vtkVariantArray_get_ptr (vtkNew < vtkVariantArray > sself) ;
extern "C" int vtk_variant_array_allocate(vtkNew<vtkVariantArray> sself, long long sz, long long ext);
extern "C" void vtk_variant_array_initialize(vtkNew<vtkVariantArray> sself);
extern "C" int vtk_variant_array_get_data_type(vtkNew<vtkVariantArray> sself);
extern "C" int vtk_variant_array_get_data_type_size(vtkNew<vtkVariantArray> sself);
extern "C" int vtk_variant_array_get_element_component_size(vtkNew<vtkVariantArray> sself);
extern "C" void vtk_variant_array_set_number_of_tuples(vtkNew<vtkVariantArray> sself, long long number);
extern "C" void* vtk_variant_array_get_void_pointer(vtkNew<vtkVariantArray> sself, long long id);
extern "C" void vtk_variant_array_squeeze(vtkNew<vtkVariantArray> sself);
extern "C" int vtk_variant_array_resize(vtkNew<vtkVariantArray> sself, long long numTuples);
extern "C" void vtk_variant_array_set_void_array(vtkNew<vtkVariantArray> sself, void arr, long long size, int save);
extern "C" void vtk_variant_array_set_void_array(vtkNew<vtkVariantArray> sself, void arr, long long size, int save, int deleteM);
extern "C" unsigned long vtk_variant_array_get_actual_memory_size(vtkNew<vtkVariantArray> sself);
extern "C" int vtk_variant_array_is_numeric(vtkNew<vtkVariantArray> sself);
extern "C" long long vtk_variant_array_get_number_of_values(vtkNew<vtkVariantArray> sself);
extern "C" void vtk_variant_array_data_changed(vtkNew<vtkVariantArray> sself);
extern "C" void vtk_variant_array_data_element_changed(vtkNew<vtkVariantArray> sself, long long id);
extern "C" void vtk_variant_array_clear_lookup(vtkNew<vtkVariantArray> sself);
extern "C" vtkNew < vtkVersion > vtkVersion_new () ;
extern "C" void vtkVersion_destructor (vtkNew < vtkVersion > sself) ;
extern "C" void * vtkVersion_get_ptr (vtkNew < vtkVersion > sself) ;
extern "C" const char* vtk_version_get_vtk_version(vtkNew<vtkVersion> sself);
extern "C" const char* vtk_version_get_vtk_version_full(vtkNew<vtkVersion> sself);
extern "C" int vtk_version_get_vtk_major_version(vtkNew<vtkVersion> sself);
extern "C" int vtk_version_get_vtk_minor_version(vtkNew<vtkVersion> sself);
extern "C" int vtk_version_get_vtk_build_version(vtkNew<vtkVersion> sself);
extern "C" const char* vtk_version_get_vtk_source_version(vtkNew<vtkVersion> sself);
extern "C" vtkNew < vtkVoidArray > vtkVoidArray_new () ;
extern "C" void vtkVoidArray_destructor (vtkNew < vtkVoidArray > sself) ;
extern "C" void * vtkVoidArray_get_ptr (vtkNew < vtkVoidArray > sself) ;
extern "C" int vtk_void_array_allocate(vtkNew<vtkVoidArray> sself, long long sz, long long ext);
extern "C" void vtk_void_array_initialize(vtkNew<vtkVoidArray> sself);
extern "C" int vtk_void_array_get_data_type(vtkNew<vtkVoidArray> sself);
extern "C" int vtk_void_array_get_data_type_size(vtkNew<vtkVoidArray> sself);
extern "C" void vtk_void_array_set_number_of_pointers(vtkNew<vtkVoidArray> sself, long long number);
extern "C" long long vtk_void_array_get_number_of_pointers(vtkNew<vtkVoidArray> sself);
extern "C" void* vtk_void_array_get_void_pointer(vtkNew<vtkVoidArray> sself, long long id);
extern "C" void vtk_void_array_set_void_pointer(vtkNew<vtkVoidArray> sself, long long id, void ptr);
extern "C" void vtk_void_array_insert_void_pointer(vtkNew<vtkVoidArray> sself, long long i, void ptr);
extern "C" long long vtk_void_array_insert_next_void_pointer(vtkNew<vtkVoidArray> sself, void tuple);
extern "C" void vtk_void_array_reset(vtkNew<vtkVoidArray> sself);
extern "C" void vtk_void_array_squeeze(vtkNew<vtkVoidArray> sself);
extern "C" void&* vtk_void_array_get_pointer(vtkNew<vtkVoidArray> sself, long long id);
extern "C" void&* vtk_void_array_write_pointer(vtkNew<vtkVoidArray> sself, long long id, long long number);
extern "C" vtkNew < vtkWeakReference > vtkWeakReference_new () ;
extern "C" void vtkWeakReference_destructor (vtkNew < vtkWeakReference > sself) ;
extern "C" void * vtkWeakReference_get_ptr (vtkNew < vtkWeakReference > sself) ;
extern "C" vtkNew < vtkXMLFileOutputWindow > vtkXMLFileOutputWindow_new () ;
extern "C" void vtkXMLFileOutputWindow_destructor (vtkNew < vtkXMLFileOutputWindow > sself) ;
extern "C" void * vtkXMLFileOutputWindow_get_ptr (vtkNew < vtkXMLFileOutputWindow > sself) ;
extern "C" void vtk_xml_file_output_window_display_text(vtkNew<vtkXMLFileOutputWindow> sself, const char p0);
extern "C" void vtk_xml_file_output_window_display_tag(vtkNew<vtkXMLFileOutputWindow> sself, const char p0);
