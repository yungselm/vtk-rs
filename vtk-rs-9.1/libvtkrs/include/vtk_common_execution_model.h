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

// Declare exported functions
extern "C" vtkNew < vtkAlgorithm > vtkAlgorithm_new () ;
extern "C" void vtkAlgorithm_destructor (vtkNew < vtkAlgorithm > sself) ;
extern "C" void * vtkAlgorithm_get_ptr (vtkNew < vtkAlgorithm > sself) ;
extern "C" int vtk_algorithm_has_executive(vtkNew<vtkAlgorithm> sself);
extern "C" int vtk_algorithm_get_number_of_input_ports(vtkNew<vtkAlgorithm> sself);
extern "C" int vtk_algorithm_get_number_of_output_ports(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_set_abort_execute(vtkNew<vtkAlgorithm> sself, int _arg);
extern "C" int vtk_algorithm_get_abort_execute(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_abort_execute_on(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_abort_execute_off(vtkNew<vtkAlgorithm> sself);
extern "C" double vtk_algorithm_get_progress(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_set_progress(vtkNew<vtkAlgorithm> sself, double p0);
extern "C" void vtk_algorithm_update_progress(vtkNew<vtkAlgorithm> sself, double amount);
extern "C" void vtk_algorithm_set_progress_shift_scale(vtkNew<vtkAlgorithm> sself, double shift, double scale);
extern "C" double vtk_algorithm_get_progress_shift(vtkNew<vtkAlgorithm> sself);
extern "C" double vtk_algorithm_get_progress_scale(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_set_progress_text(vtkNew<vtkAlgorithm> sself, const char ptext);
extern "C" char* vtk_algorithm_get_progress_text(vtkNew<vtkAlgorithm> sself);
extern "C" unsigned long vtk_algorithm_get_error_code(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_set_input_array_to_process(vtkNew<vtkAlgorithm> sself, int idx, int port, int connection, int fieldAssociation, const char name);
extern "C" void vtk_algorithm_set_input_array_to_process(vtkNew<vtkAlgorithm> sself, int idx, int port, int connection, int fieldAssociation, int fieldAttributeType);
extern "C" void vtk_algorithm_set_input_array_to_process(vtkNew<vtkAlgorithm> sself, int idx, int port, int connection, const char fieldAssociation, const char attributeTypeorName);
extern "C" void vtk_algorithm_remove_all_inputs(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_remove_input_connection(vtkNew<vtkAlgorithm> sself, int port, int idx);
extern "C" void vtk_algorithm_remove_all_input_connections(vtkNew<vtkAlgorithm> sself, int port);
extern "C" int vtk_algorithm_get_number_of_input_connections(vtkNew<vtkAlgorithm> sself, int port);
extern "C" int vtk_algorithm_get_total_number_of_input_connections(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_update(vtkNew<vtkAlgorithm> sself, int port);
extern "C" void vtk_algorithm_update(vtkNew<vtkAlgorithm> sself);
extern "C" int vtk_algorithm_update_piece(vtkNew<vtkAlgorithm> sself, int piece, int numPieces, int ghostLevels, const int extents);
extern "C" int vtk_algorithm_update_extent(vtkNew<vtkAlgorithm> sself, const int extents);
extern "C" int vtk_algorithm_update_time_step(vtkNew<vtkAlgorithm> sself, double time, int piece, int numPieces, int ghostLevels, const int extents);
extern "C" void vtk_algorithm_update_information(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_update_data_object(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_propagate_update_extent(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_update_whole_extent(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_convert_total_input_to_port_connection(vtkNew<vtkAlgorithm> sself, int ind, int port, int conn);
extern "C" void vtk_algorithm_set_release_data_flag(vtkNew<vtkAlgorithm> sself, int p0);
extern "C" int vtk_algorithm_get_release_data_flag(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_release_data_flag_on(vtkNew<vtkAlgorithm> sself);
extern "C" void vtk_algorithm_release_data_flag_off(vtkNew<vtkAlgorithm> sself);
extern "C" int* vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself);
extern "C" int* vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself, int port);
extern "C" void vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself, int x0, int x1, int y0, int y1, int z0, int z1);
extern "C" void vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself, int port, int x0, int x1, int y0, int y1, int z0, int z1);
extern "C" void vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself, int extent);
extern "C" void vtk_algorithm_get_update_extent(vtkNew<vtkAlgorithm> sself, int port, int extent);
extern "C" int vtk_algorithm_get_update_piece(vtkNew<vtkAlgorithm> sself);
extern "C" int vtk_algorithm_get_update_piece(vtkNew<vtkAlgorithm> sself, int port);
extern "C" int vtk_algorithm_get_update_number_of_pieces(vtkNew<vtkAlgorithm> sself);
extern "C" int vtk_algorithm_get_update_number_of_pieces(vtkNew<vtkAlgorithm> sself, int port);
extern "C" int vtk_algorithm_get_update_ghost_level(vtkNew<vtkAlgorithm> sself);
extern "C" int vtk_algorithm_get_update_ghost_level(vtkNew<vtkAlgorithm> sself, int port);
extern "C" vtkNew < vtkAlgorithmOutput > vtkAlgorithmOutput_new () ;
extern "C" void vtkAlgorithmOutput_destructor (vtkNew < vtkAlgorithmOutput > sself) ;
extern "C" void * vtkAlgorithmOutput_get_ptr (vtkNew < vtkAlgorithmOutput > sself) ;
extern "C" void vtk_algorithm_output_set_index(vtkNew<vtkAlgorithmOutput> sself, int index);
extern "C" int vtk_algorithm_output_get_index(vtkNew<vtkAlgorithmOutput> sself);
extern "C" vtkNew < vtkAnnotationLayersAlgorithm > vtkAnnotationLayersAlgorithm_new () ;
extern "C" void vtkAnnotationLayersAlgorithm_destructor (vtkNew < vtkAnnotationLayersAlgorithm > sself) ;
extern "C" void * vtkAnnotationLayersAlgorithm_get_ptr (vtkNew < vtkAnnotationLayersAlgorithm > sself) ;
extern "C" vtkNew < vtkArrayDataAlgorithm > vtkArrayDataAlgorithm_new () ;
extern "C" void vtkArrayDataAlgorithm_destructor (vtkNew < vtkArrayDataAlgorithm > sself) ;
extern "C" void * vtkArrayDataAlgorithm_get_ptr (vtkNew < vtkArrayDataAlgorithm > sself) ;
extern "C" vtkNew < vtkCachedStreamingDemandDrivenPipeline > vtkCachedStreamingDemandDrivenPipeline_new () ;
extern "C" void vtkCachedStreamingDemandDrivenPipeline_destructor (vtkNew < vtkCachedStreamingDemandDrivenPipeline > sself) ;
extern "C" void * vtkCachedStreamingDemandDrivenPipeline_get_ptr (vtkNew < vtkCachedStreamingDemandDrivenPipeline > sself) ;
extern "C" void vtk_cached_streaming_demand_driven_pipeline_set_cache_size(vtkNew<vtkCachedStreamingDemandDrivenPipeline> sself, int size);
extern "C" int vtk_cached_streaming_demand_driven_pipeline_get_cache_size(vtkNew<vtkCachedStreamingDemandDrivenPipeline> sself);
extern "C" vtkNew < vtkCastToConcrete > vtkCastToConcrete_new () ;
extern "C" void vtkCastToConcrete_destructor (vtkNew < vtkCastToConcrete > sself) ;
extern "C" void * vtkCastToConcrete_get_ptr (vtkNew < vtkCastToConcrete > sself) ;
extern "C" vtkNew < vtkCompositeDataPipeline > vtkCompositeDataPipeline_new () ;
extern "C" void vtkCompositeDataPipeline_destructor (vtkNew < vtkCompositeDataPipeline > sself) ;
extern "C" void * vtkCompositeDataPipeline_get_ptr (vtkNew < vtkCompositeDataPipeline > sself) ;
extern "C" vtkNew < vtkCompositeDataSetAlgorithm > vtkCompositeDataSetAlgorithm_new () ;
extern "C" void vtkCompositeDataSetAlgorithm_destructor (vtkNew < vtkCompositeDataSetAlgorithm > sself) ;
extern "C" void * vtkCompositeDataSetAlgorithm_get_ptr (vtkNew < vtkCompositeDataSetAlgorithm > sself) ;
extern "C" vtkNew < vtkDataObjectAlgorithm > vtkDataObjectAlgorithm_new () ;
extern "C" void vtkDataObjectAlgorithm_destructor (vtkNew < vtkDataObjectAlgorithm > sself) ;
extern "C" void * vtkDataObjectAlgorithm_get_ptr (vtkNew < vtkDataObjectAlgorithm > sself) ;
extern "C" vtkNew < vtkDataSetAlgorithm > vtkDataSetAlgorithm_new () ;
extern "C" void vtkDataSetAlgorithm_destructor (vtkNew < vtkDataSetAlgorithm > sself) ;
extern "C" void * vtkDataSetAlgorithm_get_ptr (vtkNew < vtkDataSetAlgorithm > sself) ;
extern "C" vtkNew < vtkDemandDrivenPipeline > vtkDemandDrivenPipeline_new () ;
extern "C" void vtkDemandDrivenPipeline_destructor (vtkNew < vtkDemandDrivenPipeline > sself) ;
extern "C" void * vtkDemandDrivenPipeline_get_ptr (vtkNew < vtkDemandDrivenPipeline > sself) ;
extern "C" unsigned long vtk_demand_driven_pipeline_get_pipeline_m_time(vtkNew<vtkDemandDrivenPipeline> sself);
extern "C" int vtk_demand_driven_pipeline_set_release_data_flag(vtkNew<vtkDemandDrivenPipeline> sself, int port, int n);
extern "C" int vtk_demand_driven_pipeline_get_release_data_flag(vtkNew<vtkDemandDrivenPipeline> sself, int port);
extern "C" int vtk_demand_driven_pipeline_update_pipeline_m_time(vtkNew<vtkDemandDrivenPipeline> sself);
extern "C" int vtk_demand_driven_pipeline_update_data_object(vtkNew<vtkDemandDrivenPipeline> sself);
extern "C" int vtk_demand_driven_pipeline_update_data(vtkNew<vtkDemandDrivenPipeline> sself, int outputPort);
extern "C" vtkNew < vtkDirectedGraphAlgorithm > vtkDirectedGraphAlgorithm_new () ;
extern "C" void vtkDirectedGraphAlgorithm_destructor (vtkNew < vtkDirectedGraphAlgorithm > sself) ;
extern "C" void * vtkDirectedGraphAlgorithm_get_ptr (vtkNew < vtkDirectedGraphAlgorithm > sself) ;
extern "C" vtkNew < vtkEnsembleSource > vtkEnsembleSource_new () ;
extern "C" void vtkEnsembleSource_destructor (vtkNew < vtkEnsembleSource > sself) ;
extern "C" void * vtkEnsembleSource_get_ptr (vtkNew < vtkEnsembleSource > sself) ;
extern "C" void vtk_ensemble_source_remove_all_members(vtkNew<vtkEnsembleSource> sself);
extern "C" unsigned int vtk_ensemble_source_get_number_of_members(vtkNew<vtkEnsembleSource> sself);
extern "C" void vtk_ensemble_source_set_current_member(vtkNew<vtkEnsembleSource> sself, unsigned int _arg);
extern "C" unsigned int vtk_ensemble_source_get_current_member(vtkNew<vtkEnsembleSource> sself);
extern "C" vtkNew < vtkExplicitStructuredGridAlgorithm > vtkExplicitStructuredGridAlgorithm_new () ;
extern "C" void vtkExplicitStructuredGridAlgorithm_destructor (vtkNew < vtkExplicitStructuredGridAlgorithm > sself) ;
extern "C" void * vtkExplicitStructuredGridAlgorithm_get_ptr (vtkNew < vtkExplicitStructuredGridAlgorithm > sself) ;
extern "C" vtkNew < vtkExtentRCBPartitioner > vtkExtentRCBPartitioner_new () ;
extern "C" void vtkExtentRCBPartitioner_destructor (vtkNew < vtkExtentRCBPartitioner > sself) ;
extern "C" void * vtkExtentRCBPartitioner_get_ptr (vtkNew < vtkExtentRCBPartitioner > sself) ;
extern "C" void vtk_extent_rcb_partitioner_set_number_of_partitions(vtkNew<vtkExtentRCBPartitioner> sself, const int N);
extern "C" void vtk_extent_rcb_partitioner_set_global_extent(vtkNew<vtkExtentRCBPartitioner> sself, int imin, int imax, int jmin, int jmax, int kmin, int kmax);
extern "C" void vtk_extent_rcb_partitioner_set_global_extent(vtkNew<vtkExtentRCBPartitioner> sself, int ext);
extern "C" void vtk_extent_rcb_partitioner_set_duplicate_nodes(vtkNew<vtkExtentRCBPartitioner> sself, int _arg);
extern "C" int vtk_extent_rcb_partitioner_get_duplicate_nodes(vtkNew<vtkExtentRCBPartitioner> sself);
extern "C" void vtk_extent_rcb_partitioner_duplicate_nodes_on(vtkNew<vtkExtentRCBPartitioner> sself);
extern "C" void vtk_extent_rcb_partitioner_duplicate_nodes_off(vtkNew<vtkExtentRCBPartitioner> sself);
extern "C" void vtk_extent_rcb_partitioner_set_number_of_ghost_layers(vtkNew<vtkExtentRCBPartitioner> sself, int _arg);
extern "C" int vtk_extent_rcb_partitioner_get_number_of_ghost_layers(vtkNew<vtkExtentRCBPartitioner> sself);
extern "C" int vtk_extent_rcb_partitioner_get_num_extents(vtkNew<vtkExtentRCBPartitioner> sself);
extern "C" void vtk_extent_rcb_partitioner_partition(vtkNew<vtkExtentRCBPartitioner> sself);
extern "C" void vtk_extent_rcb_partitioner_get_partition_extent(vtkNew<vtkExtentRCBPartitioner> sself, const int idx, int ext);
extern "C" vtkNew < vtkExtentSplitter > vtkExtentSplitter_new () ;
extern "C" void vtkExtentSplitter_destructor (vtkNew < vtkExtentSplitter > sself) ;
extern "C" void * vtkExtentSplitter_get_ptr (vtkNew < vtkExtentSplitter > sself) ;
extern "C" void vtk_extent_splitter_add_extent_source(vtkNew<vtkExtentSplitter> sself, int id, int priority, int x0, int x1, int y0, int y1, int z0, int z1);
extern "C" void vtk_extent_splitter_add_extent_source(vtkNew<vtkExtentSplitter> sself, int id, int priority, int extent);
extern "C" void vtk_extent_splitter_remove_extent_source(vtkNew<vtkExtentSplitter> sself, int id);
extern "C" void vtk_extent_splitter_remove_all_extent_sources(vtkNew<vtkExtentSplitter> sself);
extern "C" void vtk_extent_splitter_add_extent(vtkNew<vtkExtentSplitter> sself, int x0, int x1, int y0, int y1, int z0, int z1);
extern "C" void vtk_extent_splitter_add_extent(vtkNew<vtkExtentSplitter> sself, int extent);
extern "C" int vtk_extent_splitter_compute_sub_extents(vtkNew<vtkExtentSplitter> sself);
extern "C" int vtk_extent_splitter_get_number_of_sub_extents(vtkNew<vtkExtentSplitter> sself);
extern "C" int* vtk_extent_splitter_get_sub_extent(vtkNew<vtkExtentSplitter> sself, int index);
extern "C" void vtk_extent_splitter_get_sub_extent(vtkNew<vtkExtentSplitter> sself, int index, int extent);
extern "C" int vtk_extent_splitter_get_sub_extent_source(vtkNew<vtkExtentSplitter> sself, int index);
extern "C" int vtk_extent_splitter_get_point_mode(vtkNew<vtkExtentSplitter> sself);
extern "C" void vtk_extent_splitter_set_point_mode(vtkNew<vtkExtentSplitter> sself, int _arg);
extern "C" void vtk_extent_splitter_point_mode_on(vtkNew<vtkExtentSplitter> sself);
extern "C" void vtk_extent_splitter_point_mode_off(vtkNew<vtkExtentSplitter> sself);
extern "C" vtkNew < vtkExtentTranslator > vtkExtentTranslator_new () ;
extern "C" void vtkExtentTranslator_destructor (vtkNew < vtkExtentTranslator > sself) ;
extern "C" void * vtkExtentTranslator_get_ptr (vtkNew < vtkExtentTranslator > sself) ;
extern "C" void vtk_extent_translator_set_whole_extent(vtkNew<vtkExtentTranslator> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6);
extern "C" void vtk_extent_translator_set_whole_extent(vtkNew<vtkExtentTranslator> sself, const int _arg);
extern "C" int* vtk_extent_translator_get_whole_extent(vtkNew<vtkExtentTranslator> sself);
extern "C" void vtk_extent_translator_get_whole_extent(vtkNew<vtkExtentTranslator> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6);
extern "C" void vtk_extent_translator_get_whole_extent(vtkNew<vtkExtentTranslator> sself, int _arg);
extern "C" void vtk_extent_translator_set_extent(vtkNew<vtkExtentTranslator> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6);
extern "C" void vtk_extent_translator_set_extent(vtkNew<vtkExtentTranslator> sself, const int _arg);
extern "C" int* vtk_extent_translator_get_extent(vtkNew<vtkExtentTranslator> sself);
extern "C" void vtk_extent_translator_get_extent(vtkNew<vtkExtentTranslator> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6);
extern "C" void vtk_extent_translator_get_extent(vtkNew<vtkExtentTranslator> sself, int _arg);
extern "C" void vtk_extent_translator_set_piece(vtkNew<vtkExtentTranslator> sself, int _arg);
extern "C" int vtk_extent_translator_get_piece(vtkNew<vtkExtentTranslator> sself);
extern "C" void vtk_extent_translator_set_number_of_pieces(vtkNew<vtkExtentTranslator> sself, int _arg);
extern "C" int vtk_extent_translator_get_number_of_pieces(vtkNew<vtkExtentTranslator> sself);
extern "C" void vtk_extent_translator_set_ghost_level(vtkNew<vtkExtentTranslator> sself, int _arg);
extern "C" int vtk_extent_translator_get_ghost_level(vtkNew<vtkExtentTranslator> sself);
extern "C" int vtk_extent_translator_piece_to_extent(vtkNew<vtkExtentTranslator> sself);
extern "C" int vtk_extent_translator_piece_to_extent_by_points(vtkNew<vtkExtentTranslator> sself);
extern "C" int vtk_extent_translator_piece_to_extent_thread_safe(vtkNew<vtkExtentTranslator> sself, int piece, int numPieces, int ghostLevel, int wholeExtent, int resultExtent, int splitMode, int byPoints);
extern "C" void vtk_extent_translator_set_split_mode_to_block(vtkNew<vtkExtentTranslator> sself);
extern "C" void vtk_extent_translator_set_split_mode_to_x_slab(vtkNew<vtkExtentTranslator> sself);
extern "C" void vtk_extent_translator_set_split_mode_to_y_slab(vtkNew<vtkExtentTranslator> sself);
extern "C" void vtk_extent_translator_set_split_mode_to_z_slab(vtkNew<vtkExtentTranslator> sself);
extern "C" int vtk_extent_translator_get_split_mode(vtkNew<vtkExtentTranslator> sself);
extern "C" void vtk_extent_translator_set_split_path(vtkNew<vtkExtentTranslator> sself, int len, int splitpath);
extern "C" vtkNew < vtkGraphAlgorithm > vtkGraphAlgorithm_new () ;
extern "C" void vtkGraphAlgorithm_destructor (vtkNew < vtkGraphAlgorithm > sself) ;
extern "C" void * vtkGraphAlgorithm_get_ptr (vtkNew < vtkGraphAlgorithm > sself) ;
extern "C" vtkNew < vtkHierarchicalBoxDataSetAlgorithm > vtkHierarchicalBoxDataSetAlgorithm_new () ;
extern "C" void vtkHierarchicalBoxDataSetAlgorithm_destructor (vtkNew < vtkHierarchicalBoxDataSetAlgorithm > sself) ;
extern "C" void * vtkHierarchicalBoxDataSetAlgorithm_get_ptr (vtkNew < vtkHierarchicalBoxDataSetAlgorithm > sself) ;
extern "C" vtkNew < vtkImageToStructuredGrid > vtkImageToStructuredGrid_new () ;
extern "C" void vtkImageToStructuredGrid_destructor (vtkNew < vtkImageToStructuredGrid > sself) ;
extern "C" void * vtkImageToStructuredGrid_get_ptr (vtkNew < vtkImageToStructuredGrid > sself) ;
extern "C" vtkNew < vtkImageToStructuredPoints > vtkImageToStructuredPoints_new () ;
extern "C" void vtkImageToStructuredPoints_destructor (vtkNew < vtkImageToStructuredPoints > sself) ;
extern "C" void * vtkImageToStructuredPoints_get_ptr (vtkNew < vtkImageToStructuredPoints > sself) ;
extern "C" vtkNew < vtkMoleculeAlgorithm > vtkMoleculeAlgorithm_new () ;
extern "C" void vtkMoleculeAlgorithm_destructor (vtkNew < vtkMoleculeAlgorithm > sself) ;
extern "C" void * vtkMoleculeAlgorithm_get_ptr (vtkNew < vtkMoleculeAlgorithm > sself) ;
extern "C" vtkNew < vtkMultiBlockDataSetAlgorithm > vtkMultiBlockDataSetAlgorithm_new () ;
extern "C" void vtkMultiBlockDataSetAlgorithm_destructor (vtkNew < vtkMultiBlockDataSetAlgorithm > sself) ;
extern "C" void * vtkMultiBlockDataSetAlgorithm_get_ptr (vtkNew < vtkMultiBlockDataSetAlgorithm > sself) ;
extern "C" vtkNew < vtkMultiTimeStepAlgorithm > vtkMultiTimeStepAlgorithm_new () ;
extern "C" void vtkMultiTimeStepAlgorithm_destructor (vtkNew < vtkMultiTimeStepAlgorithm > sself) ;
extern "C" void * vtkMultiTimeStepAlgorithm_get_ptr (vtkNew < vtkMultiTimeStepAlgorithm > sself) ;
extern "C" vtkNew < vtkNonOverlappingAMRAlgorithm > vtkNonOverlappingAMRAlgorithm_new () ;
extern "C" void vtkNonOverlappingAMRAlgorithm_destructor (vtkNew < vtkNonOverlappingAMRAlgorithm > sself) ;
extern "C" void * vtkNonOverlappingAMRAlgorithm_get_ptr (vtkNew < vtkNonOverlappingAMRAlgorithm > sself) ;
extern "C" vtkNew < vtkOverlappingAMRAlgorithm > vtkOverlappingAMRAlgorithm_new () ;
extern "C" void vtkOverlappingAMRAlgorithm_destructor (vtkNew < vtkOverlappingAMRAlgorithm > sself) ;
extern "C" void * vtkOverlappingAMRAlgorithm_get_ptr (vtkNew < vtkOverlappingAMRAlgorithm > sself) ;
extern "C" vtkNew < vtkPassInputTypeAlgorithm > vtkPassInputTypeAlgorithm_new () ;
extern "C" void vtkPassInputTypeAlgorithm_destructor (vtkNew < vtkPassInputTypeAlgorithm > sself) ;
extern "C" void * vtkPassInputTypeAlgorithm_get_ptr (vtkNew < vtkPassInputTypeAlgorithm > sself) ;
extern "C" vtkNew < vtkPiecewiseFunctionAlgorithm > vtkPiecewiseFunctionAlgorithm_new () ;
extern "C" void vtkPiecewiseFunctionAlgorithm_destructor (vtkNew < vtkPiecewiseFunctionAlgorithm > sself) ;
extern "C" void * vtkPiecewiseFunctionAlgorithm_get_ptr (vtkNew < vtkPiecewiseFunctionAlgorithm > sself) ;
extern "C" vtkNew < vtkPiecewiseFunctionShiftScale > vtkPiecewiseFunctionShiftScale_new () ;
extern "C" void vtkPiecewiseFunctionShiftScale_destructor (vtkNew < vtkPiecewiseFunctionShiftScale > sself) ;
extern "C" void * vtkPiecewiseFunctionShiftScale_get_ptr (vtkNew < vtkPiecewiseFunctionShiftScale > sself) ;
extern "C" void vtk_piecewise_function_shift_scale_set_position_shift(vtkNew<vtkPiecewiseFunctionShiftScale> sself, double _arg);
extern "C" void vtk_piecewise_function_shift_scale_set_position_scale(vtkNew<vtkPiecewiseFunctionShiftScale> sself, double _arg);
extern "C" void vtk_piecewise_function_shift_scale_set_value_shift(vtkNew<vtkPiecewiseFunctionShiftScale> sself, double _arg);
extern "C" void vtk_piecewise_function_shift_scale_set_value_scale(vtkNew<vtkPiecewiseFunctionShiftScale> sself, double _arg);
extern "C" double vtk_piecewise_function_shift_scale_get_position_shift(vtkNew<vtkPiecewiseFunctionShiftScale> sself);
extern "C" double vtk_piecewise_function_shift_scale_get_position_scale(vtkNew<vtkPiecewiseFunctionShiftScale> sself);
extern "C" double vtk_piecewise_function_shift_scale_get_value_shift(vtkNew<vtkPiecewiseFunctionShiftScale> sself);
extern "C" double vtk_piecewise_function_shift_scale_get_value_scale(vtkNew<vtkPiecewiseFunctionShiftScale> sself);
extern "C" vtkNew < vtkPointSetAlgorithm > vtkPointSetAlgorithm_new () ;
extern "C" void vtkPointSetAlgorithm_destructor (vtkNew < vtkPointSetAlgorithm > sself) ;
extern "C" void * vtkPointSetAlgorithm_get_ptr (vtkNew < vtkPointSetAlgorithm > sself) ;
extern "C" vtkNew < vtkPolyDataAlgorithm > vtkPolyDataAlgorithm_new () ;
extern "C" void vtkPolyDataAlgorithm_destructor (vtkNew < vtkPolyDataAlgorithm > sself) ;
extern "C" void * vtkPolyDataAlgorithm_get_ptr (vtkNew < vtkPolyDataAlgorithm > sself) ;
extern "C" vtkNew < vtkProgressObserver > vtkProgressObserver_new () ;
extern "C" void vtkProgressObserver_destructor (vtkNew < vtkProgressObserver > sself) ;
extern "C" void * vtkProgressObserver_get_ptr (vtkNew < vtkProgressObserver > sself) ;
extern "C" void vtk_progress_observer_update_progress(vtkNew<vtkProgressObserver> sself, double amount);
extern "C" double vtk_progress_observer_get_progress(vtkNew<vtkProgressObserver> sself);
extern "C" vtkNew < vtkReaderExecutive > vtkReaderExecutive_new () ;
extern "C" void vtkReaderExecutive_destructor (vtkNew < vtkReaderExecutive > sself) ;
extern "C" void * vtkReaderExecutive_get_ptr (vtkNew < vtkReaderExecutive > sself) ;
extern "C" vtkNew < vtkRectilinearGridAlgorithm > vtkRectilinearGridAlgorithm_new () ;
extern "C" void vtkRectilinearGridAlgorithm_destructor (vtkNew < vtkRectilinearGridAlgorithm > sself) ;
extern "C" void * vtkRectilinearGridAlgorithm_get_ptr (vtkNew < vtkRectilinearGridAlgorithm > sself) ;
extern "C" vtkNew < vtkSMPProgressObserver > vtkSMPProgressObserver_new () ;
extern "C" void vtkSMPProgressObserver_destructor (vtkNew < vtkSMPProgressObserver > sself) ;
extern "C" void * vtkSMPProgressObserver_get_ptr (vtkNew < vtkSMPProgressObserver > sself) ;
extern "C" void vtk_smp_progress_observer_update_progress(vtkNew<vtkSMPProgressObserver> sself, double progress);
extern "C" vtkNew < vtkSelectionAlgorithm > vtkSelectionAlgorithm_new () ;
extern "C" void vtkSelectionAlgorithm_destructor (vtkNew < vtkSelectionAlgorithm > sself) ;
extern "C" void * vtkSelectionAlgorithm_get_ptr (vtkNew < vtkSelectionAlgorithm > sself) ;
extern "C" vtkNew < vtkSimpleScalarTree > vtkSimpleScalarTree_new () ;
extern "C" void vtkSimpleScalarTree_destructor (vtkNew < vtkSimpleScalarTree > sself) ;
extern "C" void * vtkSimpleScalarTree_get_ptr (vtkNew < vtkSimpleScalarTree > sself) ;
extern "C" void vtk_simple_scalar_tree_set_branching_factor(vtkNew<vtkSimpleScalarTree> sself, int _arg);
extern "C" int vtk_simple_scalar_tree_get_branching_factor_min_value(vtkNew<vtkSimpleScalarTree> sself);
extern "C" int vtk_simple_scalar_tree_get_branching_factor_max_value(vtkNew<vtkSimpleScalarTree> sself);
extern "C" int vtk_simple_scalar_tree_get_branching_factor(vtkNew<vtkSimpleScalarTree> sself);
extern "C" int vtk_simple_scalar_tree_get_level(vtkNew<vtkSimpleScalarTree> sself);
extern "C" void vtk_simple_scalar_tree_set_max_level(vtkNew<vtkSimpleScalarTree> sself, int _arg);
extern "C" int vtk_simple_scalar_tree_get_max_level_min_value(vtkNew<vtkSimpleScalarTree> sself);
extern "C" int vtk_simple_scalar_tree_get_max_level_max_value(vtkNew<vtkSimpleScalarTree> sself);
extern "C" int vtk_simple_scalar_tree_get_max_level(vtkNew<vtkSimpleScalarTree> sself);
extern "C" void vtk_simple_scalar_tree_build_tree(vtkNew<vtkSimpleScalarTree> sself);
extern "C" void vtk_simple_scalar_tree_initialize(vtkNew<vtkSimpleScalarTree> sself);
extern "C" void vtk_simple_scalar_tree_init_traversal(vtkNew<vtkSimpleScalarTree> sself, double scalarValue);
extern "C" long long vtk_simple_scalar_tree_get_number_of_cell_batches(vtkNew<vtkSimpleScalarTree> sself, double scalarValue);
extern "C" const long long* vtk_simple_scalar_tree_get_cell_batch(vtkNew<vtkSimpleScalarTree> sself, long long batchNum, long long numCells);
extern "C" vtkNew < vtkSpanSpace > vtkSpanSpace_new () ;
extern "C" void vtkSpanSpace_destructor (vtkNew < vtkSpanSpace > sself) ;
extern "C" void * vtkSpanSpace_get_ptr (vtkNew < vtkSpanSpace > sself) ;
extern "C" void vtk_span_space_set_scalar_range(vtkNew<vtkSpanSpace> sself, double _arg1, double _arg2);
extern "C" void vtk_span_space_set_scalar_range(vtkNew<vtkSpanSpace> sself, const double _arg);
extern "C" double* vtk_span_space_get_scalar_range(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_get_scalar_range(vtkNew<vtkSpanSpace> sself, double data);
extern "C" void vtk_span_space_set_compute_scalar_range(vtkNew<vtkSpanSpace> sself, int _arg);
extern "C" int vtk_span_space_get_compute_scalar_range(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_compute_scalar_range_on(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_compute_scalar_range_off(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_set_resolution(vtkNew<vtkSpanSpace> sself, long long _arg);
extern "C" long long vtk_span_space_get_resolution_min_value(vtkNew<vtkSpanSpace> sself);
extern "C" long long vtk_span_space_get_resolution_max_value(vtkNew<vtkSpanSpace> sself);
extern "C" long long vtk_span_space_get_resolution(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_set_compute_resolution(vtkNew<vtkSpanSpace> sself, int _arg);
extern "C" int vtk_span_space_get_compute_resolution(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_compute_resolution_on(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_compute_resolution_off(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_set_number_of_cells_per_bucket(vtkNew<vtkSpanSpace> sself, int _arg);
extern "C" int vtk_span_space_get_number_of_cells_per_bucket_min_value(vtkNew<vtkSpanSpace> sself);
extern "C" int vtk_span_space_get_number_of_cells_per_bucket_max_value(vtkNew<vtkSpanSpace> sself);
extern "C" int vtk_span_space_get_number_of_cells_per_bucket(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_initialize(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_build_tree(vtkNew<vtkSpanSpace> sself);
extern "C" void vtk_span_space_init_traversal(vtkNew<vtkSpanSpace> sself, double scalarValue);
extern "C" long long vtk_span_space_get_number_of_cell_batches(vtkNew<vtkSpanSpace> sself, double scalarValue);
extern "C" const long long* vtk_span_space_get_cell_batch(vtkNew<vtkSpanSpace> sself, long long batchNum, long long numCells);
extern "C" void vtk_span_space_set_batch_size(vtkNew<vtkSpanSpace> sself, long long _arg);
extern "C" long long vtk_span_space_get_batch_size_min_value(vtkNew<vtkSpanSpace> sself);
extern "C" long long vtk_span_space_get_batch_size_max_value(vtkNew<vtkSpanSpace> sself);
extern "C" long long vtk_span_space_get_batch_size(vtkNew<vtkSpanSpace> sself);
extern "C" vtkNew < vtkSphereTree > vtkSphereTree_new () ;
extern "C" void vtkSphereTree_destructor (vtkNew < vtkSphereTree > sself) ;
extern "C" void * vtkSphereTree_get_ptr (vtkNew < vtkSphereTree > sself) ;
extern "C" void vtk_sphere_tree_build(vtkNew<vtkSphereTree> sself);
extern "C" void vtk_sphere_tree_set_build_hierarchy(vtkNew<vtkSphereTree> sself, bool _arg);
extern "C" bool vtk_sphere_tree_get_build_hierarchy(vtkNew<vtkSphereTree> sself);
extern "C" void vtk_sphere_tree_build_hierarchy_on(vtkNew<vtkSphereTree> sself);
extern "C" void vtk_sphere_tree_build_hierarchy_off(vtkNew<vtkSphereTree> sself);
extern "C" const unsigned char* vtk_sphere_tree_select_point(vtkNew<vtkSphereTree> sself, double point, long long numSelected);
extern "C" const unsigned char* vtk_sphere_tree_select_line(vtkNew<vtkSphereTree> sself, double origin, double ray, long long numSelected);
extern "C" const unsigned char* vtk_sphere_tree_select_plane(vtkNew<vtkSphereTree> sself, double origin, double normal, long long numSelected);
extern "C" void vtk_sphere_tree_set_resolution(vtkNew<vtkSphereTree> sself, int _arg);
extern "C" int vtk_sphere_tree_get_resolution_min_value(vtkNew<vtkSphereTree> sself);
extern "C" int vtk_sphere_tree_get_resolution_max_value(vtkNew<vtkSphereTree> sself);
extern "C" int vtk_sphere_tree_get_resolution(vtkNew<vtkSphereTree> sself);
extern "C" void vtk_sphere_tree_set_max_level(vtkNew<vtkSphereTree> sself, int _arg);
extern "C" int vtk_sphere_tree_get_max_level_min_value(vtkNew<vtkSphereTree> sself);
extern "C" int vtk_sphere_tree_get_max_level_max_value(vtkNew<vtkSphereTree> sself);
extern "C" int vtk_sphere_tree_get_max_level(vtkNew<vtkSphereTree> sself);
extern "C" int vtk_sphere_tree_get_number_of_levels(vtkNew<vtkSphereTree> sself);
extern "C" const double* vtk_sphere_tree_get_cell_spheres(vtkNew<vtkSphereTree> sself);
extern "C" const double* vtk_sphere_tree_get_tree_spheres(vtkNew<vtkSphereTree> sself, int level, long long numSpheres);
extern "C" vtkNew < vtkStreamingDemandDrivenPipeline > vtkStreamingDemandDrivenPipeline_new () ;
extern "C" void vtkStreamingDemandDrivenPipeline_destructor (vtkNew < vtkStreamingDemandDrivenPipeline > sself) ;
extern "C" void * vtkStreamingDemandDrivenPipeline_get_ptr (vtkNew < vtkStreamingDemandDrivenPipeline > sself) ;
extern "C" int vtk_streaming_demand_driven_pipeline_update(vtkNew<vtkStreamingDemandDrivenPipeline> sself);
extern "C" int vtk_streaming_demand_driven_pipeline_update_whole_extent(vtkNew<vtkStreamingDemandDrivenPipeline> sself);
extern "C" int vtk_streaming_demand_driven_pipeline_propagate_update_extent(vtkNew<vtkStreamingDemandDrivenPipeline> sself, int outputPort);
extern "C" int vtk_streaming_demand_driven_pipeline_propagate_time(vtkNew<vtkStreamingDemandDrivenPipeline> sself, int outputPort);
extern "C" int vtk_streaming_demand_driven_pipeline_update_time_dependent_information(vtkNew<vtkStreamingDemandDrivenPipeline> sself, int outputPort);
extern "C" int vtk_streaming_demand_driven_pipeline_set_request_exact_extent(vtkNew<vtkStreamingDemandDrivenPipeline> sself, int port, int flag);
extern "C" int vtk_streaming_demand_driven_pipeline_get_request_exact_extent(vtkNew<vtkStreamingDemandDrivenPipeline> sself, int port);
extern "C" vtkNew < vtkStructuredGridAlgorithm > vtkStructuredGridAlgorithm_new () ;
extern "C" void vtkStructuredGridAlgorithm_destructor (vtkNew < vtkStructuredGridAlgorithm > sself) ;
extern "C" void * vtkStructuredGridAlgorithm_get_ptr (vtkNew < vtkStructuredGridAlgorithm > sself) ;
extern "C" vtkNew < vtkTableAlgorithm > vtkTableAlgorithm_new () ;
extern "C" void vtkTableAlgorithm_destructor (vtkNew < vtkTableAlgorithm > sself) ;
extern "C" void * vtkTableAlgorithm_get_ptr (vtkNew < vtkTableAlgorithm > sself) ;
extern "C" vtkNew < vtkThreadedCompositeDataPipeline > vtkThreadedCompositeDataPipeline_new () ;
extern "C" void vtkThreadedCompositeDataPipeline_destructor (vtkNew < vtkThreadedCompositeDataPipeline > sself) ;
extern "C" void * vtkThreadedCompositeDataPipeline_get_ptr (vtkNew < vtkThreadedCompositeDataPipeline > sself) ;
extern "C" vtkNew < vtkTreeAlgorithm > vtkTreeAlgorithm_new () ;
extern "C" void vtkTreeAlgorithm_destructor (vtkNew < vtkTreeAlgorithm > sself) ;
extern "C" void * vtkTreeAlgorithm_get_ptr (vtkNew < vtkTreeAlgorithm > sself) ;
extern "C" vtkNew < vtkTrivialConsumer > vtkTrivialConsumer_new () ;
extern "C" void vtkTrivialConsumer_destructor (vtkNew < vtkTrivialConsumer > sself) ;
extern "C" void * vtkTrivialConsumer_get_ptr (vtkNew < vtkTrivialConsumer > sself) ;
extern "C" vtkNew < vtkTrivialProducer > vtkTrivialProducer_new () ;
extern "C" void vtkTrivialProducer_destructor (vtkNew < vtkTrivialProducer > sself) ;
extern "C" void * vtkTrivialProducer_get_ptr (vtkNew < vtkTrivialProducer > sself) ;
extern "C" unsigned long vtk_trivial_producer_get_m_time(vtkNew<vtkTrivialProducer> sself);
extern "C" void vtk_trivial_producer_set_whole_extent(vtkNew<vtkTrivialProducer> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6);
extern "C" void vtk_trivial_producer_set_whole_extent(vtkNew<vtkTrivialProducer> sself, const int _arg);
extern "C" int* vtk_trivial_producer_get_whole_extent(vtkNew<vtkTrivialProducer> sself);
extern "C" void vtk_trivial_producer_get_whole_extent(vtkNew<vtkTrivialProducer> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6);
extern "C" void vtk_trivial_producer_get_whole_extent(vtkNew<vtkTrivialProducer> sself, int _arg);
extern "C" vtkNew < vtkUndirectedGraphAlgorithm > vtkUndirectedGraphAlgorithm_new () ;
extern "C" void vtkUndirectedGraphAlgorithm_destructor (vtkNew < vtkUndirectedGraphAlgorithm > sself) ;
extern "C" void * vtkUndirectedGraphAlgorithm_get_ptr (vtkNew < vtkUndirectedGraphAlgorithm > sself) ;
extern "C" vtkNew < vtkUniformGridAMRAlgorithm > vtkUniformGridAMRAlgorithm_new () ;
extern "C" void vtkUniformGridAMRAlgorithm_destructor (vtkNew < vtkUniformGridAMRAlgorithm > sself) ;
extern "C" void * vtkUniformGridAMRAlgorithm_get_ptr (vtkNew < vtkUniformGridAMRAlgorithm > sself) ;
extern "C" vtkNew < vtkUniformGridPartitioner > vtkUniformGridPartitioner_new () ;
extern "C" void vtkUniformGridPartitioner_destructor (vtkNew < vtkUniformGridPartitioner > sself) ;
extern "C" void * vtkUniformGridPartitioner_get_ptr (vtkNew < vtkUniformGridPartitioner > sself) ;
extern "C" int vtk_uniform_grid_partitioner_get_number_of_partitions(vtkNew<vtkUniformGridPartitioner> sself);
extern "C" void vtk_uniform_grid_partitioner_set_number_of_partitions(vtkNew<vtkUniformGridPartitioner> sself, int _arg);
extern "C" int vtk_uniform_grid_partitioner_get_number_of_ghost_layers(vtkNew<vtkUniformGridPartitioner> sself);
extern "C" void vtk_uniform_grid_partitioner_set_number_of_ghost_layers(vtkNew<vtkUniformGridPartitioner> sself, int _arg);
extern "C" int vtk_uniform_grid_partitioner_get_duplicate_nodes(vtkNew<vtkUniformGridPartitioner> sself);
extern "C" void vtk_uniform_grid_partitioner_set_duplicate_nodes(vtkNew<vtkUniformGridPartitioner> sself, int _arg);
extern "C" void vtk_uniform_grid_partitioner_duplicate_nodes_on(vtkNew<vtkUniformGridPartitioner> sself);
extern "C" void vtk_uniform_grid_partitioner_duplicate_nodes_off(vtkNew<vtkUniformGridPartitioner> sself);
extern "C" vtkNew < vtkUnstructuredGridAlgorithm > vtkUnstructuredGridAlgorithm_new () ;
extern "C" void vtkUnstructuredGridAlgorithm_destructor (vtkNew < vtkUnstructuredGridAlgorithm > sself) ;
extern "C" void * vtkUnstructuredGridAlgorithm_get_ptr (vtkNew < vtkUnstructuredGridAlgorithm > sself) ;
extern "C" vtkNew < vtkUnstructuredGridBaseAlgorithm > vtkUnstructuredGridBaseAlgorithm_new () ;
extern "C" void vtkUnstructuredGridBaseAlgorithm_destructor (vtkNew < vtkUnstructuredGridBaseAlgorithm > sself) ;
extern "C" void * vtkUnstructuredGridBaseAlgorithm_get_ptr (vtkNew < vtkUnstructuredGridBaseAlgorithm > sself) ;
