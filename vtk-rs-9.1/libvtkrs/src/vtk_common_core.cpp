// Include header file
#include<vtk_common_core.h>

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

// Implement declared functions
extern "C" vtkNew < vtkAnimationCue > vtkAnimationCue_new () {return vtkNew < vtkAnimationCue > () ;}
extern "C" void vtkAnimationCue_destructor (vtkNew < vtkAnimationCue > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAnimationCue_get_ptr (vtkNew < vtkAnimationCue > sself) {return sself . GetPointer () ;}
extern "C" void vtk_animation_cue_set_time_mode(vtkNew<vtkAnimationCue> sself, int mode) { sself->SetTimeMode(mode); }
extern "C" int vtk_animation_cue_get_time_mode(vtkNew<vtkAnimationCue> sself) { return sself->GetTimeMode(); }
extern "C" void vtk_animation_cue_set_time_mode_to_relative(vtkNew<vtkAnimationCue> sself) { sself->SetTimeModeToRelative(); }
extern "C" void vtk_animation_cue_set_time_mode_to_normalized(vtkNew<vtkAnimationCue> sself) { sself->SetTimeModeToNormalized(); }
extern "C" void vtk_animation_cue_set_start_time(vtkNew<vtkAnimationCue> sself, double _arg) { sself->SetStartTime(_arg); }
extern "C" double vtk_animation_cue_get_start_time(vtkNew<vtkAnimationCue> sself) { return sself->GetStartTime(); }
extern "C" void vtk_animation_cue_set_end_time(vtkNew<vtkAnimationCue> sself, double _arg) { sself->SetEndTime(_arg); }
extern "C" double vtk_animation_cue_get_end_time(vtkNew<vtkAnimationCue> sself) { return sself->GetEndTime(); }
extern "C" void vtk_animation_cue_tick(vtkNew<vtkAnimationCue> sself, double currenttime, double deltatime, double clocktime) { sself->Tick(currenttime, deltatime, clocktime); }
extern "C" void vtk_animation_cue_initialize(vtkNew<vtkAnimationCue> sself) { sself->Initialize(); }
extern "C" void vtk_animation_cue_finalize(vtkNew<vtkAnimationCue> sself) { sself->Finalize(); }
extern "C" double vtk_animation_cue_get_animation_time(vtkNew<vtkAnimationCue> sself) { return sself->GetAnimationTime(); }
extern "C" double vtk_animation_cue_get_delta_time(vtkNew<vtkAnimationCue> sself) { return sself->GetDeltaTime(); }
extern "C" double vtk_animation_cue_get_clock_time(vtkNew<vtkAnimationCue> sself) { return sself->GetClockTime(); }
extern "C" vtkNew < vtkArchiver > vtkArchiver_new () {return vtkNew < vtkArchiver > () ;}
extern "C" void vtkArchiver_destructor (vtkNew < vtkArchiver > sself) {sself . Reset () ; return ;}
extern "C" void * vtkArchiver_get_ptr (vtkNew < vtkArchiver > sself) {return sself . GetPointer () ;}
extern "C" char* vtk_archiver_get_archive_name(vtkNew<vtkArchiver> sself) { return sself->GetArchiveName(); }
extern "C" void vtk_archiver_set_archive_name(vtkNew<vtkArchiver> sself, const char _arg) { sself->SetArchiveName(_arg); }
extern "C" void vtk_archiver_open_archive(vtkNew<vtkArchiver> sself) { sself->OpenArchive(); }
extern "C" void vtk_archiver_close_archive(vtkNew<vtkArchiver> sself) { sself->CloseArchive(); }
extern "C" void vtk_archiver_insert_into_archive(vtkNew<vtkArchiver> sself, const char* relativePath, const char data, size_t size) { sself->InsertIntoArchive(relativePath, data, size); }
extern "C" bool vtk_archiver_contains(vtkNew<vtkArchiver> sself, const char* relativePath) { return sself->Contains(relativePath); }
extern "C" vtkNew < vtkBitArray > vtkBitArray_new () {return vtkNew < vtkBitArray > () ;}
extern "C" void vtkBitArray_destructor (vtkNew < vtkBitArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBitArray_get_ptr (vtkNew < vtkBitArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bit_array_allocate(vtkNew<vtkBitArray> sself, long long sz, long long ext) { return sself->Allocate(sz, ext); }
extern "C" void vtk_bit_array_initialize(vtkNew<vtkBitArray> sself) { sself->Initialize(); }
extern "C" int vtk_bit_array_get_data_type(vtkNew<vtkBitArray> sself) { return sself->GetDataType(); }
extern "C" int vtk_bit_array_get_data_type_size(vtkNew<vtkBitArray> sself) { return sself->GetDataTypeSize(); }
extern "C" void vtk_bit_array_set_number_of_tuples(vtkNew<vtkBitArray> sself, long long number) { sself->SetNumberOfTuples(number); }
extern "C" bool vtk_bit_array_set_number_of_values(vtkNew<vtkBitArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" double* vtk_bit_array_get_tuple(vtkNew<vtkBitArray> sself, long long i) { return sself->GetTuple(i); }
extern "C" void vtk_bit_array_get_tuple(vtkNew<vtkBitArray> sself, long long i, double tuple) { sself->GetTuple(i, tuple); }
extern "C" void vtk_bit_array_set_tuple(vtkNew<vtkBitArray> sself, long long i, const float tuple) { sself->SetTuple(i, tuple); }
extern "C" void vtk_bit_array_set_tuple(vtkNew<vtkBitArray> sself, long long i, const double tuple) { sself->SetTuple(i, tuple); }
extern "C" void vtk_bit_array_insert_tuple(vtkNew<vtkBitArray> sself, long long i, const float tuple) { sself->InsertTuple(i, tuple); }
extern "C" void vtk_bit_array_insert_tuple(vtkNew<vtkBitArray> sself, long long i, const double tuple) { sself->InsertTuple(i, tuple); }
extern "C" long long vtk_bit_array_insert_next_tuple(vtkNew<vtkBitArray> sself, const float tuple) { return sself->InsertNextTuple(tuple); }
extern "C" long long vtk_bit_array_insert_next_tuple(vtkNew<vtkBitArray> sself, const double tuple) { return sself->InsertNextTuple(tuple); }
extern "C" void vtk_bit_array_remove_tuple(vtkNew<vtkBitArray> sself, long long id) { sself->RemoveTuple(id); }
extern "C" void vtk_bit_array_set_component(vtkNew<vtkBitArray> sself, long long i, int j, double c) { sself->SetComponent(i, j, c); }
extern "C" void vtk_bit_array_squeeze(vtkNew<vtkBitArray> sself) { sself->Squeeze(); }
extern "C" int vtk_bit_array_resize(vtkNew<vtkBitArray> sself, long long numTuples) { return sself->Resize(numTuples); }
extern "C" int vtk_bit_array_get_value(vtkNew<vtkBitArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_bit_array_set_value(vtkNew<vtkBitArray> sself, long long id, int value) { sself->SetValue(id, value); }
extern "C" void vtk_bit_array_insert_value(vtkNew<vtkBitArray> sself, long long id, int i) { sself->InsertValue(id, i); }
extern "C" long long vtk_bit_array_insert_next_value(vtkNew<vtkBitArray> sself, int i) { return sself->InsertNextValue(i); }
extern "C" void vtk_bit_array_insert_component(vtkNew<vtkBitArray> sself, long long i, int j, double c) { sself->InsertComponent(i, j, c); }
extern "C" unsigned char* vtk_bit_array_get_pointer(vtkNew<vtkBitArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" unsigned char* vtk_bit_array_write_pointer(vtkNew<vtkBitArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" void* vtk_bit_array_write_void_pointer(vtkNew<vtkBitArray> sself, long long id, long long number) { return sself->WriteVoidPointer(id, number); }
extern "C" void* vtk_bit_array_get_void_pointer(vtkNew<vtkBitArray> sself, long long id) { return sself->GetVoidPointer(id); }
extern "C" void vtk_bit_array_set_void_array(vtkNew<vtkBitArray> sself, void array, long long size, int save) { sself->SetVoidArray(array, size, save); }
extern "C" long long vtk_bit_array_lookup_value(vtkNew<vtkBitArray> sself, int value) { return sself->LookupValue(value); }
extern "C" void vtk_bit_array_data_changed(vtkNew<vtkBitArray> sself) { sself->DataChanged(); }
extern "C" void vtk_bit_array_clear_lookup(vtkNew<vtkBitArray> sself) { sself->ClearLookup(); }
extern "C" vtkNew < vtkBitArrayIterator > vtkBitArrayIterator_new () {return vtkNew < vtkBitArrayIterator > () ;}
extern "C" void vtkBitArrayIterator_destructor (vtkNew < vtkBitArrayIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBitArrayIterator_get_ptr (vtkNew < vtkBitArrayIterator > sself) {return sself . GetPointer () ;}
extern "C" int* vtk_bit_array_iterator_get_tuple(vtkNew<vtkBitArrayIterator> sself, long long id) { return sself->GetTuple(id); }
extern "C" int vtk_bit_array_iterator_get_value(vtkNew<vtkBitArrayIterator> sself, long long id) { return sself->GetValue(id); }
extern "C" long long vtk_bit_array_iterator_get_number_of_tuples(vtkNew<vtkBitArrayIterator> sself) { return sself->GetNumberOfTuples(); }
extern "C" long long vtk_bit_array_iterator_get_number_of_values(vtkNew<vtkBitArrayIterator> sself) { return sself->GetNumberOfValues(); }
extern "C" int vtk_bit_array_iterator_get_number_of_components(vtkNew<vtkBitArrayIterator> sself) { return sself->GetNumberOfComponents(); }
extern "C" int vtk_bit_array_iterator_get_data_type(vtkNew<vtkBitArrayIterator> sself) { return sself->GetDataType(); }
extern "C" int vtk_bit_array_iterator_get_data_type_size(vtkNew<vtkBitArrayIterator> sself) { return sself->GetDataTypeSize(); }
extern "C" void vtk_bit_array_iterator_set_value(vtkNew<vtkBitArrayIterator> sself, long long id, int value) { sself->SetValue(id, value); }
extern "C" vtkNew < vtkBoxMuellerRandomSequence > vtkBoxMuellerRandomSequence_new () {return vtkNew < vtkBoxMuellerRandomSequence > () ;}
extern "C" void vtkBoxMuellerRandomSequence_destructor (vtkNew < vtkBoxMuellerRandomSequence > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBoxMuellerRandomSequence_get_ptr (vtkNew < vtkBoxMuellerRandomSequence > sself) {return sself . GetPointer () ;}
extern "C" void vtk_box_mueller_random_sequence_initialize(vtkNew<vtkBoxMuellerRandomSequence> sself, unsigned int seed) { sself->Initialize(seed); }
extern "C" double vtk_box_mueller_random_sequence_get_value(vtkNew<vtkBoxMuellerRandomSequence> sself) { return sself->GetValue(); }
extern "C" void vtk_box_mueller_random_sequence_next(vtkNew<vtkBoxMuellerRandomSequence> sself) { sself->Next(); }
extern "C" vtkNew < vtkByteSwap > vtkByteSwap_new () {return vtkNew < vtkByteSwap > () ;}
extern "C" void vtkByteSwap_destructor (vtkNew < vtkByteSwap > sself) {sself . Reset () ; return ;}
extern "C" void * vtkByteSwap_get_ptr (vtkNew < vtkByteSwap > sself) {return sself . GetPointer () ;}
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, float p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, float p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, float p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, float p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, double p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, double p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, double p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, double p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, char p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, char p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, char p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, char p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, short p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, short p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, short p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, short p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, int p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, int p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, int p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, int p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, long p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, long p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, long p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, long p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, long long p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, long long p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, long long p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, long long p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, char p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, char p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, char p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, char p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, unsigned char p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, unsigned char p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, unsigned char p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, unsigned char p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, unsigned short p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, unsigned short p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, unsigned short p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, unsigned short p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, unsigned int p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, unsigned int p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, unsigned int p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, unsigned int p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, unsigned long p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, unsigned long p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, unsigned long p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, unsigned long p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_le(vtkNew<vtkByteSwap> sself, unsigned long long p) { sself->SwapLE(p); }
extern "C" void vtk_byte_swap_swap_be(vtkNew<vtkByteSwap> sself, unsigned long long p) { sself->SwapBE(p); }
extern "C" void vtk_byte_swap_swap_le_range(vtkNew<vtkByteSwap> sself, unsigned long long p, size_t num) { sself->SwapLERange(p, num); }
extern "C" void vtk_byte_swap_swap_be_range(vtkNew<vtkByteSwap> sself, unsigned long long p, size_t num) { sself->SwapBERange(p, num); }
extern "C" void vtk_byte_swap_swap_2_le(vtkNew<vtkByteSwap> sself, void p) { sself->Swap2LE(p); }
extern "C" void vtk_byte_swap_swap_4_le(vtkNew<vtkByteSwap> sself, void p) { sself->Swap4LE(p); }
extern "C" void vtk_byte_swap_swap_8_le(vtkNew<vtkByteSwap> sself, void p) { sself->Swap8LE(p); }
extern "C" void vtk_byte_swap_swap_2_le_range(vtkNew<vtkByteSwap> sself, void p, size_t num) { sself->Swap2LERange(p, num); }
extern "C" void vtk_byte_swap_swap_4_le_range(vtkNew<vtkByteSwap> sself, void p, size_t num) { sself->Swap4LERange(p, num); }
extern "C" void vtk_byte_swap_swap_8_le_range(vtkNew<vtkByteSwap> sself, void p, size_t num) { sself->Swap8LERange(p, num); }
extern "C" void vtk_byte_swap_swap_2_be(vtkNew<vtkByteSwap> sself, void p) { sself->Swap2BE(p); }
extern "C" void vtk_byte_swap_swap_4_be(vtkNew<vtkByteSwap> sself, void p) { sself->Swap4BE(p); }
extern "C" void vtk_byte_swap_swap_8_be(vtkNew<vtkByteSwap> sself, void p) { sself->Swap8BE(p); }
extern "C" void vtk_byte_swap_swap_2_be_range(vtkNew<vtkByteSwap> sself, void p, size_t num) { sself->Swap2BERange(p, num); }
extern "C" void vtk_byte_swap_swap_4_be_range(vtkNew<vtkByteSwap> sself, void p, size_t num) { sself->Swap4BERange(p, num); }
extern "C" void vtk_byte_swap_swap_8_be_range(vtkNew<vtkByteSwap> sself, void p, size_t num) { sself->Swap8BERange(p, num); }
extern "C" void vtk_byte_swap_swap_void_range(vtkNew<vtkByteSwap> sself, void buffer, size_t numWords, size_t wordSize) { sself->SwapVoidRange(buffer, numWords, wordSize); }
extern "C" vtkNew < vtkCallbackCommand > vtkCallbackCommand_new () {return vtkNew < vtkCallbackCommand > () ;}
extern "C" void vtkCallbackCommand_destructor (vtkNew < vtkCallbackCommand > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCallbackCommand_get_ptr (vtkNew < vtkCallbackCommand > sself) {return sself . GetPointer () ;}
extern "C" void vtk_callback_command_set_client_data(vtkNew<vtkCallbackCommand> sself, void cd) { sself->SetClientData(cd); }
extern "C" void* vtk_callback_command_get_client_data(vtkNew<vtkCallbackCommand> sself) { return sself->GetClientData(); }
extern "C" void vtk_callback_command_set_abort_flag_on_execute(vtkNew<vtkCallbackCommand> sself, int f) { sself->SetAbortFlagOnExecute(f); }
extern "C" int vtk_callback_command_get_abort_flag_on_execute(vtkNew<vtkCallbackCommand> sself) { return sself->GetAbortFlagOnExecute(); }
extern "C" void vtk_callback_command_abort_flag_on_execute_on(vtkNew<vtkCallbackCommand> sself) { sself->AbortFlagOnExecuteOn(); }
extern "C" void vtk_callback_command_abort_flag_on_execute_off(vtkNew<vtkCallbackCommand> sself) { sself->AbortFlagOnExecuteOff(); }
extern "C" vtkNew < vtkCharArray > vtkCharArray_new () {return vtkNew < vtkCharArray > () ;}
extern "C" void vtkCharArray_destructor (vtkNew < vtkCharArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCharArray_get_ptr (vtkNew < vtkCharArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_char_array_get_data_type(vtkNew<vtkCharArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_char_array_get_typed_tuple(vtkNew<vtkCharArray> sself, long long i, char tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_char_array_set_typed_tuple(vtkNew<vtkCharArray> sself, long long i, const char tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_char_array_insert_typed_tuple(vtkNew<vtkCharArray> sself, long long i, const char tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_char_array_insert_next_typed_tuple(vtkNew<vtkCharArray> sself, const char tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" char vtk_char_array_get_value(vtkNew<vtkCharArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_char_array_set_value(vtkNew<vtkCharArray> sself, long long id, char value) { sself->SetValue(id, value); }
extern "C" bool vtk_char_array_set_number_of_values(vtkNew<vtkCharArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_char_array_insert_value(vtkNew<vtkCharArray> sself, long long id, char f) { sself->InsertValue(id, f); }
extern "C" long long vtk_char_array_insert_next_value(vtkNew<vtkCharArray> sself, char f) { return sself->InsertNextValue(f); }
extern "C" char* vtk_char_array_get_value_range(vtkNew<vtkCharArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" char* vtk_char_array_get_value_range(vtkNew<vtkCharArray> sself) { return sself->GetValueRange(); }
extern "C" char* vtk_char_array_write_pointer(vtkNew<vtkCharArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" char* vtk_char_array_get_pointer(vtkNew<vtkCharArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_char_array_set_array(vtkNew<vtkCharArray> sself, char array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_char_array_set_array(vtkNew<vtkCharArray> sself, char array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" char vtk_char_array_get_data_type_value_min(vtkNew<vtkCharArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" char vtk_char_array_get_data_type_value_max(vtkNew<vtkCharArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkCollection > vtkCollection_new () {return vtkNew < vtkCollection > () ;}
extern "C" void vtkCollection_destructor (vtkNew < vtkCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCollection_get_ptr (vtkNew < vtkCollection > sself) {return sself . GetPointer () ;}
extern "C" void vtk_collection_remove_item(vtkNew<vtkCollection> sself, int i) { sself->RemoveItem(i); }
extern "C" void vtk_collection_remove_all_items(vtkNew<vtkCollection> sself) { sself->RemoveAllItems(); }
extern "C" int vtk_collection_get_number_of_items(vtkNew<vtkCollection> sself) { return sself->GetNumberOfItems(); }
extern "C" void vtk_collection_init_traversal(vtkNew<vtkCollection> sself) { sself->InitTraversal(); }
extern "C" void vtk_collection_init_traversal(vtkNew<vtkCollection> sself, void cookie) { sself->InitTraversal(cookie); }
extern "C" vtkNew < vtkCollectionIterator > vtkCollectionIterator_new () {return vtkNew < vtkCollectionIterator > () ;}
extern "C" void vtkCollectionIterator_destructor (vtkNew < vtkCollectionIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCollectionIterator_get_ptr (vtkNew < vtkCollectionIterator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_collection_iterator_init_traversal(vtkNew<vtkCollectionIterator> sself) { sself->InitTraversal(); }
extern "C" void vtk_collection_iterator_go_to_first_item(vtkNew<vtkCollectionIterator> sself) { sself->GoToFirstItem(); }
extern "C" void vtk_collection_iterator_go_to_next_item(vtkNew<vtkCollectionIterator> sself) { sself->GoToNextItem(); }
extern "C" int vtk_collection_iterator_is_done_with_traversal(vtkNew<vtkCollectionIterator> sself) { return sself->IsDoneWithTraversal(); }
extern "C" vtkNew < vtkCriticalSection > vtkCriticalSection_new () {return vtkNew < vtkCriticalSection > () ;}
extern "C" void vtkCriticalSection_destructor (vtkNew < vtkCriticalSection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCriticalSection_get_ptr (vtkNew < vtkCriticalSection > sself) {return sself . GetPointer () ;}
extern "C" void vtk_critical_section_lock(vtkNew<vtkCriticalSection> sself) { sself->Lock(); }
extern "C" void vtk_critical_section_unlock(vtkNew<vtkCriticalSection> sself) { sself->Unlock(); }
extern "C" vtkNew < vtkDataArrayCollection > vtkDataArrayCollection_new () {return vtkNew < vtkDataArrayCollection > () ;}
extern "C" void vtkDataArrayCollection_destructor (vtkNew < vtkDataArrayCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataArrayCollection_get_ptr (vtkNew < vtkDataArrayCollection > sself) {return sself . GetPointer () ;}
extern "C" int vtk_data_array_collection_get_number_of_items(vtkNew<vtkDataArrayCollection> sself) { return sself->GetNumberOfItems(); }
extern "C" vtkNew < vtkDataArrayCollectionIterator > vtkDataArrayCollectionIterator_new () {return vtkNew < vtkDataArrayCollectionIterator > () ;}
extern "C" void vtkDataArrayCollectionIterator_destructor (vtkNew < vtkDataArrayCollectionIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataArrayCollectionIterator_get_ptr (vtkNew < vtkDataArrayCollectionIterator > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkDataArraySelection > vtkDataArraySelection_new () {return vtkNew < vtkDataArraySelection > () ;}
extern "C" void vtkDataArraySelection_destructor (vtkNew < vtkDataArraySelection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataArraySelection_get_ptr (vtkNew < vtkDataArraySelection > sself) {return sself . GetPointer () ;}
extern "C" void vtk_data_array_selection_enable_array(vtkNew<vtkDataArraySelection> sself, const char name) { sself->EnableArray(name); }
extern "C" void vtk_data_array_selection_disable_array(vtkNew<vtkDataArraySelection> sself, const char name) { sself->DisableArray(name); }
extern "C" int vtk_data_array_selection_array_is_enabled(vtkNew<vtkDataArraySelection> sself, const char name) { return sself->ArrayIsEnabled(name); }
extern "C" int vtk_data_array_selection_array_exists(vtkNew<vtkDataArraySelection> sself, const char name) { return sself->ArrayExists(name); }
extern "C" void vtk_data_array_selection_enable_all_arrays(vtkNew<vtkDataArraySelection> sself) { sself->EnableAllArrays(); }
extern "C" void vtk_data_array_selection_disable_all_arrays(vtkNew<vtkDataArraySelection> sself) { sself->DisableAllArrays(); }
extern "C" int vtk_data_array_selection_get_number_of_arrays(vtkNew<vtkDataArraySelection> sself) { return sself->GetNumberOfArrays(); }
extern "C" int vtk_data_array_selection_get_number_of_arrays_enabled(vtkNew<vtkDataArraySelection> sself) { return sself->GetNumberOfArraysEnabled(); }
extern "C" const char* vtk_data_array_selection_get_array_name(vtkNew<vtkDataArraySelection> sself, int index) { return sself->GetArrayName(index); }
extern "C" int vtk_data_array_selection_get_array_index(vtkNew<vtkDataArraySelection> sself, const char name) { return sself->GetArrayIndex(name); }
extern "C" int vtk_data_array_selection_get_enabled_array_index(vtkNew<vtkDataArraySelection> sself, const char name) { return sself->GetEnabledArrayIndex(name); }
extern "C" int vtk_data_array_selection_get_array_setting(vtkNew<vtkDataArraySelection> sself, int index) { return sself->GetArraySetting(index); }
extern "C" int vtk_data_array_selection_get_array_setting(vtkNew<vtkDataArraySelection> sself, const char name) { return sself->GetArraySetting(name); }
extern "C" void vtk_data_array_selection_set_array_setting(vtkNew<vtkDataArraySelection> sself, const char name, int setting) { sself->SetArraySetting(name, setting); }
extern "C" void vtk_data_array_selection_remove_all_arrays(vtkNew<vtkDataArraySelection> sself) { sself->RemoveAllArrays(); }
extern "C" int vtk_data_array_selection_add_array(vtkNew<vtkDataArraySelection> sself, const char name, bool state) { return sself->AddArray(name, state); }
extern "C" void vtk_data_array_selection_remove_array_by_index(vtkNew<vtkDataArraySelection> sself, int index) { sself->RemoveArrayByIndex(index); }
extern "C" void vtk_data_array_selection_remove_array_by_name(vtkNew<vtkDataArraySelection> sself, const char name) { sself->RemoveArrayByName(name); }
extern "C" void vtk_data_array_selection_set_arrays(vtkNew<vtkDataArraySelection> sself, const char names, int numArrays) { sself->SetArrays(names, numArrays); }
extern "C" void vtk_data_array_selection_set_arrays_with_default(vtkNew<vtkDataArraySelection> sself, const char names, int numArrays, int defaultStatus) { sself->SetArraysWithDefault(names, numArrays, defaultStatus); }
extern "C" void vtk_data_array_selection_set_unknown_array_setting(vtkNew<vtkDataArraySelection> sself, int _arg) { sself->SetUnknownArraySetting(_arg); }
extern "C" int vtk_data_array_selection_get_unknown_array_setting(vtkNew<vtkDataArraySelection> sself) { return sself->GetUnknownArraySetting(); }
extern "C" vtkNew < vtkDebugLeaks > vtkDebugLeaks_new () {return vtkNew < vtkDebugLeaks > () ;}
extern "C" void vtkDebugLeaks_destructor (vtkNew < vtkDebugLeaks > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDebugLeaks_get_ptr (vtkNew < vtkDebugLeaks > sself) {return sself . GetPointer () ;}
extern "C" void vtk_debug_leaks_construct_class(vtkNew<vtkDebugLeaks> sself, const char className) { sself->ConstructClass(className); }
extern "C" void vtk_debug_leaks_destruct_class(vtkNew<vtkDebugLeaks> sself, const char className) { sself->DestructClass(className); }
extern "C" int vtk_debug_leaks_print_current_leaks(vtkNew<vtkDebugLeaks> sself) { return sself->PrintCurrentLeaks(); }
extern "C" int vtk_debug_leaks_get_exit_error(vtkNew<vtkDebugLeaks> sself) { return sself->GetExitError(); }
extern "C" void vtk_debug_leaks_set_exit_error(vtkNew<vtkDebugLeaks> sself, int p0) { sself->SetExitError(p0); }
extern "C" vtkNew < vtkDoubleArray > vtkDoubleArray_new () {return vtkNew < vtkDoubleArray > () ;}
extern "C" void vtkDoubleArray_destructor (vtkNew < vtkDoubleArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDoubleArray_get_ptr (vtkNew < vtkDoubleArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_double_array_get_data_type(vtkNew<vtkDoubleArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_double_array_get_typed_tuple(vtkNew<vtkDoubleArray> sself, long long i, double tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_double_array_set_typed_tuple(vtkNew<vtkDoubleArray> sself, long long i, const double tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_double_array_insert_typed_tuple(vtkNew<vtkDoubleArray> sself, long long i, const double tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_double_array_insert_next_typed_tuple(vtkNew<vtkDoubleArray> sself, const double tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" double vtk_double_array_get_value(vtkNew<vtkDoubleArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_double_array_set_value(vtkNew<vtkDoubleArray> sself, long long id, double value) { sself->SetValue(id, value); }
extern "C" bool vtk_double_array_set_number_of_values(vtkNew<vtkDoubleArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_double_array_insert_value(vtkNew<vtkDoubleArray> sself, long long id, double f) { sself->InsertValue(id, f); }
extern "C" long long vtk_double_array_insert_next_value(vtkNew<vtkDoubleArray> sself, double f) { return sself->InsertNextValue(f); }
extern "C" double* vtk_double_array_get_value_range(vtkNew<vtkDoubleArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" double* vtk_double_array_get_value_range(vtkNew<vtkDoubleArray> sself) { return sself->GetValueRange(); }
extern "C" double* vtk_double_array_write_pointer(vtkNew<vtkDoubleArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" double* vtk_double_array_get_pointer(vtkNew<vtkDoubleArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_double_array_set_array(vtkNew<vtkDoubleArray> sself, double array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_double_array_set_array(vtkNew<vtkDoubleArray> sself, double array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" double vtk_double_array_get_data_type_value_min(vtkNew<vtkDoubleArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" double vtk_double_array_get_data_type_value_max(vtkNew<vtkDoubleArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkDynamicLoader > vtkDynamicLoader_new () {return vtkNew < vtkDynamicLoader > () ;}
extern "C" void vtkDynamicLoader_destructor (vtkNew < vtkDynamicLoader > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDynamicLoader_get_ptr (vtkNew < vtkDynamicLoader > sself) {return sself . GetPointer () ;}
extern "C" const char* vtk_dynamic_loader_lib_prefix(vtkNew<vtkDynamicLoader> sself) { return sself->LibPrefix(); }
extern "C" const char* vtk_dynamic_loader_lib_extension(vtkNew<vtkDynamicLoader> sself) { return sself->LibExtension(); }
extern "C" const char* vtk_dynamic_loader_last_error(vtkNew<vtkDynamicLoader> sself) { return sself->LastError(); }
extern "C" vtkNew < vtkEventDataDevice3D > vtkEventDataDevice3D_new () {return vtkNew < vtkEventDataDevice3D > () ;}
extern "C" void vtkEventDataDevice3D_destructor (vtkNew < vtkEventDataDevice3D > sself) {sself . Reset () ; return ;}
extern "C" void * vtkEventDataDevice3D_get_ptr (vtkNew < vtkEventDataDevice3D > sself) {return sself . GetPointer () ;}
extern "C" void vtk_event_data_device_3_d_get_world_position(vtkNew<vtkEventDataDevice3D> sself, double v) { sself->GetWorldPosition(v); }
extern "C" const double* vtk_event_data_device_3_d_get_world_position(vtkNew<vtkEventDataDevice3D> sself) { return sself->GetWorldPosition(); }
extern "C" void vtk_event_data_device_3_d_set_world_position(vtkNew<vtkEventDataDevice3D> sself, const double p) { sself->SetWorldPosition(p); }
extern "C" void vtk_event_data_device_3_d_get_world_direction(vtkNew<vtkEventDataDevice3D> sself, double v) { sself->GetWorldDirection(v); }
extern "C" const double* vtk_event_data_device_3_d_get_world_direction(vtkNew<vtkEventDataDevice3D> sself) { return sself->GetWorldDirection(); }
extern "C" void vtk_event_data_device_3_d_set_world_direction(vtkNew<vtkEventDataDevice3D> sself, const double p) { sself->SetWorldDirection(p); }
extern "C" void vtk_event_data_device_3_d_get_world_orientation(vtkNew<vtkEventDataDevice3D> sself, double v) { sself->GetWorldOrientation(v); }
extern "C" const double* vtk_event_data_device_3_d_get_world_orientation(vtkNew<vtkEventDataDevice3D> sself) { return sself->GetWorldOrientation(); }
extern "C" void vtk_event_data_device_3_d_set_world_orientation(vtkNew<vtkEventDataDevice3D> sself, const double p) { sself->SetWorldOrientation(p); }
extern "C" void vtk_event_data_device_3_d_get_track_pad_position(vtkNew<vtkEventDataDevice3D> sself, double v) { sself->GetTrackPadPosition(v); }
extern "C" const double* vtk_event_data_device_3_d_get_track_pad_position(vtkNew<vtkEventDataDevice3D> sself) { return sself->GetTrackPadPosition(); }
extern "C" void vtk_event_data_device_3_d_set_track_pad_position(vtkNew<vtkEventDataDevice3D> sself, const double p) { sself->SetTrackPadPosition(p); }
extern "C" void vtk_event_data_device_3_d_set_track_pad_position(vtkNew<vtkEventDataDevice3D> sself, double x, double y) { sself->SetTrackPadPosition(x, y); }
extern "C" vtkNew < vtkEventDataForDevice > vtkEventDataForDevice_new () {return vtkNew < vtkEventDataForDevice > () ;}
extern "C" void vtkEventDataForDevice_destructor (vtkNew < vtkEventDataForDevice > sself) {sself . Reset () ; return ;}
extern "C" void * vtkEventDataForDevice_get_ptr (vtkNew < vtkEventDataForDevice > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkEventForwarderCommand > vtkEventForwarderCommand_new () {return vtkNew < vtkEventForwarderCommand > () ;}
extern "C" void vtkEventForwarderCommand_destructor (vtkNew < vtkEventForwarderCommand > sself) {sself . Reset () ; return ;}
extern "C" void * vtkEventForwarderCommand_get_ptr (vtkNew < vtkEventForwarderCommand > sself) {return sself . GetPointer () ;}
extern "C" void* vtk_event_forwarder_command_get_target(vtkNew<vtkEventForwarderCommand> sself) { return sself->GetTarget(); }
extern "C" vtkNew < vtkFileOutputWindow > vtkFileOutputWindow_new () {return vtkNew < vtkFileOutputWindow > () ;}
extern "C" void vtkFileOutputWindow_destructor (vtkNew < vtkFileOutputWindow > sself) {sself . Reset () ; return ;}
extern "C" void * vtkFileOutputWindow_get_ptr (vtkNew < vtkFileOutputWindow > sself) {return sself . GetPointer () ;}
extern "C" void vtk_file_output_window_display_text(vtkNew<vtkFileOutputWindow> sself, const char p0) { sself->DisplayText(p0); }
extern "C" void vtk_file_output_window_set_file_name(vtkNew<vtkFileOutputWindow> sself, const char _arg) { sself->SetFileName(_arg); }
extern "C" char* vtk_file_output_window_get_file_name(vtkNew<vtkFileOutputWindow> sself) { return sself->GetFileName(); }
extern "C" void vtk_file_output_window_set_flush(vtkNew<vtkFileOutputWindow> sself, int _arg) { sself->SetFlush(_arg); }
extern "C" int vtk_file_output_window_get_flush(vtkNew<vtkFileOutputWindow> sself) { return sself->GetFlush(); }
extern "C" void vtk_file_output_window_flush_on(vtkNew<vtkFileOutputWindow> sself) { sself->FlushOn(); }
extern "C" void vtk_file_output_window_flush_off(vtkNew<vtkFileOutputWindow> sself) { sself->FlushOff(); }
extern "C" void vtk_file_output_window_set_append(vtkNew<vtkFileOutputWindow> sself, int _arg) { sself->SetAppend(_arg); }
extern "C" int vtk_file_output_window_get_append(vtkNew<vtkFileOutputWindow> sself) { return sself->GetAppend(); }
extern "C" void vtk_file_output_window_append_on(vtkNew<vtkFileOutputWindow> sself) { sself->AppendOn(); }
extern "C" void vtk_file_output_window_append_off(vtkNew<vtkFileOutputWindow> sself) { sself->AppendOff(); }
extern "C" vtkNew < vtkFloatArray > vtkFloatArray_new () {return vtkNew < vtkFloatArray > () ;}
extern "C" void vtkFloatArray_destructor (vtkNew < vtkFloatArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkFloatArray_get_ptr (vtkNew < vtkFloatArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_float_array_get_data_type(vtkNew<vtkFloatArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_float_array_get_typed_tuple(vtkNew<vtkFloatArray> sself, long long i, float tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_float_array_set_typed_tuple(vtkNew<vtkFloatArray> sself, long long i, const float tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_float_array_insert_typed_tuple(vtkNew<vtkFloatArray> sself, long long i, const float tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_float_array_insert_next_typed_tuple(vtkNew<vtkFloatArray> sself, const float tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" float vtk_float_array_get_value(vtkNew<vtkFloatArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_float_array_set_value(vtkNew<vtkFloatArray> sself, long long id, float value) { sself->SetValue(id, value); }
extern "C" bool vtk_float_array_set_number_of_values(vtkNew<vtkFloatArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_float_array_insert_value(vtkNew<vtkFloatArray> sself, long long id, float f) { sself->InsertValue(id, f); }
extern "C" long long vtk_float_array_insert_next_value(vtkNew<vtkFloatArray> sself, float f) { return sself->InsertNextValue(f); }
extern "C" float* vtk_float_array_get_value_range(vtkNew<vtkFloatArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" float* vtk_float_array_get_value_range(vtkNew<vtkFloatArray> sself) { return sself->GetValueRange(); }
extern "C" float* vtk_float_array_write_pointer(vtkNew<vtkFloatArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" float* vtk_float_array_get_pointer(vtkNew<vtkFloatArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_float_array_set_array(vtkNew<vtkFloatArray> sself, float array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_float_array_set_array(vtkNew<vtkFloatArray> sself, float array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" float vtk_float_array_get_data_type_value_min(vtkNew<vtkFloatArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" float vtk_float_array_get_data_type_value_max(vtkNew<vtkFloatArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkGarbageCollector > vtkGarbageCollector_new () {return vtkNew < vtkGarbageCollector > () ;}
extern "C" void vtkGarbageCollector_destructor (vtkNew < vtkGarbageCollector > sself) {sself . Reset () ; return ;}
extern "C" void * vtkGarbageCollector_get_ptr (vtkNew < vtkGarbageCollector > sself) {return sself . GetPointer () ;}
extern "C" void vtk_garbage_collector_collect(vtkNew<vtkGarbageCollector> sself) { sself->Collect(); }
extern "C" void vtk_garbage_collector_deferred_collection_push(vtkNew<vtkGarbageCollector> sself) { sself->DeferredCollectionPush(); }
extern "C" void vtk_garbage_collector_deferred_collection_pop(vtkNew<vtkGarbageCollector> sself) { sself->DeferredCollectionPop(); }
extern "C" void vtk_garbage_collector_set_global_debug_flag(vtkNew<vtkGarbageCollector> sself, bool flag) { sself->SetGlobalDebugFlag(flag); }
extern "C" bool vtk_garbage_collector_get_global_debug_flag(vtkNew<vtkGarbageCollector> sself) { return sself->GetGlobalDebugFlag(); }
extern "C" vtkNew < vtkIdList > vtkIdList_new () {return vtkNew < vtkIdList > () ;}
extern "C" void vtkIdList_destructor (vtkNew < vtkIdList > sself) {sself . Reset () ; return ;}
extern "C" void * vtkIdList_get_ptr (vtkNew < vtkIdList > sself) {return sself . GetPointer () ;}
extern "C" void vtk_id_list_initialize(vtkNew<vtkIdList> sself) { sself->Initialize(); }
extern "C" int vtk_id_list_allocate(vtkNew<vtkIdList> sself, const long long sz, const int strategy) { return sself->Allocate(sz, strategy); }
extern "C" long long vtk_id_list_get_number_of_ids(vtkNew<vtkIdList> sself) { return sself->GetNumberOfIds(); }
extern "C" long long vtk_id_list_get_id(vtkNew<vtkIdList> sself, const long long i) { return sself->GetId(i); }
extern "C" long long vtk_id_list_find_id_location(vtkNew<vtkIdList> sself, const long long id) { return sself->FindIdLocation(id); }
extern "C" void vtk_id_list_set_number_of_ids(vtkNew<vtkIdList> sself, const long long number) { sself->SetNumberOfIds(number); }
extern "C" void vtk_id_list_set_id(vtkNew<vtkIdList> sself, const long long i, const long long vtkid) { sself->SetId(i, vtkid); }
extern "C" void vtk_id_list_insert_id(vtkNew<vtkIdList> sself, const long long i, const long long vtkid) { sself->InsertId(i, vtkid); }
extern "C" long long vtk_id_list_insert_next_id(vtkNew<vtkIdList> sself, const long long vtkid) { return sself->InsertNextId(vtkid); }
extern "C" long long vtk_id_list_insert_unique_id(vtkNew<vtkIdList> sself, const long long vtkid) { return sself->InsertUniqueId(vtkid); }
extern "C" void vtk_id_list_sort(vtkNew<vtkIdList> sself) { sself->Sort(); }
extern "C" void vtk_id_list_fill(vtkNew<vtkIdList> sself, long long value) { sself->Fill(value); }
extern "C" long long* vtk_id_list_get_pointer(vtkNew<vtkIdList> sself, const long long i) { return sself->GetPointer(i); }
extern "C" long long* vtk_id_list_write_pointer(vtkNew<vtkIdList> sself, const long long i, const long long number) { return sself->WritePointer(i, number); }
extern "C" void vtk_id_list_set_array(vtkNew<vtkIdList> sself, long long array, long long size) { sself->SetArray(array, size); }
extern "C" void vtk_id_list_reset(vtkNew<vtkIdList> sself) { sself->Reset(); }
extern "C" void vtk_id_list_squeeze(vtkNew<vtkIdList> sself) { sself->Squeeze(); }
extern "C" void vtk_id_list_delete_id(vtkNew<vtkIdList> sself, long long vtkid) { sself->DeleteId(vtkid); }
extern "C" long long vtk_id_list_is_id(vtkNew<vtkIdList> sself, long long vtkid) { return sself->IsId(vtkid); }
extern "C" long long* vtk_id_list_resize(vtkNew<vtkIdList> sself, const long long sz) { return sself->Resize(sz); }
extern "C" long long* vtk_id_list_begin(vtkNew<vtkIdList> sself) { return sself->begin(); }
extern "C" long long* vtk_id_list_end(vtkNew<vtkIdList> sself) { return sself->end(); }
extern "C" const long long* vtk_id_list_begin(vtkNew<vtkIdList> sself) { return sself->begin(); }
extern "C" const long long* vtk_id_list_end(vtkNew<vtkIdList> sself) { return sself->end(); }
extern "C" vtkNew < vtkIdListCollection > vtkIdListCollection_new () {return vtkNew < vtkIdListCollection > () ;}
extern "C" void vtkIdListCollection_destructor (vtkNew < vtkIdListCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkIdListCollection_get_ptr (vtkNew < vtkIdListCollection > sself) {return sself . GetPointer () ;}
extern "C" int vtk_id_list_collection_get_number_of_items(vtkNew<vtkIdListCollection> sself) { return sself->GetNumberOfItems(); }
extern "C" vtkNew < vtkIdTypeArray > vtkIdTypeArray_new () {return vtkNew < vtkIdTypeArray > () ;}
extern "C" void vtkIdTypeArray_destructor (vtkNew < vtkIdTypeArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkIdTypeArray_get_ptr (vtkNew < vtkIdTypeArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_id_type_array_get_data_type(vtkNew<vtkIdTypeArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_id_type_array_get_typed_tuple(vtkNew<vtkIdTypeArray> sself, long long i, long long tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_id_type_array_set_typed_tuple(vtkNew<vtkIdTypeArray> sself, long long i, const long long tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_id_type_array_insert_typed_tuple(vtkNew<vtkIdTypeArray> sself, long long i, const long long tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_id_type_array_insert_next_typed_tuple(vtkNew<vtkIdTypeArray> sself, const long long tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" long long vtk_id_type_array_get_value(vtkNew<vtkIdTypeArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_id_type_array_set_value(vtkNew<vtkIdTypeArray> sself, long long id, long long value) { sself->SetValue(id, value); }
extern "C" bool vtk_id_type_array_set_number_of_values(vtkNew<vtkIdTypeArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_id_type_array_insert_value(vtkNew<vtkIdTypeArray> sself, long long id, long long f) { sself->InsertValue(id, f); }
extern "C" long long vtk_id_type_array_insert_next_value(vtkNew<vtkIdTypeArray> sself, long long f) { return sself->InsertNextValue(f); }
extern "C" long long* vtk_id_type_array_get_value_range(vtkNew<vtkIdTypeArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" long long* vtk_id_type_array_get_value_range(vtkNew<vtkIdTypeArray> sself) { return sself->GetValueRange(); }
extern "C" long long* vtk_id_type_array_write_pointer(vtkNew<vtkIdTypeArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" long long* vtk_id_type_array_get_pointer(vtkNew<vtkIdTypeArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_id_type_array_set_array(vtkNew<vtkIdTypeArray> sself, long long array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_id_type_array_set_array(vtkNew<vtkIdTypeArray> sself, long long array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" long long vtk_id_type_array_get_data_type_value_min(vtkNew<vtkIdTypeArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" long long vtk_id_type_array_get_data_type_value_max(vtkNew<vtkIdTypeArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkInformation > vtkInformation_new () {return vtkNew < vtkInformation > () ;}
extern "C" void vtkInformation_destructor (vtkNew < vtkInformation > sself) {sself . Reset () ; return ;}
extern "C" void * vtkInformation_get_ptr (vtkNew < vtkInformation > sself) {return sself . GetPointer () ;}
extern "C" void vtk_information_modified(vtkNew<vtkInformation> sself) { sself->Modified(); }
extern "C" void vtk_information_clear(vtkNew<vtkInformation> sself) { sself->Clear(); }
extern "C" int vtk_information_get_number_of_keys(vtkNew<vtkInformation> sself) { return sself->GetNumberOfKeys(); }
extern "C" vtkNew < vtkInformationIterator > vtkInformationIterator_new () {return vtkNew < vtkInformationIterator > () ;}
extern "C" void vtkInformationIterator_destructor (vtkNew < vtkInformationIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkInformationIterator_get_ptr (vtkNew < vtkInformationIterator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_information_iterator_init_traversal(vtkNew<vtkInformationIterator> sself) { sself->InitTraversal(); }
extern "C" void vtk_information_iterator_go_to_first_item(vtkNew<vtkInformationIterator> sself) { sself->GoToFirstItem(); }
extern "C" void vtk_information_iterator_go_to_next_item(vtkNew<vtkInformationIterator> sself) { sself->GoToNextItem(); }
extern "C" int vtk_information_iterator_is_done_with_traversal(vtkNew<vtkInformationIterator> sself) { return sself->IsDoneWithTraversal(); }
extern "C" vtkNew < vtkInformationKeyLookup > vtkInformationKeyLookup_new () {return vtkNew < vtkInformationKeyLookup > () ;}
extern "C" void vtkInformationKeyLookup_destructor (vtkNew < vtkInformationKeyLookup > sself) {sself . Reset () ; return ;}
extern "C" void * vtkInformationKeyLookup_get_ptr (vtkNew < vtkInformationKeyLookup > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkInformationVector > vtkInformationVector_new () {return vtkNew < vtkInformationVector > () ;}
extern "C" void vtkInformationVector_destructor (vtkNew < vtkInformationVector > sself) {sself . Reset () ; return ;}
extern "C" void * vtkInformationVector_get_ptr (vtkNew < vtkInformationVector > sself) {return sself . GetPointer () ;}
extern "C" int vtk_information_vector_get_number_of_information_objects(vtkNew<vtkInformationVector> sself) { return sself->GetNumberOfInformationObjects(); }
extern "C" void vtk_information_vector_set_number_of_information_objects(vtkNew<vtkInformationVector> sself, int n) { sself->SetNumberOfInformationObjects(n); }
extern "C" void vtk_information_vector_remove(vtkNew<vtkInformationVector> sself, int idx) { sself->Remove(idx); }
extern "C" vtkNew < vtkIntArray > vtkIntArray_new () {return vtkNew < vtkIntArray > () ;}
extern "C" void vtkIntArray_destructor (vtkNew < vtkIntArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkIntArray_get_ptr (vtkNew < vtkIntArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_int_array_get_data_type(vtkNew<vtkIntArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_int_array_get_typed_tuple(vtkNew<vtkIntArray> sself, long long i, int tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_int_array_set_typed_tuple(vtkNew<vtkIntArray> sself, long long i, const int tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_int_array_insert_typed_tuple(vtkNew<vtkIntArray> sself, long long i, const int tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_int_array_insert_next_typed_tuple(vtkNew<vtkIntArray> sself, const int tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" int vtk_int_array_get_value(vtkNew<vtkIntArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_int_array_set_value(vtkNew<vtkIntArray> sself, long long id, int value) { sself->SetValue(id, value); }
extern "C" bool vtk_int_array_set_number_of_values(vtkNew<vtkIntArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_int_array_insert_value(vtkNew<vtkIntArray> sself, long long id, int f) { sself->InsertValue(id, f); }
extern "C" long long vtk_int_array_insert_next_value(vtkNew<vtkIntArray> sself, int f) { return sself->InsertNextValue(f); }
extern "C" int* vtk_int_array_get_value_range(vtkNew<vtkIntArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" int* vtk_int_array_get_value_range(vtkNew<vtkIntArray> sself) { return sself->GetValueRange(); }
extern "C" int* vtk_int_array_write_pointer(vtkNew<vtkIntArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" int* vtk_int_array_get_pointer(vtkNew<vtkIntArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_int_array_set_array(vtkNew<vtkIntArray> sself, int array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_int_array_set_array(vtkNew<vtkIntArray> sself, int array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" int vtk_int_array_get_data_type_value_min(vtkNew<vtkIntArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" int vtk_int_array_get_data_type_value_max(vtkNew<vtkIntArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkLongArray > vtkLongArray_new () {return vtkNew < vtkLongArray > () ;}
extern "C" void vtkLongArray_destructor (vtkNew < vtkLongArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLongArray_get_ptr (vtkNew < vtkLongArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_long_array_get_data_type(vtkNew<vtkLongArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_long_array_get_typed_tuple(vtkNew<vtkLongArray> sself, long long i, long tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_long_array_set_typed_tuple(vtkNew<vtkLongArray> sself, long long i, const long tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_long_array_insert_typed_tuple(vtkNew<vtkLongArray> sself, long long i, const long tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_long_array_insert_next_typed_tuple(vtkNew<vtkLongArray> sself, const long tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" long vtk_long_array_get_value(vtkNew<vtkLongArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_long_array_set_value(vtkNew<vtkLongArray> sself, long long id, long value) { sself->SetValue(id, value); }
extern "C" bool vtk_long_array_set_number_of_values(vtkNew<vtkLongArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_long_array_insert_value(vtkNew<vtkLongArray> sself, long long id, long f) { sself->InsertValue(id, f); }
extern "C" long long vtk_long_array_insert_next_value(vtkNew<vtkLongArray> sself, long f) { return sself->InsertNextValue(f); }
extern "C" long* vtk_long_array_get_value_range(vtkNew<vtkLongArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" long* vtk_long_array_get_value_range(vtkNew<vtkLongArray> sself) { return sself->GetValueRange(); }
extern "C" long* vtk_long_array_write_pointer(vtkNew<vtkLongArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" long* vtk_long_array_get_pointer(vtkNew<vtkLongArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_long_array_set_array(vtkNew<vtkLongArray> sself, long array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_long_array_set_array(vtkNew<vtkLongArray> sself, long array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" long vtk_long_array_get_data_type_value_min(vtkNew<vtkLongArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" long vtk_long_array_get_data_type_value_max(vtkNew<vtkLongArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkLongLongArray > vtkLongLongArray_new () {return vtkNew < vtkLongLongArray > () ;}
extern "C" void vtkLongLongArray_destructor (vtkNew < vtkLongLongArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLongLongArray_get_ptr (vtkNew < vtkLongLongArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_long_long_array_get_data_type(vtkNew<vtkLongLongArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_long_long_array_get_typed_tuple(vtkNew<vtkLongLongArray> sself, long long i, long long tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_long_long_array_set_typed_tuple(vtkNew<vtkLongLongArray> sself, long long i, const long long tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_long_long_array_insert_typed_tuple(vtkNew<vtkLongLongArray> sself, long long i, const long long tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_long_long_array_insert_next_typed_tuple(vtkNew<vtkLongLongArray> sself, const long long tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" long long vtk_long_long_array_get_value(vtkNew<vtkLongLongArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_long_long_array_set_value(vtkNew<vtkLongLongArray> sself, long long id, long long value) { sself->SetValue(id, value); }
extern "C" bool vtk_long_long_array_set_number_of_values(vtkNew<vtkLongLongArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_long_long_array_insert_value(vtkNew<vtkLongLongArray> sself, long long id, long long f) { sself->InsertValue(id, f); }
extern "C" long long vtk_long_long_array_insert_next_value(vtkNew<vtkLongLongArray> sself, long long f) { return sself->InsertNextValue(f); }
extern "C" long long* vtk_long_long_array_get_value_range(vtkNew<vtkLongLongArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" long long* vtk_long_long_array_get_value_range(vtkNew<vtkLongLongArray> sself) { return sself->GetValueRange(); }
extern "C" long long* vtk_long_long_array_write_pointer(vtkNew<vtkLongLongArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" long long* vtk_long_long_array_get_pointer(vtkNew<vtkLongLongArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_long_long_array_set_array(vtkNew<vtkLongLongArray> sself, long long array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_long_long_array_set_array(vtkNew<vtkLongLongArray> sself, long long array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" long long vtk_long_long_array_get_data_type_value_min(vtkNew<vtkLongLongArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" long long vtk_long_long_array_get_data_type_value_max(vtkNew<vtkLongLongArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkLookupTable > vtkLookupTable_new () {return vtkNew < vtkLookupTable > () ;}
extern "C" void vtkLookupTable_destructor (vtkNew < vtkLookupTable > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLookupTable_get_ptr (vtkNew < vtkLookupTable > sself) {return sself . GetPointer () ;}
extern "C" int vtk_lookup_table_is_opaque(vtkNew<vtkLookupTable> sself) { return sself->IsOpaque(); }
extern "C" int vtk_lookup_table_allocate(vtkNew<vtkLookupTable> sself, int sz, int ext) { return sself->Allocate(sz, ext); }
extern "C" void vtk_lookup_table_build(vtkNew<vtkLookupTable> sself) { sself->Build(); }
extern "C" void vtk_lookup_table_force_build(vtkNew<vtkLookupTable> sself) { sself->ForceBuild(); }
extern "C" void vtk_lookup_table_build_special_colors(vtkNew<vtkLookupTable> sself) { sself->BuildSpecialColors(); }
extern "C" void vtk_lookup_table_set_ramp(vtkNew<vtkLookupTable> sself, int _arg) { sself->SetRamp(_arg); }
extern "C" void vtk_lookup_table_set_ramp_to_linear(vtkNew<vtkLookupTable> sself) { sself->SetRampToLinear(); }
extern "C" void vtk_lookup_table_set_ramp_to_s_curve(vtkNew<vtkLookupTable> sself) { sself->SetRampToSCurve(); }
extern "C" void vtk_lookup_table_set_ramp_to_sqrt(vtkNew<vtkLookupTable> sself) { sself->SetRampToSQRT(); }
extern "C" int vtk_lookup_table_get_ramp(vtkNew<vtkLookupTable> sself) { return sself->GetRamp(); }
extern "C" void vtk_lookup_table_set_scale(vtkNew<vtkLookupTable> sself, int scale) { sself->SetScale(scale); }
extern "C" void vtk_lookup_table_set_scale_to_linear(vtkNew<vtkLookupTable> sself) { sself->SetScaleToLinear(); }
extern "C" void vtk_lookup_table_set_scale_to_log_10(vtkNew<vtkLookupTable> sself) { sself->SetScaleToLog10(); }
extern "C" int vtk_lookup_table_get_scale(vtkNew<vtkLookupTable> sself) { return sself->GetScale(); }
extern "C" void vtk_lookup_table_set_table_range(vtkNew<vtkLookupTable> sself, const double r) { sself->SetTableRange(r); }
extern "C" void vtk_lookup_table_set_table_range(vtkNew<vtkLookupTable> sself, double min, double max) { sself->SetTableRange(min, max); }
extern "C" double* vtk_lookup_table_get_table_range(vtkNew<vtkLookupTable> sself) { return sself->GetTableRange(); }
extern "C" void vtk_lookup_table_get_table_range(vtkNew<vtkLookupTable> sself, double data) { sself->GetTableRange(data); }
extern "C" void vtk_lookup_table_set_hue_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2) { sself->SetHueRange(_arg1, _arg2); }
extern "C" void vtk_lookup_table_set_hue_range(vtkNew<vtkLookupTable> sself, const double _arg) { sself->SetHueRange(_arg); }
extern "C" double* vtk_lookup_table_get_hue_range(vtkNew<vtkLookupTable> sself) { return sself->GetHueRange(); }
extern "C" void vtk_lookup_table_get_hue_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2) { sself->GetHueRange(_arg1, _arg2); }
extern "C" void vtk_lookup_table_get_hue_range(vtkNew<vtkLookupTable> sself, double _arg) { sself->GetHueRange(_arg); }
extern "C" void vtk_lookup_table_set_saturation_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2) { sself->SetSaturationRange(_arg1, _arg2); }
extern "C" void vtk_lookup_table_set_saturation_range(vtkNew<vtkLookupTable> sself, const double _arg) { sself->SetSaturationRange(_arg); }
extern "C" double* vtk_lookup_table_get_saturation_range(vtkNew<vtkLookupTable> sself) { return sself->GetSaturationRange(); }
extern "C" void vtk_lookup_table_get_saturation_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2) { sself->GetSaturationRange(_arg1, _arg2); }
extern "C" void vtk_lookup_table_get_saturation_range(vtkNew<vtkLookupTable> sself, double _arg) { sself->GetSaturationRange(_arg); }
extern "C" void vtk_lookup_table_set_value_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2) { sself->SetValueRange(_arg1, _arg2); }
extern "C" void vtk_lookup_table_set_value_range(vtkNew<vtkLookupTable> sself, const double _arg) { sself->SetValueRange(_arg); }
extern "C" double* vtk_lookup_table_get_value_range(vtkNew<vtkLookupTable> sself) { return sself->GetValueRange(); }
extern "C" void vtk_lookup_table_get_value_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2) { sself->GetValueRange(_arg1, _arg2); }
extern "C" void vtk_lookup_table_get_value_range(vtkNew<vtkLookupTable> sself, double _arg) { sself->GetValueRange(_arg); }
extern "C" void vtk_lookup_table_set_alpha_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2) { sself->SetAlphaRange(_arg1, _arg2); }
extern "C" void vtk_lookup_table_set_alpha_range(vtkNew<vtkLookupTable> sself, const double _arg) { sself->SetAlphaRange(_arg); }
extern "C" double* vtk_lookup_table_get_alpha_range(vtkNew<vtkLookupTable> sself) { return sself->GetAlphaRange(); }
extern "C" void vtk_lookup_table_get_alpha_range(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2) { sself->GetAlphaRange(_arg1, _arg2); }
extern "C" void vtk_lookup_table_get_alpha_range(vtkNew<vtkLookupTable> sself, double _arg) { sself->GetAlphaRange(_arg); }
extern "C" void vtk_lookup_table_set_nan_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4) { sself->SetNanColor(_arg1, _arg2, _arg3, _arg4); }
extern "C" void vtk_lookup_table_set_nan_color(vtkNew<vtkLookupTable> sself, const double _arg) { sself->SetNanColor(_arg); }
extern "C" double* vtk_lookup_table_get_nan_color(vtkNew<vtkLookupTable> sself) { return sself->GetNanColor(); }
extern "C" void vtk_lookup_table_get_nan_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4) { sself->GetNanColor(_arg1, _arg2, _arg3, _arg4); }
extern "C" void vtk_lookup_table_get_nan_color(vtkNew<vtkLookupTable> sself, double _arg) { sself->GetNanColor(_arg); }
extern "C" unsigned char* vtk_lookup_table_get_nan_color_as_unsigned_chars(vtkNew<vtkLookupTable> sself) { return sself->GetNanColorAsUnsignedChars(); }
extern "C" void vtk_lookup_table_get_color_as_unsigned_chars(vtkNew<vtkLookupTable> sself, const double colorIn, unsigned char colorOut) { sself->GetColorAsUnsignedChars(colorIn, colorOut); }
extern "C" void vtk_lookup_table_set_below_range_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4) { sself->SetBelowRangeColor(_arg1, _arg2, _arg3, _arg4); }
extern "C" void vtk_lookup_table_set_below_range_color(vtkNew<vtkLookupTable> sself, const double _arg) { sself->SetBelowRangeColor(_arg); }
extern "C" double* vtk_lookup_table_get_below_range_color(vtkNew<vtkLookupTable> sself) { return sself->GetBelowRangeColor(); }
extern "C" void vtk_lookup_table_get_below_range_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4) { sself->GetBelowRangeColor(_arg1, _arg2, _arg3, _arg4); }
extern "C" void vtk_lookup_table_get_below_range_color(vtkNew<vtkLookupTable> sself, double _arg) { sself->GetBelowRangeColor(_arg); }
extern "C" void vtk_lookup_table_set_use_below_range_color(vtkNew<vtkLookupTable> sself, int _arg) { sself->SetUseBelowRangeColor(_arg); }
extern "C" int vtk_lookup_table_get_use_below_range_color(vtkNew<vtkLookupTable> sself) { return sself->GetUseBelowRangeColor(); }
extern "C" void vtk_lookup_table_use_below_range_color_on(vtkNew<vtkLookupTable> sself) { sself->UseBelowRangeColorOn(); }
extern "C" void vtk_lookup_table_use_below_range_color_off(vtkNew<vtkLookupTable> sself) { sself->UseBelowRangeColorOff(); }
extern "C" void vtk_lookup_table_set_above_range_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4) { sself->SetAboveRangeColor(_arg1, _arg2, _arg3, _arg4); }
extern "C" void vtk_lookup_table_set_above_range_color(vtkNew<vtkLookupTable> sself, const double _arg) { sself->SetAboveRangeColor(_arg); }
extern "C" double* vtk_lookup_table_get_above_range_color(vtkNew<vtkLookupTable> sself) { return sself->GetAboveRangeColor(); }
extern "C" void vtk_lookup_table_get_above_range_color(vtkNew<vtkLookupTable> sself, double _arg1, double _arg2, double _arg3, double _arg4) { sself->GetAboveRangeColor(_arg1, _arg2, _arg3, _arg4); }
extern "C" void vtk_lookup_table_get_above_range_color(vtkNew<vtkLookupTable> sself, double _arg) { sself->GetAboveRangeColor(_arg); }
extern "C" void vtk_lookup_table_set_use_above_range_color(vtkNew<vtkLookupTable> sself, int _arg) { sself->SetUseAboveRangeColor(_arg); }
extern "C" int vtk_lookup_table_get_use_above_range_color(vtkNew<vtkLookupTable> sself) { return sself->GetUseAboveRangeColor(); }
extern "C" void vtk_lookup_table_use_above_range_color_on(vtkNew<vtkLookupTable> sself) { sself->UseAboveRangeColorOn(); }
extern "C" void vtk_lookup_table_use_above_range_color_off(vtkNew<vtkLookupTable> sself) { sself->UseAboveRangeColorOff(); }
extern "C" const unsigned char* vtk_lookup_table_map_value(vtkNew<vtkLookupTable> sself, double v) { return sself->MapValue(v); }
extern "C" void vtk_lookup_table_get_color(vtkNew<vtkLookupTable> sself, double v, double rgb) { sself->GetColor(v, rgb); }
extern "C" double vtk_lookup_table_get_opacity(vtkNew<vtkLookupTable> sself, double v) { return sself->GetOpacity(v); }
extern "C" long long vtk_lookup_table_get_index(vtkNew<vtkLookupTable> sself, double v) { return sself->GetIndex(v); }
extern "C" void vtk_lookup_table_set_number_of_table_values(vtkNew<vtkLookupTable> sself, long long number) { sself->SetNumberOfTableValues(number); }
extern "C" long long vtk_lookup_table_get_number_of_table_values(vtkNew<vtkLookupTable> sself) { return sself->GetNumberOfTableValues(); }
extern "C" void vtk_lookup_table_set_table_value(vtkNew<vtkLookupTable> sself, long long indx, const double rgba) { sself->SetTableValue(indx, rgba); }
extern "C" void vtk_lookup_table_set_table_value(vtkNew<vtkLookupTable> sself, long long indx, double r, double g, double b, double a) { sself->SetTableValue(indx, r, g, b, a); }
extern "C" double* vtk_lookup_table_get_table_value(vtkNew<vtkLookupTable> sself, long long indx) { return sself->GetTableValue(indx); }
extern "C" void vtk_lookup_table_get_table_value(vtkNew<vtkLookupTable> sself, long long indx, double rgba) { sself->GetTableValue(indx, rgba); }
extern "C" unsigned char* vtk_lookup_table_get_pointer(vtkNew<vtkLookupTable> sself, long long id) { return sself->GetPointer(id); }
extern "C" unsigned char* vtk_lookup_table_write_pointer(vtkNew<vtkLookupTable> sself, long long id, int number) { return sself->WritePointer(id, number); }
extern "C" double* vtk_lookup_table_get_range(vtkNew<vtkLookupTable> sself) { return sself->GetRange(); }
extern "C" void vtk_lookup_table_get_log_range(vtkNew<vtkLookupTable> sself, const double range, double log_range) { sself->GetLogRange(range, log_range); }
extern "C" double vtk_lookup_table_apply_log_scale(vtkNew<vtkLookupTable> sself, double v, const double range, const double log_range) { return sself->ApplyLogScale(v, range, log_range); }
extern "C" void vtk_lookup_table_set_number_of_colors(vtkNew<vtkLookupTable> sself, long long _arg) { sself->SetNumberOfColors(_arg); }
extern "C" long long vtk_lookup_table_get_number_of_colors_min_value(vtkNew<vtkLookupTable> sself) { return sself->GetNumberOfColorsMinValue(); }
extern "C" long long vtk_lookup_table_get_number_of_colors_max_value(vtkNew<vtkLookupTable> sself) { return sself->GetNumberOfColorsMaxValue(); }
extern "C" long long vtk_lookup_table_get_number_of_colors(vtkNew<vtkLookupTable> sself) { return sself->GetNumberOfColors(); }
extern "C" void vtk_lookup_table_map_scalars_through_table_2(vtkNew<vtkLookupTable> sself, void input, unsigned char output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat) { sself->MapScalarsThroughTable2(input, output, inputDataType, numberOfValues, inputIncrement, outputFormat); }
extern "C" int vtk_lookup_table_using_log_scale(vtkNew<vtkLookupTable> sself) { return sself->UsingLogScale(); }
extern "C" void vtk_lookup_table_get_indexed_color(vtkNew<vtkLookupTable> sself, long long idx, double rgba) { sself->GetIndexedColor(idx, rgba); }
extern "C" vtkNew < vtkMath > vtkMath_new () {return vtkNew < vtkMath > () ;}
extern "C" void vtkMath_destructor (vtkNew < vtkMath > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMath_get_ptr (vtkNew < vtkMath > sself) {return sself . GetPointer () ;}
extern "C" double vtk_math_pi(vtkNew<vtkMath> sself) { return sself->Pi(); }
extern "C" float vtk_math_radians_from_degrees(vtkNew<vtkMath> sself, float degrees) { return sself->RadiansFromDegrees(degrees); }
extern "C" double vtk_math_radians_from_degrees(vtkNew<vtkMath> sself, double degrees) { return sself->RadiansFromDegrees(degrees); }
extern "C" float vtk_math_degrees_from_radians(vtkNew<vtkMath> sself, float radians) { return sself->DegreesFromRadians(radians); }
extern "C" double vtk_math_degrees_from_radians(vtkNew<vtkMath> sself, double radians) { return sself->DegreesFromRadians(radians); }
extern "C" int vtk_math_round(vtkNew<vtkMath> sself, float f) { return sself->Round(f); }
extern "C" int vtk_math_round(vtkNew<vtkMath> sself, double f) { return sself->Round(f); }
extern "C" int vtk_math_floor(vtkNew<vtkMath> sself, double x) { return sself->Floor(x); }
extern "C" int vtk_math_ceil(vtkNew<vtkMath> sself, double x) { return sself->Ceil(x); }
extern "C" int vtk_math_ceil_log_2(vtkNew<vtkMath> sself, unsigned long long x) { return sself->CeilLog2(x); }
extern "C" bool vtk_math_is_power_of_two(vtkNew<vtkMath> sself, unsigned long long x) { return sself->IsPowerOfTwo(x); }
extern "C" int vtk_math_nearest_power_of_two(vtkNew<vtkMath> sself, int x) { return sself->NearestPowerOfTwo(x); }
extern "C" long long vtk_math_factorial(vtkNew<vtkMath> sself, int N) { return sself->Factorial(N); }
extern "C" long long vtk_math_binomial(vtkNew<vtkMath> sself, int m, int n) { return sself->Binomial(m, n); }
extern "C" int* vtk_math_begin_combination(vtkNew<vtkMath> sself, int m, int n) { return sself->BeginCombination(m, n); }
extern "C" int vtk_math_next_combination(vtkNew<vtkMath> sself, int m, int n, int combination) { return sself->NextCombination(m, n, combination); }
extern "C" void vtk_math_free_combination(vtkNew<vtkMath> sself, int combination) { sself->FreeCombination(combination); }
extern "C" void vtk_math_random_seed(vtkNew<vtkMath> sself, int s) { sself->RandomSeed(s); }
extern "C" int vtk_math_get_seed(vtkNew<vtkMath> sself) { return sself->GetSeed(); }
extern "C" double vtk_math_random(vtkNew<vtkMath> sself) { return sself->Random(); }
extern "C" double vtk_math_random(vtkNew<vtkMath> sself, double min, double max) { return sself->Random(min, max); }
extern "C" double vtk_math_gaussian(vtkNew<vtkMath> sself) { return sself->Gaussian(); }
extern "C" double vtk_math_gaussian(vtkNew<vtkMath> sself, double mean, double std) { return sself->Gaussian(mean, std); }
extern "C" void vtk_math_assign(vtkNew<vtkMath> sself, const double a, double b) { sself->Assign(a, b); }
extern "C" void vtk_math_add(vtkNew<vtkMath> sself, const float a, const float b, float c) { sself->Add(a, b, c); }
extern "C" void vtk_math_add(vtkNew<vtkMath> sself, const double a, const double b, double c) { sself->Add(a, b, c); }
extern "C" void vtk_math_subtract(vtkNew<vtkMath> sself, const float a, const float b, float c) { sself->Subtract(a, b, c); }
extern "C" void vtk_math_subtract(vtkNew<vtkMath> sself, const double a, const double b, double c) { sself->Subtract(a, b, c); }
extern "C" void vtk_math_multiply_scalar(vtkNew<vtkMath> sself, float a, float s) { sself->MultiplyScalar(a, s); }
extern "C" void vtk_math_multiply_scalar_2_d(vtkNew<vtkMath> sself, float a, float s) { sself->MultiplyScalar2D(a, s); }
extern "C" void vtk_math_multiply_scalar(vtkNew<vtkMath> sself, double a, double s) { sself->MultiplyScalar(a, s); }
extern "C" void vtk_math_multiply_scalar_2_d(vtkNew<vtkMath> sself, double a, double s) { sself->MultiplyScalar2D(a, s); }
extern "C" float vtk_math_dot(vtkNew<vtkMath> sself, const float a, const float b) { return sself->Dot(a, b); }
extern "C" double vtk_math_dot(vtkNew<vtkMath> sself, const double a, const double b) { return sself->Dot(a, b); }
extern "C" void vtk_math_outer(vtkNew<vtkMath> sself, const float a, const float b, float c) { sself->Outer(a, b, c); }
extern "C" void vtk_math_outer(vtkNew<vtkMath> sself, const double a, const double b, double c) { sself->Outer(a, b, c); }
extern "C" void vtk_math_cross(vtkNew<vtkMath> sself, const float a, const float b, float c) { sself->Cross(a, b, c); }
extern "C" void vtk_math_cross(vtkNew<vtkMath> sself, const double a, const double b, double c) { sself->Cross(a, b, c); }
extern "C" float vtk_math_norm(vtkNew<vtkMath> sself, const float x, int n) { return sself->Norm(x, n); }
extern "C" double vtk_math_norm(vtkNew<vtkMath> sself, const double x, int n) { return sself->Norm(x, n); }
extern "C" float vtk_math_norm(vtkNew<vtkMath> sself, const float v) { return sself->Norm(v); }
extern "C" double vtk_math_norm(vtkNew<vtkMath> sself, const double v) { return sself->Norm(v); }
extern "C" float vtk_math_normalize(vtkNew<vtkMath> sself, float v) { return sself->Normalize(v); }
extern "C" double vtk_math_normalize(vtkNew<vtkMath> sself, double v) { return sself->Normalize(v); }
extern "C" void vtk_math_perpendiculars(vtkNew<vtkMath> sself, const double v1, double v2, double v3, double theta) { sself->Perpendiculars(v1, v2, v3, theta); }
extern "C" void vtk_math_perpendiculars(vtkNew<vtkMath> sself, const float v1, float v2, float v3, double theta) { sself->Perpendiculars(v1, v2, v3, theta); }
extern "C" bool vtk_math_project_vector(vtkNew<vtkMath> sself, const float a, const float b, float projection) { return sself->ProjectVector(a, b, projection); }
extern "C" bool vtk_math_project_vector(vtkNew<vtkMath> sself, const double a, const double b, double projection) { return sself->ProjectVector(a, b, projection); }
extern "C" bool vtk_math_project_vector_2_d(vtkNew<vtkMath> sself, const float a, const float b, float projection) { return sself->ProjectVector2D(a, b, projection); }
extern "C" bool vtk_math_project_vector_2_d(vtkNew<vtkMath> sself, const double a, const double b, double projection) { return sself->ProjectVector2D(a, b, projection); }
extern "C" float vtk_math_distance_2_between_points(vtkNew<vtkMath> sself, const float p1, const float p2) { return sself->Distance2BetweenPoints(p1, p2); }
extern "C" double vtk_math_distance_2_between_points(vtkNew<vtkMath> sself, const double p1, const double p2) { return sself->Distance2BetweenPoints(p1, p2); }
extern "C" double vtk_math_angle_between_vectors(vtkNew<vtkMath> sself, const double v1, const double v2) { return sself->AngleBetweenVectors(v1, v2); }
extern "C" double vtk_math_signed_angle_between_vectors(vtkNew<vtkMath> sself, const double v1, const double v2, const double vn) { return sself->SignedAngleBetweenVectors(v1, v2, vn); }
extern "C" double vtk_math_gaussian_amplitude(vtkNew<vtkMath> sself, const double variance, const double distanceFromMean) { return sself->GaussianAmplitude(variance, distanceFromMean); }
extern "C" double vtk_math_gaussian_amplitude(vtkNew<vtkMath> sself, const double mean, const double variance, const double position) { return sself->GaussianAmplitude(mean, variance, position); }
extern "C" double vtk_math_gaussian_weight(vtkNew<vtkMath> sself, const double variance, const double distanceFromMean) { return sself->GaussianWeight(variance, distanceFromMean); }
extern "C" double vtk_math_gaussian_weight(vtkNew<vtkMath> sself, const double mean, const double variance, const double position) { return sself->GaussianWeight(mean, variance, position); }
extern "C" float vtk_math_dot_2_d(vtkNew<vtkMath> sself, const float x, const float y) { return sself->Dot2D(x, y); }
extern "C" double vtk_math_dot_2_d(vtkNew<vtkMath> sself, const double x, const double y) { return sself->Dot2D(x, y); }
extern "C" void vtk_math_outer_2_d(vtkNew<vtkMath> sself, const float x, const float y, float A) { sself->Outer2D(x, y, A); }
extern "C" void vtk_math_outer_2_d(vtkNew<vtkMath> sself, const double x, const double y, double A) { sself->Outer2D(x, y, A); }
extern "C" float vtk_math_norm_2_d(vtkNew<vtkMath> sself, const float x) { return sself->Norm2D(x); }
extern "C" double vtk_math_norm_2_d(vtkNew<vtkMath> sself, const double x) { return sself->Norm2D(x); }
extern "C" float vtk_math_normalize_2_d(vtkNew<vtkMath> sself, float v) { return sself->Normalize2D(v); }
extern "C" double vtk_math_normalize_2_d(vtkNew<vtkMath> sself, double v) { return sself->Normalize2D(v); }
extern "C" float vtk_math_determinant_2_x_2(vtkNew<vtkMath> sself, const float c1, const float c2) { return sself->Determinant2x2(c1, c2); }
extern "C" double vtk_math_determinant_2_x_2(vtkNew<vtkMath> sself, double a, double b, double c, double d) { return sself->Determinant2x2(a, b, c, d); }
extern "C" double vtk_math_determinant_2_x_2(vtkNew<vtkMath> sself, const double c1, const double c2) { return sself->Determinant2x2(c1, c2); }
extern "C" void vtk_math_lu_factor_3_x_3(vtkNew<vtkMath> sself, float A, int index) { sself->LUFactor3x3(A, index); }
extern "C" void vtk_math_lu_factor_3_x_3(vtkNew<vtkMath> sself, double A, int index) { sself->LUFactor3x3(A, index); }
extern "C" void vtk_math_lu_solve_3_x_3(vtkNew<vtkMath> sself, const float A, const int index, float x) { sself->LUSolve3x3(A, index, x); }
extern "C" void vtk_math_lu_solve_3_x_3(vtkNew<vtkMath> sself, const double A, const int index, double x) { sself->LUSolve3x3(A, index, x); }
extern "C" void vtk_math_linear_solve_3_x_3(vtkNew<vtkMath> sself, const float A, const float x, float y) { sself->LinearSolve3x3(A, x, y); }
extern "C" void vtk_math_linear_solve_3_x_3(vtkNew<vtkMath> sself, const double A, const double x, double y) { sself->LinearSolve3x3(A, x, y); }
extern "C" void vtk_math_multiply_3_x_3(vtkNew<vtkMath> sself, const float A, const float v, float u) { sself->Multiply3x3(A, v, u); }
extern "C" void vtk_math_multiply_3_x_3(vtkNew<vtkMath> sself, const double A, const double v, double u) { sself->Multiply3x3(A, v, u); }
extern "C" void vtk_math_multiply_3_x_3(vtkNew<vtkMath> sself, const float A, const float B, float C) { sself->Multiply3x3(A, B, C); }
extern "C" void vtk_math_multiply_3_x_3(vtkNew<vtkMath> sself, const double A, const double B, double C) { sself->Multiply3x3(A, B, C); }
extern "C" void vtk_math_multiply_matrix(vtkNew<vtkMath> sself, const double A, const double B, unsigned int rowA, unsigned int colA, unsigned int rowB, unsigned int colB, double C) { sself->MultiplyMatrix(A, B, rowA, colA, rowB, colB, C); }
extern "C" void vtk_math_transpose_3_x_3(vtkNew<vtkMath> sself, const float A, float AT) { sself->Transpose3x3(A, AT); }
extern "C" void vtk_math_transpose_3_x_3(vtkNew<vtkMath> sself, const double A, double AT) { sself->Transpose3x3(A, AT); }
extern "C" void vtk_math_invert_3_x_3(vtkNew<vtkMath> sself, const float A, float AI) { sself->Invert3x3(A, AI); }
extern "C" void vtk_math_invert_3_x_3(vtkNew<vtkMath> sself, const double A, double AI) { sself->Invert3x3(A, AI); }
extern "C" void vtk_math_identity_3_x_3(vtkNew<vtkMath> sself, float A) { sself->Identity3x3(A); }
extern "C" void vtk_math_identity_3_x_3(vtkNew<vtkMath> sself, double A) { sself->Identity3x3(A); }
extern "C" double vtk_math_determinant_3_x_3(vtkNew<vtkMath> sself, const float A) { return sself->Determinant3x3(A); }
extern "C" double vtk_math_determinant_3_x_3(vtkNew<vtkMath> sself, const double A) { return sself->Determinant3x3(A); }
extern "C" float vtk_math_determinant_3_x_3(vtkNew<vtkMath> sself, const float c1, const float c2, const float c3) { return sself->Determinant3x3(c1, c2, c3); }
extern "C" double vtk_math_determinant_3_x_3(vtkNew<vtkMath> sself, const double c1, const double c2, const double c3) { return sself->Determinant3x3(c1, c2, c3); }
extern "C" double vtk_math_determinant_3_x_3(vtkNew<vtkMath> sself, double a1, double a2, double a3, double b1, double b2, double b3, double c1, double c2, double c3) { return sself->Determinant3x3(a1, a2, a3, b1, b2, b3, c1, c2, c3); }
extern "C" void vtk_math_quaternion_to_matrix_3_x_3(vtkNew<vtkMath> sself, const float quat, float A) { sself->QuaternionToMatrix3x3(quat, A); }
extern "C" void vtk_math_quaternion_to_matrix_3_x_3(vtkNew<vtkMath> sself, const double quat, double A) { sself->QuaternionToMatrix3x3(quat, A); }
extern "C" void vtk_math_matrix_3_x_3_to_quaternion(vtkNew<vtkMath> sself, const float A, float quat) { sself->Matrix3x3ToQuaternion(A, quat); }
extern "C" void vtk_math_matrix_3_x_3_to_quaternion(vtkNew<vtkMath> sself, const double A, double quat) { sself->Matrix3x3ToQuaternion(A, quat); }
extern "C" void vtk_math_multiply_quaternion(vtkNew<vtkMath> sself, const float q1, const float q2, float q) { sself->MultiplyQuaternion(q1, q2, q); }
extern "C" void vtk_math_multiply_quaternion(vtkNew<vtkMath> sself, const double q1, const double q2, double q) { sself->MultiplyQuaternion(q1, q2, q); }
extern "C" void vtk_math_rotate_vector_by_normalized_quaternion(vtkNew<vtkMath> sself, const float v, const float q, float r) { sself->RotateVectorByNormalizedQuaternion(v, q, r); }
extern "C" void vtk_math_rotate_vector_by_normalized_quaternion(vtkNew<vtkMath> sself, const double v, const double q, double r) { sself->RotateVectorByNormalizedQuaternion(v, q, r); }
extern "C" void vtk_math_rotate_vector_by_wxyz(vtkNew<vtkMath> sself, const float v, const float q, float r) { sself->RotateVectorByWXYZ(v, q, r); }
extern "C" void vtk_math_rotate_vector_by_wxyz(vtkNew<vtkMath> sself, const double v, const double q, double r) { sself->RotateVectorByWXYZ(v, q, r); }
extern "C" void vtk_math_orthogonalize_3_x_3(vtkNew<vtkMath> sself, const float A, float B) { sself->Orthogonalize3x3(A, B); }
extern "C" void vtk_math_orthogonalize_3_x_3(vtkNew<vtkMath> sself, const double A, double B) { sself->Orthogonalize3x3(A, B); }
extern "C" void vtk_math_diagonalize_3_x_3(vtkNew<vtkMath> sself, const float A, float w, float V) { sself->Diagonalize3x3(A, w, V); }
extern "C" void vtk_math_diagonalize_3_x_3(vtkNew<vtkMath> sself, const double A, double w, double V) { sself->Diagonalize3x3(A, w, V); }
extern "C" void vtk_math_singular_value_decomposition_3_x_3(vtkNew<vtkMath> sself, const float A, float U, float w, float VT) { sself->SingularValueDecomposition3x3(A, U, w, VT); }
extern "C" void vtk_math_singular_value_decomposition_3_x_3(vtkNew<vtkMath> sself, const double A, double U, double w, double VT) { sself->SingularValueDecomposition3x3(A, U, w, VT); }
extern "C" int vtk_math_solve_linear_system_gepp_2_x_2(vtkNew<vtkMath> sself, double a00, double a01, double a10, double a11, double b0, double b1, double x0, double x1) { return sself->SolveLinearSystemGEPP2x2(a00, a01, a10, a11, b0, b1, x0, x1); }
extern "C" int vtk_math_solve_linear_system(vtkNew<vtkMath> sself, double A, double x, int size) { return sself->SolveLinearSystem(A, x, size); }
extern "C" int vtk_math_invert_matrix(vtkNew<vtkMath> sself, double A, double AI, int size) { return sself->InvertMatrix(A, AI, size); }
extern "C" int vtk_math_invert_matrix(vtkNew<vtkMath> sself, double A, double AI, int size, int tmp1Size, double tmp2Size) { return sself->InvertMatrix(A, AI, size, tmp1Size, tmp2Size); }
extern "C" int vtk_math_lu_factor_linear_system(vtkNew<vtkMath> sself, double A, int index, int size) { return sself->LUFactorLinearSystem(A, index, size); }
extern "C" int vtk_math_lu_factor_linear_system(vtkNew<vtkMath> sself, double A, int index, int size, double tmpSize) { return sself->LUFactorLinearSystem(A, index, size, tmpSize); }
extern "C" void vtk_math_lu_solve_linear_system(vtkNew<vtkMath> sself, double A, int index, double x, int size) { sself->LUSolveLinearSystem(A, index, x, size); }
extern "C" double vtk_math_estimate_matrix_condition(vtkNew<vtkMath> sself, const double A, int size) { return sself->EstimateMatrixCondition(A, size); }
extern "C" int vtk_math_jacobi(vtkNew<vtkMath> sself, float a, float w, float v) { return sself->Jacobi(a, w, v); }
extern "C" int vtk_math_jacobi(vtkNew<vtkMath> sself, double a, double w, double v) { return sself->Jacobi(a, w, v); }
extern "C" int vtk_math_jacobi_n(vtkNew<vtkMath> sself, float a, int n, float w, float v) { return sself->JacobiN(a, n, w, v); }
extern "C" int vtk_math_jacobi_n(vtkNew<vtkMath> sself, double a, int n, double w, double v) { return sself->JacobiN(a, n, w, v); }
extern "C" int vtk_math_solve_homogeneous_least_squares(vtkNew<vtkMath> sself, int numberOfSamples, double xt, int xOrder, double mt) { return sself->SolveHomogeneousLeastSquares(numberOfSamples, xt, xOrder, mt); }
extern "C" int vtk_math_solve_least_squares(vtkNew<vtkMath> sself, int numberOfSamples, double xt, int xOrder, double yt, int yOrder, double mt, int checkHomogeneous) { return sself->SolveLeastSquares(numberOfSamples, xt, xOrder, yt, yOrder, mt, checkHomogeneous); }
extern "C" void vtk_math_rgb_to_hsv(vtkNew<vtkMath> sself, const float rgb, float hsv) { sself->RGBToHSV(rgb, hsv); }
extern "C" void vtk_math_rgb_to_hsv(vtkNew<vtkMath> sself, float r, float g, float b, float h, float s, float v) { sself->RGBToHSV(r, g, b, h, s, v); }
extern "C" void vtk_math_rgb_to_hsv(vtkNew<vtkMath> sself, const double rgb, double hsv) { sself->RGBToHSV(rgb, hsv); }
extern "C" void vtk_math_rgb_to_hsv(vtkNew<vtkMath> sself, double r, double g, double b, double h, double s, double v) { sself->RGBToHSV(r, g, b, h, s, v); }
extern "C" void vtk_math_hsv_to_rgb(vtkNew<vtkMath> sself, const float hsv, float rgb) { sself->HSVToRGB(hsv, rgb); }
extern "C" void vtk_math_hsv_to_rgb(vtkNew<vtkMath> sself, float h, float s, float v, float r, float g, float b) { sself->HSVToRGB(h, s, v, r, g, b); }
extern "C" void vtk_math_hsv_to_rgb(vtkNew<vtkMath> sself, const double hsv, double rgb) { sself->HSVToRGB(hsv, rgb); }
extern "C" void vtk_math_hsv_to_rgb(vtkNew<vtkMath> sself, double h, double s, double v, double r, double g, double b) { sself->HSVToRGB(h, s, v, r, g, b); }
extern "C" void vtk_math_lab_to_xyz(vtkNew<vtkMath> sself, const double lab, double xyz) { sself->LabToXYZ(lab, xyz); }
extern "C" void vtk_math_lab_to_xyz(vtkNew<vtkMath> sself, double L, double a, double b, double x, double y, double z) { sself->LabToXYZ(L, a, b, x, y, z); }
extern "C" void vtk_math_xyz_to_lab(vtkNew<vtkMath> sself, const double xyz, double lab) { sself->XYZToLab(xyz, lab); }
extern "C" void vtk_math_xyz_to_lab(vtkNew<vtkMath> sself, double x, double y, double z, double L, double a, double b) { sself->XYZToLab(x, y, z, L, a, b); }
extern "C" void vtk_math_xyz_to_rgb(vtkNew<vtkMath> sself, const double xyz, double rgb) { sself->XYZToRGB(xyz, rgb); }
extern "C" void vtk_math_xyz_to_rgb(vtkNew<vtkMath> sself, double x, double y, double z, double r, double g, double b) { sself->XYZToRGB(x, y, z, r, g, b); }
extern "C" void vtk_math_rgb_to_xyz(vtkNew<vtkMath> sself, const double rgb, double xyz) { sself->RGBToXYZ(rgb, xyz); }
extern "C" void vtk_math_rgb_to_xyz(vtkNew<vtkMath> sself, double r, double g, double b, double x, double y, double z) { sself->RGBToXYZ(r, g, b, x, y, z); }
extern "C" void vtk_math_rgb_to_lab(vtkNew<vtkMath> sself, const double rgb, double lab) { sself->RGBToLab(rgb, lab); }
extern "C" void vtk_math_rgb_to_lab(vtkNew<vtkMath> sself, double red, double green, double blue, double L, double a, double b) { sself->RGBToLab(red, green, blue, L, a, b); }
extern "C" void vtk_math_lab_to_rgb(vtkNew<vtkMath> sself, const double lab, double rgb) { sself->LabToRGB(lab, rgb); }
extern "C" void vtk_math_lab_to_rgb(vtkNew<vtkMath> sself, double L, double a, double b, double red, double green, double blue) { sself->LabToRGB(L, a, b, red, green, blue); }
extern "C" void vtk_math_uninitialize_bounds(vtkNew<vtkMath> sself, double bounds) { sself->UninitializeBounds(bounds); }
extern "C" int vtk_math_are_bounds_initialized(vtkNew<vtkMath> sself, const double bounds) { return sself->AreBoundsInitialized(bounds); }
extern "C" void vtk_math_clamp_value(vtkNew<vtkMath> sself, double value, const double range) { sself->ClampValue(value, range); }
extern "C" void vtk_math_clamp_value(vtkNew<vtkMath> sself, double value, const double range, double clamped_value) { sself->ClampValue(value, range, clamped_value); }
extern "C" void vtk_math_clamp_values(vtkNew<vtkMath> sself, double values, int nb_values, const double range) { sself->ClampValues(values, nb_values, range); }
extern "C" void vtk_math_clamp_values(vtkNew<vtkMath> sself, const double values, int nb_values, const double range, double clamped_values) { sself->ClampValues(values, nb_values, range, clamped_values); }
extern "C" double vtk_math_clamp_and_normalize_value(vtkNew<vtkMath> sself, double value, const double range) { return sself->ClampAndNormalizeValue(value, range); }
extern "C" int vtk_math_get_scalar_type_fitting_range(vtkNew<vtkMath> sself, double range_min, double range_max, double scale, double shift) { return sself->GetScalarTypeFittingRange(range_min, range_max, scale, shift); }
extern "C" int vtk_math_extent_is_within_other_extent(vtkNew<vtkMath> sself, const int extent1, const int extent2) { return sself->ExtentIsWithinOtherExtent(extent1, extent2); }
extern "C" int vtk_math_bounds_is_within_other_bounds(vtkNew<vtkMath> sself, const double bounds1, const double bounds2, const double delta) { return sself->BoundsIsWithinOtherBounds(bounds1, bounds2, delta); }
extern "C" int vtk_math_point_is_within_bounds(vtkNew<vtkMath> sself, const double point, const double bounds, const double delta) { return sself->PointIsWithinBounds(point, bounds, delta); }
extern "C" int vtk_math_plane_intersects_aabb(vtkNew<vtkMath> sself, const double bounds, const double normal, const double point) { return sself->PlaneIntersectsAABB(bounds, normal, point); }
extern "C" double vtk_math_solve_3_point_circle(vtkNew<vtkMath> sself, const double p1, const double p2, const double p3, double center) { return sself->Solve3PointCircle(p1, p2, p3, center); }
extern "C" double vtk_math_inf(vtkNew<vtkMath> sself) { return sself->Inf(); }
extern "C" double vtk_math_neg_inf(vtkNew<vtkMath> sself) { return sself->NegInf(); }
extern "C" double vtk_math_nan(vtkNew<vtkMath> sself) { return sself->Nan(); }
extern "C" int vtk_math_is_inf(vtkNew<vtkMath> sself, double x) { return sself->IsInf(x); }
extern "C" int vtk_math_is_nan(vtkNew<vtkMath> sself, double x) { return sself->IsNan(x); }
extern "C" bool vtk_math_is_finite(vtkNew<vtkMath> sself, double x) { return sself->IsFinite(x); }
extern "C" int vtk_math_quadratic_root(vtkNew<vtkMath> sself, double a, double b, double c, double min, double max, double u) { return sself->QuadraticRoot(a, b, c, min, max, u); }
extern "C" vtkNew < vtkMersenneTwister > vtkMersenneTwister_new () {return vtkNew < vtkMersenneTwister > () ;}
extern "C" void vtkMersenneTwister_destructor (vtkNew < vtkMersenneTwister > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMersenneTwister_get_ptr (vtkNew < vtkMersenneTwister > sself) {return sself . GetPointer () ;}
extern "C" void vtk_mersenne_twister_initialize(vtkNew<vtkMersenneTwister> sself, unsigned int seed) { sself->Initialize(seed); }
extern "C" unsigned int vtk_mersenne_twister_initialize_new_sequence(vtkNew<vtkMersenneTwister> sself, unsigned int seed, int p) { return sself->InitializeNewSequence(seed, p); }
extern "C" void vtk_mersenne_twister_initialize_sequence(vtkNew<vtkMersenneTwister> sself, unsigned int id, unsigned int seed, int p) { sself->InitializeSequence(id, seed, p); }
extern "C" double vtk_mersenne_twister_get_value(vtkNew<vtkMersenneTwister> sself, unsigned int id) { return sself->GetValue(id); }
extern "C" double vtk_mersenne_twister_get_value(vtkNew<vtkMersenneTwister> sself) { return sself->GetValue(); }
extern "C" void vtk_mersenne_twister_next(vtkNew<vtkMersenneTwister> sself, unsigned int id) { sself->Next(id); }
extern "C" void vtk_mersenne_twister_next(vtkNew<vtkMersenneTwister> sself) { sself->Next(); }
extern "C" vtkNew < vtkMinimalStandardRandomSequence > vtkMinimalStandardRandomSequence_new () {return vtkNew < vtkMinimalStandardRandomSequence > () ;}
extern "C" void vtkMinimalStandardRandomSequence_destructor (vtkNew < vtkMinimalStandardRandomSequence > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMinimalStandardRandomSequence_get_ptr (vtkNew < vtkMinimalStandardRandomSequence > sself) {return sself . GetPointer () ;}
extern "C" void vtk_minimal_standard_random_sequence_initialize(vtkNew<vtkMinimalStandardRandomSequence> sself, unsigned int seed) { sself->Initialize(seed); }
extern "C" void vtk_minimal_standard_random_sequence_set_seed(vtkNew<vtkMinimalStandardRandomSequence> sself, int value) { sself->SetSeed(value); }
extern "C" void vtk_minimal_standard_random_sequence_set_seed_only(vtkNew<vtkMinimalStandardRandomSequence> sself, int value) { sself->SetSeedOnly(value); }
extern "C" int vtk_minimal_standard_random_sequence_get_seed(vtkNew<vtkMinimalStandardRandomSequence> sself) { return sself->GetSeed(); }
extern "C" double vtk_minimal_standard_random_sequence_get_value(vtkNew<vtkMinimalStandardRandomSequence> sself) { return sself->GetValue(); }
extern "C" void vtk_minimal_standard_random_sequence_next(vtkNew<vtkMinimalStandardRandomSequence> sself) { sself->Next(); }
extern "C" double vtk_minimal_standard_random_sequence_get_range_value(vtkNew<vtkMinimalStandardRandomSequence> sself, double rangeMin, double rangeMax) { return sself->GetRangeValue(rangeMin, rangeMax); }
extern "C" double vtk_minimal_standard_random_sequence_get_next_range_value(vtkNew<vtkMinimalStandardRandomSequence> sself, double rangeMin, double rangeMax) { return sself->GetNextRangeValue(rangeMin, rangeMax); }
extern "C" vtkNew < vtkMultiThreader > vtkMultiThreader_new () {return vtkNew < vtkMultiThreader > () ;}
extern "C" void vtkMultiThreader_destructor (vtkNew < vtkMultiThreader > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMultiThreader_get_ptr (vtkNew < vtkMultiThreader > sself) {return sself . GetPointer () ;}
extern "C" void vtk_multi_threader_set_number_of_threads(vtkNew<vtkMultiThreader> sself, int _arg) { sself->SetNumberOfThreads(_arg); }
extern "C" int vtk_multi_threader_get_number_of_threads_min_value(vtkNew<vtkMultiThreader> sself) { return sself->GetNumberOfThreadsMinValue(); }
extern "C" int vtk_multi_threader_get_number_of_threads_max_value(vtkNew<vtkMultiThreader> sself) { return sself->GetNumberOfThreadsMaxValue(); }
extern "C" int vtk_multi_threader_get_number_of_threads(vtkNew<vtkMultiThreader> sself) { return sself->GetNumberOfThreads(); }
extern "C" int vtk_multi_threader_get_global_static_maximum_number_of_threads(vtkNew<vtkMultiThreader> sself) { return sself->GetGlobalStaticMaximumNumberOfThreads(); }
extern "C" void vtk_multi_threader_set_global_maximum_number_of_threads(vtkNew<vtkMultiThreader> sself, int val) { sself->SetGlobalMaximumNumberOfThreads(val); }
extern "C" int vtk_multi_threader_get_global_maximum_number_of_threads(vtkNew<vtkMultiThreader> sself) { return sself->GetGlobalMaximumNumberOfThreads(); }
extern "C" void vtk_multi_threader_set_global_default_number_of_threads(vtkNew<vtkMultiThreader> sself, int val) { sself->SetGlobalDefaultNumberOfThreads(val); }
extern "C" int vtk_multi_threader_get_global_default_number_of_threads(vtkNew<vtkMultiThreader> sself) { return sself->GetGlobalDefaultNumberOfThreads(); }
extern "C" void vtk_multi_threader_single_method_execute(vtkNew<vtkMultiThreader> sself) { sself->SingleMethodExecute(); }
extern "C" void vtk_multi_threader_multiple_method_execute(vtkNew<vtkMultiThreader> sself) { sself->MultipleMethodExecute(); }
extern "C" void vtk_multi_threader_terminate_thread(vtkNew<vtkMultiThreader> sself, int threadId) { sself->TerminateThread(threadId); }
extern "C" int vtk_multi_threader_is_thread_active(vtkNew<vtkMultiThreader> sself, int threadId) { return sself->IsThreadActive(threadId); }
extern "C" vtkNew < vtkObject > vtkObject_new () {return vtkNew < vtkObject > () ;}
extern "C" void vtkObject_destructor (vtkNew < vtkObject > sself) {sself . Reset () ; return ;}
extern "C" void * vtkObject_get_ptr (vtkNew < vtkObject > sself) {return sself . GetPointer () ;}
extern "C" int vtk_object_is_type_of(vtkNew<vtkObject> sself, const char type) { return sself->IsTypeOf(type); }
extern "C" int vtk_object_is_a(vtkNew<vtkObject> sself, const char type) { return sself->IsA(type); }
extern "C" long long vtk_object_get_number_of_generations_from_base_type(vtkNew<vtkObject> sself, const char type) { return sself->GetNumberOfGenerationsFromBaseType(type); }
extern "C" long long vtk_object_get_number_of_generations_from_base(vtkNew<vtkObject> sself, const char type) { return sself->GetNumberOfGenerationsFromBase(type); }
extern "C" void vtk_object_debug_on(vtkNew<vtkObject> sself) { sself->DebugOn(); }
extern "C" void vtk_object_debug_off(vtkNew<vtkObject> sself) { sself->DebugOff(); }
extern "C" bool vtk_object_get_debug(vtkNew<vtkObject> sself) { return sself->GetDebug(); }
extern "C" void vtk_object_set_debug(vtkNew<vtkObject> sself, bool debugFlag) { sself->SetDebug(debugFlag); }
extern "C" void vtk_object_break_on_error(vtkNew<vtkObject> sself) { sself->BreakOnError(); }
extern "C" void vtk_object_modified(vtkNew<vtkObject> sself) { sself->Modified(); }
extern "C" unsigned long vtk_object_get_m_time(vtkNew<vtkObject> sself) { return sself->GetMTime(); }
extern "C" void vtk_object_set_global_warning_display(vtkNew<vtkObject> sself, int val) { sself->SetGlobalWarningDisplay(val); }
extern "C" void vtk_object_global_warning_display_on(vtkNew<vtkObject> sself) { sself->GlobalWarningDisplayOn(); }
extern "C" void vtk_object_global_warning_display_off(vtkNew<vtkObject> sself) { sself->GlobalWarningDisplayOff(); }
extern "C" int vtk_object_get_global_warning_display(vtkNew<vtkObject> sself) { return sself->GetGlobalWarningDisplay(); }
extern "C" void vtk_object_remove_observer(vtkNew<vtkObject> sself, unsigned long tag) { sself->RemoveObserver(tag); }
extern "C" void vtk_object_remove_observers(vtkNew<vtkObject> sself, unsigned long event) { sself->RemoveObservers(event); }
extern "C" void vtk_object_remove_observers(vtkNew<vtkObject> sself, const char event) { sself->RemoveObservers(event); }
extern "C" void vtk_object_remove_all_observers(vtkNew<vtkObject> sself) { sself->RemoveAllObservers(); }
extern "C" int vtk_object_has_observer(vtkNew<vtkObject> sself, unsigned long event) { return sself->HasObserver(event); }
extern "C" int vtk_object_has_observer(vtkNew<vtkObject> sself, const char event) { return sself->HasObserver(event); }
extern "C" int vtk_object_invoke_event(vtkNew<vtkObject> sself, unsigned long event, void callData) { return sself->InvokeEvent(event, callData); }
extern "C" int vtk_object_invoke_event(vtkNew<vtkObject> sself, const char event, void callData) { return sself->InvokeEvent(event, callData); }
extern "C" int vtk_object_invoke_event(vtkNew<vtkObject> sself, unsigned long event) { return sself->InvokeEvent(event); }
extern "C" int vtk_object_invoke_event(vtkNew<vtkObject> sself, const char event) { return sself->InvokeEvent(event); }
extern "C" vtkNew < vtkObjectFactoryCollection > vtkObjectFactoryCollection_new () {return vtkNew < vtkObjectFactoryCollection > () ;}
extern "C" void vtkObjectFactoryCollection_destructor (vtkNew < vtkObjectFactoryCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkObjectFactoryCollection_get_ptr (vtkNew < vtkObjectFactoryCollection > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkOldStyleCallbackCommand > vtkOldStyleCallbackCommand_new () {return vtkNew < vtkOldStyleCallbackCommand > () ;}
extern "C" void vtkOldStyleCallbackCommand_destructor (vtkNew < vtkOldStyleCallbackCommand > sself) {sself . Reset () ; return ;}
extern "C" void * vtkOldStyleCallbackCommand_get_ptr (vtkNew < vtkOldStyleCallbackCommand > sself) {return sself . GetPointer () ;}
extern "C" void vtk_old_style_callback_command_set_client_data(vtkNew<vtkOldStyleCallbackCommand> sself, void cd) { sself->SetClientData(cd); }
extern "C" vtkNew < vtkOutputWindow > vtkOutputWindow_new () {return vtkNew < vtkOutputWindow > () ;}
extern "C" void vtkOutputWindow_destructor (vtkNew < vtkOutputWindow > sself) {sself . Reset () ; return ;}
extern "C" void * vtkOutputWindow_get_ptr (vtkNew < vtkOutputWindow > sself) {return sself . GetPointer () ;}
extern "C" void vtk_output_window_display_text(vtkNew<vtkOutputWindow> sself, const char p0) { sself->DisplayText(p0); }
extern "C" void vtk_output_window_display_error_text(vtkNew<vtkOutputWindow> sself, const char p0) { sself->DisplayErrorText(p0); }
extern "C" void vtk_output_window_display_warning_text(vtkNew<vtkOutputWindow> sself, const char p0) { sself->DisplayWarningText(p0); }
extern "C" void vtk_output_window_display_generic_warning_text(vtkNew<vtkOutputWindow> sself, const char p0) { sself->DisplayGenericWarningText(p0); }
extern "C" void vtk_output_window_display_debug_text(vtkNew<vtkOutputWindow> sself, const char p0) { sself->DisplayDebugText(p0); }
extern "C" void vtk_output_window_prompt_user_on(vtkNew<vtkOutputWindow> sself) { sself->PromptUserOn(); }
extern "C" void vtk_output_window_prompt_user_off(vtkNew<vtkOutputWindow> sself) { sself->PromptUserOff(); }
extern "C" void vtk_output_window_set_prompt_user(vtkNew<vtkOutputWindow> sself, bool _arg) { sself->SetPromptUser(_arg); }
extern "C" void vtk_output_window_set_use_std_error_for_all_messages(vtkNew<vtkOutputWindow> sself, bool p0) { sself->SetUseStdErrorForAllMessages(p0); }
extern "C" bool vtk_output_window_get_use_std_error_for_all_messages(vtkNew<vtkOutputWindow> sself) { return sself->GetUseStdErrorForAllMessages(); }
extern "C" void vtk_output_window_use_std_error_for_all_messages_on(vtkNew<vtkOutputWindow> sself) { sself->UseStdErrorForAllMessagesOn(); }
extern "C" void vtk_output_window_use_std_error_for_all_messages_off(vtkNew<vtkOutputWindow> sself) { sself->UseStdErrorForAllMessagesOff(); }
extern "C" void vtk_output_window_set_display_mode(vtkNew<vtkOutputWindow> sself, int _arg) { sself->SetDisplayMode(_arg); }
extern "C" int vtk_output_window_get_display_mode_min_value(vtkNew<vtkOutputWindow> sself) { return sself->GetDisplayModeMinValue(); }
extern "C" int vtk_output_window_get_display_mode_max_value(vtkNew<vtkOutputWindow> sself) { return sself->GetDisplayModeMaxValue(); }
extern "C" int vtk_output_window_get_display_mode(vtkNew<vtkOutputWindow> sself) { return sself->GetDisplayMode(); }
extern "C" void vtk_output_window_set_display_mode_to_default(vtkNew<vtkOutputWindow> sself) { sself->SetDisplayModeToDefault(); }
extern "C" void vtk_output_window_set_display_mode_to_never(vtkNew<vtkOutputWindow> sself) { sself->SetDisplayModeToNever(); }
extern "C" void vtk_output_window_set_display_mode_to_always(vtkNew<vtkOutputWindow> sself) { sself->SetDisplayModeToAlways(); }
extern "C" void vtk_output_window_set_display_mode_to_always_std_err(vtkNew<vtkOutputWindow> sself) { sself->SetDisplayModeToAlwaysStdErr(); }
extern "C" vtkNew < vtkOverrideInformationCollection > vtkOverrideInformationCollection_new () {return vtkNew < vtkOverrideInformationCollection > () ;}
extern "C" void vtkOverrideInformationCollection_destructor (vtkNew < vtkOverrideInformationCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkOverrideInformationCollection_get_ptr (vtkNew < vtkOverrideInformationCollection > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkPoints > vtkPoints_new () {return vtkNew < vtkPoints > () ;}
extern "C" void vtkPoints_destructor (vtkNew < vtkPoints > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPoints_get_ptr (vtkNew < vtkPoints > sself) {return sself . GetPointer () ;}
extern "C" int vtk_points_allocate(vtkNew<vtkPoints> sself, long long sz, long long ext) { return sself->Allocate(sz, ext); }
extern "C" void vtk_points_initialize(vtkNew<vtkPoints> sself) { sself->Initialize(); }
extern "C" int vtk_points_get_data_type(vtkNew<vtkPoints> sself) { return sself->GetDataType(); }
extern "C" void vtk_points_set_data_type(vtkNew<vtkPoints> sself, int dataType) { sself->SetDataType(dataType); }
extern "C" void vtk_points_set_data_type_to_bit(vtkNew<vtkPoints> sself) { sself->SetDataTypeToBit(); }
extern "C" void vtk_points_set_data_type_to_char(vtkNew<vtkPoints> sself) { sself->SetDataTypeToChar(); }
extern "C" void vtk_points_set_data_type_to_unsigned_char(vtkNew<vtkPoints> sself) { sself->SetDataTypeToUnsignedChar(); }
extern "C" void vtk_points_set_data_type_to_short(vtkNew<vtkPoints> sself) { sself->SetDataTypeToShort(); }
extern "C" void vtk_points_set_data_type_to_unsigned_short(vtkNew<vtkPoints> sself) { sself->SetDataTypeToUnsignedShort(); }
extern "C" void vtk_points_set_data_type_to_int(vtkNew<vtkPoints> sself) { sself->SetDataTypeToInt(); }
extern "C" void vtk_points_set_data_type_to_unsigned_int(vtkNew<vtkPoints> sself) { sself->SetDataTypeToUnsignedInt(); }
extern "C" void vtk_points_set_data_type_to_long(vtkNew<vtkPoints> sself) { sself->SetDataTypeToLong(); }
extern "C" void vtk_points_set_data_type_to_unsigned_long(vtkNew<vtkPoints> sself) { sself->SetDataTypeToUnsignedLong(); }
extern "C" void vtk_points_set_data_type_to_float(vtkNew<vtkPoints> sself) { sself->SetDataTypeToFloat(); }
extern "C" void vtk_points_set_data_type_to_double(vtkNew<vtkPoints> sself) { sself->SetDataTypeToDouble(); }
extern "C" void* vtk_points_get_void_pointer(vtkNew<vtkPoints> sself, const int id) { return sself->GetVoidPointer(id); }
extern "C" void vtk_points_squeeze(vtkNew<vtkPoints> sself) { sself->Squeeze(); }
extern "C" void vtk_points_reset(vtkNew<vtkPoints> sself) { sself->Reset(); }
extern "C" unsigned long vtk_points_get_actual_memory_size(vtkNew<vtkPoints> sself) { return sself->GetActualMemorySize(); }
extern "C" long long vtk_points_get_number_of_points(vtkNew<vtkPoints> sself) { return sself->GetNumberOfPoints(); }
extern "C" double* vtk_points_get_point(vtkNew<vtkPoints> sself, long long id) { return sself->GetPoint(id); }
extern "C" void vtk_points_get_point(vtkNew<vtkPoints> sself, long long id, double x) { sself->GetPoint(id, x); }
extern "C" void vtk_points_set_point(vtkNew<vtkPoints> sself, long long id, const float x) { sself->SetPoint(id, x); }
extern "C" void vtk_points_set_point(vtkNew<vtkPoints> sself, long long id, const double x) { sself->SetPoint(id, x); }
extern "C" void vtk_points_set_point(vtkNew<vtkPoints> sself, long long id, double x, double y, double z) { sself->SetPoint(id, x, y, z); }
extern "C" void vtk_points_insert_point(vtkNew<vtkPoints> sself, long long id, const float x) { sself->InsertPoint(id, x); }
extern "C" void vtk_points_insert_point(vtkNew<vtkPoints> sself, long long id, const double x) { sself->InsertPoint(id, x); }
extern "C" void vtk_points_insert_point(vtkNew<vtkPoints> sself, long long id, double x, double y, double z) { sself->InsertPoint(id, x, y, z); }
extern "C" long long vtk_points_insert_next_point(vtkNew<vtkPoints> sself, const float x) { return sself->InsertNextPoint(x); }
extern "C" long long vtk_points_insert_next_point(vtkNew<vtkPoints> sself, const double x) { return sself->InsertNextPoint(x); }
extern "C" long long vtk_points_insert_next_point(vtkNew<vtkPoints> sself, double x, double y, double z) { return sself->InsertNextPoint(x, y, z); }
extern "C" void vtk_points_set_number_of_points(vtkNew<vtkPoints> sself, long long numPoints) { sself->SetNumberOfPoints(numPoints); }
extern "C" int vtk_points_resize(vtkNew<vtkPoints> sself, long long numPoints) { return sself->Resize(numPoints); }
extern "C" void vtk_points_compute_bounds(vtkNew<vtkPoints> sself) { sself->ComputeBounds(); }
extern "C" double* vtk_points_get_bounds(vtkNew<vtkPoints> sself) { return sself->GetBounds(); }
extern "C" void vtk_points_get_bounds(vtkNew<vtkPoints> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" unsigned long vtk_points_get_m_time(vtkNew<vtkPoints> sself) { return sself->GetMTime(); }
extern "C" void vtk_points_modified(vtkNew<vtkPoints> sself) { sself->Modified(); }
extern "C" vtkNew < vtkPoints2D > vtkPoints2D_new () {return vtkNew < vtkPoints2D > () ;}
extern "C" void vtkPoints2D_destructor (vtkNew < vtkPoints2D > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPoints2D_get_ptr (vtkNew < vtkPoints2D > sself) {return sself . GetPointer () ;}
extern "C" int vtk_points_2_d_allocate(vtkNew<vtkPoints2D> sself, long long sz, long long ext) { return sself->Allocate(sz, ext); }
extern "C" void vtk_points_2_d_initialize(vtkNew<vtkPoints2D> sself) { sself->Initialize(); }
extern "C" int vtk_points_2_d_get_data_type(vtkNew<vtkPoints2D> sself) { return sself->GetDataType(); }
extern "C" void vtk_points_2_d_set_data_type(vtkNew<vtkPoints2D> sself, int dataType) { sself->SetDataType(dataType); }
extern "C" void vtk_points_2_d_set_data_type_to_bit(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToBit(); }
extern "C" void vtk_points_2_d_set_data_type_to_char(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToChar(); }
extern "C" void vtk_points_2_d_set_data_type_to_unsigned_char(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToUnsignedChar(); }
extern "C" void vtk_points_2_d_set_data_type_to_short(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToShort(); }
extern "C" void vtk_points_2_d_set_data_type_to_unsigned_short(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToUnsignedShort(); }
extern "C" void vtk_points_2_d_set_data_type_to_int(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToInt(); }
extern "C" void vtk_points_2_d_set_data_type_to_unsigned_int(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToUnsignedInt(); }
extern "C" void vtk_points_2_d_set_data_type_to_long(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToLong(); }
extern "C" void vtk_points_2_d_set_data_type_to_unsigned_long(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToUnsignedLong(); }
extern "C" void vtk_points_2_d_set_data_type_to_float(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToFloat(); }
extern "C" void vtk_points_2_d_set_data_type_to_double(vtkNew<vtkPoints2D> sself) { sself->SetDataTypeToDouble(); }
extern "C" void* vtk_points_2_d_get_void_pointer(vtkNew<vtkPoints2D> sself, const int id) { return sself->GetVoidPointer(id); }
extern "C" void vtk_points_2_d_squeeze(vtkNew<vtkPoints2D> sself) { sself->Squeeze(); }
extern "C" void vtk_points_2_d_reset(vtkNew<vtkPoints2D> sself) { sself->Reset(); }
extern "C" unsigned long vtk_points_2_d_get_actual_memory_size(vtkNew<vtkPoints2D> sself) { return sself->GetActualMemorySize(); }
extern "C" long long vtk_points_2_d_get_number_of_points(vtkNew<vtkPoints2D> sself) { return sself->GetNumberOfPoints(); }
extern "C" double* vtk_points_2_d_get_point(vtkNew<vtkPoints2D> sself, long long id) { return sself->GetPoint(id); }
extern "C" void vtk_points_2_d_get_point(vtkNew<vtkPoints2D> sself, long long id, double x) { sself->GetPoint(id, x); }
extern "C" void vtk_points_2_d_set_point(vtkNew<vtkPoints2D> sself, long long id, const float x) { sself->SetPoint(id, x); }
extern "C" void vtk_points_2_d_set_point(vtkNew<vtkPoints2D> sself, long long id, const double x) { sself->SetPoint(id, x); }
extern "C" void vtk_points_2_d_set_point(vtkNew<vtkPoints2D> sself, long long id, double x, double y) { sself->SetPoint(id, x, y); }
extern "C" void vtk_points_2_d_insert_point(vtkNew<vtkPoints2D> sself, long long id, const float x) { sself->InsertPoint(id, x); }
extern "C" void vtk_points_2_d_insert_point(vtkNew<vtkPoints2D> sself, long long id, const double x) { sself->InsertPoint(id, x); }
extern "C" void vtk_points_2_d_insert_point(vtkNew<vtkPoints2D> sself, long long id, double x, double y) { sself->InsertPoint(id, x, y); }
extern "C" long long vtk_points_2_d_insert_next_point(vtkNew<vtkPoints2D> sself, const float x) { return sself->InsertNextPoint(x); }
extern "C" long long vtk_points_2_d_insert_next_point(vtkNew<vtkPoints2D> sself, const double x) { return sself->InsertNextPoint(x); }
extern "C" long long vtk_points_2_d_insert_next_point(vtkNew<vtkPoints2D> sself, double x, double y) { return sself->InsertNextPoint(x, y); }
extern "C" void vtk_points_2_d_remove_point(vtkNew<vtkPoints2D> sself, long long id) { sself->RemovePoint(id); }
extern "C" void vtk_points_2_d_set_number_of_points(vtkNew<vtkPoints2D> sself, long long numPoints) { sself->SetNumberOfPoints(numPoints); }
extern "C" int vtk_points_2_d_resize(vtkNew<vtkPoints2D> sself, long long numPoints) { return sself->Resize(numPoints); }
extern "C" void vtk_points_2_d_compute_bounds(vtkNew<vtkPoints2D> sself) { sself->ComputeBounds(); }
extern "C" double* vtk_points_2_d_get_bounds(vtkNew<vtkPoints2D> sself) { return sself->GetBounds(); }
extern "C" void vtk_points_2_d_get_bounds(vtkNew<vtkPoints2D> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" vtkNew < vtkPriorityQueue > vtkPriorityQueue_new () {return vtkNew < vtkPriorityQueue > () ;}
extern "C" void vtkPriorityQueue_destructor (vtkNew < vtkPriorityQueue > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPriorityQueue_get_ptr (vtkNew < vtkPriorityQueue > sself) {return sself . GetPointer () ;}
extern "C" void vtk_priority_queue_allocate(vtkNew<vtkPriorityQueue> sself, long long sz, long long ext) { sself->Allocate(sz, ext); }
extern "C" void vtk_priority_queue_insert(vtkNew<vtkPriorityQueue> sself, double priority, long long id) { sself->Insert(priority, id); }
extern "C" long long vtk_priority_queue_pop(vtkNew<vtkPriorityQueue> sself, long long location, double priority) { return sself->Pop(location, priority); }
extern "C" long long vtk_priority_queue_pop(vtkNew<vtkPriorityQueue> sself, long long location) { return sself->Pop(location); }
extern "C" long long vtk_priority_queue_peek(vtkNew<vtkPriorityQueue> sself, long long location, double priority) { return sself->Peek(location, priority); }
extern "C" long long vtk_priority_queue_peek(vtkNew<vtkPriorityQueue> sself, long long location) { return sself->Peek(location); }
extern "C" double vtk_priority_queue_delete_id(vtkNew<vtkPriorityQueue> sself, long long id) { return sself->DeleteId(id); }
extern "C" double vtk_priority_queue_get_priority(vtkNew<vtkPriorityQueue> sself, long long id) { return sself->GetPriority(id); }
extern "C" long long vtk_priority_queue_get_number_of_items(vtkNew<vtkPriorityQueue> sself) { return sself->GetNumberOfItems(); }
extern "C" void vtk_priority_queue_reset(vtkNew<vtkPriorityQueue> sself) { sself->Reset(); }
extern "C" vtkNew < vtkRandomPool > vtkRandomPool_new () {return vtkNew < vtkRandomPool > () ;}
extern "C" void vtkRandomPool_destructor (vtkNew < vtkRandomPool > sself) {sself . Reset () ; return ;}
extern "C" void * vtkRandomPool_get_ptr (vtkNew < vtkRandomPool > sself) {return sself . GetPointer () ;}
extern "C" void vtk_random_pool_set_size(vtkNew<vtkRandomPool> sself, long long _arg) { sself->SetSize(_arg); }
extern "C" long long vtk_random_pool_get_size_min_value(vtkNew<vtkRandomPool> sself) { return sself->GetSizeMinValue(); }
extern "C" long long vtk_random_pool_get_size_max_value(vtkNew<vtkRandomPool> sself) { return sself->GetSizeMaxValue(); }
extern "C" long long vtk_random_pool_get_size(vtkNew<vtkRandomPool> sself) { return sself->GetSize(); }
extern "C" void vtk_random_pool_set_number_of_components(vtkNew<vtkRandomPool> sself, long long _arg) { sself->SetNumberOfComponents(_arg); }
extern "C" long long vtk_random_pool_get_number_of_components_min_value(vtkNew<vtkRandomPool> sself) { return sself->GetNumberOfComponentsMinValue(); }
extern "C" long long vtk_random_pool_get_number_of_components_max_value(vtkNew<vtkRandomPool> sself) { return sself->GetNumberOfComponentsMaxValue(); }
extern "C" long long vtk_random_pool_get_number_of_components(vtkNew<vtkRandomPool> sself) { return sself->GetNumberOfComponents(); }
extern "C" long long vtk_random_pool_get_total_size(vtkNew<vtkRandomPool> sself) { return sself->GetTotalSize(); }
extern "C" const double* vtk_random_pool_generate_pool(vtkNew<vtkRandomPool> sself) { return sself->GeneratePool(); }
extern "C" const double* vtk_random_pool_get_pool(vtkNew<vtkRandomPool> sself) { return sself->GetPool(); }
extern "C" double vtk_random_pool_get_value(vtkNew<vtkRandomPool> sself, long long i) { return sself->GetValue(i); }
extern "C" double vtk_random_pool_get_value(vtkNew<vtkRandomPool> sself, long long i, int compNum) { return sself->GetValue(i, compNum); }
extern "C" void vtk_random_pool_set_chunk_size(vtkNew<vtkRandomPool> sself, long long _arg) { sself->SetChunkSize(_arg); }
extern "C" long long vtk_random_pool_get_chunk_size_min_value(vtkNew<vtkRandomPool> sself) { return sself->GetChunkSizeMinValue(); }
extern "C" long long vtk_random_pool_get_chunk_size_max_value(vtkNew<vtkRandomPool> sself) { return sself->GetChunkSizeMaxValue(); }
extern "C" long long vtk_random_pool_get_chunk_size(vtkNew<vtkRandomPool> sself) { return sself->GetChunkSize(); }
extern "C" vtkNew < vtkReferenceCount > vtkReferenceCount_new () {return vtkNew < vtkReferenceCount > () ;}
extern "C" void vtkReferenceCount_destructor (vtkNew < vtkReferenceCount > sself) {sself . Reset () ; return ;}
extern "C" void * vtkReferenceCount_get_ptr (vtkNew < vtkReferenceCount > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkScalarsToColors > vtkScalarsToColors_new () {return vtkNew < vtkScalarsToColors > () ;}
extern "C" void vtkScalarsToColors_destructor (vtkNew < vtkScalarsToColors > sself) {sself . Reset () ; return ;}
extern "C" void * vtkScalarsToColors_get_ptr (vtkNew < vtkScalarsToColors > sself) {return sself . GetPointer () ;}
extern "C" int vtk_scalars_to_colors_is_opaque(vtkNew<vtkScalarsToColors> sself) { return sself->IsOpaque(); }
extern "C" void vtk_scalars_to_colors_build(vtkNew<vtkScalarsToColors> sself) { sself->Build(); }
extern "C" double* vtk_scalars_to_colors_get_range(vtkNew<vtkScalarsToColors> sself) { return sself->GetRange(); }
extern "C" void vtk_scalars_to_colors_set_range(vtkNew<vtkScalarsToColors> sself, double min, double max) { sself->SetRange(min, max); }
extern "C" void vtk_scalars_to_colors_set_range(vtkNew<vtkScalarsToColors> sself, const double rng) { sself->SetRange(rng); }
extern "C" const unsigned char* vtk_scalars_to_colors_map_value(vtkNew<vtkScalarsToColors> sself, double v) { return sself->MapValue(v); }
extern "C" void vtk_scalars_to_colors_get_color(vtkNew<vtkScalarsToColors> sself, double v, double rgb) { sself->GetColor(v, rgb); }
extern "C" double* vtk_scalars_to_colors_get_color(vtkNew<vtkScalarsToColors> sself, double v) { return sself->GetColor(v); }
extern "C" double vtk_scalars_to_colors_get_opacity(vtkNew<vtkScalarsToColors> sself, double v) { return sself->GetOpacity(v); }
extern "C" double vtk_scalars_to_colors_get_luminance(vtkNew<vtkScalarsToColors> sself, double x) { return sself->GetLuminance(x); }
extern "C" void vtk_scalars_to_colors_set_alpha(vtkNew<vtkScalarsToColors> sself, double alpha) { sself->SetAlpha(alpha); }
extern "C" double vtk_scalars_to_colors_get_alpha(vtkNew<vtkScalarsToColors> sself) { return sself->GetAlpha(); }
extern "C" void vtk_scalars_to_colors_set_vector_mode(vtkNew<vtkScalarsToColors> sself, int _arg) { sself->SetVectorMode(_arg); }
extern "C" int vtk_scalars_to_colors_get_vector_mode(vtkNew<vtkScalarsToColors> sself) { return sself->GetVectorMode(); }
extern "C" void vtk_scalars_to_colors_set_vector_mode_to_magnitude(vtkNew<vtkScalarsToColors> sself) { sself->SetVectorModeToMagnitude(); }
extern "C" void vtk_scalars_to_colors_set_vector_mode_to_component(vtkNew<vtkScalarsToColors> sself) { sself->SetVectorModeToComponent(); }
extern "C" void vtk_scalars_to_colors_set_vector_mode_to_rgb_colors(vtkNew<vtkScalarsToColors> sself) { sself->SetVectorModeToRGBColors(); }
extern "C" void vtk_scalars_to_colors_set_vector_component(vtkNew<vtkScalarsToColors> sself, int _arg) { sself->SetVectorComponent(_arg); }
extern "C" int vtk_scalars_to_colors_get_vector_component(vtkNew<vtkScalarsToColors> sself) { return sself->GetVectorComponent(); }
extern "C" void vtk_scalars_to_colors_set_vector_size(vtkNew<vtkScalarsToColors> sself, int _arg) { sself->SetVectorSize(_arg); }
extern "C" int vtk_scalars_to_colors_get_vector_size(vtkNew<vtkScalarsToColors> sself) { return sself->GetVectorSize(); }
extern "C" void vtk_scalars_to_colors_map_vectors_through_table(vtkNew<vtkScalarsToColors> sself, void input, unsigned char output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat, int vectorComponent, int vectorSize) { sself->MapVectorsThroughTable(input, output, inputDataType, numberOfValues, inputIncrement, outputFormat, vectorComponent, vectorSize); }
extern "C" void vtk_scalars_to_colors_map_vectors_through_table(vtkNew<vtkScalarsToColors> sself, void input, unsigned char output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat) { sself->MapVectorsThroughTable(input, output, inputDataType, numberOfValues, inputIncrement, outputFormat); }
extern "C" void vtk_scalars_to_colors_map_scalars_through_table(vtkNew<vtkScalarsToColors> sself, void input, unsigned char output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat) { sself->MapScalarsThroughTable(input, output, inputDataType, numberOfValues, inputIncrement, outputFormat); }
extern "C" void vtk_scalars_to_colors_map_scalars_through_table_2(vtkNew<vtkScalarsToColors> sself, void input, unsigned char output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat) { sself->MapScalarsThroughTable2(input, output, inputDataType, numberOfValues, inputIncrement, outputFormat); }
extern "C" int vtk_scalars_to_colors_using_log_scale(vtkNew<vtkScalarsToColors> sself) { return sself->UsingLogScale(); }
extern "C" long long vtk_scalars_to_colors_get_number_of_available_colors(vtkNew<vtkScalarsToColors> sself) { return sself->GetNumberOfAvailableColors(); }
extern "C" long long vtk_scalars_to_colors_get_number_of_annotated_values(vtkNew<vtkScalarsToColors> sself) { return sself->GetNumberOfAnnotatedValues(); }
extern "C" void vtk_scalars_to_colors_get_indexed_color(vtkNew<vtkScalarsToColors> sself, long long i, double rgba) { sself->GetIndexedColor(i, rgba); }
extern "C" void vtk_scalars_to_colors_reset_annotations(vtkNew<vtkScalarsToColors> sself) { sself->ResetAnnotations(); }
extern "C" void vtk_scalars_to_colors_set_indexed_lookup(vtkNew<vtkScalarsToColors> sself, int _arg) { sself->SetIndexedLookup(_arg); }
extern "C" int vtk_scalars_to_colors_get_indexed_lookup(vtkNew<vtkScalarsToColors> sself) { return sself->GetIndexedLookup(); }
extern "C" void vtk_scalars_to_colors_indexed_lookup_on(vtkNew<vtkScalarsToColors> sself) { sself->IndexedLookupOn(); }
extern "C" void vtk_scalars_to_colors_indexed_lookup_off(vtkNew<vtkScalarsToColors> sself) { sself->IndexedLookupOff(); }
extern "C" vtkNew < vtkShortArray > vtkShortArray_new () {return vtkNew < vtkShortArray > () ;}
extern "C" void vtkShortArray_destructor (vtkNew < vtkShortArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkShortArray_get_ptr (vtkNew < vtkShortArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_short_array_get_data_type(vtkNew<vtkShortArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_short_array_get_typed_tuple(vtkNew<vtkShortArray> sself, long long i, short tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_short_array_set_typed_tuple(vtkNew<vtkShortArray> sself, long long i, const short tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_short_array_insert_typed_tuple(vtkNew<vtkShortArray> sself, long long i, const short tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_short_array_insert_next_typed_tuple(vtkNew<vtkShortArray> sself, const short tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" short vtk_short_array_get_value(vtkNew<vtkShortArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_short_array_set_value(vtkNew<vtkShortArray> sself, long long id, short value) { sself->SetValue(id, value); }
extern "C" bool vtk_short_array_set_number_of_values(vtkNew<vtkShortArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_short_array_insert_value(vtkNew<vtkShortArray> sself, long long id, short f) { sself->InsertValue(id, f); }
extern "C" long long vtk_short_array_insert_next_value(vtkNew<vtkShortArray> sself, short f) { return sself->InsertNextValue(f); }
extern "C" short* vtk_short_array_get_value_range(vtkNew<vtkShortArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" short* vtk_short_array_get_value_range(vtkNew<vtkShortArray> sself) { return sself->GetValueRange(); }
extern "C" short* vtk_short_array_write_pointer(vtkNew<vtkShortArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" short* vtk_short_array_get_pointer(vtkNew<vtkShortArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_short_array_set_array(vtkNew<vtkShortArray> sself, short array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_short_array_set_array(vtkNew<vtkShortArray> sself, short array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" short vtk_short_array_get_data_type_value_min(vtkNew<vtkShortArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" short vtk_short_array_get_data_type_value_max(vtkNew<vtkShortArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkSignedCharArray > vtkSignedCharArray_new () {return vtkNew < vtkSignedCharArray > () ;}
extern "C" void vtkSignedCharArray_destructor (vtkNew < vtkSignedCharArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSignedCharArray_get_ptr (vtkNew < vtkSignedCharArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_signed_char_array_get_data_type(vtkNew<vtkSignedCharArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_signed_char_array_get_typed_tuple(vtkNew<vtkSignedCharArray> sself, long long i, char tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_signed_char_array_set_typed_tuple(vtkNew<vtkSignedCharArray> sself, long long i, const char tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_signed_char_array_insert_typed_tuple(vtkNew<vtkSignedCharArray> sself, long long i, const char tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_signed_char_array_insert_next_typed_tuple(vtkNew<vtkSignedCharArray> sself, const char tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" char vtk_signed_char_array_get_value(vtkNew<vtkSignedCharArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_signed_char_array_set_value(vtkNew<vtkSignedCharArray> sself, long long id, char value) { sself->SetValue(id, value); }
extern "C" bool vtk_signed_char_array_set_number_of_values(vtkNew<vtkSignedCharArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_signed_char_array_insert_value(vtkNew<vtkSignedCharArray> sself, long long id, char f) { sself->InsertValue(id, f); }
extern "C" long long vtk_signed_char_array_insert_next_value(vtkNew<vtkSignedCharArray> sself, char f) { return sself->InsertNextValue(f); }
extern "C" char* vtk_signed_char_array_get_value_range(vtkNew<vtkSignedCharArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" char* vtk_signed_char_array_get_value_range(vtkNew<vtkSignedCharArray> sself) { return sself->GetValueRange(); }
extern "C" char* vtk_signed_char_array_write_pointer(vtkNew<vtkSignedCharArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" char* vtk_signed_char_array_get_pointer(vtkNew<vtkSignedCharArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_signed_char_array_set_array(vtkNew<vtkSignedCharArray> sself, char array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_signed_char_array_set_array(vtkNew<vtkSignedCharArray> sself, char array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" char vtk_signed_char_array_get_data_type_value_min(vtkNew<vtkSignedCharArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" char vtk_signed_char_array_get_data_type_value_max(vtkNew<vtkSignedCharArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkSortDataArray > vtkSortDataArray_new () {return vtkNew < vtkSortDataArray > () ;}
extern "C" void vtkSortDataArray_destructor (vtkNew < vtkSortDataArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSortDataArray_get_ptr (vtkNew < vtkSortDataArray > sself) {return sself . GetPointer () ;}
extern "C" long long* vtk_sort_data_array_initialize_sort_indices(vtkNew<vtkSortDataArray> sself, long long numKeys) { return sself->InitializeSortIndices(numKeys); }
extern "C" void vtk_sort_data_array_generate_sort_indices(vtkNew<vtkSortDataArray> sself, int dataType, void dataIn, long long numKeys, int numComp, int k, long long idx) { sself->GenerateSortIndices(dataType, dataIn, numKeys, numComp, k, idx); }
extern "C" vtkNew < vtkStringArray > vtkStringArray_new () {return vtkNew < vtkStringArray > () ;}
extern "C" void vtkStringArray_destructor (vtkNew < vtkStringArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStringArray_get_ptr (vtkNew < vtkStringArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_string_array_get_data_type(vtkNew<vtkStringArray> sself) { return sself->GetDataType(); }
extern "C" int vtk_string_array_is_numeric(vtkNew<vtkStringArray> sself) { return sself->IsNumeric(); }
extern "C" void vtk_string_array_initialize(vtkNew<vtkStringArray> sself) { sself->Initialize(); }
extern "C" int vtk_string_array_get_data_type_size(vtkNew<vtkStringArray> sself) { return sself->GetDataTypeSize(); }
extern "C" void vtk_string_array_squeeze(vtkNew<vtkStringArray> sself) { sself->Squeeze(); }
extern "C" int vtk_string_array_resize(vtkNew<vtkStringArray> sself, long long numTuples) { return sself->Resize(numTuples); }
extern "C" int vtk_string_array_allocate(vtkNew<vtkStringArray> sself, long long sz, long long ext) { return sself->Allocate(sz, ext); }
extern "C" void vtk_string_array_set_value(vtkNew<vtkStringArray> sself, long long id, const char value) { sself->SetValue(id, value); }
extern "C" void vtk_string_array_set_number_of_tuples(vtkNew<vtkStringArray> sself, long long number) { sself->SetNumberOfTuples(number); }
extern "C" long long vtk_string_array_get_number_of_values(vtkNew<vtkStringArray> sself) { return sself->GetNumberOfValues(); }
extern "C" int vtk_string_array_get_number_of_element_components(vtkNew<vtkStringArray> sself) { return sself->GetNumberOfElementComponents(); }
extern "C" int vtk_string_array_get_element_component_size(vtkNew<vtkStringArray> sself) { return sself->GetElementComponentSize(); }
extern "C" void vtk_string_array_insert_value(vtkNew<vtkStringArray> sself, long long id, const char val) { sself->InsertValue(id, val); }
extern "C" long long vtk_string_array_insert_next_value(vtkNew<vtkStringArray> sself, const char f) { return sself->InsertNextValue(f); }
extern "C" void* vtk_string_array_get_void_pointer(vtkNew<vtkStringArray> sself, long long id) { return sself->GetVoidPointer(id); }
extern "C" void vtk_string_array_set_void_array(vtkNew<vtkStringArray> sself, void array, long long size, int save) { sself->SetVoidArray(array, size, save); }
extern "C" unsigned long vtk_string_array_get_actual_memory_size(vtkNew<vtkStringArray> sself) { return sself->GetActualMemorySize(); }
extern "C" long long vtk_string_array_get_data_size(vtkNew<vtkStringArray> sself) { return sself->GetDataSize(); }
extern "C" long long vtk_string_array_lookup_value(vtkNew<vtkStringArray> sself, const char value) { return sself->LookupValue(value); }
extern "C" void vtk_string_array_data_changed(vtkNew<vtkStringArray> sself) { sself->DataChanged(); }
extern "C" void vtk_string_array_data_element_changed(vtkNew<vtkStringArray> sself, long long id) { sself->DataElementChanged(id); }
extern "C" void vtk_string_array_clear_lookup(vtkNew<vtkStringArray> sself) { sself->ClearLookup(); }
extern "C" vtkNew < vtkStringOutputWindow > vtkStringOutputWindow_new () {return vtkNew < vtkStringOutputWindow > () ;}
extern "C" void vtkStringOutputWindow_destructor (vtkNew < vtkStringOutputWindow > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStringOutputWindow_get_ptr (vtkNew < vtkStringOutputWindow > sself) {return sself . GetPointer () ;}
extern "C" void vtk_string_output_window_display_text(vtkNew<vtkStringOutputWindow> sself, const char p0) { sself->DisplayText(p0); }
extern "C" const char* vtk_string_output_window_get_output(vtkNew<vtkStringOutputWindow> sself) { return sself->GetOutput(); }
extern "C" vtkNew < vtkTimePointUtility > vtkTimePointUtility_new () {return vtkNew < vtkTimePointUtility > () ;}
extern "C" void vtkTimePointUtility_destructor (vtkNew < vtkTimePointUtility > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTimePointUtility_get_ptr (vtkNew < vtkTimePointUtility > sself) {return sself . GetPointer () ;}
extern "C" unsigned long long vtk_time_point_utility_date_to_time_point(vtkNew<vtkTimePointUtility> sself, int year, int month, int day) { return sself->DateToTimePoint(year, month, day); }
extern "C" unsigned long long vtk_time_point_utility_time_to_time_point(vtkNew<vtkTimePointUtility> sself, int hour, int minute, int second, int millis) { return sself->TimeToTimePoint(hour, minute, second, millis); }
extern "C" unsigned long long vtk_time_point_utility_date_time_to_time_point(vtkNew<vtkTimePointUtility> sself, int year, int month, int day, int hour, int minute, int sec, int millis) { return sself->DateTimeToTimePoint(year, month, day, hour, minute, sec, millis); }
extern "C" void vtk_time_point_utility_get_date(vtkNew<vtkTimePointUtility> sself, unsigned long long time, int year, int month, int day) { sself->GetDate(time, year, month, day); }
extern "C" void vtk_time_point_utility_get_time(vtkNew<vtkTimePointUtility> sself, unsigned long long time, int hour, int minute, int second, int millis) { sself->GetTime(time, hour, minute, second, millis); }
extern "C" void vtk_time_point_utility_get_date_time(vtkNew<vtkTimePointUtility> sself, unsigned long long time, int year, int month, int day, int hour, int minute, int second, int millis) { sself->GetDateTime(time, year, month, day, hour, minute, second, millis); }
extern "C" int vtk_time_point_utility_get_year(vtkNew<vtkTimePointUtility> sself, unsigned long long time) { return sself->GetYear(time); }
extern "C" int vtk_time_point_utility_get_month(vtkNew<vtkTimePointUtility> sself, unsigned long long time) { return sself->GetMonth(time); }
extern "C" int vtk_time_point_utility_get_day(vtkNew<vtkTimePointUtility> sself, unsigned long long time) { return sself->GetDay(time); }
extern "C" int vtk_time_point_utility_get_hour(vtkNew<vtkTimePointUtility> sself, unsigned long long time) { return sself->GetHour(time); }
extern "C" int vtk_time_point_utility_get_minute(vtkNew<vtkTimePointUtility> sself, unsigned long long time) { return sself->GetMinute(time); }
extern "C" int vtk_time_point_utility_get_second(vtkNew<vtkTimePointUtility> sself, unsigned long long time) { return sself->GetSecond(time); }
extern "C" int vtk_time_point_utility_get_millisecond(vtkNew<vtkTimePointUtility> sself, unsigned long long time) { return sself->GetMillisecond(time); }
extern "C" unsigned long long vtk_time_point_utility_iso_8601_to_time_point(vtkNew<vtkTimePointUtility> sself, const char str, bool ok) { return sself->ISO8601ToTimePoint(str, ok); }
extern "C" const char* vtk_time_point_utility_time_point_to_iso_8601(vtkNew<vtkTimePointUtility> sself, unsigned long long p0, int format) { return sself->TimePointToISO8601(p0, format); }
extern "C" vtkNew < vtkTypeFloat32Array > vtkTypeFloat32Array_new () {return vtkNew < vtkTypeFloat32Array > () ;}
extern "C" void vtkTypeFloat32Array_destructor (vtkNew < vtkTypeFloat32Array > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTypeFloat32Array_get_ptr (vtkNew < vtkTypeFloat32Array > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTypeFloat64Array > vtkTypeFloat64Array_new () {return vtkNew < vtkTypeFloat64Array > () ;}
extern "C" void vtkTypeFloat64Array_destructor (vtkNew < vtkTypeFloat64Array > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTypeFloat64Array_get_ptr (vtkNew < vtkTypeFloat64Array > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTypeInt16Array > vtkTypeInt16Array_new () {return vtkNew < vtkTypeInt16Array > () ;}
extern "C" void vtkTypeInt16Array_destructor (vtkNew < vtkTypeInt16Array > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTypeInt16Array_get_ptr (vtkNew < vtkTypeInt16Array > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTypeInt32Array > vtkTypeInt32Array_new () {return vtkNew < vtkTypeInt32Array > () ;}
extern "C" void vtkTypeInt32Array_destructor (vtkNew < vtkTypeInt32Array > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTypeInt32Array_get_ptr (vtkNew < vtkTypeInt32Array > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTypeInt64Array > vtkTypeInt64Array_new () {return vtkNew < vtkTypeInt64Array > () ;}
extern "C" void vtkTypeInt64Array_destructor (vtkNew < vtkTypeInt64Array > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTypeInt64Array_get_ptr (vtkNew < vtkTypeInt64Array > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTypeInt8Array > vtkTypeInt8Array_new () {return vtkNew < vtkTypeInt8Array > () ;}
extern "C" void vtkTypeInt8Array_destructor (vtkNew < vtkTypeInt8Array > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTypeInt8Array_get_ptr (vtkNew < vtkTypeInt8Array > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTypeUInt16Array > vtkTypeUInt16Array_new () {return vtkNew < vtkTypeUInt16Array > () ;}
extern "C" void vtkTypeUInt16Array_destructor (vtkNew < vtkTypeUInt16Array > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTypeUInt16Array_get_ptr (vtkNew < vtkTypeUInt16Array > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTypeUInt32Array > vtkTypeUInt32Array_new () {return vtkNew < vtkTypeUInt32Array > () ;}
extern "C" void vtkTypeUInt32Array_destructor (vtkNew < vtkTypeUInt32Array > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTypeUInt32Array_get_ptr (vtkNew < vtkTypeUInt32Array > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTypeUInt64Array > vtkTypeUInt64Array_new () {return vtkNew < vtkTypeUInt64Array > () ;}
extern "C" void vtkTypeUInt64Array_destructor (vtkNew < vtkTypeUInt64Array > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTypeUInt64Array_get_ptr (vtkNew < vtkTypeUInt64Array > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTypeUInt8Array > vtkTypeUInt8Array_new () {return vtkNew < vtkTypeUInt8Array > () ;}
extern "C" void vtkTypeUInt8Array_destructor (vtkNew < vtkTypeUInt8Array > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTypeUInt8Array_get_ptr (vtkNew < vtkTypeUInt8Array > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkUnicodeStringArray > vtkUnicodeStringArray_new () {return vtkNew < vtkUnicodeStringArray > () ;}
extern "C" void vtkUnicodeStringArray_destructor (vtkNew < vtkUnicodeStringArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUnicodeStringArray_get_ptr (vtkNew < vtkUnicodeStringArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_unicode_string_array_allocate(vtkNew<vtkUnicodeStringArray> sself, long long sz, long long ext) { return sself->Allocate(sz, ext); }
extern "C" void vtk_unicode_string_array_initialize(vtkNew<vtkUnicodeStringArray> sself) { sself->Initialize(); }
extern "C" int vtk_unicode_string_array_get_data_type(vtkNew<vtkUnicodeStringArray> sself) { return sself->GetDataType(); }
extern "C" int vtk_unicode_string_array_get_data_type_size(vtkNew<vtkUnicodeStringArray> sself) { return sself->GetDataTypeSize(); }
extern "C" int vtk_unicode_string_array_get_element_component_size(vtkNew<vtkUnicodeStringArray> sself) { return sself->GetElementComponentSize(); }
extern "C" void vtk_unicode_string_array_set_number_of_tuples(vtkNew<vtkUnicodeStringArray> sself, long long number) { sself->SetNumberOfTuples(number); }
extern "C" void* vtk_unicode_string_array_get_void_pointer(vtkNew<vtkUnicodeStringArray> sself, long long id) { return sself->GetVoidPointer(id); }
extern "C" void vtk_unicode_string_array_squeeze(vtkNew<vtkUnicodeStringArray> sself) { sself->Squeeze(); }
extern "C" int vtk_unicode_string_array_resize(vtkNew<vtkUnicodeStringArray> sself, long long numTuples) { return sself->Resize(numTuples); }
extern "C" void vtk_unicode_string_array_set_void_array(vtkNew<vtkUnicodeStringArray> sself, void array, long long size, int save) { sself->SetVoidArray(array, size, save); }
extern "C" unsigned long vtk_unicode_string_array_get_actual_memory_size(vtkNew<vtkUnicodeStringArray> sself) { return sself->GetActualMemorySize(); }
extern "C" int vtk_unicode_string_array_is_numeric(vtkNew<vtkUnicodeStringArray> sself) { return sself->IsNumeric(); }
extern "C" void vtk_unicode_string_array_data_changed(vtkNew<vtkUnicodeStringArray> sself) { sself->DataChanged(); }
extern "C" void vtk_unicode_string_array_clear_lookup(vtkNew<vtkUnicodeStringArray> sself) { sself->ClearLookup(); }
extern "C" void vtk_unicode_string_array_insert_next_utf_8_value(vtkNew<vtkUnicodeStringArray> sself, const char p0) { sself->InsertNextUTF8Value(p0); }
extern "C" void vtk_unicode_string_array_set_utf_8_value(vtkNew<vtkUnicodeStringArray> sself, long long i, const char p1) { sself->SetUTF8Value(i, p1); }
extern "C" const char* vtk_unicode_string_array_get_utf_8_value(vtkNew<vtkUnicodeStringArray> sself, long long i) { return sself->GetUTF8Value(i); }
extern "C" vtkNew < vtkUnsignedCharArray > vtkUnsignedCharArray_new () {return vtkNew < vtkUnsignedCharArray > () ;}
extern "C" void vtkUnsignedCharArray_destructor (vtkNew < vtkUnsignedCharArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUnsignedCharArray_get_ptr (vtkNew < vtkUnsignedCharArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_unsigned_char_array_get_data_type(vtkNew<vtkUnsignedCharArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_unsigned_char_array_get_typed_tuple(vtkNew<vtkUnsignedCharArray> sself, long long i, unsigned char tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_unsigned_char_array_set_typed_tuple(vtkNew<vtkUnsignedCharArray> sself, long long i, const unsigned char tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_unsigned_char_array_insert_typed_tuple(vtkNew<vtkUnsignedCharArray> sself, long long i, const unsigned char tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_unsigned_char_array_insert_next_typed_tuple(vtkNew<vtkUnsignedCharArray> sself, const unsigned char tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" unsigned char vtk_unsigned_char_array_get_value(vtkNew<vtkUnsignedCharArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_unsigned_char_array_set_value(vtkNew<vtkUnsignedCharArray> sself, long long id, unsigned char value) { sself->SetValue(id, value); }
extern "C" bool vtk_unsigned_char_array_set_number_of_values(vtkNew<vtkUnsignedCharArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_unsigned_char_array_insert_value(vtkNew<vtkUnsignedCharArray> sself, long long id, unsigned char f) { sself->InsertValue(id, f); }
extern "C" long long vtk_unsigned_char_array_insert_next_value(vtkNew<vtkUnsignedCharArray> sself, unsigned char f) { return sself->InsertNextValue(f); }
extern "C" unsigned char* vtk_unsigned_char_array_get_value_range(vtkNew<vtkUnsignedCharArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" unsigned char* vtk_unsigned_char_array_get_value_range(vtkNew<vtkUnsignedCharArray> sself) { return sself->GetValueRange(); }
extern "C" unsigned char* vtk_unsigned_char_array_write_pointer(vtkNew<vtkUnsignedCharArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" unsigned char* vtk_unsigned_char_array_get_pointer(vtkNew<vtkUnsignedCharArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_unsigned_char_array_set_array(vtkNew<vtkUnsignedCharArray> sself, unsigned char array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_unsigned_char_array_set_array(vtkNew<vtkUnsignedCharArray> sself, unsigned char array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" unsigned char vtk_unsigned_char_array_get_data_type_value_min(vtkNew<vtkUnsignedCharArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" unsigned char vtk_unsigned_char_array_get_data_type_value_max(vtkNew<vtkUnsignedCharArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkUnsignedIntArray > vtkUnsignedIntArray_new () {return vtkNew < vtkUnsignedIntArray > () ;}
extern "C" void vtkUnsignedIntArray_destructor (vtkNew < vtkUnsignedIntArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUnsignedIntArray_get_ptr (vtkNew < vtkUnsignedIntArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_unsigned_int_array_get_data_type(vtkNew<vtkUnsignedIntArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_unsigned_int_array_get_typed_tuple(vtkNew<vtkUnsignedIntArray> sself, long long i, unsigned int tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_unsigned_int_array_set_typed_tuple(vtkNew<vtkUnsignedIntArray> sself, long long i, const unsigned int tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_unsigned_int_array_insert_typed_tuple(vtkNew<vtkUnsignedIntArray> sself, long long i, const unsigned int tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_unsigned_int_array_insert_next_typed_tuple(vtkNew<vtkUnsignedIntArray> sself, const unsigned int tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" unsigned int vtk_unsigned_int_array_get_value(vtkNew<vtkUnsignedIntArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_unsigned_int_array_set_value(vtkNew<vtkUnsignedIntArray> sself, long long id, unsigned int value) { sself->SetValue(id, value); }
extern "C" bool vtk_unsigned_int_array_set_number_of_values(vtkNew<vtkUnsignedIntArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_unsigned_int_array_insert_value(vtkNew<vtkUnsignedIntArray> sself, long long id, unsigned int f) { sself->InsertValue(id, f); }
extern "C" long long vtk_unsigned_int_array_insert_next_value(vtkNew<vtkUnsignedIntArray> sself, unsigned int f) { return sself->InsertNextValue(f); }
extern "C" unsigned int* vtk_unsigned_int_array_get_value_range(vtkNew<vtkUnsignedIntArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" unsigned int* vtk_unsigned_int_array_get_value_range(vtkNew<vtkUnsignedIntArray> sself) { return sself->GetValueRange(); }
extern "C" unsigned int* vtk_unsigned_int_array_write_pointer(vtkNew<vtkUnsignedIntArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" unsigned int* vtk_unsigned_int_array_get_pointer(vtkNew<vtkUnsignedIntArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_unsigned_int_array_set_array(vtkNew<vtkUnsignedIntArray> sself, unsigned int array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_unsigned_int_array_set_array(vtkNew<vtkUnsignedIntArray> sself, unsigned int array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" unsigned int vtk_unsigned_int_array_get_data_type_value_min(vtkNew<vtkUnsignedIntArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" unsigned int vtk_unsigned_int_array_get_data_type_value_max(vtkNew<vtkUnsignedIntArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkUnsignedLongArray > vtkUnsignedLongArray_new () {return vtkNew < vtkUnsignedLongArray > () ;}
extern "C" void vtkUnsignedLongArray_destructor (vtkNew < vtkUnsignedLongArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUnsignedLongArray_get_ptr (vtkNew < vtkUnsignedLongArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_unsigned_long_array_get_data_type(vtkNew<vtkUnsignedLongArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_unsigned_long_array_get_typed_tuple(vtkNew<vtkUnsignedLongArray> sself, long long i, unsigned long tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_unsigned_long_array_set_typed_tuple(vtkNew<vtkUnsignedLongArray> sself, long long i, const unsigned long tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_unsigned_long_array_insert_typed_tuple(vtkNew<vtkUnsignedLongArray> sself, long long i, const unsigned long tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_unsigned_long_array_insert_next_typed_tuple(vtkNew<vtkUnsignedLongArray> sself, const unsigned long tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" unsigned long vtk_unsigned_long_array_get_value(vtkNew<vtkUnsignedLongArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_unsigned_long_array_set_value(vtkNew<vtkUnsignedLongArray> sself, long long id, unsigned long value) { sself->SetValue(id, value); }
extern "C" bool vtk_unsigned_long_array_set_number_of_values(vtkNew<vtkUnsignedLongArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_unsigned_long_array_insert_value(vtkNew<vtkUnsignedLongArray> sself, long long id, unsigned long f) { sself->InsertValue(id, f); }
extern "C" long long vtk_unsigned_long_array_insert_next_value(vtkNew<vtkUnsignedLongArray> sself, unsigned long f) { return sself->InsertNextValue(f); }
extern "C" unsigned long* vtk_unsigned_long_array_get_value_range(vtkNew<vtkUnsignedLongArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" unsigned long* vtk_unsigned_long_array_get_value_range(vtkNew<vtkUnsignedLongArray> sself) { return sself->GetValueRange(); }
extern "C" unsigned long* vtk_unsigned_long_array_write_pointer(vtkNew<vtkUnsignedLongArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" unsigned long* vtk_unsigned_long_array_get_pointer(vtkNew<vtkUnsignedLongArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_unsigned_long_array_set_array(vtkNew<vtkUnsignedLongArray> sself, unsigned long array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_unsigned_long_array_set_array(vtkNew<vtkUnsignedLongArray> sself, unsigned long array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" unsigned long vtk_unsigned_long_array_get_data_type_value_min(vtkNew<vtkUnsignedLongArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" unsigned long vtk_unsigned_long_array_get_data_type_value_max(vtkNew<vtkUnsignedLongArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkUnsignedLongLongArray > vtkUnsignedLongLongArray_new () {return vtkNew < vtkUnsignedLongLongArray > () ;}
extern "C" void vtkUnsignedLongLongArray_destructor (vtkNew < vtkUnsignedLongLongArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUnsignedLongLongArray_get_ptr (vtkNew < vtkUnsignedLongLongArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_unsigned_long_long_array_get_data_type(vtkNew<vtkUnsignedLongLongArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_unsigned_long_long_array_get_typed_tuple(vtkNew<vtkUnsignedLongLongArray> sself, long long i, unsigned long long tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_unsigned_long_long_array_set_typed_tuple(vtkNew<vtkUnsignedLongLongArray> sself, long long i, const unsigned long long tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_unsigned_long_long_array_insert_typed_tuple(vtkNew<vtkUnsignedLongLongArray> sself, long long i, const unsigned long long tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_unsigned_long_long_array_insert_next_typed_tuple(vtkNew<vtkUnsignedLongLongArray> sself, const unsigned long long tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" unsigned long long vtk_unsigned_long_long_array_get_value(vtkNew<vtkUnsignedLongLongArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_unsigned_long_long_array_set_value(vtkNew<vtkUnsignedLongLongArray> sself, long long id, unsigned long long value) { sself->SetValue(id, value); }
extern "C" bool vtk_unsigned_long_long_array_set_number_of_values(vtkNew<vtkUnsignedLongLongArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_unsigned_long_long_array_insert_value(vtkNew<vtkUnsignedLongLongArray> sself, long long id, unsigned long long f) { sself->InsertValue(id, f); }
extern "C" long long vtk_unsigned_long_long_array_insert_next_value(vtkNew<vtkUnsignedLongLongArray> sself, unsigned long long f) { return sself->InsertNextValue(f); }
extern "C" unsigned long long* vtk_unsigned_long_long_array_get_value_range(vtkNew<vtkUnsignedLongLongArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" unsigned long long* vtk_unsigned_long_long_array_get_value_range(vtkNew<vtkUnsignedLongLongArray> sself) { return sself->GetValueRange(); }
extern "C" unsigned long long* vtk_unsigned_long_long_array_write_pointer(vtkNew<vtkUnsignedLongLongArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" unsigned long long* vtk_unsigned_long_long_array_get_pointer(vtkNew<vtkUnsignedLongLongArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_unsigned_long_long_array_set_array(vtkNew<vtkUnsignedLongLongArray> sself, unsigned long long array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_unsigned_long_long_array_set_array(vtkNew<vtkUnsignedLongLongArray> sself, unsigned long long array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" unsigned long long vtk_unsigned_long_long_array_get_data_type_value_min(vtkNew<vtkUnsignedLongLongArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" unsigned long long vtk_unsigned_long_long_array_get_data_type_value_max(vtkNew<vtkUnsignedLongLongArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkUnsignedShortArray > vtkUnsignedShortArray_new () {return vtkNew < vtkUnsignedShortArray > () ;}
extern "C" void vtkUnsignedShortArray_destructor (vtkNew < vtkUnsignedShortArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUnsignedShortArray_get_ptr (vtkNew < vtkUnsignedShortArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_unsigned_short_array_get_data_type(vtkNew<vtkUnsignedShortArray> sself) { return sself->GetDataType(); }
extern "C" void vtk_unsigned_short_array_get_typed_tuple(vtkNew<vtkUnsignedShortArray> sself, long long i, unsigned short tuple) { sself->GetTypedTuple(i, tuple); }
extern "C" void vtk_unsigned_short_array_set_typed_tuple(vtkNew<vtkUnsignedShortArray> sself, long long i, const unsigned short tuple) { sself->SetTypedTuple(i, tuple); }
extern "C" void vtk_unsigned_short_array_insert_typed_tuple(vtkNew<vtkUnsignedShortArray> sself, long long i, const unsigned short tuple) { sself->InsertTypedTuple(i, tuple); }
extern "C" long long vtk_unsigned_short_array_insert_next_typed_tuple(vtkNew<vtkUnsignedShortArray> sself, const unsigned short tuple) { return sself->InsertNextTypedTuple(tuple); }
extern "C" unsigned short vtk_unsigned_short_array_get_value(vtkNew<vtkUnsignedShortArray> sself, long long id) { return sself->GetValue(id); }
extern "C" void vtk_unsigned_short_array_set_value(vtkNew<vtkUnsignedShortArray> sself, long long id, unsigned short value) { sself->SetValue(id, value); }
extern "C" bool vtk_unsigned_short_array_set_number_of_values(vtkNew<vtkUnsignedShortArray> sself, long long number) { return sself->SetNumberOfValues(number); }
extern "C" void vtk_unsigned_short_array_insert_value(vtkNew<vtkUnsignedShortArray> sself, long long id, unsigned short f) { sself->InsertValue(id, f); }
extern "C" long long vtk_unsigned_short_array_insert_next_value(vtkNew<vtkUnsignedShortArray> sself, unsigned short f) { return sself->InsertNextValue(f); }
extern "C" unsigned short* vtk_unsigned_short_array_get_value_range(vtkNew<vtkUnsignedShortArray> sself, int comp) { return sself->GetValueRange(comp); }
extern "C" unsigned short* vtk_unsigned_short_array_get_value_range(vtkNew<vtkUnsignedShortArray> sself) { return sself->GetValueRange(); }
extern "C" unsigned short* vtk_unsigned_short_array_write_pointer(vtkNew<vtkUnsignedShortArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" unsigned short* vtk_unsigned_short_array_get_pointer(vtkNew<vtkUnsignedShortArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void vtk_unsigned_short_array_set_array(vtkNew<vtkUnsignedShortArray> sself, unsigned short array, long long size, int save) { sself->SetArray(array, size, save); }
extern "C" void vtk_unsigned_short_array_set_array(vtkNew<vtkUnsignedShortArray> sself, unsigned short array, long long size, int save, int deleteMethod) { sself->SetArray(array, size, save, deleteMethod); }
extern "C" unsigned short vtk_unsigned_short_array_get_data_type_value_min(vtkNew<vtkUnsignedShortArray> sself) { return sself->GetDataTypeValueMin(); }
extern "C" unsigned short vtk_unsigned_short_array_get_data_type_value_max(vtkNew<vtkUnsignedShortArray> sself) { return sself->GetDataTypeValueMax(); }
extern "C" vtkNew < vtkVariantArray > vtkVariantArray_new () {return vtkNew < vtkVariantArray > () ;}
extern "C" void vtkVariantArray_destructor (vtkNew < vtkVariantArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkVariantArray_get_ptr (vtkNew < vtkVariantArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_variant_array_allocate(vtkNew<vtkVariantArray> sself, long long sz, long long ext) { return sself->Allocate(sz, ext); }
extern "C" void vtk_variant_array_initialize(vtkNew<vtkVariantArray> sself) { sself->Initialize(); }
extern "C" int vtk_variant_array_get_data_type(vtkNew<vtkVariantArray> sself) { return sself->GetDataType(); }
extern "C" int vtk_variant_array_get_data_type_size(vtkNew<vtkVariantArray> sself) { return sself->GetDataTypeSize(); }
extern "C" int vtk_variant_array_get_element_component_size(vtkNew<vtkVariantArray> sself) { return sself->GetElementComponentSize(); }
extern "C" void vtk_variant_array_set_number_of_tuples(vtkNew<vtkVariantArray> sself, long long number) { sself->SetNumberOfTuples(number); }
extern "C" void* vtk_variant_array_get_void_pointer(vtkNew<vtkVariantArray> sself, long long id) { return sself->GetVoidPointer(id); }
extern "C" void vtk_variant_array_squeeze(vtkNew<vtkVariantArray> sself) { sself->Squeeze(); }
extern "C" int vtk_variant_array_resize(vtkNew<vtkVariantArray> sself, long long numTuples) { return sself->Resize(numTuples); }
extern "C" void vtk_variant_array_set_void_array(vtkNew<vtkVariantArray> sself, void arr, long long size, int save) { sself->SetVoidArray(arr, size, save); }
extern "C" void vtk_variant_array_set_void_array(vtkNew<vtkVariantArray> sself, void arr, long long size, int save, int deleteM) { sself->SetVoidArray(arr, size, save, deleteM); }
extern "C" unsigned long vtk_variant_array_get_actual_memory_size(vtkNew<vtkVariantArray> sself) { return sself->GetActualMemorySize(); }
extern "C" int vtk_variant_array_is_numeric(vtkNew<vtkVariantArray> sself) { return sself->IsNumeric(); }
extern "C" long long vtk_variant_array_get_number_of_values(vtkNew<vtkVariantArray> sself) { return sself->GetNumberOfValues(); }
extern "C" void vtk_variant_array_data_changed(vtkNew<vtkVariantArray> sself) { sself->DataChanged(); }
extern "C" void vtk_variant_array_data_element_changed(vtkNew<vtkVariantArray> sself, long long id) { sself->DataElementChanged(id); }
extern "C" void vtk_variant_array_clear_lookup(vtkNew<vtkVariantArray> sself) { sself->ClearLookup(); }
extern "C" vtkNew < vtkVersion > vtkVersion_new () {return vtkNew < vtkVersion > () ;}
extern "C" void vtkVersion_destructor (vtkNew < vtkVersion > sself) {sself . Reset () ; return ;}
extern "C" void * vtkVersion_get_ptr (vtkNew < vtkVersion > sself) {return sself . GetPointer () ;}
extern "C" const char* vtk_version_get_vtk_version(vtkNew<vtkVersion> sself) { return sself->GetVTKVersion(); }
extern "C" const char* vtk_version_get_vtk_version_full(vtkNew<vtkVersion> sself) { return sself->GetVTKVersionFull(); }
extern "C" int vtk_version_get_vtk_major_version(vtkNew<vtkVersion> sself) { return sself->GetVTKMajorVersion(); }
extern "C" int vtk_version_get_vtk_minor_version(vtkNew<vtkVersion> sself) { return sself->GetVTKMinorVersion(); }
extern "C" int vtk_version_get_vtk_build_version(vtkNew<vtkVersion> sself) { return sself->GetVTKBuildVersion(); }
extern "C" const char* vtk_version_get_vtk_source_version(vtkNew<vtkVersion> sself) { return sself->GetVTKSourceVersion(); }
extern "C" vtkNew < vtkVoidArray > vtkVoidArray_new () {return vtkNew < vtkVoidArray > () ;}
extern "C" void vtkVoidArray_destructor (vtkNew < vtkVoidArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkVoidArray_get_ptr (vtkNew < vtkVoidArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_void_array_allocate(vtkNew<vtkVoidArray> sself, long long sz, long long ext) { return sself->Allocate(sz, ext); }
extern "C" void vtk_void_array_initialize(vtkNew<vtkVoidArray> sself) { sself->Initialize(); }
extern "C" int vtk_void_array_get_data_type(vtkNew<vtkVoidArray> sself) { return sself->GetDataType(); }
extern "C" int vtk_void_array_get_data_type_size(vtkNew<vtkVoidArray> sself) { return sself->GetDataTypeSize(); }
extern "C" void vtk_void_array_set_number_of_pointers(vtkNew<vtkVoidArray> sself, long long number) { sself->SetNumberOfPointers(number); }
extern "C" long long vtk_void_array_get_number_of_pointers(vtkNew<vtkVoidArray> sself) { return sself->GetNumberOfPointers(); }
extern "C" void* vtk_void_array_get_void_pointer(vtkNew<vtkVoidArray> sself, long long id) { return sself->GetVoidPointer(id); }
extern "C" void vtk_void_array_set_void_pointer(vtkNew<vtkVoidArray> sself, long long id, void ptr) { sself->SetVoidPointer(id, ptr); }
extern "C" void vtk_void_array_insert_void_pointer(vtkNew<vtkVoidArray> sself, long long i, void ptr) { sself->InsertVoidPointer(i, ptr); }
extern "C" long long vtk_void_array_insert_next_void_pointer(vtkNew<vtkVoidArray> sself, void tuple) { return sself->InsertNextVoidPointer(tuple); }
extern "C" void vtk_void_array_reset(vtkNew<vtkVoidArray> sself) { sself->Reset(); }
extern "C" void vtk_void_array_squeeze(vtkNew<vtkVoidArray> sself) { sself->Squeeze(); }
extern "C" void&* vtk_void_array_get_pointer(vtkNew<vtkVoidArray> sself, long long id) { return sself->GetPointer(id); }
extern "C" void&* vtk_void_array_write_pointer(vtkNew<vtkVoidArray> sself, long long id, long long number) { return sself->WritePointer(id, number); }
extern "C" vtkNew < vtkWeakReference > vtkWeakReference_new () {return vtkNew < vtkWeakReference > () ;}
extern "C" void vtkWeakReference_destructor (vtkNew < vtkWeakReference > sself) {sself . Reset () ; return ;}
extern "C" void * vtkWeakReference_get_ptr (vtkNew < vtkWeakReference > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkXMLFileOutputWindow > vtkXMLFileOutputWindow_new () {return vtkNew < vtkXMLFileOutputWindow > () ;}
extern "C" void vtkXMLFileOutputWindow_destructor (vtkNew < vtkXMLFileOutputWindow > sself) {sself . Reset () ; return ;}
extern "C" void * vtkXMLFileOutputWindow_get_ptr (vtkNew < vtkXMLFileOutputWindow > sself) {return sself . GetPointer () ;}
extern "C" void vtk_xml_file_output_window_display_text(vtkNew<vtkXMLFileOutputWindow> sself, const char p0) { sself->DisplayText(p0); }
extern "C" void vtk_xml_file_output_window_display_tag(vtkNew<vtkXMLFileOutputWindow> sself, const char p0) { sself->DisplayTag(p0); }
