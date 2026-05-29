// Include header file
#include<vtk_common_execution_model.h>

// Default include in all modules
#include<vtkNew.h>
#include<vtkObjectBase.h>

// Include objects of this module
#include<vtkAlgorithm.h>
#include<vtkAlgorithmOutput.h>
#include<vtkAnnotationLayersAlgorithm.h>
#include<vtkArrayDataAlgorithm.h>
#include<vtkCachedStreamingDemandDrivenPipeline.h>
#include<vtkCastToConcrete.h>
#include<vtkCompositeDataPipeline.h>
#include<vtkCompositeDataSetAlgorithm.h>
#include<vtkDataObjectAlgorithm.h>
#include<vtkDataSetAlgorithm.h>
#include<vtkDemandDrivenPipeline.h>
#include<vtkDirectedGraphAlgorithm.h>
#include<vtkEnsembleSource.h>
#include<vtkExecutive.h>
#include<vtkExplicitStructuredGridAlgorithm.h>
#include<vtkExtentRCBPartitioner.h>
#include<vtkExtentSplitter.h>
#include<vtkExtentTranslator.h>
#include<vtkFilteringInformationKeyManager.h>
#include<vtkGraphAlgorithm.h>
#include<vtkHierarchicalBoxDataSetAlgorithm.h>
#include<vtkHyperTreeGridAlgorithm.h>
#include<vtkImageAlgorithm.h>
#include<vtkImageInPlaceFilter.h>
#include<vtkImageProgressIterator.h>
#include<vtkImageToStructuredGrid.h>
#include<vtkImageToStructuredPoints.h>
#include<vtkInformationDataObjectMetaDataKey.h>
#include<vtkInformationExecutivePortKey.h>
#include<vtkInformationExecutivePortVectorKey.h>
#include<vtkInformationIntegerRequestKey.h>
#include<vtkMoleculeAlgorithm.h>
#include<vtkMultiBlockDataSetAlgorithm.h>
#include<vtkMultiTimeStepAlgorithm.h>
#include<vtkNonOverlappingAMRAlgorithm.h>
#include<vtkOverlappingAMRAlgorithm.h>
#include<vtkParallelReader.h>
#include<vtkPartitionedDataSetAlgorithm.h>
#include<vtkPartitionedDataSetCollectionAlgorithm.h>
#include<vtkPassInputTypeAlgorithm.h>
#include<vtkPiecewiseFunctionAlgorithm.h>
#include<vtkPiecewiseFunctionShiftScale.h>
#include<vtkPointSetAlgorithm.h>
#include<vtkPolyDataAlgorithm.h>
#include<vtkProgressObserver.h>
#include<vtkReaderAlgorithm.h>
#include<vtkReaderExecutive.h>
#include<vtkRectilinearGridAlgorithm.h>
#include<vtkSMPProgressObserver.h>
#include<vtkScalarTree.h>
#include<vtkSelectionAlgorithm.h>
#include<vtkSimpleImageToImageFilter.h>
#include<vtkSimpleReader.h>
#include<vtkSimpleScalarTree.h>
#include<vtkSpanSpace.h>
#include<vtkSphereTree.h>
#include<vtkStreamingDemandDrivenPipeline.h>
#include<vtkStructuredGridAlgorithm.h>
#include<vtkTableAlgorithm.h>
#include<vtkThreadedCompositeDataPipeline.h>
#include<vtkThreadedImageAlgorithm.h>
#include<vtkTreeAlgorithm.h>
#include<vtkTrivialConsumer.h>
#include<vtkTrivialProducer.h>
#include<vtkUndirectedGraphAlgorithm.h>
#include<vtkUniformGridAMRAlgorithm.h>
#include<vtkUniformGridPartitioner.h>
#include<vtkUnstructuredGridAlgorithm.h>
#include<vtkUnstructuredGridBaseAlgorithm.h>

// Implement declared functions
extern "C" vtkNew < vtkAlgorithm > vtkAlgorithm_new () {return vtkNew < vtkAlgorithm > () ;}
extern "C" void vtkAlgorithm_destructor (vtkNew < vtkAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAlgorithm_get_ptr (vtkNew < vtkAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" int vtk_algorithm_has_executive(vtkNew<vtkAlgorithm> sself) { return sself->HasExecutive(); }
extern "C" int vtk_algorithm_get_number_of_input_ports(vtkNew<vtkAlgorithm> sself) { return sself->GetNumberOfInputPorts(); }
extern "C" int vtk_algorithm_get_number_of_output_ports(vtkNew<vtkAlgorithm> sself) { return sself->GetNumberOfOutputPorts(); }
extern "C" void vtk_algorithm_set_abort_execute(vtkNew<vtkAlgorithm> sself, int _arg) { sself->SetAbortExecute(_arg); }
extern "C" int vtk_algorithm_get_abort_execute(vtkNew<vtkAlgorithm> sself) { return sself->GetAbortExecute(); }
extern "C" void vtk_algorithm_abort_execute_on(vtkNew<vtkAlgorithm> sself) { sself->AbortExecuteOn(); }
extern "C" void vtk_algorithm_abort_execute_off(vtkNew<vtkAlgorithm> sself) { sself->AbortExecuteOff(); }
extern "C" double vtk_algorithm_get_progress(vtkNew<vtkAlgorithm> sself) { return sself->GetProgress(); }
extern "C" void vtk_algorithm_set_progress(vtkNew<vtkAlgorithm> sself, double p0) { sself->SetProgress(p0); }
extern "C" void vtk_algorithm_update_progress(vtkNew<vtkAlgorithm> sself, double amount) { sself->UpdateProgress(amount); }
extern "C" void vtk_algorithm_set_progress_shift_scale(vtkNew<vtkAlgorithm> sself, double shift, double scale) { sself->SetProgressShiftScale(shift, scale); }
extern "C" double vtk_algorithm_get_progress_shift(vtkNew<vtkAlgorithm> sself) { return sself->GetProgressShift(); }
extern "C" double vtk_algorithm_get_progress_scale(vtkNew<vtkAlgorithm> sself) { return sself->GetProgressScale(); }
extern "C" void vtk_algorithm_set_progress_text(vtkNew<vtkAlgorithm> sself, const char ptext) { sself->SetProgressText(ptext); }
extern "C" char* vtk_algorithm_get_progress_text(vtkNew<vtkAlgorithm> sself) { return sself->GetProgressText(); }
extern "C" unsigned long vtk_algorithm_get_error_code(vtkNew<vtkAlgorithm> sself) { return sself->GetErrorCode(); }
extern "C" void vtk_algorithm_set_input_array_to_process(vtkNew<vtkAlgorithm> sself, int idx, int port, int connection, int fieldAssociation, const char name) { sself->SetInputArrayToProcess(idx, port, connection, fieldAssociation, name); }
extern "C" void vtk_algorithm_set_input_array_to_process(vtkNew<vtkAlgorithm> sself, int idx, int port, int connection, int fieldAssociation, int fieldAttributeType) { sself->SetInputArrayToProcess(idx, port, connection, fieldAssociation, fieldAttributeType); }
extern "C" void vtk_algorithm_set_input_array_to_process(vtkNew<vtkAlgorithm> sself, int idx, int port, int connection, const char fieldAssociation, const char attributeTypeorName) { sself->SetInputArrayToProcess(idx, port, connection, fieldAssociation, attributeTypeorName); }
extern "C" void vtk_algorithm_remove_all_inputs(vtkNew<vtkAlgorithm> sself) { sself->RemoveAllInputs(); }
extern "C" void vtk_algorithm_remove_input_connection(vtkNew<vtkAlgorithm> sself, int port, int idx) { sself->RemoveInputConnection(port, idx); }
extern "C" void vtk_algorithm_remove_all_input_connections(vtkNew<vtkAlgorithm> sself, int port) { sself->RemoveAllInputConnections(port); }
extern "C" int vtk_algorithm_get_number_of_input_connections(vtkNew<vtkAlgorithm> sself, int port) { return sself->GetNumberOfInputConnections(port); }
extern "C" int vtk_algorithm_get_total_number_of_input_connections(vtkNew<vtkAlgorithm> sself) { return sself->GetTotalNumberOfInputConnections(); }
extern "C" void vtk_algorithm_update(vtkNew<vtkAlgorithm> sself, int port) { sself->Update(port); }
extern "C" void vtk_algorithm_update(vtkNew<vtkAlgorithm> sself) { sself->Update(); }
extern "C" int vtk_algorithm_update_piece(vtkNew<vtkAlgorithm> sself, int piece, int numPieces, int ghostLevels, const int extents) { return sself->UpdatePiece(piece, numPieces, ghostLevels, extents); }
extern "C" int vtk_algorithm_update_extent(vtkNew<vtkAlgorithm> sself, const int extents) { return sself->UpdateExtent(extents); }
extern "C" int vtk_algorithm_update_time_step(vtkNew<vtkAlgorithm> sself, double time, int piece, int numPieces, int ghostLevels, const int extents) { return sself->UpdateTimeStep(time, piece, numPieces, ghostLevels, extents); }
extern "C" void vtk_algorithm_update_information(vtkNew<vtkAlgorithm> sself) { sself->UpdateInformation(); }
extern "C" void vtk_algorithm_update_data_object(vtkNew<vtkAlgorithm> sself) { sself->UpdateDataObject(); }
extern "C" void vtk_algorithm_propagate_update_extent(vtkNew<vtkAlgorithm> sself) { sself->PropagateUpdateExtent(); }
extern "C" void vtk_algorithm_update_whole_extent(vtkNew<vtkAlgorithm> sself) { sself->UpdateWholeExtent(); }
extern "C" void vtk_algorithm_convert_total_input_to_port_connection(vtkNew<vtkAlgorithm> sself, int ind, int port, int conn) { sself->ConvertTotalInputToPortConnection(ind, port, conn); }
extern "C" void vtk_algorithm_set_release_data_flag(vtkNew<vtkAlgorithm> sself, int p0) { sself->SetReleaseDataFlag(p0); }
extern "C" int vtk_algorithm_get_release_data_flag(vtkNew<vtkAlgorithm> sself) { return sself->GetReleaseDataFlag(); }
extern "C" void vtk_algorithm_release_data_flag_on(vtkNew<vtkAlgorithm> sself) { sself->ReleaseDataFlagOn(); }
extern "C" void vtk_algorithm_release_data_flag_off(vtkNew<vtkAlgorithm> sself) { sself->ReleaseDataFlagOff(); }
extern "C" int* vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself) { return sself->GetUpdateExtent(); }
extern "C" int* vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself, int port) { return sself->GetUpdateExtent(port); }
extern "C" void vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself, int x0, int x1, int y0, int y1, int z0, int z1) { sself->GetUpdateExtent(x0, x1, y0, y1, z0, z1); }
extern "C" void vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself, int port, int x0, int x1, int y0, int y1, int z0, int z1) { sself->GetUpdateExtent(port, x0, x1, y0, y1, z0, z1); }
extern "C" void vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself, int extent) { sself->GetUpdateExtent(extent); }
extern "C" void vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself, int port, int extent) { sself->GetUpdateExtent(port, extent); }
extern "C" int vtk_algorithm_get_update_piece(vtkNew<vtkAlgorithm> sself) { return sself->GetUpdatePiece(); }
extern "C" int vtk_algorithm_get_update_piece(vtkNew<vtkAlgorithm> sself, int port) { return sself->GetUpdatePiece(port); }
extern "C" int vtk_algorithm_get_update_number_of_pieces(vtkNew<vtkAlgorithm> sself) { return sself->GetUpdateNumberOfPieces(); }
extern "C" int vtk_algorithm_get_update_number_of_pieces(vtkNew<vtkAlgorithm> sself, int port) { return sself->GetUpdateNumberOfPieces(port); }
extern "C" int vtk_algorithm_get_update_ghost_level(vtkNew<vtkAlgorithm> sself) { return sself->GetUpdateGhostLevel(); }
extern "C" int vtk_algorithm_get_update_ghost_level(vtkNew<vtkAlgorithm> sself, int port) { return sself->GetUpdateGhostLevel(port); }
extern "C" vtkNew < vtkAlgorithmOutput > vtkAlgorithmOutput_new () {return vtkNew < vtkAlgorithmOutput > () ;}
extern "C" void vtkAlgorithmOutput_destructor (vtkNew < vtkAlgorithmOutput > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAlgorithmOutput_get_ptr (vtkNew < vtkAlgorithmOutput > sself) {return sself . GetPointer () ;}
extern "C" void vtk_algorithm_output_set_index(vtkNew<vtkAlgorithmOutput> sself, int index) { sself->SetIndex(index); }
extern "C" int vtk_algorithm_output_get_index(vtkNew<vtkAlgorithmOutput> sself) { return sself->GetIndex(); }
extern "C" vtkNew < vtkAnnotationLayersAlgorithm > vtkAnnotationLayersAlgorithm_new () {return vtkNew < vtkAnnotationLayersAlgorithm > () ;}
extern "C" void vtkAnnotationLayersAlgorithm_destructor (vtkNew < vtkAnnotationLayersAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAnnotationLayersAlgorithm_get_ptr (vtkNew < vtkAnnotationLayersAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkArrayDataAlgorithm > vtkArrayDataAlgorithm_new () {return vtkNew < vtkArrayDataAlgorithm > () ;}
extern "C" void vtkArrayDataAlgorithm_destructor (vtkNew < vtkArrayDataAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkArrayDataAlgorithm_get_ptr (vtkNew < vtkArrayDataAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkCachedStreamingDemandDrivenPipeline > vtkCachedStreamingDemandDrivenPipeline_new () {return vtkNew < vtkCachedStreamingDemandDrivenPipeline > () ;}
extern "C" void vtkCachedStreamingDemandDrivenPipeline_destructor (vtkNew < vtkCachedStreamingDemandDrivenPipeline > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCachedStreamingDemandDrivenPipeline_get_ptr (vtkNew < vtkCachedStreamingDemandDrivenPipeline > sself) {return sself . GetPointer () ;}
extern "C" void vtk_cached_streaming_demand_driven_pipeline_set_cache_size(vtkNew<vtkCachedStreamingDemandDrivenPipeline> sself, int size) { sself->SetCacheSize(size); }
extern "C" int vtk_cached_streaming_demand_driven_pipeline_get_cache_size(vtkNew<vtkCachedStreamingDemandDrivenPipeline> sself) { return sself->GetCacheSize(); }
extern "C" vtkNew < vtkCastToConcrete > vtkCastToConcrete_new () {return vtkNew < vtkCastToConcrete > () ;}
extern "C" void vtkCastToConcrete_destructor (vtkNew < vtkCastToConcrete > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCastToConcrete_get_ptr (vtkNew < vtkCastToConcrete > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkCompositeDataPipeline > vtkCompositeDataPipeline_new () {return vtkNew < vtkCompositeDataPipeline > () ;}
extern "C" void vtkCompositeDataPipeline_destructor (vtkNew < vtkCompositeDataPipeline > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCompositeDataPipeline_get_ptr (vtkNew < vtkCompositeDataPipeline > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkCompositeDataSetAlgorithm > vtkCompositeDataSetAlgorithm_new () {return vtkNew < vtkCompositeDataSetAlgorithm > () ;}
extern "C" void vtkCompositeDataSetAlgorithm_destructor (vtkNew < vtkCompositeDataSetAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCompositeDataSetAlgorithm_get_ptr (vtkNew < vtkCompositeDataSetAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkDataObjectAlgorithm > vtkDataObjectAlgorithm_new () {return vtkNew < vtkDataObjectAlgorithm > () ;}
extern "C" void vtkDataObjectAlgorithm_destructor (vtkNew < vtkDataObjectAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataObjectAlgorithm_get_ptr (vtkNew < vtkDataObjectAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkDataSetAlgorithm > vtkDataSetAlgorithm_new () {return vtkNew < vtkDataSetAlgorithm > () ;}
extern "C" void vtkDataSetAlgorithm_destructor (vtkNew < vtkDataSetAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataSetAlgorithm_get_ptr (vtkNew < vtkDataSetAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkDemandDrivenPipeline > vtkDemandDrivenPipeline_new () {return vtkNew < vtkDemandDrivenPipeline > () ;}
extern "C" void vtkDemandDrivenPipeline_destructor (vtkNew < vtkDemandDrivenPipeline > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDemandDrivenPipeline_get_ptr (vtkNew < vtkDemandDrivenPipeline > sself) {return sself . GetPointer () ;}
extern "C" unsigned long vtk_demand_driven_pipeline_get_pipeline_m_time(vtkNew<vtkDemandDrivenPipeline> sself) { return sself->GetPipelineMTime(); }
extern "C" int vtk_demand_driven_pipeline_set_release_data_flag(vtkNew<vtkDemandDrivenPipeline> sself, int port, int n) { return sself->SetReleaseDataFlag(port, n); }
extern "C" int vtk_demand_driven_pipeline_get_release_data_flag(vtkNew<vtkDemandDrivenPipeline> sself, int port) { return sself->GetReleaseDataFlag(port); }
extern "C" int vtk_demand_driven_pipeline_update_pipeline_m_time(vtkNew<vtkDemandDrivenPipeline> sself) { return sself->UpdatePipelineMTime(); }
extern "C" int vtk_demand_driven_pipeline_update_data_object(vtkNew<vtkDemandDrivenPipeline> sself) { return sself->UpdateDataObject(); }
extern "C" int vtk_demand_driven_pipeline_update_data(vtkNew<vtkDemandDrivenPipeline> sself, int outputPort) { return sself->UpdateData(outputPort); }
extern "C" vtkNew < vtkDirectedGraphAlgorithm > vtkDirectedGraphAlgorithm_new () {return vtkNew < vtkDirectedGraphAlgorithm > () ;}
extern "C" void vtkDirectedGraphAlgorithm_destructor (vtkNew < vtkDirectedGraphAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDirectedGraphAlgorithm_get_ptr (vtkNew < vtkDirectedGraphAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkEnsembleSource > vtkEnsembleSource_new () {return vtkNew < vtkEnsembleSource > () ;}
extern "C" void vtkEnsembleSource_destructor (vtkNew < vtkEnsembleSource > sself) {sself . Reset () ; return ;}
extern "C" void * vtkEnsembleSource_get_ptr (vtkNew < vtkEnsembleSource > sself) {return sself . GetPointer () ;}
extern "C" void vtk_ensemble_source_remove_all_members(vtkNew<vtkEnsembleSource> sself) { sself->RemoveAllMembers(); }
extern "C" unsigned int vtk_ensemble_source_get_number_of_members(vtkNew<vtkEnsembleSource> sself) { return sself->GetNumberOfMembers(); }
extern "C" void vtk_ensemble_source_set_current_member(vtkNew<vtkEnsembleSource> sself, unsigned int _arg) { sself->SetCurrentMember(_arg); }
extern "C" unsigned int vtk_ensemble_source_get_current_member(vtkNew<vtkEnsembleSource> sself) { return sself->GetCurrentMember(); }
extern "C" vtkNew < vtkExplicitStructuredGridAlgorithm > vtkExplicitStructuredGridAlgorithm_new () {return vtkNew < vtkExplicitStructuredGridAlgorithm > () ;}
extern "C" void vtkExplicitStructuredGridAlgorithm_destructor (vtkNew < vtkExplicitStructuredGridAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkExplicitStructuredGridAlgorithm_get_ptr (vtkNew < vtkExplicitStructuredGridAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkExtentRCBPartitioner > vtkExtentRCBPartitioner_new () {return vtkNew < vtkExtentRCBPartitioner > () ;}
extern "C" void vtkExtentRCBPartitioner_destructor (vtkNew < vtkExtentRCBPartitioner > sself) {sself . Reset () ; return ;}
extern "C" void * vtkExtentRCBPartitioner_get_ptr (vtkNew < vtkExtentRCBPartitioner > sself) {return sself . GetPointer () ;}
extern "C" void vtk_extent_rcb_partitioner_set_number_of_partitions(vtkNew<vtkExtentRCBPartitioner> sself, const int N) { sself->SetNumberOfPartitions(N); }
extern "C" void vtk_extent_rcb_partitioner_set_global_extent(vtkNew<vtkExtentRCBPartitioner> sself, int imin, int imax, int jmin, int jmax, int kmin, int kmax) { sself->SetGlobalExtent(imin, imax, jmin, jmax, kmin, kmax); }
extern "C" void vtk_extent_rcb_partitioner_set_global_extent(vtkNew<vtkExtentRCBPartitioner> sself, int ext) { sself->SetGlobalExtent(ext); }
extern "C" void vtk_extent_rcb_partitioner_set_duplicate_nodes(vtkNew<vtkExtentRCBPartitioner> sself, int _arg) { sself->SetDuplicateNodes(_arg); }
extern "C" int vtk_extent_rcb_partitioner_get_duplicate_nodes(vtkNew<vtkExtentRCBPartitioner> sself) { return sself->GetDuplicateNodes(); }
extern "C" void vtk_extent_rcb_partitioner_duplicate_nodes_on(vtkNew<vtkExtentRCBPartitioner> sself) { sself->DuplicateNodesOn(); }
extern "C" void vtk_extent_rcb_partitioner_duplicate_nodes_off(vtkNew<vtkExtentRCBPartitioner> sself) { sself->DuplicateNodesOff(); }
extern "C" void vtk_extent_rcb_partitioner_set_number_of_ghost_layers(vtkNew<vtkExtentRCBPartitioner> sself, int _arg) { sself->SetNumberOfGhostLayers(_arg); }
extern "C" int vtk_extent_rcb_partitioner_get_number_of_ghost_layers(vtkNew<vtkExtentRCBPartitioner> sself) { return sself->GetNumberOfGhostLayers(); }
extern "C" int vtk_extent_rcb_partitioner_get_num_extents(vtkNew<vtkExtentRCBPartitioner> sself) { return sself->GetNumExtents(); }
extern "C" void vtk_extent_rcb_partitioner_partition(vtkNew<vtkExtentRCBPartitioner> sself) { sself->Partition(); }
extern "C" void vtk_extent_rcb_partitioner_get_partition_extent(vtkNew<vtkExtentRCBPartitioner> sself, const int idx, int ext) { sself->GetPartitionExtent(idx, ext); }
extern "C" vtkNew < vtkExtentSplitter > vtkExtentSplitter_new () {return vtkNew < vtkExtentSplitter > () ;}
extern "C" void vtkExtentSplitter_destructor (vtkNew < vtkExtentSplitter > sself) {sself . Reset () ; return ;}
extern "C" void * vtkExtentSplitter_get_ptr (vtkNew < vtkExtentSplitter > sself) {return sself . GetPointer () ;}
extern "C" void vtk_extent_splitter_add_extent_source(vtkNew<vtkExtentSplitter> sself, int id, int priority, int x0, int x1, int y0, int y1, int z0, int z1) { sself->AddExtentSource(id, priority, x0, x1, y0, y1, z0, z1); }
extern "C" void vtk_extent_splitter_add_extent_source(vtkNew<vtkExtentSplitter> sself, int id, int priority, int extent) { sself->AddExtentSource(id, priority, extent); }
extern "C" void vtk_extent_splitter_remove_extent_source(vtkNew<vtkExtentSplitter> sself, int id) { sself->RemoveExtentSource(id); }
extern "C" void vtk_extent_splitter_remove_all_extent_sources(vtkNew<vtkExtentSplitter> sself) { sself->RemoveAllExtentSources(); }
extern "C" void vtk_extent_splitter_add_extent(vtkNew<vtkExtentSplitter> sself, int x0, int x1, int y0, int y1, int z0, int z1) { sself->AddExtent(x0, x1, y0, y1, z0, z1); }
extern "C" void vtk_extent_splitter_add_extent(vtkNew<vtkExtentSplitter> sself, int extent) { sself->AddExtent(extent); }
extern "C" int vtk_extent_splitter_compute_sub_extents(vtkNew<vtkExtentSplitter> sself) { return sself->ComputeSubExtents(); }
extern "C" int vtk_extent_splitter_get_number_of_sub_extents(vtkNew<vtkExtentSplitter> sself) { return sself->GetNumberOfSubExtents(); }
extern "C" int* vtk_extent_splitter_get_sub_extent(vtkNew<vtkExtentSplitter> sself, int index) { return sself->GetSubExtent(index); }
extern "C" void vtk_extent_splitter_get_sub_extent(vtkNew<vtkExtentSplitter> sself, int index, int extent) { sself->GetSubExtent(index, extent); }
extern "C" int vtk_extent_splitter_get_sub_extent_source(vtkNew<vtkExtentSplitter> sself, int index) { return sself->GetSubExtentSource(index); }
extern "C" int vtk_extent_splitter_get_point_mode(vtkNew<vtkExtentSplitter> sself) { return sself->GetPointMode(); }
extern "C" void vtk_extent_splitter_set_point_mode(vtkNew<vtkExtentSplitter> sself, int _arg) { sself->SetPointMode(_arg); }
extern "C" void vtk_extent_splitter_point_mode_on(vtkNew<vtkExtentSplitter> sself) { sself->PointModeOn(); }
extern "C" void vtk_extent_splitter_point_mode_off(vtkNew<vtkExtentSplitter> sself) { sself->PointModeOff(); }
extern "C" vtkNew < vtkExtentTranslator > vtkExtentTranslator_new () {return vtkNew < vtkExtentTranslator > () ;}
extern "C" void vtkExtentTranslator_destructor (vtkNew < vtkExtentTranslator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkExtentTranslator_get_ptr (vtkNew < vtkExtentTranslator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_extent_translator_set_whole_extent(vtkNew<vtkExtentTranslator> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->SetWholeExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_extent_translator_set_whole_extent(vtkNew<vtkExtentTranslator> sself, const int _arg) { sself->SetWholeExtent(_arg); }
extern "C" int* vtk_extent_translator_get_whole_extent(vtkNew<vtkExtentTranslator> sself) { return sself->GetWholeExtent(); }
extern "C" void vtk_extent_translator_get_whole_extent(vtkNew<vtkExtentTranslator> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->GetWholeExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_extent_translator_get_whole_extent(vtkNew<vtkExtentTranslator> sself, int _arg) { sself->GetWholeExtent(_arg); }
extern "C" void vtk_extent_translator_set_extent(vtkNew<vtkExtentTranslator> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->SetExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_extent_translator_set_extent(vtkNew<vtkExtentTranslator> sself, const int _arg) { sself->SetExtent(_arg); }
extern "C" int* vtk_extent_translator_get_extent(vtkNew<vtkExtentTranslator> sself) { return sself->GetExtent(); }
extern "C" void vtk_extent_translator_get_extent(vtkNew<vtkExtentTranslator> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->GetExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_extent_translator_get_extent(vtkNew<vtkExtentTranslator> sself, int _arg) { sself->GetExtent(_arg); }
extern "C" void vtk_extent_translator_set_piece(vtkNew<vtkExtentTranslator> sself, int _arg) { sself->SetPiece(_arg); }
extern "C" int vtk_extent_translator_get_piece(vtkNew<vtkExtentTranslator> sself) { return sself->GetPiece(); }
extern "C" void vtk_extent_translator_set_number_of_pieces(vtkNew<vtkExtentTranslator> sself, int _arg) { sself->SetNumberOfPieces(_arg); }
extern "C" int vtk_extent_translator_get_number_of_pieces(vtkNew<vtkExtentTranslator> sself) { return sself->GetNumberOfPieces(); }
extern "C" void vtk_extent_translator_set_ghost_level(vtkNew<vtkExtentTranslator> sself, int _arg) { sself->SetGhostLevel(_arg); }
extern "C" int vtk_extent_translator_get_ghost_level(vtkNew<vtkExtentTranslator> sself) { return sself->GetGhostLevel(); }
extern "C" int vtk_extent_translator_piece_to_extent(vtkNew<vtkExtentTranslator> sself) { return sself->PieceToExtent(); }
extern "C" int vtk_extent_translator_piece_to_extent_by_points(vtkNew<vtkExtentTranslator> sself) { return sself->PieceToExtentByPoints(); }
extern "C" int vtk_extent_translator_piece_to_extent_thread_safe(vtkNew<vtkExtentTranslator> sself, int piece, int numPieces, int ghostLevel, int wholeExtent, int resultExtent, int splitMode, int byPoints) { return sself->PieceToExtentThreadSafe(piece, numPieces, ghostLevel, wholeExtent, resultExtent, splitMode, byPoints); }
extern "C" void vtk_extent_translator_set_split_mode_to_block(vtkNew<vtkExtentTranslator> sself) { sself->SetSplitModeToBlock(); }
extern "C" void vtk_extent_translator_set_split_mode_to_x_slab(vtkNew<vtkExtentTranslator> sself) { sself->SetSplitModeToXSlab(); }
extern "C" void vtk_extent_translator_set_split_mode_to_y_slab(vtkNew<vtkExtentTranslator> sself) { sself->SetSplitModeToYSlab(); }
extern "C" void vtk_extent_translator_set_split_mode_to_z_slab(vtkNew<vtkExtentTranslator> sself) { sself->SetSplitModeToZSlab(); }
extern "C" int vtk_extent_translator_get_split_mode(vtkNew<vtkExtentTranslator> sself) { return sself->GetSplitMode(); }
extern "C" void vtk_extent_translator_set_split_path(vtkNew<vtkExtentTranslator> sself, int len, int splitpath) { sself->SetSplitPath(len, splitpath); }
extern "C" vtkNew < vtkGraphAlgorithm > vtkGraphAlgorithm_new () {return vtkNew < vtkGraphAlgorithm > () ;}
extern "C" void vtkGraphAlgorithm_destructor (vtkNew < vtkGraphAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkGraphAlgorithm_get_ptr (vtkNew < vtkGraphAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkHierarchicalBoxDataSetAlgorithm > vtkHierarchicalBoxDataSetAlgorithm_new () {return vtkNew < vtkHierarchicalBoxDataSetAlgorithm > () ;}
extern "C" void vtkHierarchicalBoxDataSetAlgorithm_destructor (vtkNew < vtkHierarchicalBoxDataSetAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHierarchicalBoxDataSetAlgorithm_get_ptr (vtkNew < vtkHierarchicalBoxDataSetAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkImageToStructuredGrid > vtkImageToStructuredGrid_new () {return vtkNew < vtkImageToStructuredGrid > () ;}
extern "C" void vtkImageToStructuredGrid_destructor (vtkNew < vtkImageToStructuredGrid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImageToStructuredGrid_get_ptr (vtkNew < vtkImageToStructuredGrid > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkImageToStructuredPoints > vtkImageToStructuredPoints_new () {return vtkNew < vtkImageToStructuredPoints > () ;}
extern "C" void vtkImageToStructuredPoints_destructor (vtkNew < vtkImageToStructuredPoints > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImageToStructuredPoints_get_ptr (vtkNew < vtkImageToStructuredPoints > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkMoleculeAlgorithm > vtkMoleculeAlgorithm_new () {return vtkNew < vtkMoleculeAlgorithm > () ;}
extern "C" void vtkMoleculeAlgorithm_destructor (vtkNew < vtkMoleculeAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMoleculeAlgorithm_get_ptr (vtkNew < vtkMoleculeAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkMultiBlockDataSetAlgorithm > vtkMultiBlockDataSetAlgorithm_new () {return vtkNew < vtkMultiBlockDataSetAlgorithm > () ;}
extern "C" void vtkMultiBlockDataSetAlgorithm_destructor (vtkNew < vtkMultiBlockDataSetAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMultiBlockDataSetAlgorithm_get_ptr (vtkNew < vtkMultiBlockDataSetAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkMultiTimeStepAlgorithm > vtkMultiTimeStepAlgorithm_new () {return vtkNew < vtkMultiTimeStepAlgorithm > () ;}
extern "C" void vtkMultiTimeStepAlgorithm_destructor (vtkNew < vtkMultiTimeStepAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMultiTimeStepAlgorithm_get_ptr (vtkNew < vtkMultiTimeStepAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkNonOverlappingAMRAlgorithm > vtkNonOverlappingAMRAlgorithm_new () {return vtkNew < vtkNonOverlappingAMRAlgorithm > () ;}
extern "C" void vtkNonOverlappingAMRAlgorithm_destructor (vtkNew < vtkNonOverlappingAMRAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkNonOverlappingAMRAlgorithm_get_ptr (vtkNew < vtkNonOverlappingAMRAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkOverlappingAMRAlgorithm > vtkOverlappingAMRAlgorithm_new () {return vtkNew < vtkOverlappingAMRAlgorithm > () ;}
extern "C" void vtkOverlappingAMRAlgorithm_destructor (vtkNew < vtkOverlappingAMRAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkOverlappingAMRAlgorithm_get_ptr (vtkNew < vtkOverlappingAMRAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkPassInputTypeAlgorithm > vtkPassInputTypeAlgorithm_new () {return vtkNew < vtkPassInputTypeAlgorithm > () ;}
extern "C" void vtkPassInputTypeAlgorithm_destructor (vtkNew < vtkPassInputTypeAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPassInputTypeAlgorithm_get_ptr (vtkNew < vtkPassInputTypeAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkPiecewiseFunctionAlgorithm > vtkPiecewiseFunctionAlgorithm_new () {return vtkNew < vtkPiecewiseFunctionAlgorithm > () ;}
extern "C" void vtkPiecewiseFunctionAlgorithm_destructor (vtkNew < vtkPiecewiseFunctionAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPiecewiseFunctionAlgorithm_get_ptr (vtkNew < vtkPiecewiseFunctionAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkPiecewiseFunctionShiftScale > vtkPiecewiseFunctionShiftScale_new () {return vtkNew < vtkPiecewiseFunctionShiftScale > () ;}
extern "C" void vtkPiecewiseFunctionShiftScale_destructor (vtkNew < vtkPiecewiseFunctionShiftScale > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPiecewiseFunctionShiftScale_get_ptr (vtkNew < vtkPiecewiseFunctionShiftScale > sself) {return sself . GetPointer () ;}
extern "C" void vtk_piecewise_function_shift_scale_set_position_shift(vtkNew<vtkPiecewiseFunctionShiftScale> sself, double _arg) { sself->SetPositionShift(_arg); }
extern "C" void vtk_piecewise_function_shift_scale_set_position_scale(vtkNew<vtkPiecewiseFunctionShiftScale> sself, double _arg) { sself->SetPositionScale(_arg); }
extern "C" void vtk_piecewise_function_shift_scale_set_value_shift(vtkNew<vtkPiecewiseFunctionShiftScale> sself, double _arg) { sself->SetValueShift(_arg); }
extern "C" void vtk_piecewise_function_shift_scale_set_value_scale(vtkNew<vtkPiecewiseFunctionShiftScale> sself, double _arg) { sself->SetValueScale(_arg); }
extern "C" double vtk_piecewise_function_shift_scale_get_position_shift(vtkNew<vtkPiecewiseFunctionShiftScale> sself) { return sself->GetPositionShift(); }
extern "C" double vtk_piecewise_function_shift_scale_get_position_scale(vtkNew<vtkPiecewiseFunctionShiftScale> sself) { return sself->GetPositionScale(); }
extern "C" double vtk_piecewise_function_shift_scale_get_value_shift(vtkNew<vtkPiecewiseFunctionShiftScale> sself) { return sself->GetValueShift(); }
extern "C" double vtk_piecewise_function_shift_scale_get_value_scale(vtkNew<vtkPiecewiseFunctionShiftScale> sself) { return sself->GetValueScale(); }
extern "C" vtkNew < vtkPointSetAlgorithm > vtkPointSetAlgorithm_new () {return vtkNew < vtkPointSetAlgorithm > () ;}
extern "C" void vtkPointSetAlgorithm_destructor (vtkNew < vtkPointSetAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPointSetAlgorithm_get_ptr (vtkNew < vtkPointSetAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkPolyDataAlgorithm > vtkPolyDataAlgorithm_new () {return vtkNew < vtkPolyDataAlgorithm > () ;}
extern "C" void vtkPolyDataAlgorithm_destructor (vtkNew < vtkPolyDataAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPolyDataAlgorithm_get_ptr (vtkNew < vtkPolyDataAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkProgressObserver > vtkProgressObserver_new () {return vtkNew < vtkProgressObserver > () ;}
extern "C" void vtkProgressObserver_destructor (vtkNew < vtkProgressObserver > sself) {sself . Reset () ; return ;}
extern "C" void * vtkProgressObserver_get_ptr (vtkNew < vtkProgressObserver > sself) {return sself . GetPointer () ;}
extern "C" void vtk_progress_observer_update_progress(vtkNew<vtkProgressObserver> sself, double amount) { sself->UpdateProgress(amount); }
extern "C" double vtk_progress_observer_get_progress(vtkNew<vtkProgressObserver> sself) { return sself->GetProgress(); }
extern "C" vtkNew < vtkReaderExecutive > vtkReaderExecutive_new () {return vtkNew < vtkReaderExecutive > () ;}
extern "C" void vtkReaderExecutive_destructor (vtkNew < vtkReaderExecutive > sself) {sself . Reset () ; return ;}
extern "C" void * vtkReaderExecutive_get_ptr (vtkNew < vtkReaderExecutive > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkRectilinearGridAlgorithm > vtkRectilinearGridAlgorithm_new () {return vtkNew < vtkRectilinearGridAlgorithm > () ;}
extern "C" void vtkRectilinearGridAlgorithm_destructor (vtkNew < vtkRectilinearGridAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkRectilinearGridAlgorithm_get_ptr (vtkNew < vtkRectilinearGridAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkSMPProgressObserver > vtkSMPProgressObserver_new () {return vtkNew < vtkSMPProgressObserver > () ;}
extern "C" void vtkSMPProgressObserver_destructor (vtkNew < vtkSMPProgressObserver > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSMPProgressObserver_get_ptr (vtkNew < vtkSMPProgressObserver > sself) {return sself . GetPointer () ;}
extern "C" void vtk_smp_progress_observer_update_progress(vtkNew<vtkSMPProgressObserver> sself, double progress) { sself->UpdateProgress(progress); }
extern "C" vtkNew < vtkSelectionAlgorithm > vtkSelectionAlgorithm_new () {return vtkNew < vtkSelectionAlgorithm > () ;}
extern "C" void vtkSelectionAlgorithm_destructor (vtkNew < vtkSelectionAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSelectionAlgorithm_get_ptr (vtkNew < vtkSelectionAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkSimpleScalarTree > vtkSimpleScalarTree_new () {return vtkNew < vtkSimpleScalarTree > () ;}
extern "C" void vtkSimpleScalarTree_destructor (vtkNew < vtkSimpleScalarTree > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSimpleScalarTree_get_ptr (vtkNew < vtkSimpleScalarTree > sself) {return sself . GetPointer () ;}
extern "C" void vtk_simple_scalar_tree_set_branching_factor(vtkNew<vtkSimpleScalarTree> sself, int _arg) { sself->SetBranchingFactor(_arg); }
extern "C" int vtk_simple_scalar_tree_get_branching_factor_min_value(vtkNew<vtkSimpleScalarTree> sself) { return sself->GetBranchingFactorMinValue(); }
extern "C" int vtk_simple_scalar_tree_get_branching_factor_max_value(vtkNew<vtkSimpleScalarTree> sself) { return sself->GetBranchingFactorMaxValue(); }
extern "C" int vtk_simple_scalar_tree_get_branching_factor(vtkNew<vtkSimpleScalarTree> sself) { return sself->GetBranchingFactor(); }
extern "C" int vtk_simple_scalar_tree_get_level(vtkNew<vtkSimpleScalarTree> sself) { return sself->GetLevel(); }
extern "C" void vtk_simple_scalar_tree_set_max_level(vtkNew<vtkSimpleScalarTree> sself, int _arg) { sself->SetMaxLevel(_arg); }
extern "C" int vtk_simple_scalar_tree_get_max_level_min_value(vtkNew<vtkSimpleScalarTree> sself) { return sself->GetMaxLevelMinValue(); }
extern "C" int vtk_simple_scalar_tree_get_max_level_max_value(vtkNew<vtkSimpleScalarTree> sself) { return sself->GetMaxLevelMaxValue(); }
extern "C" int vtk_simple_scalar_tree_get_max_level(vtkNew<vtkSimpleScalarTree> sself) { return sself->GetMaxLevel(); }
extern "C" void vtk_simple_scalar_tree_build_tree(vtkNew<vtkSimpleScalarTree> sself) { sself->BuildTree(); }
extern "C" void vtk_simple_scalar_tree_initialize(vtkNew<vtkSimpleScalarTree> sself) { sself->Initialize(); }
extern "C" void vtk_simple_scalar_tree_init_traversal(vtkNew<vtkSimpleScalarTree> sself, double scalarValue) { sself->InitTraversal(scalarValue); }
extern "C" long long vtk_simple_scalar_tree_get_number_of_cell_batches(vtkNew<vtkSimpleScalarTree> sself, double scalarValue) { return sself->GetNumberOfCellBatches(scalarValue); }
extern "C" const long long* vtk_simple_scalar_tree_get_cell_batch(vtkNew<vtkSimpleScalarTree> sself, long long batchNum, long long numCells) { return sself->GetCellBatch(batchNum, numCells); }
extern "C" vtkNew < vtkSpanSpace > vtkSpanSpace_new () {return vtkNew < vtkSpanSpace > () ;}
extern "C" void vtkSpanSpace_destructor (vtkNew < vtkSpanSpace > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSpanSpace_get_ptr (vtkNew < vtkSpanSpace > sself) {return sself . GetPointer () ;}
extern "C" void vtk_span_space_set_scalar_range(vtkNew<vtkSpanSpace> sself, double _arg1, double _arg2) { sself->SetScalarRange(_arg1, _arg2); }
extern "C" void vtk_span_space_set_scalar_range(vtkNew<vtkSpanSpace> sself, const double _arg) { sself->SetScalarRange(_arg); }
extern "C" double* vtk_span_space_get_scalar_range(vtkNew<vtkSpanSpace> sself) { return sself->GetScalarRange(); }
extern "C" void vtk_span_space_get_scalar_range(vtkNew<vtkSpanSpace> sself, double data) { sself->GetScalarRange(data); }
extern "C" void vtk_span_space_set_compute_scalar_range(vtkNew<vtkSpanSpace> sself, int _arg) { sself->SetComputeScalarRange(_arg); }
extern "C" int vtk_span_space_get_compute_scalar_range(vtkNew<vtkSpanSpace> sself) { return sself->GetComputeScalarRange(); }
extern "C" void vtk_span_space_compute_scalar_range_on(vtkNew<vtkSpanSpace> sself) { sself->ComputeScalarRangeOn(); }
extern "C" void vtk_span_space_compute_scalar_range_off(vtkNew<vtkSpanSpace> sself) { sself->ComputeScalarRangeOff(); }
extern "C" void vtk_span_space_set_resolution(vtkNew<vtkSpanSpace> sself, long long _arg) { sself->SetResolution(_arg); }
extern "C" long long vtk_span_space_get_resolution_min_value(vtkNew<vtkSpanSpace> sself) { return sself->GetResolutionMinValue(); }
extern "C" long long vtk_span_space_get_resolution_max_value(vtkNew<vtkSpanSpace> sself) { return sself->GetResolutionMaxValue(); }
extern "C" long long vtk_span_space_get_resolution(vtkNew<vtkSpanSpace> sself) { return sself->GetResolution(); }
extern "C" void vtk_span_space_set_compute_resolution(vtkNew<vtkSpanSpace> sself, int _arg) { sself->SetComputeResolution(_arg); }
extern "C" int vtk_span_space_get_compute_resolution(vtkNew<vtkSpanSpace> sself) { return sself->GetComputeResolution(); }
extern "C" void vtk_span_space_compute_resolution_on(vtkNew<vtkSpanSpace> sself) { sself->ComputeResolutionOn(); }
extern "C" void vtk_span_space_compute_resolution_off(vtkNew<vtkSpanSpace> sself) { sself->ComputeResolutionOff(); }
extern "C" void vtk_span_space_set_number_of_cells_per_bucket(vtkNew<vtkSpanSpace> sself, int _arg) { sself->SetNumberOfCellsPerBucket(_arg); }
extern "C" int vtk_span_space_get_number_of_cells_per_bucket_min_value(vtkNew<vtkSpanSpace> sself) { return sself->GetNumberOfCellsPerBucketMinValue(); }
extern "C" int vtk_span_space_get_number_of_cells_per_bucket_max_value(vtkNew<vtkSpanSpace> sself) { return sself->GetNumberOfCellsPerBucketMaxValue(); }
extern "C" int vtk_span_space_get_number_of_cells_per_bucket(vtkNew<vtkSpanSpace> sself) { return sself->GetNumberOfCellsPerBucket(); }
extern "C" void vtk_span_space_initialize(vtkNew<vtkSpanSpace> sself) { sself->Initialize(); }
extern "C" void vtk_span_space_build_tree(vtkNew<vtkSpanSpace> sself) { sself->BuildTree(); }
extern "C" void vtk_span_space_init_traversal(vtkNew<vtkSpanSpace> sself, double scalarValue) { sself->InitTraversal(scalarValue); }
extern "C" long long vtk_span_space_get_number_of_cell_batches(vtkNew<vtkSpanSpace> sself, double scalarValue) { return sself->GetNumberOfCellBatches(scalarValue); }
extern "C" const long long* vtk_span_space_get_cell_batch(vtkNew<vtkSpanSpace> sself, long long batchNum, long long numCells) { return sself->GetCellBatch(batchNum, numCells); }
extern "C" void vtk_span_space_set_batch_size(vtkNew<vtkSpanSpace> sself, long long _arg) { sself->SetBatchSize(_arg); }
extern "C" long long vtk_span_space_get_batch_size_min_value(vtkNew<vtkSpanSpace> sself) { return sself->GetBatchSizeMinValue(); }
extern "C" long long vtk_span_space_get_batch_size_max_value(vtkNew<vtkSpanSpace> sself) { return sself->GetBatchSizeMaxValue(); }
extern "C" long long vtk_span_space_get_batch_size(vtkNew<vtkSpanSpace> sself) { return sself->GetBatchSize(); }
extern "C" vtkNew < vtkSphereTree > vtkSphereTree_new () {return vtkNew < vtkSphereTree > () ;}
extern "C" void vtkSphereTree_destructor (vtkNew < vtkSphereTree > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSphereTree_get_ptr (vtkNew < vtkSphereTree > sself) {return sself . GetPointer () ;}
extern "C" void vtk_sphere_tree_build(vtkNew<vtkSphereTree> sself) { sself->Build(); }
extern "C" void vtk_sphere_tree_set_build_hierarchy(vtkNew<vtkSphereTree> sself, bool _arg) { sself->SetBuildHierarchy(_arg); }
extern "C" bool vtk_sphere_tree_get_build_hierarchy(vtkNew<vtkSphereTree> sself) { return sself->GetBuildHierarchy(); }
extern "C" void vtk_sphere_tree_build_hierarchy_on(vtkNew<vtkSphereTree> sself) { sself->BuildHierarchyOn(); }
extern "C" void vtk_sphere_tree_build_hierarchy_off(vtkNew<vtkSphereTree> sself) { sself->BuildHierarchyOff(); }
extern "C" const unsigned char* vtk_sphere_tree_select_point(vtkNew<vtkSphereTree> sself, double point, long long numSelected) { return sself->SelectPoint(point, numSelected); }
extern "C" const unsigned char* vtk_sphere_tree_select_line(vtkNew<vtkSphereTree> sself, double origin, double ray, long long numSelected) { return sself->SelectLine(origin, ray, numSelected); }
extern "C" const unsigned char* vtk_sphere_tree_select_plane(vtkNew<vtkSphereTree> sself, double origin, double normal, long long numSelected) { return sself->SelectPlane(origin, normal, numSelected); }
extern "C" void vtk_sphere_tree_set_resolution(vtkNew<vtkSphereTree> sself, int _arg) { sself->SetResolution(_arg); }
extern "C" int vtk_sphere_tree_get_resolution_min_value(vtkNew<vtkSphereTree> sself) { return sself->GetResolutionMinValue(); }
extern "C" int vtk_sphere_tree_get_resolution_max_value(vtkNew<vtkSphereTree> sself) { return sself->GetResolutionMaxValue(); }
extern "C" int vtk_sphere_tree_get_resolution(vtkNew<vtkSphereTree> sself) { return sself->GetResolution(); }
extern "C" void vtk_sphere_tree_set_max_level(vtkNew<vtkSphereTree> sself, int _arg) { sself->SetMaxLevel(_arg); }
extern "C" int vtk_sphere_tree_get_max_level_min_value(vtkNew<vtkSphereTree> sself) { return sself->GetMaxLevelMinValue(); }
extern "C" int vtk_sphere_tree_get_max_level_max_value(vtkNew<vtkSphereTree> sself) { return sself->GetMaxLevelMaxValue(); }
extern "C" int vtk_sphere_tree_get_max_level(vtkNew<vtkSphereTree> sself) { return sself->GetMaxLevel(); }
extern "C" int vtk_sphere_tree_get_number_of_levels(vtkNew<vtkSphereTree> sself) { return sself->GetNumberOfLevels(); }
extern "C" const double* vtk_sphere_tree_get_cell_spheres(vtkNew<vtkSphereTree> sself) { return sself->GetCellSpheres(); }
extern "C" const double* vtk_sphere_tree_get_tree_spheres(vtkNew<vtkSphereTree> sself, int level, long long numSpheres) { return sself->GetTreeSpheres(level, numSpheres); }
extern "C" vtkNew < vtkStreamingDemandDrivenPipeline > vtkStreamingDemandDrivenPipeline_new () {return vtkNew < vtkStreamingDemandDrivenPipeline > () ;}
extern "C" void vtkStreamingDemandDrivenPipeline_destructor (vtkNew < vtkStreamingDemandDrivenPipeline > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStreamingDemandDrivenPipeline_get_ptr (vtkNew < vtkStreamingDemandDrivenPipeline > sself) {return sself . GetPointer () ;}
extern "C" int vtk_streaming_demand_driven_pipeline_update(vtkNew<vtkStreamingDemandDrivenPipeline> sself) { return sself->Update(); }
extern "C" int vtk_streaming_demand_driven_pipeline_update_whole_extent(vtkNew<vtkStreamingDemandDrivenPipeline> sself) { return sself->UpdateWholeExtent(); }
extern "C" int vtk_streaming_demand_driven_pipeline_propagate_update_extent(vtkNew<vtkStreamingDemandDrivenPipeline> sself, int outputPort) { return sself->PropagateUpdateExtent(outputPort); }
extern "C" int vtk_streaming_demand_driven_pipeline_propagate_time(vtkNew<vtkStreamingDemandDrivenPipeline> sself, int outputPort) { return sself->PropagateTime(outputPort); }
extern "C" int vtk_streaming_demand_driven_pipeline_update_time_dependent_information(vtkNew<vtkStreamingDemandDrivenPipeline> sself, int outputPort) { return sself->UpdateTimeDependentInformation(outputPort); }
extern "C" int vtk_streaming_demand_driven_pipeline_set_request_exact_extent(vtkNew<vtkStreamingDemandDrivenPipeline> sself, int port, int flag) { return sself->SetRequestExactExtent(port, flag); }
extern "C" int vtk_streaming_demand_driven_pipeline_get_request_exact_extent(vtkNew<vtkStreamingDemandDrivenPipeline> sself, int port) { return sself->GetRequestExactExtent(port); }
extern "C" vtkNew < vtkStructuredGridAlgorithm > vtkStructuredGridAlgorithm_new () {return vtkNew < vtkStructuredGridAlgorithm > () ;}
extern "C" void vtkStructuredGridAlgorithm_destructor (vtkNew < vtkStructuredGridAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStructuredGridAlgorithm_get_ptr (vtkNew < vtkStructuredGridAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTableAlgorithm > vtkTableAlgorithm_new () {return vtkNew < vtkTableAlgorithm > () ;}
extern "C" void vtkTableAlgorithm_destructor (vtkNew < vtkTableAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTableAlgorithm_get_ptr (vtkNew < vtkTableAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkThreadedCompositeDataPipeline > vtkThreadedCompositeDataPipeline_new () {return vtkNew < vtkThreadedCompositeDataPipeline > () ;}
extern "C" void vtkThreadedCompositeDataPipeline_destructor (vtkNew < vtkThreadedCompositeDataPipeline > sself) {sself . Reset () ; return ;}
extern "C" void * vtkThreadedCompositeDataPipeline_get_ptr (vtkNew < vtkThreadedCompositeDataPipeline > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTreeAlgorithm > vtkTreeAlgorithm_new () {return vtkNew < vtkTreeAlgorithm > () ;}
extern "C" void vtkTreeAlgorithm_destructor (vtkNew < vtkTreeAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTreeAlgorithm_get_ptr (vtkNew < vtkTreeAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTrivialConsumer > vtkTrivialConsumer_new () {return vtkNew < vtkTrivialConsumer > () ;}
extern "C" void vtkTrivialConsumer_destructor (vtkNew < vtkTrivialConsumer > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTrivialConsumer_get_ptr (vtkNew < vtkTrivialConsumer > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTrivialProducer > vtkTrivialProducer_new () {return vtkNew < vtkTrivialProducer > () ;}
extern "C" void vtkTrivialProducer_destructor (vtkNew < vtkTrivialProducer > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTrivialProducer_get_ptr (vtkNew < vtkTrivialProducer > sself) {return sself . GetPointer () ;}
extern "C" unsigned long vtk_trivial_producer_get_m_time(vtkNew<vtkTrivialProducer> sself) { return sself->GetMTime(); }
extern "C" void vtk_trivial_producer_set_whole_extent(vtkNew<vtkTrivialProducer> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->SetWholeExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_trivial_producer_set_whole_extent(vtkNew<vtkTrivialProducer> sself, const int _arg) { sself->SetWholeExtent(_arg); }
extern "C" int* vtk_trivial_producer_get_whole_extent(vtkNew<vtkTrivialProducer> sself) { return sself->GetWholeExtent(); }
extern "C" void vtk_trivial_producer_get_whole_extent(vtkNew<vtkTrivialProducer> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->GetWholeExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_trivial_producer_get_whole_extent(vtkNew<vtkTrivialProducer> sself, int _arg) { sself->GetWholeExtent(_arg); }
extern "C" vtkNew < vtkUndirectedGraphAlgorithm > vtkUndirectedGraphAlgorithm_new () {return vtkNew < vtkUndirectedGraphAlgorithm > () ;}
extern "C" void vtkUndirectedGraphAlgorithm_destructor (vtkNew < vtkUndirectedGraphAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUndirectedGraphAlgorithm_get_ptr (vtkNew < vtkUndirectedGraphAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkUniformGridAMRAlgorithm > vtkUniformGridAMRAlgorithm_new () {return vtkNew < vtkUniformGridAMRAlgorithm > () ;}
extern "C" void vtkUniformGridAMRAlgorithm_destructor (vtkNew < vtkUniformGridAMRAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUniformGridAMRAlgorithm_get_ptr (vtkNew < vtkUniformGridAMRAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkUniformGridPartitioner > vtkUniformGridPartitioner_new () {return vtkNew < vtkUniformGridPartitioner > () ;}
extern "C" void vtkUniformGridPartitioner_destructor (vtkNew < vtkUniformGridPartitioner > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUniformGridPartitioner_get_ptr (vtkNew < vtkUniformGridPartitioner > sself) {return sself . GetPointer () ;}
extern "C" int vtk_uniform_grid_partitioner_get_number_of_partitions(vtkNew<vtkUniformGridPartitioner> sself) { return sself->GetNumberOfPartitions(); }
extern "C" void vtk_uniform_grid_partitioner_set_number_of_partitions(vtkNew<vtkUniformGridPartitioner> sself, int _arg) { sself->SetNumberOfPartitions(_arg); }
extern "C" int vtk_uniform_grid_partitioner_get_number_of_ghost_layers(vtkNew<vtkUniformGridPartitioner> sself) { return sself->GetNumberOfGhostLayers(); }
extern "C" void vtk_uniform_grid_partitioner_set_number_of_ghost_layers(vtkNew<vtkUniformGridPartitioner> sself, int _arg) { sself->SetNumberOfGhostLayers(_arg); }
extern "C" int vtk_uniform_grid_partitioner_get_duplicate_nodes(vtkNew<vtkUniformGridPartitioner> sself) { return sself->GetDuplicateNodes(); }
extern "C" void vtk_uniform_grid_partitioner_set_duplicate_nodes(vtkNew<vtkUniformGridPartitioner> sself, int _arg) { sself->SetDuplicateNodes(_arg); }
extern "C" void vtk_uniform_grid_partitioner_duplicate_nodes_on(vtkNew<vtkUniformGridPartitioner> sself) { sself->DuplicateNodesOn(); }
extern "C" void vtk_uniform_grid_partitioner_duplicate_nodes_off(vtkNew<vtkUniformGridPartitioner> sself) { sself->DuplicateNodesOff(); }
extern "C" vtkNew < vtkUnstructuredGridAlgorithm > vtkUnstructuredGridAlgorithm_new () {return vtkNew < vtkUnstructuredGridAlgorithm > () ;}
extern "C" void vtkUnstructuredGridAlgorithm_destructor (vtkNew < vtkUnstructuredGridAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUnstructuredGridAlgorithm_get_ptr (vtkNew < vtkUnstructuredGridAlgorithm > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkUnstructuredGridBaseAlgorithm > vtkUnstructuredGridBaseAlgorithm_new () {return vtkNew < vtkUnstructuredGridBaseAlgorithm > () ;}
extern "C" void vtkUnstructuredGridBaseAlgorithm_destructor (vtkNew < vtkUnstructuredGridBaseAlgorithm > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUnstructuredGridBaseAlgorithm_get_ptr (vtkNew < vtkUnstructuredGridBaseAlgorithm > sself) {return sself . GetPointer () ;}
