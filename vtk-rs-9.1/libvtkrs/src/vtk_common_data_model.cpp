// Include header file
#include<vtk_common_data_model.h>

// Default include in all modules
#include<vtkNew.h>
#include<vtkObjectBase.h>

// Include objects of this module
#include<vtkAMRBox.h>
#include<vtkAMRDataInternals.h>
#include<vtkAMRInformation.h>
#include<vtkAMRUtilities.h>
#include<vtkAbstractCellLinks.h>
#include<vtkAbstractCellLocator.h>
#include<vtkAbstractElectronicData.h>
#include<vtkAbstractPointLocator.h>
#include<vtkAdjacentVertexIterator.h>
#include<vtkAngularPeriodicDataArray.h>
#include<vtkAnimationScene.h>
#include<vtkAnnotation.h>
#include<vtkAnnotationLayers.h>
#include<vtkArrayData.h>
#include<vtkAtom.h>
#include<vtkAttributesErrorMetric.h>
#include<vtkBSPCuts.h>
#include<vtkBSPIntersections.h>
#include<vtkBezierCurve.h>
#include<vtkBezierHexahedron.h>
#include<vtkBezierInterpolation.h>
#include<vtkBezierQuadrilateral.h>
#include<vtkBezierTetra.h>
#include<vtkBezierTriangle.h>
#include<vtkBezierWedge.h>
#include<vtkBiQuadraticQuad.h>
#include<vtkBiQuadraticQuadraticHexahedron.h>
#include<vtkBiQuadraticQuadraticWedge.h>
#include<vtkBiQuadraticTriangle.h>
#include<vtkBond.h>
#include<vtkBoundingBox.h>
#include<vtkBox.h>
#include<vtkCell.h>
#include<vtkCell3D.h>
#include<vtkCellArray.h>
#include<vtkCellArrayIterator.h>
#include<vtkCellData.h>
#include<vtkCellIterator.h>
#include<vtkCellLinks.h>
#include<vtkCellLocator.h>
#include<vtkCellLocatorStrategy.h>
#include<vtkCellTypes.h>
#include<vtkClosestNPointsStrategy.h>
#include<vtkClosestPointStrategy.h>
#include<vtkColor.h>
#include<vtkColor.h>
#include<vtkColor.h>
#include<vtkColor.h>
#include<vtkColor.h>
#include<vtkColor.h>
#include<vtkColor.h>
#include<vtkColor.h>
#include<vtkCompositeDataIterator.h>
#include<vtkCompositeDataSet.h>
#include<vtkCone.h>
#include<vtkConvexPointSet.h>
#include<vtkCubicLine.h>
#include<vtkCylinder.h>
#include<vtkDataAssembly.h>
#include<vtkDataAssemblyUtilities.h>
#include<vtkDataAssemblyVisitor.h>
#include<vtkDataObject.h>
#include<vtkDataObjectCollection.h>
#include<vtkDataObjectTree.h>
#include<vtkDataObjectTreeInternals.h>
#include<vtkDataObjectTreeInternals.h>
#include<vtkDataObjectTreeIterator.h>
#include<vtkDataObjectTypes.h>
#include<vtkDataSet.h>
#include<vtkDataSetAttributes.h>
#include<vtkDataSetAttributesFieldList.h>
#include<vtkDataSetCellIterator.h>
#include<vtkDataSetCollection.h>
#include<vtkDirectedAcyclicGraph.h>
#include<vtkDirectedGraph.h>
#include<vtkDistributedGraphHelper.h>
#include<vtkEdgeListIterator.h>
#include<vtkEdgeTable.h>
#include<vtkEmptyCell.h>
#include<vtkExplicitStructuredGrid.h>
#include<vtkExtractStructuredGridHelper.h>
#include<vtkFieldData.h>
#include<vtkFindCellStrategy.h>
#include<vtkGenericAdaptorCell.h>
#include<vtkGenericAttribute.h>
#include<vtkGenericAttributeCollection.h>
#include<vtkGenericCell.h>
#include<vtkGenericCellIterator.h>
#include<vtkGenericCellTessellator.h>
#include<vtkGenericDataSet.h>
#include<vtkGenericEdgeTable.h>
#include<vtkGenericInterpolatedVelocityField.h>
#include<vtkGenericPointIterator.h>
#include<vtkGenericSubdivisionErrorMetric.h>
#include<vtkGeometricErrorMetric.h>
#include<vtkGraph.h>
#include<vtkGraphEdge.h>
#include<vtkGraphInternals.h>
#include<vtkHexagonalPrism.h>
#include<vtkHexahedron.h>
#include<vtkHierarchicalBoxDataIterator.h>
#include<vtkHierarchicalBoxDataSet.h>
#include<vtkHigherOrderCurve.h>
#include<vtkHigherOrderHexahedron.h>
#include<vtkHigherOrderInterpolation.h>
#include<vtkHigherOrderQuadrilateral.h>
#include<vtkHigherOrderTetra.h>
#include<vtkHigherOrderTriangle.h>
#include<vtkHigherOrderWedge.h>
#include<vtkHyperTree.h>
#include<vtkHyperTreeCursor.h>
#include<vtkHyperTreeGrid.h>
#include<vtkHyperTreeGridNonOrientedCursor.h>
#include<vtkHyperTreeGridNonOrientedGeometryCursor.h>
#include<vtkHyperTreeGridNonOrientedMooreSuperCursor.h>
#include<vtkHyperTreeGridNonOrientedMooreSuperCursorLight.h>
#include<vtkHyperTreeGridNonOrientedSuperCursor.h>
#include<vtkHyperTreeGridNonOrientedSuperCursorLight.h>
#include<vtkHyperTreeGridNonOrientedVonNeumannSuperCursor.h>
#include<vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight.h>
#include<vtkHyperTreeGridOrientedCursor.h>
#include<vtkHyperTreeGridOrientedGeometryCursor.h>
#include<vtkHyperTreeGridScales.h>
#include<vtkImageData.h>
#include<vtkImageIterator.h>
#include<vtkImageTransform.h>
#include<vtkImplicitBoolean.h>
#include<vtkImplicitDataSet.h>
#include<vtkImplicitFunction.h>
#include<vtkImplicitFunctionCollection.h>
#include<vtkImplicitHalo.h>
#include<vtkImplicitSelectionLoop.h>
#include<vtkImplicitSum.h>
#include<vtkImplicitVolume.h>
#include<vtkImplicitWindowFunction.h>
#include<vtkInEdgeIterator.h>
#include<vtkIncrementalOctreeNode.h>
#include<vtkIncrementalOctreePointLocator.h>
#include<vtkIncrementalPointLocator.h>
#include<vtkInformationQuadratureSchemeDefinitionVectorKey.h>
#include<vtkIntersectionCounter.h>
#include<vtkIterativeClosestPointTransform.h>
#include<vtkKdNode.h>
#include<vtkKdTree.h>
#include<vtkKdTreePointLocator.h>
#include<vtkLagrangeCurve.h>
#include<vtkLagrangeHexahedron.h>
#include<vtkLagrangeInterpolation.h>
#include<vtkLagrangeQuadrilateral.h>
#include<vtkLagrangeTetra.h>
#include<vtkLagrangeTriangle.h>
#include<vtkLagrangeWedge.h>
#include<vtkLine.h>
#include<vtkLocator.h>
#include<vtkMappedUnstructuredGrid.h>
#include<vtkMappedUnstructuredGridCellIterator.h>
#include<vtkMeanValueCoordinatesInterpolator.h>
#include<vtkMergePoints.h>
#include<vtkMolecule.h>
#include<vtkMultiBlockDataSet.h>
#include<vtkMultiPieceDataSet.h>
#include<vtkMutableDirectedGraph.h>
#include<vtkMutableUndirectedGraph.h>
#include<vtkNonLinearCell.h>
#include<vtkNonMergingPointLocator.h>
#include<vtkNonOverlappingAMR.h>
#include<vtkOctreePointLocator.h>
#include<vtkOctreePointLocatorNode.h>
#include<vtkOrderedTriangulator.h>
#include<vtkOutEdgeIterator.h>
#include<vtkOverlappingAMR.h>
#include<vtkPartitionedDataSet.h>
#include<vtkPartitionedDataSetCollection.h>
#include<vtkPath.h>
#include<vtkPentagonalPrism.h>
#include<vtkPeriodicDataArray.h>
#include<vtkPerlinNoise.h>
#include<vtkPiecewiseFunction.h>
#include<vtkPixel.h>
#include<vtkPixelExtent.h>
#include<vtkPixelTransfer.h>
#include<vtkPlane.h>
#include<vtkPlaneCollection.h>
#include<vtkPlanes.h>
#include<vtkPlanesIntersection.h>
#include<vtkPointData.h>
#include<vtkPointLocator.h>
#include<vtkPointSet.h>
#include<vtkPointSetCellIterator.h>
#include<vtkPointsProjectedHull.h>
#include<vtkPolyData.h>
#include<vtkPolyDataCollection.h>
#include<vtkPolyLine.h>
#include<vtkPolyPlane.h>
#include<vtkPolyVertex.h>
#include<vtkPolygon.h>
#include<vtkPolyhedron.h>
#include<vtkPyramid.h>
#include<vtkQuad.h>
#include<vtkQuadraticEdge.h>
#include<vtkQuadraticHexahedron.h>
#include<vtkQuadraticLinearQuad.h>
#include<vtkQuadraticLinearWedge.h>
#include<vtkQuadraticPolygon.h>
#include<vtkQuadraticPyramid.h>
#include<vtkQuadraticQuad.h>
#include<vtkQuadraticTetra.h>
#include<vtkQuadraticTriangle.h>
#include<vtkQuadraticWedge.h>
#include<vtkQuadratureSchemeDefinition.h>
#include<vtkQuadric.h>
#include<vtkRect.h>
#include<vtkRect.h>
#include<vtkRect.h>
#include<vtkRect.h>
#include<vtkRectilinearGrid.h>
#include<vtkReebGraph.h>
#include<vtkReebGraphSimplificationMetric.h>
#include<vtkSelection.h>
#include<vtkSelectionNode.h>
#include<vtkSimpleCellTessellator.h>
#include<vtkSmoothErrorMetric.h>
#include<vtkSortFieldData.h>
#include<vtkSphere.h>
#include<vtkSpheres.h>
#include<vtkSpline.h>
#include<vtkStaticCellLinks.h>
#include<vtkStaticCellLinksTemplate.h>
#include<vtkStaticCellLocator.h>
#include<vtkStaticEdgeLocatorTemplate.h>
#include<vtkStaticPointLocator.h>
#include<vtkStaticPointLocator2D.h>
#include<vtkStructuredData.h>
#include<vtkStructuredExtent.h>
#include<vtkStructuredGrid.h>
#include<vtkStructuredPoints.h>
#include<vtkStructuredPointsCollection.h>
#include<vtkSuperquadric.h>
#include<vtkTable.h>
#include<vtkTetra.h>
#include<vtkTree.h>
#include<vtkTreeBFSIterator.h>
#include<vtkTreeDFSIterator.h>
#include<vtkTreeIterator.h>
#include<vtkTriQuadraticHexahedron.h>
#include<vtkTriQuadraticPyramid.h>
#include<vtkTriangle.h>
#include<vtkTriangleStrip.h>
#include<vtkUndirectedGraph.h>
#include<vtkUniformGrid.h>
#include<vtkUniformGridAMR.h>
#include<vtkUniformGridAMRDataIterator.h>
#include<vtkUniformHyperTreeGrid.h>
#include<vtkUnstructuredGrid.h>
#include<vtkUnstructuredGridBase.h>
#include<vtkUnstructuredGridCellIterator.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVector.h>
#include<vtkVertex.h>
#include<vtkGraphInternals.h>
#include<vtkVertexListIterator.h>
#include<vtkVoxel.h>
#include<vtkWedge.h>
#include<vtkXMLDataElement.h>

// Implement declared functions
extern "C" vtkNew < vtkAMRDataInternals > vtkAMRDataInternals_new () {return vtkNew < vtkAMRDataInternals > () ;}
extern "C" void vtkAMRDataInternals_destructor (vtkNew < vtkAMRDataInternals > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAMRDataInternals_get_ptr (vtkNew < vtkAMRDataInternals > sself) {return sself . GetPointer () ;}
extern "C" void vtk_amr_data_internals_initialize(vtkNew<vtkAMRDataInternals> sself) { sself->Initialize(); }
extern "C" bool vtk_amr_data_internals_empty(vtkNew<vtkAMRDataInternals> sself) { return sself->Empty(); }
extern "C" unsigned int vtk_amr_data_internals_get_number_of_blocks(vtkNew<vtkAMRDataInternals> sself) { return sself->GetNumberOfBlocks(); }
extern "C" vtkNew < vtkAdjacentVertexIterator > vtkAdjacentVertexIterator_new () {return vtkNew < vtkAdjacentVertexIterator > () ;}
extern "C" void vtkAdjacentVertexIterator_destructor (vtkNew < vtkAdjacentVertexIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAdjacentVertexIterator_get_ptr (vtkNew < vtkAdjacentVertexIterator > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_adjacent_vertex_iterator_get_vertex(vtkNew<vtkAdjacentVertexIterator> sself) { return sself->GetVertex(); }
extern "C" long long vtk_adjacent_vertex_iterator_next(vtkNew<vtkAdjacentVertexIterator> sself) { return sself->Next(); }
extern "C" bool vtk_adjacent_vertex_iterator_has_next(vtkNew<vtkAdjacentVertexIterator> sself) { return sself->HasNext(); }
extern "C" vtkNew < vtkAnimationScene > vtkAnimationScene_new () {return vtkNew < vtkAnimationScene > () ;}
extern "C" void vtkAnimationScene_destructor (vtkNew < vtkAnimationScene > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAnimationScene_get_ptr (vtkNew < vtkAnimationScene > sself) {return sself . GetPointer () ;}
extern "C" void vtk_animation_scene_set_play_mode(vtkNew<vtkAnimationScene> sself, int _arg) { sself->SetPlayMode(_arg); }
extern "C" void vtk_animation_scene_set_mode_to_sequence(vtkNew<vtkAnimationScene> sself) { sself->SetModeToSequence(); }
extern "C" void vtk_animation_scene_set_mode_to_real_time(vtkNew<vtkAnimationScene> sself) { sself->SetModeToRealTime(); }
extern "C" int vtk_animation_scene_get_play_mode(vtkNew<vtkAnimationScene> sself) { return sself->GetPlayMode(); }
extern "C" void vtk_animation_scene_set_frame_rate(vtkNew<vtkAnimationScene> sself, double _arg) { sself->SetFrameRate(_arg); }
extern "C" double vtk_animation_scene_get_frame_rate(vtkNew<vtkAnimationScene> sself) { return sself->GetFrameRate(); }
extern "C" void vtk_animation_scene_remove_all_cues(vtkNew<vtkAnimationScene> sself) { sself->RemoveAllCues(); }
extern "C" int vtk_animation_scene_get_number_of_cues(vtkNew<vtkAnimationScene> sself) { return sself->GetNumberOfCues(); }
extern "C" void vtk_animation_scene_play(vtkNew<vtkAnimationScene> sself) { sself->Play(); }
extern "C" void vtk_animation_scene_stop(vtkNew<vtkAnimationScene> sself) { sself->Stop(); }
extern "C" void vtk_animation_scene_set_loop(vtkNew<vtkAnimationScene> sself, int _arg) { sself->SetLoop(_arg); }
extern "C" int vtk_animation_scene_get_loop(vtkNew<vtkAnimationScene> sself) { return sself->GetLoop(); }
extern "C" void vtk_animation_scene_set_animation_time(vtkNew<vtkAnimationScene> sself, double time) { sself->SetAnimationTime(time); }
extern "C" void vtk_animation_scene_set_time_mode(vtkNew<vtkAnimationScene> sself, int mode) { sself->SetTimeMode(mode); }
extern "C" int vtk_animation_scene_is_in_play(vtkNew<vtkAnimationScene> sself) { return sself->IsInPlay(); }
extern "C" vtkNew < vtkAnnotation > vtkAnnotation_new () {return vtkNew < vtkAnnotation > () ;}
extern "C" void vtkAnnotation_destructor (vtkNew < vtkAnnotation > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAnnotation_get_ptr (vtkNew < vtkAnnotation > sself) {return sself . GetPointer () ;}
extern "C" int vtk_annotation_get_data_object_type(vtkNew<vtkAnnotation> sself) { return sself->GetDataObjectType(); }
extern "C" void vtk_annotation_initialize(vtkNew<vtkAnnotation> sself) { sself->Initialize(); }
extern "C" unsigned long vtk_annotation_get_m_time(vtkNew<vtkAnnotation> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkAnnotationLayers > vtkAnnotationLayers_new () {return vtkNew < vtkAnnotationLayers > () ;}
extern "C" void vtkAnnotationLayers_destructor (vtkNew < vtkAnnotationLayers > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAnnotationLayers_get_ptr (vtkNew < vtkAnnotationLayers > sself) {return sself . GetPointer () ;}
extern "C" int vtk_annotation_layers_get_data_object_type(vtkNew<vtkAnnotationLayers> sself) { return sself->GetDataObjectType(); }
extern "C" unsigned int vtk_annotation_layers_get_number_of_annotations(vtkNew<vtkAnnotationLayers> sself) { return sself->GetNumberOfAnnotations(); }
extern "C" void vtk_annotation_layers_initialize(vtkNew<vtkAnnotationLayers> sself) { sself->Initialize(); }
extern "C" unsigned long vtk_annotation_layers_get_m_time(vtkNew<vtkAnnotationLayers> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkArrayData > vtkArrayData_new () {return vtkNew < vtkArrayData > () ;}
extern "C" void vtkArrayData_destructor (vtkNew < vtkArrayData > sself) {sself . Reset () ; return ;}
extern "C" void * vtkArrayData_get_ptr (vtkNew < vtkArrayData > sself) {return sself . GetPointer () ;}
extern "C" void vtk_array_data_clear_arrays(vtkNew<vtkArrayData> sself) { sself->ClearArrays(); }
extern "C" long long vtk_array_data_get_number_of_arrays(vtkNew<vtkArrayData> sself) { return sself->GetNumberOfArrays(); }
extern "C" int vtk_array_data_get_data_object_type(vtkNew<vtkArrayData> sself) { return sself->GetDataObjectType(); }
extern "C" vtkNew < vtkAttributesErrorMetric > vtkAttributesErrorMetric_new () {return vtkNew < vtkAttributesErrorMetric > () ;}
extern "C" void vtkAttributesErrorMetric_destructor (vtkNew < vtkAttributesErrorMetric > sself) {sself . Reset () ; return ;}
extern "C" void * vtkAttributesErrorMetric_get_ptr (vtkNew < vtkAttributesErrorMetric > sself) {return sself . GetPointer () ;}
extern "C" double vtk_attributes_error_metric_get_absolute_attribute_tolerance(vtkNew<vtkAttributesErrorMetric> sself) { return sself->GetAbsoluteAttributeTolerance(); }
extern "C" void vtk_attributes_error_metric_set_absolute_attribute_tolerance(vtkNew<vtkAttributesErrorMetric> sself, double value) { sself->SetAbsoluteAttributeTolerance(value); }
extern "C" double vtk_attributes_error_metric_get_attribute_tolerance(vtkNew<vtkAttributesErrorMetric> sself) { return sself->GetAttributeTolerance(); }
extern "C" void vtk_attributes_error_metric_set_attribute_tolerance(vtkNew<vtkAttributesErrorMetric> sself, double value) { sself->SetAttributeTolerance(value); }
extern "C" int vtk_attributes_error_metric_requires_edge_subdivision(vtkNew<vtkAttributesErrorMetric> sself, double leftPoint, double midPoint, double rightPoint, double alpha) { return sself->RequiresEdgeSubdivision(leftPoint, midPoint, rightPoint, alpha); }
extern "C" double vtk_attributes_error_metric_get_error(vtkNew<vtkAttributesErrorMetric> sself, double leftPoint, double midPoint, double rightPoint, double alpha) { return sself->GetError(leftPoint, midPoint, rightPoint, alpha); }
extern "C" vtkNew < vtkBSPCuts > vtkBSPCuts_new () {return vtkNew < vtkBSPCuts > () ;}
extern "C" void vtkBSPCuts_destructor (vtkNew < vtkBSPCuts > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBSPCuts_get_ptr (vtkNew < vtkBSPCuts > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bsp_cuts_get_data_object_type(vtkNew<vtkBSPCuts> sself) { return sself->GetDataObjectType(); }
extern "C" void vtk_bsp_cuts_create_cuts(vtkNew<vtkBSPCuts> sself, double bounds, int ncuts, int dim, double coord, int lower, int upper, double lowerDataCoord, double upperDataCoord, int npoints) { sself->CreateCuts(bounds, ncuts, dim, coord, lower, upper, lowerDataCoord, upperDataCoord, npoints); }
extern "C" int vtk_bsp_cuts_get_number_of_cuts(vtkNew<vtkBSPCuts> sself) { return sself->GetNumberOfCuts(); }
extern "C" int vtk_bsp_cuts_get_arrays(vtkNew<vtkBSPCuts> sself, int len, int dim, double coord, int lower, int upper, double lowerDataCoord, double upperDataCoord, int npoints) { return sself->GetArrays(len, dim, coord, lower, upper, lowerDataCoord, upperDataCoord, npoints); }
extern "C" void vtk_bsp_cuts_print_tree(vtkNew<vtkBSPCuts> sself) { sself->PrintTree(); }
extern "C" void vtk_bsp_cuts_print_arrays(vtkNew<vtkBSPCuts> sself) { sself->PrintArrays(); }
extern "C" vtkNew < vtkBSPIntersections > vtkBSPIntersections_new () {return vtkNew < vtkBSPIntersections > () ;}
extern "C" void vtkBSPIntersections_destructor (vtkNew < vtkBSPIntersections > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBSPIntersections_get_ptr (vtkNew < vtkBSPIntersections > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bsp_intersections_get_bounds(vtkNew<vtkBSPIntersections> sself, double bounds) { return sself->GetBounds(bounds); }
extern "C" int vtk_bsp_intersections_get_number_of_regions(vtkNew<vtkBSPIntersections> sself) { return sself->GetNumberOfRegions(); }
extern "C" int vtk_bsp_intersections_get_region_bounds(vtkNew<vtkBSPIntersections> sself, int regionID, double bounds) { return sself->GetRegionBounds(regionID, bounds); }
extern "C" int vtk_bsp_intersections_get_region_data_bounds(vtkNew<vtkBSPIntersections> sself, int regionID, double bounds) { return sself->GetRegionDataBounds(regionID, bounds); }
extern "C" int vtk_bsp_intersections_intersects_box(vtkNew<vtkBSPIntersections> sself, int regionId, double x) { return sself->IntersectsBox(regionId, x); }
extern "C" int vtk_bsp_intersections_intersects_box(vtkNew<vtkBSPIntersections> sself, int regionId, double x0, double x1, double y0, double y1, double z0, double z1) { return sself->IntersectsBox(regionId, x0, x1, y0, y1, z0, z1); }
extern "C" int vtk_bsp_intersections_intersects_box(vtkNew<vtkBSPIntersections> sself, int ids, int len, double x) { return sself->IntersectsBox(ids, len, x); }
extern "C" int vtk_bsp_intersections_intersects_box(vtkNew<vtkBSPIntersections> sself, int ids, int len, double x0, double x1, double y0, double y1, double z0, double z1) { return sself->IntersectsBox(ids, len, x0, x1, y0, y1, z0, z1); }
extern "C" int vtk_bsp_intersections_intersects_sphere_2(vtkNew<vtkBSPIntersections> sself, int regionId, double x, double y, double z, double rSquared) { return sself->IntersectsSphere2(regionId, x, y, z, rSquared); }
extern "C" int vtk_bsp_intersections_intersects_sphere_2(vtkNew<vtkBSPIntersections> sself, int ids, int len, double x, double y, double z, double rSquared) { return sself->IntersectsSphere2(ids, len, x, y, z, rSquared); }
extern "C" int vtk_bsp_intersections_get_compute_intersections_using_data_bounds(vtkNew<vtkBSPIntersections> sself) { return sself->GetComputeIntersectionsUsingDataBounds(); }
extern "C" void vtk_bsp_intersections_set_compute_intersections_using_data_bounds(vtkNew<vtkBSPIntersections> sself, int c) { sself->SetComputeIntersectionsUsingDataBounds(c); }
extern "C" void vtk_bsp_intersections_compute_intersections_using_data_bounds_on(vtkNew<vtkBSPIntersections> sself) { sself->ComputeIntersectionsUsingDataBoundsOn(); }
extern "C" void vtk_bsp_intersections_compute_intersections_using_data_bounds_off(vtkNew<vtkBSPIntersections> sself) { sself->ComputeIntersectionsUsingDataBoundsOff(); }
extern "C" vtkNew < vtkBezierCurve > vtkBezierCurve_new () {return vtkNew < vtkBezierCurve > () ;}
extern "C" void vtkBezierCurve_destructor (vtkNew < vtkBezierCurve > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBezierCurve_get_ptr (vtkNew < vtkBezierCurve > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bezier_curve_get_cell_type(vtkNew<vtkBezierCurve> sself) { return sself->GetCellType(); }
extern "C" void vtk_bezier_curve_evaluate_location_projected_node(vtkNew<vtkBezierCurve> sself, int subId, const long long point_id, double x, double weights) { sself->EvaluateLocationProjectedNode(subId, point_id, x, weights); }
extern "C" void vtk_bezier_curve_interpolate_functions(vtkNew<vtkBezierCurve> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkBezierHexahedron > vtkBezierHexahedron_new () {return vtkNew < vtkBezierHexahedron > () ;}
extern "C" void vtkBezierHexahedron_destructor (vtkNew < vtkBezierHexahedron > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBezierHexahedron_get_ptr (vtkNew < vtkBezierHexahedron > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bezier_hexahedron_get_cell_type(vtkNew<vtkBezierHexahedron> sself) { return sself->GetCellType(); }
extern "C" void vtk_bezier_hexahedron_evaluate_location_projected_node(vtkNew<vtkBezierHexahedron> sself, int subId, const long long point_id, double x, double weights) { sself->EvaluateLocationProjectedNode(subId, point_id, x, weights); }
extern "C" void vtk_bezier_hexahedron_interpolate_functions(vtkNew<vtkBezierHexahedron> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkBezierInterpolation > vtkBezierInterpolation_new () {return vtkNew < vtkBezierInterpolation > () ;}
extern "C" void vtkBezierInterpolation_destructor (vtkNew < vtkBezierInterpolation > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBezierInterpolation_get_ptr (vtkNew < vtkBezierInterpolation > sself) {return sself . GetPointer () ;}
extern "C" void vtk_bezier_interpolation_de_casteljau_simplex(vtkNew<vtkBezierInterpolation> sself, const int dim, const int deg, const double pcoords, double weights) { sself->deCasteljauSimplex(dim, deg, pcoords, weights); }
extern "C" void vtk_bezier_interpolation_de_casteljau_simplex(vtkNew<vtkBezierInterpolation> sself, const int dim, const int deg, const double pcoords, double weights) { sself->DeCasteljauSimplex(dim, deg, pcoords, weights); }
extern "C" void vtk_bezier_interpolation_de_casteljau_simplex_deriv(vtkNew<vtkBezierInterpolation> sself, const int dim, const int deg, const double pcoords, double weights) { sself->deCasteljauSimplexDeriv(dim, deg, pcoords, weights); }
extern "C" void vtk_bezier_interpolation_de_casteljau_simplex_deriv(vtkNew<vtkBezierInterpolation> sself, const int dim, const int deg, const double pcoords, double weights) { sself->DeCasteljauSimplexDeriv(dim, deg, pcoords, weights); }
extern "C" void vtk_bezier_interpolation_evaluate_shape_functions(vtkNew<vtkBezierInterpolation> sself, int order, double pcoord, double shape) { sself->EvaluateShapeFunctions(order, pcoord, shape); }
extern "C" void vtk_bezier_interpolation_evaluate_shape_and_gradient(vtkNew<vtkBezierInterpolation> sself, int order, double pcoord, double shape, double grad) { sself->EvaluateShapeAndGradient(order, pcoord, shape, grad); }
extern "C" int vtk_bezier_interpolation_tensor_1_shape_functions(vtkNew<vtkBezierInterpolation> sself, const int order, const double pcoords, double shape) { return sself->Tensor1ShapeFunctions(order, pcoords, shape); }
extern "C" int vtk_bezier_interpolation_tensor_1_shape_derivatives(vtkNew<vtkBezierInterpolation> sself, const int order, const double pcoords, double derivs) { return sself->Tensor1ShapeDerivatives(order, pcoords, derivs); }
extern "C" int vtk_bezier_interpolation_tensor_2_shape_functions(vtkNew<vtkBezierInterpolation> sself, const int order, const double pcoords, double shape) { return sself->Tensor2ShapeFunctions(order, pcoords, shape); }
extern "C" int vtk_bezier_interpolation_tensor_2_shape_derivatives(vtkNew<vtkBezierInterpolation> sself, const int order, const double pcoords, double derivs) { return sself->Tensor2ShapeDerivatives(order, pcoords, derivs); }
extern "C" int vtk_bezier_interpolation_tensor_3_shape_functions(vtkNew<vtkBezierInterpolation> sself, const int order, const double pcoords, double shape) { return sself->Tensor3ShapeFunctions(order, pcoords, shape); }
extern "C" int vtk_bezier_interpolation_tensor_3_shape_derivatives(vtkNew<vtkBezierInterpolation> sself, const int order, const double pcoords, double derivs) { return sself->Tensor3ShapeDerivatives(order, pcoords, derivs); }
extern "C" void vtk_bezier_interpolation_wedge_shape_functions(vtkNew<vtkBezierInterpolation> sself, const int order, const long long numberOfPoints, const double pcoords, double shape) { sself->WedgeShapeFunctions(order, numberOfPoints, pcoords, shape); }
extern "C" void vtk_bezier_interpolation_wedge_shape_derivatives(vtkNew<vtkBezierInterpolation> sself, const int order, const long long numberOfPoints, const double pcoords, double derivs) { sself->WedgeShapeDerivatives(order, numberOfPoints, pcoords, derivs); }
extern "C" void vtk_bezier_interpolation_wedge_evaluate(vtkNew<vtkBezierInterpolation> sself, const int order, const long long numberOfPoints, const double pcoords, double fieldVals, int fieldDim, double fieldAtPCoords) { sself->WedgeEvaluate(order, numberOfPoints, pcoords, fieldVals, fieldDim, fieldAtPCoords); }
extern "C" vtkNew < vtkBezierQuadrilateral > vtkBezierQuadrilateral_new () {return vtkNew < vtkBezierQuadrilateral > () ;}
extern "C" void vtkBezierQuadrilateral_destructor (vtkNew < vtkBezierQuadrilateral > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBezierQuadrilateral_get_ptr (vtkNew < vtkBezierQuadrilateral > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bezier_quadrilateral_get_cell_type(vtkNew<vtkBezierQuadrilateral> sself) { return sself->GetCellType(); }
extern "C" void vtk_bezier_quadrilateral_evaluate_location_projected_node(vtkNew<vtkBezierQuadrilateral> sself, int subId, const long long point_id, double x, double weights) { sself->EvaluateLocationProjectedNode(subId, point_id, x, weights); }
extern "C" void vtk_bezier_quadrilateral_interpolate_functions(vtkNew<vtkBezierQuadrilateral> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkBezierTetra > vtkBezierTetra_new () {return vtkNew < vtkBezierTetra > () ;}
extern "C" void vtkBezierTetra_destructor (vtkNew < vtkBezierTetra > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBezierTetra_get_ptr (vtkNew < vtkBezierTetra > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bezier_tetra_get_cell_type(vtkNew<vtkBezierTetra> sself) { return sself->GetCellType(); }
extern "C" void vtk_bezier_tetra_evaluate_location_projected_node(vtkNew<vtkBezierTetra> sself, int subId, const long long point_id, double x, double weights) { sself->EvaluateLocationProjectedNode(subId, point_id, x, weights); }
extern "C" void vtk_bezier_tetra_interpolate_functions(vtkNew<vtkBezierTetra> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkBezierTriangle > vtkBezierTriangle_new () {return vtkNew < vtkBezierTriangle > () ;}
extern "C" void vtkBezierTriangle_destructor (vtkNew < vtkBezierTriangle > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBezierTriangle_get_ptr (vtkNew < vtkBezierTriangle > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bezier_triangle_get_cell_type(vtkNew<vtkBezierTriangle> sself) { return sself->GetCellType(); }
extern "C" void vtk_bezier_triangle_evaluate_location_projected_node(vtkNew<vtkBezierTriangle> sself, int subId, const long long point_id, double x, double weights) { sself->EvaluateLocationProjectedNode(subId, point_id, x, weights); }
extern "C" void vtk_bezier_triangle_interpolate_functions(vtkNew<vtkBezierTriangle> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkBezierWedge > vtkBezierWedge_new () {return vtkNew < vtkBezierWedge > () ;}
extern "C" void vtkBezierWedge_destructor (vtkNew < vtkBezierWedge > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBezierWedge_get_ptr (vtkNew < vtkBezierWedge > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bezier_wedge_get_cell_type(vtkNew<vtkBezierWedge> sself) { return sself->GetCellType(); }
extern "C" void vtk_bezier_wedge_evaluate_location_projected_node(vtkNew<vtkBezierWedge> sself, int subId, const long long point_id, double x, double weights) { sself->EvaluateLocationProjectedNode(subId, point_id, x, weights); }
extern "C" void vtk_bezier_wedge_interpolate_functions(vtkNew<vtkBezierWedge> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkBiQuadraticQuad > vtkBiQuadraticQuad_new () {return vtkNew < vtkBiQuadraticQuad > () ;}
extern "C" void vtkBiQuadraticQuad_destructor (vtkNew < vtkBiQuadraticQuad > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBiQuadraticQuad_get_ptr (vtkNew < vtkBiQuadraticQuad > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bi_quadratic_quad_get_cell_type(vtkNew<vtkBiQuadraticQuad> sself) { return sself->GetCellType(); }
extern "C" int vtk_bi_quadratic_quad_get_cell_dimension(vtkNew<vtkBiQuadraticQuad> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_bi_quadratic_quad_get_number_of_edges(vtkNew<vtkBiQuadraticQuad> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_bi_quadratic_quad_get_number_of_faces(vtkNew<vtkBiQuadraticQuad> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_bi_quadratic_quad_evaluate_position(vtkNew<vtkBiQuadraticQuad> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_bi_quadratic_quad_evaluate_location(vtkNew<vtkBiQuadraticQuad> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_bi_quadratic_quad_derivatives(vtkNew<vtkBiQuadraticQuad> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_bi_quadratic_quad_intersect_with_line(vtkNew<vtkBiQuadraticQuad> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_bi_quadratic_quad_get_parametric_center(vtkNew<vtkBiQuadraticQuad> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_bi_quadratic_quad_interpolate_functions(vtkNew<vtkBiQuadraticQuad> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_bi_quadratic_quad_interpolate_derivs(vtkNew<vtkBiQuadraticQuad> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" vtkNew < vtkBiQuadraticQuadraticHexahedron > vtkBiQuadraticQuadraticHexahedron_new () {return vtkNew < vtkBiQuadraticQuadraticHexahedron > () ;}
extern "C" void vtkBiQuadraticQuadraticHexahedron_destructor (vtkNew < vtkBiQuadraticQuadraticHexahedron > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBiQuadraticQuadraticHexahedron_get_ptr (vtkNew < vtkBiQuadraticQuadraticHexahedron > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bi_quadratic_quadratic_hexahedron_get_cell_type(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself) { return sself->GetCellType(); }
extern "C" int vtk_bi_quadratic_quadratic_hexahedron_get_cell_dimension(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_bi_quadratic_quadratic_hexahedron_get_number_of_edges(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_bi_quadratic_quadratic_hexahedron_get_number_of_faces(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_bi_quadratic_quadratic_hexahedron_evaluate_position(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_bi_quadratic_quadratic_hexahedron_evaluate_location(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_bi_quadratic_quadratic_hexahedron_derivatives(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_bi_quadratic_quadratic_hexahedron_intersect_with_line(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_bi_quadratic_quadratic_hexahedron_interpolation_functions(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_bi_quadratic_quadratic_hexahedron_interpolation_derivs(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_bi_quadratic_quadratic_hexahedron_interpolate_functions(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_bi_quadratic_quadratic_hexahedron_interpolate_derivs(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_bi_quadratic_quadratic_hexahedron_get_edge_array(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_bi_quadratic_quadratic_hexahedron_get_face_array(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" void vtk_bi_quadratic_quadratic_hexahedron_jacobian_inverse(vtkNew<vtkBiQuadraticQuadraticHexahedron> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkBiQuadraticQuadraticWedge > vtkBiQuadraticQuadraticWedge_new () {return vtkNew < vtkBiQuadraticQuadraticWedge > () ;}
extern "C" void vtkBiQuadraticQuadraticWedge_destructor (vtkNew < vtkBiQuadraticQuadraticWedge > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBiQuadraticQuadraticWedge_get_ptr (vtkNew < vtkBiQuadraticQuadraticWedge > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bi_quadratic_quadratic_wedge_get_cell_type(vtkNew<vtkBiQuadraticQuadraticWedge> sself) { return sself->GetCellType(); }
extern "C" int vtk_bi_quadratic_quadratic_wedge_get_cell_dimension(vtkNew<vtkBiQuadraticQuadraticWedge> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_bi_quadratic_quadratic_wedge_get_number_of_edges(vtkNew<vtkBiQuadraticQuadraticWedge> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_bi_quadratic_quadratic_wedge_get_number_of_faces(vtkNew<vtkBiQuadraticQuadraticWedge> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_bi_quadratic_quadratic_wedge_evaluate_position(vtkNew<vtkBiQuadraticQuadraticWedge> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_bi_quadratic_quadratic_wedge_evaluate_location(vtkNew<vtkBiQuadraticQuadraticWedge> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_bi_quadratic_quadratic_wedge_derivatives(vtkNew<vtkBiQuadraticQuadraticWedge> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_bi_quadratic_quadratic_wedge_intersect_with_line(vtkNew<vtkBiQuadraticQuadraticWedge> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_bi_quadratic_quadratic_wedge_get_parametric_center(vtkNew<vtkBiQuadraticQuadraticWedge> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_bi_quadratic_quadratic_wedge_interpolation_functions(vtkNew<vtkBiQuadraticQuadraticWedge> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_bi_quadratic_quadratic_wedge_interpolation_derivs(vtkNew<vtkBiQuadraticQuadraticWedge> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_bi_quadratic_quadratic_wedge_interpolate_functions(vtkNew<vtkBiQuadraticQuadraticWedge> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_bi_quadratic_quadratic_wedge_interpolate_derivs(vtkNew<vtkBiQuadraticQuadraticWedge> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_bi_quadratic_quadratic_wedge_get_edge_array(vtkNew<vtkBiQuadraticQuadraticWedge> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_bi_quadratic_quadratic_wedge_get_face_array(vtkNew<vtkBiQuadraticQuadraticWedge> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" void vtk_bi_quadratic_quadratic_wedge_jacobian_inverse(vtkNew<vtkBiQuadraticQuadraticWedge> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkBiQuadraticTriangle > vtkBiQuadraticTriangle_new () {return vtkNew < vtkBiQuadraticTriangle > () ;}
extern "C" void vtkBiQuadraticTriangle_destructor (vtkNew < vtkBiQuadraticTriangle > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBiQuadraticTriangle_get_ptr (vtkNew < vtkBiQuadraticTriangle > sself) {return sself . GetPointer () ;}
extern "C" int vtk_bi_quadratic_triangle_get_cell_type(vtkNew<vtkBiQuadraticTriangle> sself) { return sself->GetCellType(); }
extern "C" int vtk_bi_quadratic_triangle_get_cell_dimension(vtkNew<vtkBiQuadraticTriangle> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_bi_quadratic_triangle_get_number_of_edges(vtkNew<vtkBiQuadraticTriangle> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_bi_quadratic_triangle_get_number_of_faces(vtkNew<vtkBiQuadraticTriangle> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_bi_quadratic_triangle_evaluate_position(vtkNew<vtkBiQuadraticTriangle> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_bi_quadratic_triangle_evaluate_location(vtkNew<vtkBiQuadraticTriangle> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_bi_quadratic_triangle_derivatives(vtkNew<vtkBiQuadraticTriangle> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_bi_quadratic_triangle_intersect_with_line(vtkNew<vtkBiQuadraticTriangle> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_bi_quadratic_triangle_get_parametric_center(vtkNew<vtkBiQuadraticTriangle> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" double vtk_bi_quadratic_triangle_get_parametric_distance(vtkNew<vtkBiQuadraticTriangle> sself, const double pcoords) { return sself->GetParametricDistance(pcoords); }
extern "C" void vtk_bi_quadratic_triangle_interpolation_functions(vtkNew<vtkBiQuadraticTriangle> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_bi_quadratic_triangle_interpolation_derivs(vtkNew<vtkBiQuadraticTriangle> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_bi_quadratic_triangle_interpolate_functions(vtkNew<vtkBiQuadraticTriangle> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_bi_quadratic_triangle_interpolate_derivs(vtkNew<vtkBiQuadraticTriangle> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" vtkNew < vtkBox > vtkBox_new () {return vtkNew < vtkBox > () ;}
extern "C" void vtkBox_destructor (vtkNew < vtkBox > sself) {sself . Reset () ; return ;}
extern "C" void * vtkBox_get_ptr (vtkNew < vtkBox > sself) {return sself . GetPointer () ;}
extern "C" double vtk_box_evaluate_function(vtkNew<vtkBox> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_box_evaluate_gradient(vtkNew<vtkBox> sself, double x, double n) { sself->EvaluateGradient(x, n); }
extern "C" void vtk_box_set_x_min(vtkNew<vtkBox> sself, double p) { sself->SetXMin(p); }
extern "C" void vtk_box_set_x_min(vtkNew<vtkBox> sself, double x, double y, double z) { sself->SetXMin(x, y, z); }
extern "C" void vtk_box_get_x_min(vtkNew<vtkBox> sself, double p) { sself->GetXMin(p); }
extern "C" void vtk_box_get_x_min(vtkNew<vtkBox> sself, double x, double y, double z) { sself->GetXMin(x, y, z); }
extern "C" void vtk_box_set_x_max(vtkNew<vtkBox> sself, double p) { sself->SetXMax(p); }
extern "C" void vtk_box_set_x_max(vtkNew<vtkBox> sself, double x, double y, double z) { sself->SetXMax(x, y, z); }
extern "C" void vtk_box_get_x_max(vtkNew<vtkBox> sself, double p) { sself->GetXMax(p); }
extern "C" void vtk_box_get_x_max(vtkNew<vtkBox> sself, double x, double y, double z) { sself->GetXMax(x, y, z); }
extern "C" void vtk_box_set_bounds(vtkNew<vtkBox> sself, double xMin, double xMax, double yMin, double yMax, double zMin, double zMax) { sself->SetBounds(xMin, xMax, yMin, yMax, zMin, zMax); }
extern "C" void vtk_box_set_bounds(vtkNew<vtkBox> sself, const double bounds) { sself->SetBounds(bounds); }
extern "C" void vtk_box_get_bounds(vtkNew<vtkBox> sself, double xMin, double xMax, double yMin, double yMax, double zMin, double zMax) { sself->GetBounds(xMin, xMax, yMin, yMax, zMin, zMax); }
extern "C" void vtk_box_get_bounds(vtkNew<vtkBox> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" double* vtk_box_get_bounds(vtkNew<vtkBox> sself) { return sself->GetBounds(); }
extern "C" void vtk_box_add_bounds(vtkNew<vtkBox> sself, const double bounds) { sself->AddBounds(bounds); }
extern "C" char vtk_box_intersect_box(vtkNew<vtkBox> sself, const double bounds, const double origin, const double dir, double coord, double t, const double tolerance) { return sself->IntersectBox(bounds, origin, dir, coord, t, tolerance); }
extern "C" int vtk_box_intersect_with_line(vtkNew<vtkBox> sself, const double bounds, const double p1, const double p2, double t1, double t2, double x1, double x2, int plane1, int plane2) { return sself->IntersectWithLine(bounds, p1, p2, t1, t2, x1, x2, plane1, plane2); }
extern "C" bool vtk_box_intersect_with_infinite_line(vtkNew<vtkBox> sself, const double bounds, const double p1, const double p2, double t1, double t2, double x1, double x2, int plane1, int plane2) { return sself->IntersectWithInfiniteLine(bounds, p1, p2, t1, t2, x1, x2, plane1, plane2); }
extern "C" int vtk_box_intersect_with_plane(vtkNew<vtkBox> sself, double bounds, double origin, double normal) { return sself->IntersectWithPlane(bounds, origin, normal); }
extern "C" int vtk_box_intersect_with_plane(vtkNew<vtkBox> sself, double bounds, double origin, double normal, double xout) { return sself->IntersectWithPlane(bounds, origin, normal, xout); }
extern "C" int vtk_box_is_box_in_frustum(vtkNew<vtkBox> sself, double planes, double bounds) { return sself->IsBoxInFrustum(planes, bounds); }
extern "C" vtkNew < vtkCellArray > vtkCellArray_new () {return vtkNew < vtkCellArray > () ;}
extern "C" void vtkCellArray_destructor (vtkNew < vtkCellArray > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCellArray_get_ptr (vtkNew < vtkCellArray > sself) {return sself . GetPointer () ;}
extern "C" int vtk_cell_array_allocate(vtkNew<vtkCellArray> sself, long long sz, long long ext) { return sself->Allocate(sz, ext); }
extern "C" bool vtk_cell_array_allocate_estimate(vtkNew<vtkCellArray> sself, long long numCells, long long maxCellSize) { return sself->AllocateEstimate(numCells, maxCellSize); }
extern "C" bool vtk_cell_array_allocate_exact(vtkNew<vtkCellArray> sself, long long numCells, long long connectivitySize) { return sself->AllocateExact(numCells, connectivitySize); }
extern "C" bool vtk_cell_array_resize_exact(vtkNew<vtkCellArray> sself, long long numCells, long long connectivitySize) { return sself->ResizeExact(numCells, connectivitySize); }
extern "C" void vtk_cell_array_initialize(vtkNew<vtkCellArray> sself) { sself->Initialize(); }
extern "C" void vtk_cell_array_reset(vtkNew<vtkCellArray> sself) { sself->Reset(); }
extern "C" void vtk_cell_array_squeeze(vtkNew<vtkCellArray> sself) { sself->Squeeze(); }
extern "C" bool vtk_cell_array_is_valid(vtkNew<vtkCellArray> sself) { return sself->IsValid(); }
extern "C" long long vtk_cell_array_get_number_of_cells(vtkNew<vtkCellArray> sself) { return sself->GetNumberOfCells(); }
extern "C" long long vtk_cell_array_get_number_of_offsets(vtkNew<vtkCellArray> sself) { return sself->GetNumberOfOffsets(); }
extern "C" long long vtk_cell_array_get_number_of_connectivity_ids(vtkNew<vtkCellArray> sself) { return sself->GetNumberOfConnectivityIds(); }
extern "C" bool vtk_cell_array_is_storage_64_bit(vtkNew<vtkCellArray> sself) { return sself->IsStorage64Bit(); }
extern "C" bool vtk_cell_array_is_storage_shareable(vtkNew<vtkCellArray> sself) { return sself->IsStorageShareable(); }
extern "C" void vtk_cell_array_use_32_bit_storage(vtkNew<vtkCellArray> sself) { sself->Use32BitStorage(); }
extern "C" void vtk_cell_array_use_64_bit_storage(vtkNew<vtkCellArray> sself) { sself->Use64BitStorage(); }
extern "C" void vtk_cell_array_use_default_storage(vtkNew<vtkCellArray> sself) { sself->UseDefaultStorage(); }
extern "C" bool vtk_cell_array_can_convert_to_32_bit_storage(vtkNew<vtkCellArray> sself) { return sself->CanConvertTo32BitStorage(); }
extern "C" bool vtk_cell_array_can_convert_to_64_bit_storage(vtkNew<vtkCellArray> sself) { return sself->CanConvertTo64BitStorage(); }
extern "C" bool vtk_cell_array_can_convert_to_default_storage(vtkNew<vtkCellArray> sself) { return sself->CanConvertToDefaultStorage(); }
extern "C" bool vtk_cell_array_convert_to_32_bit_storage(vtkNew<vtkCellArray> sself) { return sself->ConvertTo32BitStorage(); }
extern "C" bool vtk_cell_array_convert_to_64_bit_storage(vtkNew<vtkCellArray> sself) { return sself->ConvertTo64BitStorage(); }
extern "C" bool vtk_cell_array_convert_to_default_storage(vtkNew<vtkCellArray> sself) { return sself->ConvertToDefaultStorage(); }
extern "C" bool vtk_cell_array_convert_to_smallest_storage(vtkNew<vtkCellArray> sself) { return sself->ConvertToSmallestStorage(); }
extern "C" long long vtk_cell_array_is_homogeneous(vtkNew<vtkCellArray> sself) { return sself->IsHomogeneous(); }
extern "C" void vtk_cell_array_init_traversal(vtkNew<vtkCellArray> sself) { sself->InitTraversal(); }
extern "C" int vtk_cell_array_get_next_cell(vtkNew<vtkCellArray> sself, long long npts, const long long pts) { return sself->GetNextCell(npts, pts); }
extern "C" void vtk_cell_array_get_cell_at_id(vtkNew<vtkCellArray> sself, long long cellId, long long cellSize, const long long cellPoints) { sself->GetCellAtId(cellId, cellSize, cellPoints); }
extern "C" long long vtk_cell_array_get_cell_size(vtkNew<vtkCellArray> sself, const long long cellId) { return sself->GetCellSize(cellId); }
extern "C" long long vtk_cell_array_insert_next_cell(vtkNew<vtkCellArray> sself, long long npts, const long long pts) { return sself->InsertNextCell(npts, pts); }
extern "C" long long vtk_cell_array_insert_next_cell(vtkNew<vtkCellArray> sself, int npts) { return sself->InsertNextCell(npts); }
extern "C" void vtk_cell_array_insert_cell_point(vtkNew<vtkCellArray> sself, long long id) { sself->InsertCellPoint(id); }
extern "C" void vtk_cell_array_update_cell_count(vtkNew<vtkCellArray> sself, int npts) { sself->UpdateCellCount(npts); }
extern "C" long long vtk_cell_array_get_traversal_cell_id(vtkNew<vtkCellArray> sself) { return sself->GetTraversalCellId(); }
extern "C" void vtk_cell_array_set_traversal_cell_id(vtkNew<vtkCellArray> sself, long long cellId) { sself->SetTraversalCellId(cellId); }
extern "C" void vtk_cell_array_reverse_cell_at_id(vtkNew<vtkCellArray> sself, long long cellId) { sself->ReverseCellAtId(cellId); }
extern "C" void vtk_cell_array_replace_cell_at_id(vtkNew<vtkCellArray> sself, long long cellId, long long cellSize, const long long cellPoints) { sself->ReplaceCellAtId(cellId, cellSize, cellPoints); }
extern "C" int vtk_cell_array_get_max_cell_size(vtkNew<vtkCellArray> sself) { return sself->GetMaxCellSize(); }
extern "C" void vtk_cell_array_import_legacy_format(vtkNew<vtkCellArray> sself, const long long data, long long len) { sself->ImportLegacyFormat(data, len); }
extern "C" void vtk_cell_array_append_legacy_format(vtkNew<vtkCellArray> sself, const long long data, long long len, long long ptOffset) { sself->AppendLegacyFormat(data, len, ptOffset); }
extern "C" unsigned long vtk_cell_array_get_actual_memory_size(vtkNew<vtkCellArray> sself) { return sself->GetActualMemorySize(); }
extern "C" void vtk_cell_array_set_number_of_cells(vtkNew<vtkCellArray> sself, long long p0) { sself->SetNumberOfCells(p0); }
extern "C" long long vtk_cell_array_estimate_size(vtkNew<vtkCellArray> sself, long long numCells, int maxPtsPerCell) { return sself->EstimateSize(numCells, maxPtsPerCell); }
extern "C" long long vtk_cell_array_get_size(vtkNew<vtkCellArray> sself) { return sself->GetSize(); }
extern "C" long long vtk_cell_array_get_number_of_connectivity_entries(vtkNew<vtkCellArray> sself) { return sself->GetNumberOfConnectivityEntries(); }
extern "C" void vtk_cell_array_get_cell(vtkNew<vtkCellArray> sself, long long loc, long long npts, const long long pts) { sself->GetCell(loc, npts, pts); }
extern "C" long long vtk_cell_array_get_insert_location(vtkNew<vtkCellArray> sself, int npts) { return sself->GetInsertLocation(npts); }
extern "C" long long vtk_cell_array_get_traversal_location(vtkNew<vtkCellArray> sself) { return sself->GetTraversalLocation(); }
extern "C" long long vtk_cell_array_get_traversal_location(vtkNew<vtkCellArray> sself, long long npts) { return sself->GetTraversalLocation(npts); }
extern "C" void vtk_cell_array_set_traversal_location(vtkNew<vtkCellArray> sself, long long loc) { sself->SetTraversalLocation(loc); }
extern "C" void vtk_cell_array_reverse_cell(vtkNew<vtkCellArray> sself, long long loc) { sself->ReverseCell(loc); }
extern "C" void vtk_cell_array_replace_cell(vtkNew<vtkCellArray> sself, long long loc, int npts, const long long pts) { sself->ReplaceCell(loc, npts, pts); }
extern "C" vtkNew < vtkCellArrayIterator > vtkCellArrayIterator_new () {return vtkNew < vtkCellArrayIterator > () ;}
extern "C" void vtkCellArrayIterator_destructor (vtkNew < vtkCellArrayIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCellArrayIterator_get_ptr (vtkNew < vtkCellArrayIterator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_cell_array_iterator_go_to_cell(vtkNew<vtkCellArrayIterator> sself, long long cellId) { sself->GoToCell(cellId); }
extern "C" void vtk_cell_array_iterator_get_cell_at_id(vtkNew<vtkCellArrayIterator> sself, long long cellId, long long numCellPts, const long long cellPts) { sself->GetCellAtId(cellId, numCellPts, cellPts); }
extern "C" void vtk_cell_array_iterator_go_to_first_cell(vtkNew<vtkCellArrayIterator> sself) { sself->GoToFirstCell(); }
extern "C" void vtk_cell_array_iterator_go_to_next_cell(vtkNew<vtkCellArrayIterator> sself) { sself->GoToNextCell(); }
extern "C" bool vtk_cell_array_iterator_is_done_with_traversal(vtkNew<vtkCellArrayIterator> sself) { return sself->IsDoneWithTraversal(); }
extern "C" long long vtk_cell_array_iterator_get_current_cell_id(vtkNew<vtkCellArrayIterator> sself) { return sself->GetCurrentCellId(); }
extern "C" void vtk_cell_array_iterator_get_current_cell(vtkNew<vtkCellArrayIterator> sself, long long cellSize, const long long cellPoints) { sself->GetCurrentCell(cellSize, cellPoints); }
extern "C" void vtk_cell_array_iterator_replace_current_cell(vtkNew<vtkCellArrayIterator> sself, long long npts, const long long pts) { sself->ReplaceCurrentCell(npts, pts); }
extern "C" void vtk_cell_array_iterator_reverse_current_cell(vtkNew<vtkCellArrayIterator> sself) { sself->ReverseCurrentCell(); }
extern "C" vtkNew < vtkCellData > vtkCellData_new () {return vtkNew < vtkCellData > () ;}
extern "C" void vtkCellData_destructor (vtkNew < vtkCellData > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCellData_get_ptr (vtkNew < vtkCellData > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkCellLinks > vtkCellLinks_new () {return vtkNew < vtkCellLinks > () ;}
extern "C" void vtkCellLinks_destructor (vtkNew < vtkCellLinks > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCellLinks_get_ptr (vtkNew < vtkCellLinks > sself) {return sself . GetPointer () ;}
extern "C" void vtk_cell_links_allocate(vtkNew<vtkCellLinks> sself, long long numLinks, long long ext) { sself->Allocate(numLinks, ext); }
extern "C" void vtk_cell_links_initialize(vtkNew<vtkCellLinks> sself) { sself->Initialize(); }
extern "C" long long vtk_cell_links_get_ncells(vtkNew<vtkCellLinks> sself, long long ptId) { return sself->GetNcells(ptId); }
extern "C" long long* vtk_cell_links_get_cells(vtkNew<vtkCellLinks> sself, long long ptId) { return sself->GetCells(ptId); }
extern "C" void vtk_cell_links_select_cells(vtkNew<vtkCellLinks> sself, long long minMaxDegree, unsigned char cellSelection) { sself->SelectCells(minMaxDegree, cellSelection); }
extern "C" long long vtk_cell_links_insert_next_point(vtkNew<vtkCellLinks> sself, int numLinks) { return sself->InsertNextPoint(numLinks); }
extern "C" void vtk_cell_links_insert_next_cell_reference(vtkNew<vtkCellLinks> sself, long long ptId, long long cellId) { sself->InsertNextCellReference(ptId, cellId); }
extern "C" void vtk_cell_links_delete_point(vtkNew<vtkCellLinks> sself, long long ptId) { sself->DeletePoint(ptId); }
extern "C" void vtk_cell_links_remove_cell_reference(vtkNew<vtkCellLinks> sself, long long cellId, long long ptId) { sself->RemoveCellReference(cellId, ptId); }
extern "C" void vtk_cell_links_add_cell_reference(vtkNew<vtkCellLinks> sself, long long cellId, long long ptId) { sself->AddCellReference(cellId, ptId); }
extern "C" void vtk_cell_links_resize_cell_list(vtkNew<vtkCellLinks> sself, long long ptId, int size) { sself->ResizeCellList(ptId, size); }
extern "C" void vtk_cell_links_squeeze(vtkNew<vtkCellLinks> sself) { sself->Squeeze(); }
extern "C" void vtk_cell_links_reset(vtkNew<vtkCellLinks> sself) { sself->Reset(); }
extern "C" unsigned long vtk_cell_links_get_actual_memory_size(vtkNew<vtkCellLinks> sself) { return sself->GetActualMemorySize(); }
extern "C" vtkNew < vtkCellLocator > vtkCellLocator_new () {return vtkNew < vtkCellLocator > () ;}
extern "C" void vtkCellLocator_destructor (vtkNew < vtkCellLocator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCellLocator_get_ptr (vtkNew < vtkCellLocator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_cell_locator_set_number_of_cells_per_bucket(vtkNew<vtkCellLocator> sself, int N) { sself->SetNumberOfCellsPerBucket(N); }
extern "C" int vtk_cell_locator_get_number_of_cells_per_bucket(vtkNew<vtkCellLocator> sself) { return sself->GetNumberOfCellsPerBucket(); }
extern "C" int vtk_cell_locator_get_number_of_buckets(vtkNew<vtkCellLocator> sself) { return sself->GetNumberOfBuckets(); }
extern "C" void vtk_cell_locator_free_search_structure(vtkNew<vtkCellLocator> sself) { sself->FreeSearchStructure(); }
extern "C" void vtk_cell_locator_build_locator(vtkNew<vtkCellLocator> sself) { sself->BuildLocator(); }
extern "C" void vtk_cell_locator_build_locator_if_needed(vtkNew<vtkCellLocator> sself) { sself->BuildLocatorIfNeeded(); }
extern "C" void vtk_cell_locator_force_build_locator(vtkNew<vtkCellLocator> sself) { sself->ForceBuildLocator(); }
extern "C" void vtk_cell_locator_build_locator_internal(vtkNew<vtkCellLocator> sself) { sself->BuildLocatorInternal(); }
extern "C" vtkNew < vtkCellLocatorStrategy > vtkCellLocatorStrategy_new () {return vtkNew < vtkCellLocatorStrategy > () ;}
extern "C" void vtkCellLocatorStrategy_destructor (vtkNew < vtkCellLocatorStrategy > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCellLocatorStrategy_get_ptr (vtkNew < vtkCellLocatorStrategy > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkCellTypes > vtkCellTypes_new () {return vtkNew < vtkCellTypes > () ;}
extern "C" void vtkCellTypes_destructor (vtkNew < vtkCellTypes > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCellTypes_get_ptr (vtkNew < vtkCellTypes > sself) {return sself . GetPointer () ;}
extern "C" int vtk_cell_types_allocate(vtkNew<vtkCellTypes> sself, long long sz, long long ext) { return sself->Allocate(sz, ext); }
extern "C" void vtk_cell_types_insert_cell(vtkNew<vtkCellTypes> sself, long long id, unsigned char type, long long loc) { sself->InsertCell(id, type, loc); }
extern "C" long long vtk_cell_types_insert_next_cell(vtkNew<vtkCellTypes> sself, unsigned char type, long long loc) { return sself->InsertNextCell(type, loc); }
extern "C" long long vtk_cell_types_get_cell_location(vtkNew<vtkCellTypes> sself, long long cellId) { return sself->GetCellLocation(cellId); }
extern "C" void vtk_cell_types_delete_cell(vtkNew<vtkCellTypes> sself, long long cellId) { sself->DeleteCell(cellId); }
extern "C" long long vtk_cell_types_get_number_of_types(vtkNew<vtkCellTypes> sself) { return sself->GetNumberOfTypes(); }
extern "C" int vtk_cell_types_is_type(vtkNew<vtkCellTypes> sself, unsigned char type) { return sself->IsType(type); }
extern "C" long long vtk_cell_types_insert_next_type(vtkNew<vtkCellTypes> sself, unsigned char type) { return sself->InsertNextType(type); }
extern "C" unsigned char vtk_cell_types_get_cell_type(vtkNew<vtkCellTypes> sself, long long cellId) { return sself->GetCellType(cellId); }
extern "C" void vtk_cell_types_squeeze(vtkNew<vtkCellTypes> sself) { sself->Squeeze(); }
extern "C" void vtk_cell_types_reset(vtkNew<vtkCellTypes> sself) { sself->Reset(); }
extern "C" unsigned long vtk_cell_types_get_actual_memory_size(vtkNew<vtkCellTypes> sself) { return sself->GetActualMemorySize(); }
extern "C" const char* vtk_cell_types_get_class_name_from_type_id(vtkNew<vtkCellTypes> sself, int typeId) { return sself->GetClassNameFromTypeId(typeId); }
extern "C" int vtk_cell_types_get_type_id_from_class_name(vtkNew<vtkCellTypes> sself, const char classname) { return sself->GetTypeIdFromClassName(classname); }
extern "C" int vtk_cell_types_is_linear(vtkNew<vtkCellTypes> sself, unsigned char type) { return sself->IsLinear(type); }
extern "C" vtkNew < vtkClosestNPointsStrategy > vtkClosestNPointsStrategy_new () {return vtkNew < vtkClosestNPointsStrategy > () ;}
extern "C" void vtkClosestNPointsStrategy_destructor (vtkNew < vtkClosestNPointsStrategy > sself) {sself . Reset () ; return ;}
extern "C" void * vtkClosestNPointsStrategy_get_ptr (vtkNew < vtkClosestNPointsStrategy > sself) {return sself . GetPointer () ;}
extern "C" void vtk_closest_n_points_strategy_set_closest_n_points(vtkNew<vtkClosestNPointsStrategy> sself, int _arg) { sself->SetClosestNPoints(_arg); }
extern "C" int vtk_closest_n_points_strategy_get_closest_n_points_min_value(vtkNew<vtkClosestNPointsStrategy> sself) { return sself->GetClosestNPointsMinValue(); }
extern "C" int vtk_closest_n_points_strategy_get_closest_n_points_max_value(vtkNew<vtkClosestNPointsStrategy> sself) { return sself->GetClosestNPointsMaxValue(); }
extern "C" int vtk_closest_n_points_strategy_get_closest_n_points(vtkNew<vtkClosestNPointsStrategy> sself) { return sself->GetClosestNPoints(); }
extern "C" vtkNew < vtkClosestPointStrategy > vtkClosestPointStrategy_new () {return vtkNew < vtkClosestPointStrategy > () ;}
extern "C" void vtkClosestPointStrategy_destructor (vtkNew < vtkClosestPointStrategy > sself) {sself . Reset () ; return ;}
extern "C" void * vtkClosestPointStrategy_get_ptr (vtkNew < vtkClosestPointStrategy > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkCone > vtkCone_new () {return vtkNew < vtkCone > () ;}
extern "C" void vtkCone_destructor (vtkNew < vtkCone > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCone_get_ptr (vtkNew < vtkCone > sself) {return sself . GetPointer () ;}
extern "C" double vtk_cone_evaluate_function(vtkNew<vtkCone> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_cone_evaluate_gradient(vtkNew<vtkCone> sself, double x, double g) { sself->EvaluateGradient(x, g); }
extern "C" void vtk_cone_set_angle(vtkNew<vtkCone> sself, double _arg) { sself->SetAngle(_arg); }
extern "C" double vtk_cone_get_angle_min_value(vtkNew<vtkCone> sself) { return sself->GetAngleMinValue(); }
extern "C" double vtk_cone_get_angle_max_value(vtkNew<vtkCone> sself) { return sself->GetAngleMaxValue(); }
extern "C" double vtk_cone_get_angle(vtkNew<vtkCone> sself) { return sself->GetAngle(); }
extern "C" vtkNew < vtkConvexPointSet > vtkConvexPointSet_new () {return vtkNew < vtkConvexPointSet > () ;}
extern "C" void vtkConvexPointSet_destructor (vtkNew < vtkConvexPointSet > sself) {sself . Reset () ; return ;}
extern "C" void * vtkConvexPointSet_get_ptr (vtkNew < vtkConvexPointSet > sself) {return sself . GetPointer () ;}
extern "C" int vtk_convex_point_set_has_fixed_topology(vtkNew<vtkConvexPointSet> sself) { return sself->HasFixedTopology(); }
extern "C" void vtk_convex_point_set_get_edge_points(vtkNew<vtkConvexPointSet> sself, long long edgeId, const long long pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" void vtk_convex_point_set_get_edge_points(vtkNew<vtkConvexPointSet> sself, int edgeId, int pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" long long vtk_convex_point_set_get_face_points(vtkNew<vtkConvexPointSet> sself, long long faceId, const long long pts) { return sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_convex_point_set_get_face_points(vtkNew<vtkConvexPointSet> sself, int faceId, int pts) { sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_convex_point_set_get_edge_to_adjacent_faces(vtkNew<vtkConvexPointSet> sself, long long edgeId, const long long pts) { sself->GetEdgeToAdjacentFaces(edgeId, pts); }
extern "C" long long vtk_convex_point_set_get_face_to_adjacent_faces(vtkNew<vtkConvexPointSet> sself, long long faceId, const long long faceIds) { return sself->GetFaceToAdjacentFaces(faceId, faceIds); }
extern "C" long long vtk_convex_point_set_get_point_to_incident_edges(vtkNew<vtkConvexPointSet> sself, long long pointId, const long long edgeIds) { return sself->GetPointToIncidentEdges(pointId, edgeIds); }
extern "C" long long vtk_convex_point_set_get_point_to_incident_faces(vtkNew<vtkConvexPointSet> sself, long long pointId, const long long faceIds) { return sself->GetPointToIncidentFaces(pointId, faceIds); }
extern "C" long long vtk_convex_point_set_get_point_to_one_ring_points(vtkNew<vtkConvexPointSet> sself, long long pointId, const long long pts) { return sself->GetPointToOneRingPoints(pointId, pts); }
extern "C" bool vtk_convex_point_set_get_centroid(vtkNew<vtkConvexPointSet> sself, double centroid) { return sself->GetCentroid(centroid); }
extern "C" double* vtk_convex_point_set_get_parametric_coords(vtkNew<vtkConvexPointSet> sself) { return sself->GetParametricCoords(); }
extern "C" int vtk_convex_point_set_get_cell_type(vtkNew<vtkConvexPointSet> sself) { return sself->GetCellType(); }
extern "C" int vtk_convex_point_set_requires_initialization(vtkNew<vtkConvexPointSet> sself) { return sself->RequiresInitialization(); }
extern "C" int vtk_convex_point_set_get_number_of_edges(vtkNew<vtkConvexPointSet> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_convex_point_set_get_number_of_faces(vtkNew<vtkConvexPointSet> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_convex_point_set_evaluate_position(vtkNew<vtkConvexPointSet> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_convex_point_set_evaluate_location(vtkNew<vtkConvexPointSet> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_convex_point_set_intersect_with_line(vtkNew<vtkConvexPointSet> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_convex_point_set_derivatives(vtkNew<vtkConvexPointSet> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_convex_point_set_get_parametric_center(vtkNew<vtkConvexPointSet> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" int vtk_convex_point_set_is_primary_cell(vtkNew<vtkConvexPointSet> sself) { return sself->IsPrimaryCell(); }
extern "C" void vtk_convex_point_set_interpolate_functions(vtkNew<vtkConvexPointSet> sself, const double pcoords, double sf) { sself->InterpolateFunctions(pcoords, sf); }
extern "C" vtkNew < vtkCubicLine > vtkCubicLine_new () {return vtkNew < vtkCubicLine > () ;}
extern "C" void vtkCubicLine_destructor (vtkNew < vtkCubicLine > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCubicLine_get_ptr (vtkNew < vtkCubicLine > sself) {return sself . GetPointer () ;}
extern "C" int vtk_cubic_line_get_cell_type(vtkNew<vtkCubicLine> sself) { return sself->GetCellType(); }
extern "C" int vtk_cubic_line_get_cell_dimension(vtkNew<vtkCubicLine> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_cubic_line_get_number_of_edges(vtkNew<vtkCubicLine> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_cubic_line_get_number_of_faces(vtkNew<vtkCubicLine> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_cubic_line_evaluate_position(vtkNew<vtkCubicLine> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_cubic_line_evaluate_location(vtkNew<vtkCubicLine> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_cubic_line_derivatives(vtkNew<vtkCubicLine> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" double vtk_cubic_line_get_parametric_distance(vtkNew<vtkCubicLine> sself, const double pcoords) { return sself->GetParametricDistance(pcoords); }
extern "C" int vtk_cubic_line_get_parametric_center(vtkNew<vtkCubicLine> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" int vtk_cubic_line_intersect_with_line(vtkNew<vtkCubicLine> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_cubic_line_interpolation_functions(vtkNew<vtkCubicLine> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_cubic_line_interpolation_derivs(vtkNew<vtkCubicLine> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_cubic_line_interpolate_functions(vtkNew<vtkCubicLine> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_cubic_line_interpolate_derivs(vtkNew<vtkCubicLine> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" vtkNew < vtkCylinder > vtkCylinder_new () {return vtkNew < vtkCylinder > () ;}
extern "C" void vtkCylinder_destructor (vtkNew < vtkCylinder > sself) {sself . Reset () ; return ;}
extern "C" void * vtkCylinder_get_ptr (vtkNew < vtkCylinder > sself) {return sself . GetPointer () ;}
extern "C" double vtk_cylinder_evaluate_function(vtkNew<vtkCylinder> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_cylinder_evaluate_gradient(vtkNew<vtkCylinder> sself, double x, double g) { sself->EvaluateGradient(x, g); }
extern "C" void vtk_cylinder_set_radius(vtkNew<vtkCylinder> sself, double _arg) { sself->SetRadius(_arg); }
extern "C" double vtk_cylinder_get_radius(vtkNew<vtkCylinder> sself) { return sself->GetRadius(); }
extern "C" void vtk_cylinder_set_center(vtkNew<vtkCylinder> sself, double _arg1, double _arg2, double _arg3) { sself->SetCenter(_arg1, _arg2, _arg3); }
extern "C" void vtk_cylinder_set_center(vtkNew<vtkCylinder> sself, const double _arg) { sself->SetCenter(_arg); }
extern "C" double* vtk_cylinder_get_center(vtkNew<vtkCylinder> sself) { return sself->GetCenter(); }
extern "C" void vtk_cylinder_get_center(vtkNew<vtkCylinder> sself, double _arg1, double _arg2, double _arg3) { sself->GetCenter(_arg1, _arg2, _arg3); }
extern "C" void vtk_cylinder_get_center(vtkNew<vtkCylinder> sself, double _arg) { sself->GetCenter(_arg); }
extern "C" void vtk_cylinder_set_axis(vtkNew<vtkCylinder> sself, double ax, double ay, double az) { sself->SetAxis(ax, ay, az); }
extern "C" void vtk_cylinder_set_axis(vtkNew<vtkCylinder> sself, double a) { sself->SetAxis(a); }
extern "C" double* vtk_cylinder_get_axis(vtkNew<vtkCylinder> sself) { return sself->GetAxis(); }
extern "C" void vtk_cylinder_get_axis(vtkNew<vtkCylinder> sself, double _arg1, double _arg2, double _arg3) { sself->GetAxis(_arg1, _arg2, _arg3); }
extern "C" void vtk_cylinder_get_axis(vtkNew<vtkCylinder> sself, double _arg) { sself->GetAxis(_arg); }
extern "C" vtkNew < vtkDataAssembly > vtkDataAssembly_new () {return vtkNew < vtkDataAssembly > () ;}
extern "C" void vtkDataAssembly_destructor (vtkNew < vtkDataAssembly > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataAssembly_get_ptr (vtkNew < vtkDataAssembly > sself) {return sself . GetPointer () ;}
extern "C" void vtk_data_assembly_initialize(vtkNew<vtkDataAssembly> sself) { sself->Initialize(); }
extern "C" bool vtk_data_assembly_initialize_from_xml(vtkNew<vtkDataAssembly> sself, const char xmlcontents) { return sself->InitializeFromXML(xmlcontents); }
extern "C" int vtk_data_assembly_get_root_node(vtkNew<vtkDataAssembly> sself) { return sself->GetRootNode(); }
extern "C" void vtk_data_assembly_set_root_node_name(vtkNew<vtkDataAssembly> sself, const char name) { sself->SetRootNodeName(name); }
extern "C" const char* vtk_data_assembly_get_root_node_name(vtkNew<vtkDataAssembly> sself) { return sself->GetRootNodeName(); }
extern "C" int vtk_data_assembly_add_node(vtkNew<vtkDataAssembly> sself, const char name, int parent) { return sself->AddNode(name, parent); }
extern "C" bool vtk_data_assembly_remove_node(vtkNew<vtkDataAssembly> sself, int id) { return sself->RemoveNode(id); }
extern "C" void vtk_data_assembly_set_node_name(vtkNew<vtkDataAssembly> sself, int id, const char name) { sself->SetNodeName(id, name); }
extern "C" const char* vtk_data_assembly_get_node_name(vtkNew<vtkDataAssembly> sself, int id) { return sself->GetNodeName(id); }
extern "C" const char* vtk_data_assembly_get_node_path(vtkNew<vtkDataAssembly> sself, int id) { return sself->GetNodePath(id); }
extern "C" int vtk_data_assembly_get_first_node_by_path(vtkNew<vtkDataAssembly> sself, const char path) { return sself->GetFirstNodeByPath(path); }
extern "C" bool vtk_data_assembly_add_data_set_index(vtkNew<vtkDataAssembly> sself, int id, unsigned int dataset_index) { return sself->AddDataSetIndex(id, dataset_index); }
extern "C" bool vtk_data_assembly_add_data_set_index_range(vtkNew<vtkDataAssembly> sself, int id, unsigned int index_start, int count) { return sself->AddDataSetIndexRange(id, index_start, count); }
extern "C" bool vtk_data_assembly_remove_data_set_index(vtkNew<vtkDataAssembly> sself, int id, unsigned int dataset_index) { return sself->RemoveDataSetIndex(id, dataset_index); }
extern "C" bool vtk_data_assembly_remove_all_data_set_indices(vtkNew<vtkDataAssembly> sself, int id, bool traverse_subtree) { return sself->RemoveAllDataSetIndices(id, traverse_subtree); }
extern "C" int vtk_data_assembly_find_first_node_with_name(vtkNew<vtkDataAssembly> sself, const char name, int traversal_order) { return sself->FindFirstNodeWithName(name, traversal_order); }
extern "C" int vtk_data_assembly_get_number_of_children(vtkNew<vtkDataAssembly> sself, int parent) { return sself->GetNumberOfChildren(parent); }
extern "C" int vtk_data_assembly_get_child(vtkNew<vtkDataAssembly> sself, int parent, int index) { return sself->GetChild(parent, index); }
extern "C" int vtk_data_assembly_get_child_index(vtkNew<vtkDataAssembly> sself, int parent, int child) { return sself->GetChildIndex(parent, child); }
extern "C" int vtk_data_assembly_get_parent(vtkNew<vtkDataAssembly> sself, int id) { return sself->GetParent(id); }
extern "C" bool vtk_data_assembly_has_attribute(vtkNew<vtkDataAssembly> sself, int id, const char name) { return sself->HasAttribute(id, name); }
extern "C" void vtk_data_assembly_set_attribute(vtkNew<vtkDataAssembly> sself, int id, const char name, const char value) { sself->SetAttribute(id, name, value); }
extern "C" void vtk_data_assembly_set_attribute(vtkNew<vtkDataAssembly> sself, int id, const char name, int value) { sself->SetAttribute(id, name, value); }
extern "C" void vtk_data_assembly_set_attribute(vtkNew<vtkDataAssembly> sself, int id, const char name, unsigned int value) { sself->SetAttribute(id, name, value); }
extern "C" void vtk_data_assembly_set_attribute(vtkNew<vtkDataAssembly> sself, int id, const char name, long long value) { sself->SetAttribute(id, name, value); }
extern "C" bool vtk_data_assembly_get_attribute(vtkNew<vtkDataAssembly> sself, int id, const char name, const char value) { return sself->GetAttribute(id, name, value); }
extern "C" bool vtk_data_assembly_get_attribute(vtkNew<vtkDataAssembly> sself, int id, const char name, int value) { return sself->GetAttribute(id, name, value); }
extern "C" bool vtk_data_assembly_get_attribute(vtkNew<vtkDataAssembly> sself, int id, const char name, unsigned int value) { return sself->GetAttribute(id, name, value); }
extern "C" bool vtk_data_assembly_get_attribute(vtkNew<vtkDataAssembly> sself, int id, const char name, long long value) { return sself->GetAttribute(id, name, value); }
extern "C" const char* vtk_data_assembly_get_attribute_or_default(vtkNew<vtkDataAssembly> sself, int id, const char name, const char default_value) { return sself->GetAttributeOrDefault(id, name, default_value); }
extern "C" int vtk_data_assembly_get_attribute_or_default(vtkNew<vtkDataAssembly> sself, int id, const char name, int default_value) { return sself->GetAttributeOrDefault(id, name, default_value); }
extern "C" unsigned int vtk_data_assembly_get_attribute_or_default(vtkNew<vtkDataAssembly> sself, int id, const char name, unsigned int default_value) { return sself->GetAttributeOrDefault(id, name, default_value); }
extern "C" long long vtk_data_assembly_get_attribute_or_default(vtkNew<vtkDataAssembly> sself, int id, const char name, long long default_value) { return sself->GetAttributeOrDefault(id, name, default_value); }
extern "C" bool vtk_data_assembly_is_node_name_valid(vtkNew<vtkDataAssembly> sself, const char name) { return sself->IsNodeNameValid(name); }
extern "C" const char* vtk_data_assembly_make_valid_node_name(vtkNew<vtkDataAssembly> sself, const char name) { return sself->MakeValidNodeName(name); }
extern "C" bool vtk_data_assembly_is_node_name_reserved(vtkNew<vtkDataAssembly> sself, const char name) { return sself->IsNodeNameReserved(name); }
extern "C" vtkNew < vtkDataAssemblyUtilities > vtkDataAssemblyUtilities_new () {return vtkNew < vtkDataAssemblyUtilities > () ;}
extern "C" void vtkDataAssemblyUtilities_destructor (vtkNew < vtkDataAssemblyUtilities > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataAssemblyUtilities_get_ptr (vtkNew < vtkDataAssemblyUtilities > sself) {return sself . GetPointer () ;}
extern "C" const char* vtk_data_assembly_utilities_hierarchy_name(vtkNew<vtkDataAssemblyUtilities> sself) { return sself->HierarchyName(); }
extern "C" vtkNew < vtkDataObject > vtkDataObject_new () {return vtkNew < vtkDataObject > () ;}
extern "C" void vtkDataObject_destructor (vtkNew < vtkDataObject > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataObject_get_ptr (vtkNew < vtkDataObject > sself) {return sself . GetPointer () ;}
extern "C" unsigned long vtk_data_object_get_m_time(vtkNew<vtkDataObject> sself) { return sself->GetMTime(); }
extern "C" void vtk_data_object_initialize(vtkNew<vtkDataObject> sself) { sself->Initialize(); }
extern "C" void vtk_data_object_release_data(vtkNew<vtkDataObject> sself) { sself->ReleaseData(); }
extern "C" int vtk_data_object_get_data_released(vtkNew<vtkDataObject> sself) { return sself->GetDataReleased(); }
extern "C" void vtk_data_object_set_global_release_data_flag(vtkNew<vtkDataObject> sself, int val) { sself->SetGlobalReleaseDataFlag(val); }
extern "C" void vtk_data_object_global_release_data_flag_on(vtkNew<vtkDataObject> sself) { sself->GlobalReleaseDataFlagOn(); }
extern "C" void vtk_data_object_global_release_data_flag_off(vtkNew<vtkDataObject> sself) { sself->GlobalReleaseDataFlagOff(); }
extern "C" int vtk_data_object_get_global_release_data_flag(vtkNew<vtkDataObject> sself) { return sself->GetGlobalReleaseDataFlag(); }
extern "C" int vtk_data_object_get_data_object_type(vtkNew<vtkDataObject> sself) { return sself->GetDataObjectType(); }
extern "C" unsigned long vtk_data_object_get_update_time(vtkNew<vtkDataObject> sself) { return sself->GetUpdateTime(); }
extern "C" unsigned long vtk_data_object_get_actual_memory_size(vtkNew<vtkDataObject> sself) { return sself->GetActualMemorySize(); }
extern "C" void vtk_data_object_data_has_been_generated(vtkNew<vtkDataObject> sself) { sself->DataHasBeenGenerated(); }
extern "C" void vtk_data_object_prepare_for_new_data(vtkNew<vtkDataObject> sself) { sself->PrepareForNewData(); }
extern "C" int vtk_data_object_get_extent_type(vtkNew<vtkDataObject> sself) { return sself->GetExtentType(); }
extern "C" void vtk_data_object_crop(vtkNew<vtkDataObject> sself, const int updateExtent) { sself->Crop(updateExtent); }
extern "C" long long vtk_data_object_get_number_of_elements(vtkNew<vtkDataObject> sself, int type) { return sself->GetNumberOfElements(type); }
extern "C" const char* vtk_data_object_get_association_type_as_string(vtkNew<vtkDataObject> sself, int associationType) { return sself->GetAssociationTypeAsString(associationType); }
extern "C" int vtk_data_object_get_association_type_from_string(vtkNew<vtkDataObject> sself, const char associationName) { return sself->GetAssociationTypeFromString(associationName); }
extern "C" vtkNew < vtkDataObjectCollection > vtkDataObjectCollection_new () {return vtkNew < vtkDataObjectCollection > () ;}
extern "C" void vtkDataObjectCollection_destructor (vtkNew < vtkDataObjectCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataObjectCollection_get_ptr (vtkNew < vtkDataObjectCollection > sself) {return sself . GetPointer () ;}
extern "C" int vtk_data_object_collection_get_number_of_items(vtkNew<vtkDataObjectCollection> sself) { return sself->GetNumberOfItems(); }
extern "C" vtkNew < vtkDataObjectTreeIterator > vtkDataObjectTreeIterator_new () {return vtkNew < vtkDataObjectTreeIterator > () ;}
extern "C" void vtkDataObjectTreeIterator_destructor (vtkNew < vtkDataObjectTreeIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataObjectTreeIterator_get_ptr (vtkNew < vtkDataObjectTreeIterator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_data_object_tree_iterator_go_to_first_item(vtkNew<vtkDataObjectTreeIterator> sself) { sself->GoToFirstItem(); }
extern "C" void vtk_data_object_tree_iterator_go_to_next_item(vtkNew<vtkDataObjectTreeIterator> sself) { sself->GoToNextItem(); }
extern "C" int vtk_data_object_tree_iterator_is_done_with_traversal(vtkNew<vtkDataObjectTreeIterator> sself) { return sself->IsDoneWithTraversal(); }
extern "C" int vtk_data_object_tree_iterator_has_current_meta_data(vtkNew<vtkDataObjectTreeIterator> sself) { return sself->HasCurrentMetaData(); }
extern "C" unsigned int vtk_data_object_tree_iterator_get_current_flat_index(vtkNew<vtkDataObjectTreeIterator> sself) { return sself->GetCurrentFlatIndex(); }
extern "C" void vtk_data_object_tree_iterator_set_visit_only_leaves(vtkNew<vtkDataObjectTreeIterator> sself, int _arg) { sself->SetVisitOnlyLeaves(_arg); }
extern "C" int vtk_data_object_tree_iterator_get_visit_only_leaves(vtkNew<vtkDataObjectTreeIterator> sself) { return sself->GetVisitOnlyLeaves(); }
extern "C" void vtk_data_object_tree_iterator_visit_only_leaves_on(vtkNew<vtkDataObjectTreeIterator> sself) { sself->VisitOnlyLeavesOn(); }
extern "C" void vtk_data_object_tree_iterator_visit_only_leaves_off(vtkNew<vtkDataObjectTreeIterator> sself) { sself->VisitOnlyLeavesOff(); }
extern "C" void vtk_data_object_tree_iterator_set_traverse_sub_tree(vtkNew<vtkDataObjectTreeIterator> sself, int _arg) { sself->SetTraverseSubTree(_arg); }
extern "C" int vtk_data_object_tree_iterator_get_traverse_sub_tree(vtkNew<vtkDataObjectTreeIterator> sself) { return sself->GetTraverseSubTree(); }
extern "C" void vtk_data_object_tree_iterator_traverse_sub_tree_on(vtkNew<vtkDataObjectTreeIterator> sself) { sself->TraverseSubTreeOn(); }
extern "C" void vtk_data_object_tree_iterator_traverse_sub_tree_off(vtkNew<vtkDataObjectTreeIterator> sself) { sself->TraverseSubTreeOff(); }
extern "C" vtkNew < vtkDataObjectTypes > vtkDataObjectTypes_new () {return vtkNew < vtkDataObjectTypes > () ;}
extern "C" void vtkDataObjectTypes_destructor (vtkNew < vtkDataObjectTypes > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataObjectTypes_get_ptr (vtkNew < vtkDataObjectTypes > sself) {return sself . GetPointer () ;}
extern "C" const char* vtk_data_object_types_get_class_name_from_type_id(vtkNew<vtkDataObjectTypes> sself, int typeId) { return sself->GetClassNameFromTypeId(typeId); }
extern "C" int vtk_data_object_types_get_type_id_from_class_name(vtkNew<vtkDataObjectTypes> sself, const char classname) { return sself->GetTypeIdFromClassName(classname); }
extern "C" bool vtk_data_object_types_type_id_is_a(vtkNew<vtkDataObjectTypes> sself, int typeId, int targetTypeId) { return sself->TypeIdIsA(typeId, targetTypeId); }
extern "C" int vtk_data_object_types_get_common_base_type_id(vtkNew<vtkDataObjectTypes> sself, int typeA, int typeB) { return sself->GetCommonBaseTypeId(typeA, typeB); }
extern "C" vtkNew < vtkDataSetAttributes > vtkDataSetAttributes_new () {return vtkNew < vtkDataSetAttributes > () ;}
extern "C" void vtkDataSetAttributes_destructor (vtkNew < vtkDataSetAttributes > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataSetAttributes_get_ptr (vtkNew < vtkDataSetAttributes > sself) {return sself . GetPointer () ;}
extern "C" void vtk_data_set_attributes_initialize(vtkNew<vtkDataSetAttributes> sself) { sself->Initialize(); }
extern "C" void vtk_data_set_attributes_update(vtkNew<vtkDataSetAttributes> sself) { sself->Update(); }
extern "C" const char* vtk_data_set_attributes_ghost_array_name(vtkNew<vtkDataSetAttributes> sself) { return sself->GhostArrayName(); }
extern "C" int vtk_data_set_attributes_set_active_scalars(vtkNew<vtkDataSetAttributes> sself, const char name) { return sself->SetActiveScalars(name); }
extern "C" int vtk_data_set_attributes_set_active_vectors(vtkNew<vtkDataSetAttributes> sself, const char name) { return sself->SetActiveVectors(name); }
extern "C" int vtk_data_set_attributes_set_active_normals(vtkNew<vtkDataSetAttributes> sself, const char name) { return sself->SetActiveNormals(name); }
extern "C" int vtk_data_set_attributes_set_active_tangents(vtkNew<vtkDataSetAttributes> sself, const char name) { return sself->SetActiveTangents(name); }
extern "C" int vtk_data_set_attributes_set_active_t_coords(vtkNew<vtkDataSetAttributes> sself, const char name) { return sself->SetActiveTCoords(name); }
extern "C" int vtk_data_set_attributes_set_active_tensors(vtkNew<vtkDataSetAttributes> sself, const char name) { return sself->SetActiveTensors(name); }
extern "C" int vtk_data_set_attributes_set_active_global_ids(vtkNew<vtkDataSetAttributes> sself, const char name) { return sself->SetActiveGlobalIds(name); }
extern "C" int vtk_data_set_attributes_set_active_pedigree_ids(vtkNew<vtkDataSetAttributes> sself, const char name) { return sself->SetActivePedigreeIds(name); }
extern "C" int vtk_data_set_attributes_set_active_rational_weights(vtkNew<vtkDataSetAttributes> sself, const char name) { return sself->SetActiveRationalWeights(name); }
extern "C" int vtk_data_set_attributes_set_active_higher_order_degrees(vtkNew<vtkDataSetAttributes> sself, const char name) { return sself->SetActiveHigherOrderDegrees(name); }
extern "C" int vtk_data_set_attributes_set_active_attribute(vtkNew<vtkDataSetAttributes> sself, const char name, int attributeType) { return sself->SetActiveAttribute(name, attributeType); }
extern "C" int vtk_data_set_attributes_set_active_attribute(vtkNew<vtkDataSetAttributes> sself, int index, int attributeType) { return sself->SetActiveAttribute(index, attributeType); }
extern "C" void vtk_data_set_attributes_get_attribute_indices(vtkNew<vtkDataSetAttributes> sself, int indexArray) { sself->GetAttributeIndices(indexArray); }
extern "C" int vtk_data_set_attributes_is_array_an_attribute(vtkNew<vtkDataSetAttributes> sself, int idx) { return sself->IsArrayAnAttribute(idx); }
extern "C" const char* vtk_data_set_attributes_get_attribute_type_as_string(vtkNew<vtkDataSetAttributes> sself, int attributeType) { return sself->GetAttributeTypeAsString(attributeType); }
extern "C" const char* vtk_data_set_attributes_get_long_attribute_type_as_string(vtkNew<vtkDataSetAttributes> sself, int attributeType) { return sself->GetLongAttributeTypeAsString(attributeType); }
extern "C" void vtk_data_set_attributes_set_copy_attribute(vtkNew<vtkDataSetAttributes> sself, int index, int value, int ctype) { sself->SetCopyAttribute(index, value, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_attribute(vtkNew<vtkDataSetAttributes> sself, int index, int ctype) { return sself->GetCopyAttribute(index, ctype); }
extern "C" void vtk_data_set_attributes_set_copy_scalars(vtkNew<vtkDataSetAttributes> sself, int i, int ctype) { sself->SetCopyScalars(i, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_scalars(vtkNew<vtkDataSetAttributes> sself, int ctype) { return sself->GetCopyScalars(ctype); }
extern "C" void vtk_data_set_attributes_copy_scalars_on(vtkNew<vtkDataSetAttributes> sself) { sself->CopyScalarsOn(); }
extern "C" void vtk_data_set_attributes_copy_scalars_off(vtkNew<vtkDataSetAttributes> sself) { sself->CopyScalarsOff(); }
extern "C" void vtk_data_set_attributes_set_copy_vectors(vtkNew<vtkDataSetAttributes> sself, int i, int ctype) { sself->SetCopyVectors(i, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_vectors(vtkNew<vtkDataSetAttributes> sself, int ctype) { return sself->GetCopyVectors(ctype); }
extern "C" void vtk_data_set_attributes_copy_vectors_on(vtkNew<vtkDataSetAttributes> sself) { sself->CopyVectorsOn(); }
extern "C" void vtk_data_set_attributes_copy_vectors_off(vtkNew<vtkDataSetAttributes> sself) { sself->CopyVectorsOff(); }
extern "C" void vtk_data_set_attributes_set_copy_normals(vtkNew<vtkDataSetAttributes> sself, int i, int ctype) { sself->SetCopyNormals(i, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_normals(vtkNew<vtkDataSetAttributes> sself, int ctype) { return sself->GetCopyNormals(ctype); }
extern "C" void vtk_data_set_attributes_copy_normals_on(vtkNew<vtkDataSetAttributes> sself) { sself->CopyNormalsOn(); }
extern "C" void vtk_data_set_attributes_copy_normals_off(vtkNew<vtkDataSetAttributes> sself) { sself->CopyNormalsOff(); }
extern "C" void vtk_data_set_attributes_set_copy_tangents(vtkNew<vtkDataSetAttributes> sself, int i, int ctype) { sself->SetCopyTangents(i, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_tangents(vtkNew<vtkDataSetAttributes> sself, int ctype) { return sself->GetCopyTangents(ctype); }
extern "C" void vtk_data_set_attributes_copy_tangents_on(vtkNew<vtkDataSetAttributes> sself) { sself->CopyTangentsOn(); }
extern "C" void vtk_data_set_attributes_copy_tangents_off(vtkNew<vtkDataSetAttributes> sself) { sself->CopyTangentsOff(); }
extern "C" void vtk_data_set_attributes_set_copy_t_coords(vtkNew<vtkDataSetAttributes> sself, int i, int ctype) { sself->SetCopyTCoords(i, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_t_coords(vtkNew<vtkDataSetAttributes> sself, int ctype) { return sself->GetCopyTCoords(ctype); }
extern "C" void vtk_data_set_attributes_copy_t_coords_on(vtkNew<vtkDataSetAttributes> sself) { sself->CopyTCoordsOn(); }
extern "C" void vtk_data_set_attributes_copy_t_coords_off(vtkNew<vtkDataSetAttributes> sself) { sself->CopyTCoordsOff(); }
extern "C" void vtk_data_set_attributes_set_copy_tensors(vtkNew<vtkDataSetAttributes> sself, int i, int ctype) { sself->SetCopyTensors(i, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_tensors(vtkNew<vtkDataSetAttributes> sself, int ctype) { return sself->GetCopyTensors(ctype); }
extern "C" void vtk_data_set_attributes_copy_tensors_on(vtkNew<vtkDataSetAttributes> sself) { sself->CopyTensorsOn(); }
extern "C" void vtk_data_set_attributes_copy_tensors_off(vtkNew<vtkDataSetAttributes> sself) { sself->CopyTensorsOff(); }
extern "C" void vtk_data_set_attributes_set_copy_global_ids(vtkNew<vtkDataSetAttributes> sself, int i, int ctype) { sself->SetCopyGlobalIds(i, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_global_ids(vtkNew<vtkDataSetAttributes> sself, int ctype) { return sself->GetCopyGlobalIds(ctype); }
extern "C" void vtk_data_set_attributes_copy_global_ids_on(vtkNew<vtkDataSetAttributes> sself) { sself->CopyGlobalIdsOn(); }
extern "C" void vtk_data_set_attributes_copy_global_ids_off(vtkNew<vtkDataSetAttributes> sself) { sself->CopyGlobalIdsOff(); }
extern "C" void vtk_data_set_attributes_set_copy_pedigree_ids(vtkNew<vtkDataSetAttributes> sself, int i, int ctype) { sself->SetCopyPedigreeIds(i, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_pedigree_ids(vtkNew<vtkDataSetAttributes> sself, int ctype) { return sself->GetCopyPedigreeIds(ctype); }
extern "C" void vtk_data_set_attributes_copy_pedigree_ids_on(vtkNew<vtkDataSetAttributes> sself) { sself->CopyPedigreeIdsOn(); }
extern "C" void vtk_data_set_attributes_copy_pedigree_ids_off(vtkNew<vtkDataSetAttributes> sself) { sself->CopyPedigreeIdsOff(); }
extern "C" void vtk_data_set_attributes_set_copy_rational_weights(vtkNew<vtkDataSetAttributes> sself, int i, int ctype) { sself->SetCopyRationalWeights(i, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_rational_weights(vtkNew<vtkDataSetAttributes> sself, int ctype) { return sself->GetCopyRationalWeights(ctype); }
extern "C" void vtk_data_set_attributes_copy_rational_weights_on(vtkNew<vtkDataSetAttributes> sself) { sself->CopyRationalWeightsOn(); }
extern "C" void vtk_data_set_attributes_copy_rational_weights_off(vtkNew<vtkDataSetAttributes> sself) { sself->CopyRationalWeightsOff(); }
extern "C" void vtk_data_set_attributes_set_copy_higher_order_degrees(vtkNew<vtkDataSetAttributes> sself, int i, int ctype) { sself->SetCopyHigherOrderDegrees(i, ctype); }
extern "C" int vtk_data_set_attributes_get_copy_higher_order_degrees(vtkNew<vtkDataSetAttributes> sself, int ctype) { return sself->GetCopyHigherOrderDegrees(ctype); }
extern "C" void vtk_data_set_attributes_copy_higher_order_degrees_on(vtkNew<vtkDataSetAttributes> sself) { sself->CopyHigherOrderDegreesOn(); }
extern "C" void vtk_data_set_attributes_copy_higher_order_degrees_off(vtkNew<vtkDataSetAttributes> sself) { sself->CopyHigherOrderDegreesOff(); }
extern "C" void vtk_data_set_attributes_copy_all_on(vtkNew<vtkDataSetAttributes> sself, int ctype) { sself->CopyAllOn(ctype); }
extern "C" void vtk_data_set_attributes_copy_all_off(vtkNew<vtkDataSetAttributes> sself, int ctype) { sself->CopyAllOff(ctype); }
extern "C" vtkNew < vtkDataSetCellIterator > vtkDataSetCellIterator_new () {return vtkNew < vtkDataSetCellIterator > () ;}
extern "C" void vtkDataSetCellIterator_destructor (vtkNew < vtkDataSetCellIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataSetCellIterator_get_ptr (vtkNew < vtkDataSetCellIterator > sself) {return sself . GetPointer () ;}
extern "C" bool vtk_data_set_cell_iterator_is_done_with_traversal(vtkNew<vtkDataSetCellIterator> sself) { return sself->IsDoneWithTraversal(); }
extern "C" long long vtk_data_set_cell_iterator_get_cell_id(vtkNew<vtkDataSetCellIterator> sself) { return sself->GetCellId(); }
extern "C" vtkNew < vtkDataSetCollection > vtkDataSetCollection_new () {return vtkNew < vtkDataSetCollection > () ;}
extern "C" void vtkDataSetCollection_destructor (vtkNew < vtkDataSetCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDataSetCollection_get_ptr (vtkNew < vtkDataSetCollection > sself) {return sself . GetPointer () ;}
extern "C" int vtk_data_set_collection_get_number_of_items(vtkNew<vtkDataSetCollection> sself) { return sself->GetNumberOfItems(); }
extern "C" vtkNew < vtkDirectedAcyclicGraph > vtkDirectedAcyclicGraph_new () {return vtkNew < vtkDirectedAcyclicGraph > () ;}
extern "C" void vtkDirectedAcyclicGraph_destructor (vtkNew < vtkDirectedAcyclicGraph > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDirectedAcyclicGraph_get_ptr (vtkNew < vtkDirectedAcyclicGraph > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkDirectedGraph > vtkDirectedGraph_new () {return vtkNew < vtkDirectedGraph > () ;}
extern "C" void vtkDirectedGraph_destructor (vtkNew < vtkDirectedGraph > sself) {sself . Reset () ; return ;}
extern "C" void * vtkDirectedGraph_get_ptr (vtkNew < vtkDirectedGraph > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkEdgeListIterator > vtkEdgeListIterator_new () {return vtkNew < vtkEdgeListIterator > () ;}
extern "C" void vtkEdgeListIterator_destructor (vtkNew < vtkEdgeListIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkEdgeListIterator_get_ptr (vtkNew < vtkEdgeListIterator > sself) {return sself . GetPointer () ;}
extern "C" bool vtk_edge_list_iterator_has_next(vtkNew<vtkEdgeListIterator> sself) { return sself->HasNext(); }
extern "C" vtkNew < vtkEdgeTable > vtkEdgeTable_new () {return vtkNew < vtkEdgeTable > () ;}
extern "C" void vtkEdgeTable_destructor (vtkNew < vtkEdgeTable > sself) {sself . Reset () ; return ;}
extern "C" void * vtkEdgeTable_get_ptr (vtkNew < vtkEdgeTable > sself) {return sself . GetPointer () ;}
extern "C" void vtk_edge_table_initialize(vtkNew<vtkEdgeTable> sself) { sself->Initialize(); }
extern "C" int vtk_edge_table_init_edge_insertion(vtkNew<vtkEdgeTable> sself, long long numPoints, int storeAttributes) { return sself->InitEdgeInsertion(numPoints, storeAttributes); }
extern "C" long long vtk_edge_table_insert_edge(vtkNew<vtkEdgeTable> sself, long long p1, long long p2) { return sself->InsertEdge(p1, p2); }
extern "C" void vtk_edge_table_insert_edge(vtkNew<vtkEdgeTable> sself, long long p1, long long p2, long long attributeId) { sself->InsertEdge(p1, p2, attributeId); }
extern "C" void vtk_edge_table_insert_edge(vtkNew<vtkEdgeTable> sself, long long p1, long long p2, void ptr) { sself->InsertEdge(p1, p2, ptr); }
extern "C" long long vtk_edge_table_is_edge(vtkNew<vtkEdgeTable> sself, long long p1, long long p2) { return sself->IsEdge(p1, p2); }
extern "C" void vtk_edge_table_is_edge(vtkNew<vtkEdgeTable> sself, long long p1, long long p2, void ptr) { sself->IsEdge(p1, p2, ptr); }
extern "C" int vtk_edge_table_insert_unique_point(vtkNew<vtkEdgeTable> sself, long long p1, long long p2, double x, long long ptId) { return sself->InsertUniquePoint(p1, p2, x, ptId); }
extern "C" long long vtk_edge_table_get_number_of_edges(vtkNew<vtkEdgeTable> sself) { return sself->GetNumberOfEdges(); }
extern "C" void vtk_edge_table_init_traversal(vtkNew<vtkEdgeTable> sself) { sself->InitTraversal(); }
extern "C" long long vtk_edge_table_get_next_edge(vtkNew<vtkEdgeTable> sself, long long p1, long long p2) { return sself->GetNextEdge(p1, p2); }
extern "C" int vtk_edge_table_get_next_edge(vtkNew<vtkEdgeTable> sself, long long p1, long long p2, void ptr) { return sself->GetNextEdge(p1, p2, ptr); }
extern "C" void vtk_edge_table_reset(vtkNew<vtkEdgeTable> sself) { sself->Reset(); }
extern "C" vtkNew < vtkEmptyCell > vtkEmptyCell_new () {return vtkNew < vtkEmptyCell > () ;}
extern "C" void vtkEmptyCell_destructor (vtkNew < vtkEmptyCell > sself) {sself . Reset () ; return ;}
extern "C" void * vtkEmptyCell_get_ptr (vtkNew < vtkEmptyCell > sself) {return sself . GetPointer () ;}
extern "C" int vtk_empty_cell_get_cell_type(vtkNew<vtkEmptyCell> sself) { return sself->GetCellType(); }
extern "C" int vtk_empty_cell_get_cell_dimension(vtkNew<vtkEmptyCell> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_empty_cell_get_number_of_edges(vtkNew<vtkEmptyCell> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_empty_cell_get_number_of_faces(vtkNew<vtkEmptyCell> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_empty_cell_evaluate_position(vtkNew<vtkEmptyCell> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_empty_cell_evaluate_location(vtkNew<vtkEmptyCell> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_empty_cell_intersect_with_line(vtkNew<vtkEmptyCell> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_empty_cell_derivatives(vtkNew<vtkEmptyCell> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" vtkNew < vtkExplicitStructuredGrid > vtkExplicitStructuredGrid_new () {return vtkNew < vtkExplicitStructuredGrid > () ;}
extern "C" void vtkExplicitStructuredGrid_destructor (vtkNew < vtkExplicitStructuredGrid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkExplicitStructuredGrid_get_ptr (vtkNew < vtkExplicitStructuredGrid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_explicit_structured_grid_get_data_object_type(vtkNew<vtkExplicitStructuredGrid> sself) { return sself->GetDataObjectType(); }
extern "C" void vtk_explicit_structured_grid_initialize(vtkNew<vtkExplicitStructuredGrid> sself) { sself->Initialize(); }
extern "C" int vtk_explicit_structured_grid_get_cell_type(vtkNew<vtkExplicitStructuredGrid> sself, long long cellId) { return sself->GetCellType(cellId); }
extern "C" int vtk_explicit_structured_grid_get_data_dimension(vtkNew<vtkExplicitStructuredGrid> sself) { return sself->GetDataDimension(); }
extern "C" void vtk_explicit_structured_grid_set_dimensions(vtkNew<vtkExplicitStructuredGrid> sself, int i, int j, int k) { sself->SetDimensions(i, j, k); }
extern "C" void vtk_explicit_structured_grid_set_dimensions(vtkNew<vtkExplicitStructuredGrid> sself, int dim) { sself->SetDimensions(dim); }
extern "C" void vtk_explicit_structured_grid_get_dimensions(vtkNew<vtkExplicitStructuredGrid> sself, int dim) { sself->GetDimensions(dim); }
extern "C" void vtk_explicit_structured_grid_get_cell_dims(vtkNew<vtkExplicitStructuredGrid> sself, int cellDims) { sself->GetCellDims(cellDims); }
extern "C" int vtk_explicit_structured_grid_get_extent_type(vtkNew<vtkExplicitStructuredGrid> sself) { return sself->GetExtentType(); }
extern "C" void vtk_explicit_structured_grid_set_extent(vtkNew<vtkExplicitStructuredGrid> sself, int x0, int x1, int y0, int y1, int z0, int z1) { sself->SetExtent(x0, x1, y0, y1, z0, z1); }
extern "C" void vtk_explicit_structured_grid_set_extent(vtkNew<vtkExplicitStructuredGrid> sself, int extent) { sself->SetExtent(extent); }
extern "C" int* vtk_explicit_structured_grid_get_extent(vtkNew<vtkExplicitStructuredGrid> sself) { return sself->GetExtent(); }
extern "C" void vtk_explicit_structured_grid_get_extent(vtkNew<vtkExplicitStructuredGrid> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->GetExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_explicit_structured_grid_get_extent(vtkNew<vtkExplicitStructuredGrid> sself, int _arg) { sself->GetExtent(_arg); }
extern "C" void vtk_explicit_structured_grid_build_links(vtkNew<vtkExplicitStructuredGrid> sself) { sself->BuildLinks(); }
extern "C" long long* vtk_explicit_structured_grid_get_cell_points(vtkNew<vtkExplicitStructuredGrid> sself, long long cellId) { return sself->GetCellPoints(cellId); }
extern "C" void vtk_explicit_structured_grid_get_cell_points(vtkNew<vtkExplicitStructuredGrid> sself, long long cellId, long long npts, long long pts) { sself->GetCellPoints(cellId, npts, pts); }
extern "C" void vtk_explicit_structured_grid_get_cell_neighbors(vtkNew<vtkExplicitStructuredGrid> sself, long long cellId, long long neighbors, int wholeExtent) { sself->GetCellNeighbors(cellId, neighbors, wholeExtent); }
extern "C" void vtk_explicit_structured_grid_compute_cell_structured_coords(vtkNew<vtkExplicitStructuredGrid> sself, long long cellId, int i, int j, int k, bool adjustForExtent) { sself->ComputeCellStructuredCoords(cellId, i, j, k, adjustForExtent); }
extern "C" long long vtk_explicit_structured_grid_compute_cell_id(vtkNew<vtkExplicitStructuredGrid> sself, int i, int j, int k, bool adjustForExtent) { return sself->ComputeCellId(i, j, k, adjustForExtent); }
extern "C" void vtk_explicit_structured_grid_compute_faces_connectivity_flags_array(vtkNew<vtkExplicitStructuredGrid> sself) { sself->ComputeFacesConnectivityFlagsArray(); }
extern "C" void vtk_explicit_structured_grid_set_faces_connectivity_flags_array_name(vtkNew<vtkExplicitStructuredGrid> sself, const char _arg) { sself->SetFacesConnectivityFlagsArrayName(_arg); }
extern "C" char* vtk_explicit_structured_grid_get_faces_connectivity_flags_array_name(vtkNew<vtkExplicitStructuredGrid> sself) { return sself->GetFacesConnectivityFlagsArrayName(); }
extern "C" void vtk_explicit_structured_grid_blank_cell(vtkNew<vtkExplicitStructuredGrid> sself, long long cellId) { sself->BlankCell(cellId); }
extern "C" void vtk_explicit_structured_grid_un_blank_cell(vtkNew<vtkExplicitStructuredGrid> sself, long long cellId) { sself->UnBlankCell(cellId); }
extern "C" bool vtk_explicit_structured_grid_has_any_blank_cells(vtkNew<vtkExplicitStructuredGrid> sself) { return sself->HasAnyBlankCells(); }
extern "C" unsigned char vtk_explicit_structured_grid_is_cell_visible(vtkNew<vtkExplicitStructuredGrid> sself, long long cellId) { return sself->IsCellVisible(cellId); }
extern "C" unsigned char vtk_explicit_structured_grid_is_cell_ghost(vtkNew<vtkExplicitStructuredGrid> sself, long long cellId) { return sself->IsCellGhost(cellId); }
extern "C" bool vtk_explicit_structured_grid_has_any_ghost_cells(vtkNew<vtkExplicitStructuredGrid> sself) { return sself->HasAnyGhostCells(); }
extern "C" void vtk_explicit_structured_grid_crop(vtkNew<vtkExplicitStructuredGrid> sself, const int updateExtent) { sself->Crop(updateExtent); }
extern "C" unsigned long vtk_explicit_structured_grid_get_actual_memory_size(vtkNew<vtkExplicitStructuredGrid> sself) { return sself->GetActualMemorySize(); }
extern "C" void vtk_explicit_structured_grid_check_and_reorder_faces(vtkNew<vtkExplicitStructuredGrid> sself) { sself->CheckAndReorderFaces(); }
extern "C" vtkNew < vtkExtractStructuredGridHelper > vtkExtractStructuredGridHelper_new () {return vtkNew < vtkExtractStructuredGridHelper > () ;}
extern "C" void vtkExtractStructuredGridHelper_destructor (vtkNew < vtkExtractStructuredGridHelper > sself) {sself . Reset () ; return ;}
extern "C" void * vtkExtractStructuredGridHelper_get_ptr (vtkNew < vtkExtractStructuredGridHelper > sself) {return sself . GetPointer () ;}
extern "C" int* vtk_extract_structured_grid_helper_get_output_whole_extent(vtkNew<vtkExtractStructuredGridHelper> sself) { return sself->GetOutputWholeExtent(); }
extern "C" void vtk_extract_structured_grid_helper_get_output_whole_extent(vtkNew<vtkExtractStructuredGridHelper> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->GetOutputWholeExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_extract_structured_grid_helper_get_output_whole_extent(vtkNew<vtkExtractStructuredGridHelper> sself, int _arg) { sself->GetOutputWholeExtent(_arg); }
extern "C" void vtk_extract_structured_grid_helper_initialize(vtkNew<vtkExtractStructuredGridHelper> sself, int voi, int wholeExt, int sampleRate, bool includeBoundary) { sself->Initialize(voi, wholeExt, sampleRate, includeBoundary); }
extern "C" bool vtk_extract_structured_grid_helper_is_valid(vtkNew<vtkExtractStructuredGridHelper> sself) { return sself->IsValid(); }
extern "C" int vtk_extract_structured_grid_helper_get_size(vtkNew<vtkExtractStructuredGridHelper> sself, const int dim) { return sself->GetSize(dim); }
extern "C" int vtk_extract_structured_grid_helper_get_mapped_index(vtkNew<vtkExtractStructuredGridHelper> sself, int dim, int outIdx) { return sself->GetMappedIndex(dim, outIdx); }
extern "C" int vtk_extract_structured_grid_helper_get_mapped_index_from_extent_value(vtkNew<vtkExtractStructuredGridHelper> sself, int dim, int outExtVal) { return sself->GetMappedIndexFromExtentValue(dim, outExtVal); }
extern "C" int vtk_extract_structured_grid_helper_get_mapped_extent_value(vtkNew<vtkExtractStructuredGridHelper> sself, int dim, int outExtVal) { return sself->GetMappedExtentValue(dim, outExtVal); }
extern "C" int vtk_extract_structured_grid_helper_get_mapped_extent_value_from_index(vtkNew<vtkExtractStructuredGridHelper> sself, int dim, int outIdx) { return sself->GetMappedExtentValueFromIndex(dim, outIdx); }
extern "C" void vtk_extract_structured_grid_helper_compute_begin_and_end(vtkNew<vtkExtractStructuredGridHelper> sself, int inExt, int voi, int begin, int end) { sself->ComputeBeginAndEnd(inExt, voi, begin, end); }
extern "C" void vtk_extract_structured_grid_helper_get_partitioned_voi(vtkNew<vtkExtractStructuredGridHelper> sself, const int globalVOI, const int partitionedExtent, const int sampleRate, bool includeBoundary, int partitionedVOI) { sself->GetPartitionedVOI(globalVOI, partitionedExtent, sampleRate, includeBoundary, partitionedVOI); }
extern "C" void vtk_extract_structured_grid_helper_get_partitioned_output_extent(vtkNew<vtkExtractStructuredGridHelper> sself, const int globalVOI, const int partitionedVOI, const int outputWholeExtent, const int sampleRate, bool includeBoundary, int partitionedOutputExtent) { sself->GetPartitionedOutputExtent(globalVOI, partitionedVOI, outputWholeExtent, sampleRate, includeBoundary, partitionedOutputExtent); }
extern "C" vtkNew < vtkFieldData > vtkFieldData_new () {return vtkNew < vtkFieldData > () ;}
extern "C" void vtkFieldData_destructor (vtkNew < vtkFieldData > sself) {sself . Reset () ; return ;}
extern "C" void * vtkFieldData_get_ptr (vtkNew < vtkFieldData > sself) {return sself . GetPointer () ;}
extern "C" void vtk_field_data_initialize(vtkNew<vtkFieldData> sself) { sself->Initialize(); }
extern "C" int vtk_field_data_allocate(vtkNew<vtkFieldData> sself, long long sz, long long ext) { return sself->Allocate(sz, ext); }
extern "C" void vtk_field_data_allocate_arrays(vtkNew<vtkFieldData> sself, int num) { sself->AllocateArrays(num); }
extern "C" int vtk_field_data_get_number_of_arrays(vtkNew<vtkFieldData> sself) { return sself->GetNumberOfArrays(); }
extern "C" void vtk_field_data_null_data(vtkNew<vtkFieldData> sself, long long id) { sself->NullData(id); }
extern "C" void vtk_field_data_remove_array(vtkNew<vtkFieldData> sself, const char name) { sself->RemoveArray(name); }
extern "C" void vtk_field_data_remove_array(vtkNew<vtkFieldData> sself, int index) { sself->RemoveArray(index); }
extern "C" int vtk_field_data_has_array(vtkNew<vtkFieldData> sself, const char name) { return sself->HasArray(name); }
extern "C" const char* vtk_field_data_get_array_name(vtkNew<vtkFieldData> sself, int i) { return sself->GetArrayName(i); }
extern "C" void vtk_field_data_copy_field_on(vtkNew<vtkFieldData> sself, const char name) { sself->CopyFieldOn(name); }
extern "C" void vtk_field_data_copy_field_off(vtkNew<vtkFieldData> sself, const char name) { sself->CopyFieldOff(name); }
extern "C" void vtk_field_data_copy_all_on(vtkNew<vtkFieldData> sself, int unused) { sself->CopyAllOn(unused); }
extern "C" void vtk_field_data_copy_all_off(vtkNew<vtkFieldData> sself, int unused) { sself->CopyAllOff(unused); }
extern "C" void vtk_field_data_squeeze(vtkNew<vtkFieldData> sself) { sself->Squeeze(); }
extern "C" void vtk_field_data_reset(vtkNew<vtkFieldData> sself) { sself->Reset(); }
extern "C" unsigned long vtk_field_data_get_actual_memory_size(vtkNew<vtkFieldData> sself) { return sself->GetActualMemorySize(); }
extern "C" unsigned long vtk_field_data_get_m_time(vtkNew<vtkFieldData> sself) { return sself->GetMTime(); }
extern "C" int vtk_field_data_get_array_containing_component(vtkNew<vtkFieldData> sself, int i, int arrayComp) { return sself->GetArrayContainingComponent(i, arrayComp); }
extern "C" int vtk_field_data_get_number_of_components(vtkNew<vtkFieldData> sself) { return sself->GetNumberOfComponents(); }
extern "C" long long vtk_field_data_get_number_of_tuples(vtkNew<vtkFieldData> sself) { return sself->GetNumberOfTuples(); }
extern "C" void vtk_field_data_set_number_of_tuples(vtkNew<vtkFieldData> sself, const long long number) { sself->SetNumberOfTuples(number); }
extern "C" vtkNew < vtkGenericAttributeCollection > vtkGenericAttributeCollection_new () {return vtkNew < vtkGenericAttributeCollection > () ;}
extern "C" void vtkGenericAttributeCollection_destructor (vtkNew < vtkGenericAttributeCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkGenericAttributeCollection_get_ptr (vtkNew < vtkGenericAttributeCollection > sself) {return sself . GetPointer () ;}
extern "C" int vtk_generic_attribute_collection_get_number_of_attributes(vtkNew<vtkGenericAttributeCollection> sself) { return sself->GetNumberOfAttributes(); }
extern "C" int vtk_generic_attribute_collection_get_number_of_components(vtkNew<vtkGenericAttributeCollection> sself) { return sself->GetNumberOfComponents(); }
extern "C" int vtk_generic_attribute_collection_get_number_of_point_centered_components(vtkNew<vtkGenericAttributeCollection> sself) { return sself->GetNumberOfPointCenteredComponents(); }
extern "C" int vtk_generic_attribute_collection_get_max_number_of_components(vtkNew<vtkGenericAttributeCollection> sself) { return sself->GetMaxNumberOfComponents(); }
extern "C" unsigned long vtk_generic_attribute_collection_get_actual_memory_size(vtkNew<vtkGenericAttributeCollection> sself) { return sself->GetActualMemorySize(); }
extern "C" int vtk_generic_attribute_collection_is_empty(vtkNew<vtkGenericAttributeCollection> sself) { return sself->IsEmpty(); }
extern "C" int vtk_generic_attribute_collection_find_attribute(vtkNew<vtkGenericAttributeCollection> sself, const char name) { return sself->FindAttribute(name); }
extern "C" int vtk_generic_attribute_collection_get_attribute_index(vtkNew<vtkGenericAttributeCollection> sself, int i) { return sself->GetAttributeIndex(i); }
extern "C" void vtk_generic_attribute_collection_remove_attribute(vtkNew<vtkGenericAttributeCollection> sself, int i) { sself->RemoveAttribute(i); }
extern "C" void vtk_generic_attribute_collection_reset(vtkNew<vtkGenericAttributeCollection> sself) { sself->Reset(); }
extern "C" unsigned long vtk_generic_attribute_collection_get_m_time(vtkNew<vtkGenericAttributeCollection> sself) { return sself->GetMTime(); }
extern "C" int vtk_generic_attribute_collection_get_active_attribute(vtkNew<vtkGenericAttributeCollection> sself) { return sself->GetActiveAttribute(); }
extern "C" int vtk_generic_attribute_collection_get_active_component(vtkNew<vtkGenericAttributeCollection> sself) { return sself->GetActiveComponent(); }
extern "C" void vtk_generic_attribute_collection_set_active_attribute(vtkNew<vtkGenericAttributeCollection> sself, int attribute, int component) { sself->SetActiveAttribute(attribute, component); }
extern "C" int vtk_generic_attribute_collection_get_number_of_attributes_to_interpolate(vtkNew<vtkGenericAttributeCollection> sself) { return sself->GetNumberOfAttributesToInterpolate(); }
extern "C" int* vtk_generic_attribute_collection_get_attributes_to_interpolate(vtkNew<vtkGenericAttributeCollection> sself) { return sself->GetAttributesToInterpolate(); }
extern "C" int vtk_generic_attribute_collection_has_attribute(vtkNew<vtkGenericAttributeCollection> sself, int size, int attributes, int attribute) { return sself->HasAttribute(size, attributes, attribute); }
extern "C" void vtk_generic_attribute_collection_set_attributes_to_interpolate(vtkNew<vtkGenericAttributeCollection> sself, int size, int attributes) { sself->SetAttributesToInterpolate(size, attributes); }
extern "C" void vtk_generic_attribute_collection_set_attributes_to_interpolate_to_all(vtkNew<vtkGenericAttributeCollection> sself) { sself->SetAttributesToInterpolateToAll(); }
extern "C" vtkNew < vtkGenericCell > vtkGenericCell_new () {return vtkNew < vtkGenericCell > () ;}
extern "C" void vtkGenericCell_destructor (vtkNew < vtkGenericCell > sself) {sself . Reset () ; return ;}
extern "C" void * vtkGenericCell_get_ptr (vtkNew < vtkGenericCell > sself) {return sself . GetPointer () ;}
extern "C" int vtk_generic_cell_get_cell_type(vtkNew<vtkGenericCell> sself) { return sself->GetCellType(); }
extern "C" int vtk_generic_cell_get_cell_dimension(vtkNew<vtkGenericCell> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_generic_cell_get_number_of_edges(vtkNew<vtkGenericCell> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_generic_cell_get_number_of_faces(vtkNew<vtkGenericCell> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_generic_cell_evaluate_position(vtkNew<vtkGenericCell> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_generic_cell_evaluate_location(vtkNew<vtkGenericCell> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_generic_cell_intersect_with_line(vtkNew<vtkGenericCell> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_generic_cell_derivatives(vtkNew<vtkGenericCell> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" void vtk_generic_cell_interpolate_functions(vtkNew<vtkGenericCell> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_generic_cell_set_cell_type(vtkNew<vtkGenericCell> sself, int cellType) { sself->SetCellType(cellType); }
extern "C" void vtk_generic_cell_set_cell_type_to_empty_cell(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToEmptyCell(); }
extern "C" void vtk_generic_cell_set_cell_type_to_vertex(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToVertex(); }
extern "C" void vtk_generic_cell_set_cell_type_to_poly_vertex(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToPolyVertex(); }
extern "C" void vtk_generic_cell_set_cell_type_to_line(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToLine(); }
extern "C" void vtk_generic_cell_set_cell_type_to_poly_line(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToPolyLine(); }
extern "C" void vtk_generic_cell_set_cell_type_to_triangle(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToTriangle(); }
extern "C" void vtk_generic_cell_set_cell_type_to_triangle_strip(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToTriangleStrip(); }
extern "C" void vtk_generic_cell_set_cell_type_to_polygon(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToPolygon(); }
extern "C" void vtk_generic_cell_set_cell_type_to_pixel(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToPixel(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quad(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuad(); }
extern "C" void vtk_generic_cell_set_cell_type_to_tetra(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToTetra(); }
extern "C" void vtk_generic_cell_set_cell_type_to_voxel(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToVoxel(); }
extern "C" void vtk_generic_cell_set_cell_type_to_hexahedron(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToHexahedron(); }
extern "C" void vtk_generic_cell_set_cell_type_to_wedge(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToWedge(); }
extern "C" void vtk_generic_cell_set_cell_type_to_pyramid(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToPyramid(); }
extern "C" void vtk_generic_cell_set_cell_type_to_pentagonal_prism(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToPentagonalPrism(); }
extern "C" void vtk_generic_cell_set_cell_type_to_hexagonal_prism(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToHexagonalPrism(); }
extern "C" void vtk_generic_cell_set_cell_type_to_polyhedron(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToPolyhedron(); }
extern "C" void vtk_generic_cell_set_cell_type_to_convex_point_set(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToConvexPointSet(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quadratic_edge(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuadraticEdge(); }
extern "C" void vtk_generic_cell_set_cell_type_to_cubic_line(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToCubicLine(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quadratic_triangle(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuadraticTriangle(); }
extern "C" void vtk_generic_cell_set_cell_type_to_bi_quadratic_triangle(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToBiQuadraticTriangle(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quadratic_quad(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuadraticQuad(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quadratic_polygon(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuadraticPolygon(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quadratic_tetra(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuadraticTetra(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quadratic_hexahedron(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuadraticHexahedron(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quadratic_wedge(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuadraticWedge(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quadratic_pyramid(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuadraticPyramid(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quadratic_linear_quad(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuadraticLinearQuad(); }
extern "C" void vtk_generic_cell_set_cell_type_to_bi_quadratic_quad(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToBiQuadraticQuad(); }
extern "C" void vtk_generic_cell_set_cell_type_to_quadratic_linear_wedge(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToQuadraticLinearWedge(); }
extern "C" void vtk_generic_cell_set_cell_type_to_bi_quadratic_quadratic_wedge(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToBiQuadraticQuadraticWedge(); }
extern "C" void vtk_generic_cell_set_cell_type_to_tri_quadratic_hexahedron(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToTriQuadraticHexahedron(); }
extern "C" void vtk_generic_cell_set_cell_type_to_tri_quadratic_pyramid(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToTriQuadraticPyramid(); }
extern "C" void vtk_generic_cell_set_cell_type_to_bi_quadratic_quadratic_hexahedron(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToBiQuadraticQuadraticHexahedron(); }
extern "C" void vtk_generic_cell_set_cell_type_to_lagrange_triangle(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToLagrangeTriangle(); }
extern "C" void vtk_generic_cell_set_cell_type_to_lagrange_tetra(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToLagrangeTetra(); }
extern "C" void vtk_generic_cell_set_cell_type_to_lagrange_curve(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToLagrangeCurve(); }
extern "C" void vtk_generic_cell_set_cell_type_to_lagrange_quadrilateral(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToLagrangeQuadrilateral(); }
extern "C" void vtk_generic_cell_set_cell_type_to_lagrange_hexahedron(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToLagrangeHexahedron(); }
extern "C" void vtk_generic_cell_set_cell_type_to_lagrange_wedge(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToLagrangeWedge(); }
extern "C" void vtk_generic_cell_set_cell_type_to_bezier_triangle(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToBezierTriangle(); }
extern "C" void vtk_generic_cell_set_cell_type_to_bezier_tetra(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToBezierTetra(); }
extern "C" void vtk_generic_cell_set_cell_type_to_bezier_curve(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToBezierCurve(); }
extern "C" void vtk_generic_cell_set_cell_type_to_bezier_quadrilateral(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToBezierQuadrilateral(); }
extern "C" void vtk_generic_cell_set_cell_type_to_bezier_hexahedron(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToBezierHexahedron(); }
extern "C" void vtk_generic_cell_set_cell_type_to_bezier_wedge(vtkNew<vtkGenericCell> sself) { sself->SetCellTypeToBezierWedge(); }
extern "C" vtkNew < vtkGenericEdgeTable > vtkGenericEdgeTable_new () {return vtkNew < vtkGenericEdgeTable > () ;}
extern "C" void vtkGenericEdgeTable_destructor (vtkNew < vtkGenericEdgeTable > sself) {sself . Reset () ; return ;}
extern "C" void * vtkGenericEdgeTable_get_ptr (vtkNew < vtkGenericEdgeTable > sself) {return sself . GetPointer () ;}
extern "C" void vtk_generic_edge_table_insert_edge(vtkNew<vtkGenericEdgeTable> sself, long long e1, long long e2, long long cellId, int ref, long long ptId) { sself->InsertEdge(e1, e2, cellId, ref, ptId); }
extern "C" void vtk_generic_edge_table_insert_edge(vtkNew<vtkGenericEdgeTable> sself, long long e1, long long e2, long long cellId, int ref) { sself->InsertEdge(e1, e2, cellId, ref); }
extern "C" int vtk_generic_edge_table_remove_edge(vtkNew<vtkGenericEdgeTable> sself, long long e1, long long e2) { return sself->RemoveEdge(e1, e2); }
extern "C" int vtk_generic_edge_table_check_edge(vtkNew<vtkGenericEdgeTable> sself, long long e1, long long e2, long long ptId) { return sself->CheckEdge(e1, e2, ptId); }
extern "C" int vtk_generic_edge_table_increment_edge_reference_count(vtkNew<vtkGenericEdgeTable> sself, long long e1, long long e2, long long cellId) { return sself->IncrementEdgeReferenceCount(e1, e2, cellId); }
extern "C" int vtk_generic_edge_table_check_edge_reference_count(vtkNew<vtkGenericEdgeTable> sself, long long e1, long long e2) { return sself->CheckEdgeReferenceCount(e1, e2); }
extern "C" void vtk_generic_edge_table_initialize(vtkNew<vtkGenericEdgeTable> sself, long long start) { sself->Initialize(start); }
extern "C" int vtk_generic_edge_table_get_number_of_components(vtkNew<vtkGenericEdgeTable> sself) { return sself->GetNumberOfComponents(); }
extern "C" void vtk_generic_edge_table_set_number_of_components(vtkNew<vtkGenericEdgeTable> sself, int count) { sself->SetNumberOfComponents(count); }
extern "C" int vtk_generic_edge_table_check_point(vtkNew<vtkGenericEdgeTable> sself, long long ptId) { return sself->CheckPoint(ptId); }
extern "C" int vtk_generic_edge_table_check_point(vtkNew<vtkGenericEdgeTable> sself, long long ptId, double point, double scalar) { return sself->CheckPoint(ptId, point, scalar); }
extern "C" void vtk_generic_edge_table_insert_point(vtkNew<vtkGenericEdgeTable> sself, long long ptId, double point) { sself->InsertPoint(ptId, point); }
extern "C" void vtk_generic_edge_table_insert_point_and_scalar(vtkNew<vtkGenericEdgeTable> sself, long long ptId, double pt, double s) { sself->InsertPointAndScalar(ptId, pt, s); }
extern "C" void vtk_generic_edge_table_remove_point(vtkNew<vtkGenericEdgeTable> sself, long long ptId) { sself->RemovePoint(ptId); }
extern "C" void vtk_generic_edge_table_increment_point_reference_count(vtkNew<vtkGenericEdgeTable> sself, long long ptId) { sself->IncrementPointReferenceCount(ptId); }
extern "C" void vtk_generic_edge_table_dump_table(vtkNew<vtkGenericEdgeTable> sself) { sself->DumpTable(); }
extern "C" void vtk_generic_edge_table_load_factor(vtkNew<vtkGenericEdgeTable> sself) { sself->LoadFactor(); }
extern "C" vtkNew < vtkGenericInterpolatedVelocityField > vtkGenericInterpolatedVelocityField_new () {return vtkNew < vtkGenericInterpolatedVelocityField > () ;}
extern "C" void vtkGenericInterpolatedVelocityField_destructor (vtkNew < vtkGenericInterpolatedVelocityField > sself) {sself . Reset () ; return ;}
extern "C" void * vtkGenericInterpolatedVelocityField_get_ptr (vtkNew < vtkGenericInterpolatedVelocityField > sself) {return sself . GetPointer () ;}
extern "C" int vtk_generic_interpolated_velocity_field_function_values(vtkNew<vtkGenericInterpolatedVelocityField> sself, double x, double f) { return sself->FunctionValues(x, f); }
extern "C" void vtk_generic_interpolated_velocity_field_clear_last_cell(vtkNew<vtkGenericInterpolatedVelocityField> sself) { sself->ClearLastCell(); }
extern "C" int vtk_generic_interpolated_velocity_field_get_last_local_coordinates(vtkNew<vtkGenericInterpolatedVelocityField> sself, double pcoords) { return sself->GetLastLocalCoordinates(pcoords); }
extern "C" int vtk_generic_interpolated_velocity_field_get_caching(vtkNew<vtkGenericInterpolatedVelocityField> sself) { return sself->GetCaching(); }
extern "C" void vtk_generic_interpolated_velocity_field_set_caching(vtkNew<vtkGenericInterpolatedVelocityField> sself, int _arg) { sself->SetCaching(_arg); }
extern "C" void vtk_generic_interpolated_velocity_field_caching_on(vtkNew<vtkGenericInterpolatedVelocityField> sself) { sself->CachingOn(); }
extern "C" void vtk_generic_interpolated_velocity_field_caching_off(vtkNew<vtkGenericInterpolatedVelocityField> sself) { sself->CachingOff(); }
extern "C" int vtk_generic_interpolated_velocity_field_get_cache_hit(vtkNew<vtkGenericInterpolatedVelocityField> sself) { return sself->GetCacheHit(); }
extern "C" int vtk_generic_interpolated_velocity_field_get_cache_miss(vtkNew<vtkGenericInterpolatedVelocityField> sself) { return sself->GetCacheMiss(); }
extern "C" char* vtk_generic_interpolated_velocity_field_get_vectors_selection(vtkNew<vtkGenericInterpolatedVelocityField> sself) { return sself->GetVectorsSelection(); }
extern "C" void vtk_generic_interpolated_velocity_field_select_vectors(vtkNew<vtkGenericInterpolatedVelocityField> sself, const char fieldName) { sself->SelectVectors(fieldName); }
extern "C" vtkNew < vtkGeometricErrorMetric > vtkGeometricErrorMetric_new () {return vtkNew < vtkGeometricErrorMetric > () ;}
extern "C" void vtkGeometricErrorMetric_destructor (vtkNew < vtkGeometricErrorMetric > sself) {sself . Reset () ; return ;}
extern "C" void * vtkGeometricErrorMetric_get_ptr (vtkNew < vtkGeometricErrorMetric > sself) {return sself . GetPointer () ;}
extern "C" double vtk_geometric_error_metric_get_absolute_geometric_tolerance(vtkNew<vtkGeometricErrorMetric> sself) { return sself->GetAbsoluteGeometricTolerance(); }
extern "C" void vtk_geometric_error_metric_set_absolute_geometric_tolerance(vtkNew<vtkGeometricErrorMetric> sself, double value) { sself->SetAbsoluteGeometricTolerance(value); }
extern "C" int vtk_geometric_error_metric_requires_edge_subdivision(vtkNew<vtkGeometricErrorMetric> sself, double leftPoint, double midPoint, double rightPoint, double alpha) { return sself->RequiresEdgeSubdivision(leftPoint, midPoint, rightPoint, alpha); }
extern "C" double vtk_geometric_error_metric_get_error(vtkNew<vtkGeometricErrorMetric> sself, double leftPoint, double midPoint, double rightPoint, double alpha) { return sself->GetError(leftPoint, midPoint, rightPoint, alpha); }
extern "C" int vtk_geometric_error_metric_get_relative(vtkNew<vtkGeometricErrorMetric> sself) { return sself->GetRelative(); }
extern "C" vtkNew < vtkGraphEdge > vtkGraphEdge_new () {return vtkNew < vtkGraphEdge > () ;}
extern "C" void vtkGraphEdge_destructor (vtkNew < vtkGraphEdge > sself) {sself . Reset () ; return ;}
extern "C" void * vtkGraphEdge_get_ptr (vtkNew < vtkGraphEdge > sself) {return sself . GetPointer () ;}
extern "C" void vtk_graph_edge_set_source(vtkNew<vtkGraphEdge> sself, long long _arg) { sself->SetSource(_arg); }
extern "C" long long vtk_graph_edge_get_source(vtkNew<vtkGraphEdge> sself) { return sself->GetSource(); }
extern "C" void vtk_graph_edge_set_target(vtkNew<vtkGraphEdge> sself, long long _arg) { sself->SetTarget(_arg); }
extern "C" long long vtk_graph_edge_get_target(vtkNew<vtkGraphEdge> sself) { return sself->GetTarget(); }
extern "C" void vtk_graph_edge_set_id(vtkNew<vtkGraphEdge> sself, long long _arg) { sself->SetId(_arg); }
extern "C" long long vtk_graph_edge_get_id(vtkNew<vtkGraphEdge> sself) { return sself->GetId(); }
extern "C" vtkNew < vtkGraphInternals > vtkGraphInternals_new () {return vtkNew < vtkGraphInternals > () ;}
extern "C" void vtkGraphInternals_destructor (vtkNew < vtkGraphInternals > sself) {sself . Reset () ; return ;}
extern "C" void * vtkGraphInternals_get_ptr (vtkNew < vtkGraphInternals > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkHexagonalPrism > vtkHexagonalPrism_new () {return vtkNew < vtkHexagonalPrism > () ;}
extern "C" void vtkHexagonalPrism_destructor (vtkNew < vtkHexagonalPrism > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHexagonalPrism_get_ptr (vtkNew < vtkHexagonalPrism > sself) {return sself . GetPointer () ;}
extern "C" void vtk_hexagonal_prism_get_edge_points(vtkNew<vtkHexagonalPrism> sself, long long edgeId, const long long pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" void vtk_hexagonal_prism_get_edge_points(vtkNew<vtkHexagonalPrism> sself, int edgeId, int pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" long long vtk_hexagonal_prism_get_face_points(vtkNew<vtkHexagonalPrism> sself, long long faceId, const long long pts) { return sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_hexagonal_prism_get_face_points(vtkNew<vtkHexagonalPrism> sself, int faceId, int pts) { sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_hexagonal_prism_get_edge_to_adjacent_faces(vtkNew<vtkHexagonalPrism> sself, long long edgeId, const long long pts) { sself->GetEdgeToAdjacentFaces(edgeId, pts); }
extern "C" long long vtk_hexagonal_prism_get_face_to_adjacent_faces(vtkNew<vtkHexagonalPrism> sself, long long faceId, const long long faceIds) { return sself->GetFaceToAdjacentFaces(faceId, faceIds); }
extern "C" long long vtk_hexagonal_prism_get_point_to_incident_edges(vtkNew<vtkHexagonalPrism> sself, long long pointId, const long long edgeIds) { return sself->GetPointToIncidentEdges(pointId, edgeIds); }
extern "C" long long vtk_hexagonal_prism_get_point_to_incident_faces(vtkNew<vtkHexagonalPrism> sself, long long pointId, const long long faceIds) { return sself->GetPointToIncidentFaces(pointId, faceIds); }
extern "C" long long vtk_hexagonal_prism_get_point_to_one_ring_points(vtkNew<vtkHexagonalPrism> sself, long long pointId, const long long pts) { return sself->GetPointToOneRingPoints(pointId, pts); }
extern "C" bool vtk_hexagonal_prism_get_centroid(vtkNew<vtkHexagonalPrism> sself, double centroid) { return sself->GetCentroid(centroid); }
extern "C" int vtk_hexagonal_prism_get_cell_type(vtkNew<vtkHexagonalPrism> sself) { return sself->GetCellType(); }
extern "C" int vtk_hexagonal_prism_get_number_of_edges(vtkNew<vtkHexagonalPrism> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_hexagonal_prism_get_number_of_faces(vtkNew<vtkHexagonalPrism> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_hexagonal_prism_evaluate_position(vtkNew<vtkHexagonalPrism> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_hexagonal_prism_evaluate_location(vtkNew<vtkHexagonalPrism> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_hexagonal_prism_intersect_with_line(vtkNew<vtkHexagonalPrism> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_hexagonal_prism_derivatives(vtkNew<vtkHexagonalPrism> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_hexagonal_prism_get_parametric_center(vtkNew<vtkHexagonalPrism> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_hexagonal_prism_interpolation_functions(vtkNew<vtkHexagonalPrism> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_hexagonal_prism_interpolation_derivs(vtkNew<vtkHexagonalPrism> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_hexagonal_prism_interpolate_functions(vtkNew<vtkHexagonalPrism> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_hexagonal_prism_interpolate_derivs(vtkNew<vtkHexagonalPrism> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_hexagonal_prism_get_edge_array(vtkNew<vtkHexagonalPrism> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_hexagonal_prism_get_face_array(vtkNew<vtkHexagonalPrism> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" const long long* vtk_hexagonal_prism_get_edge_to_adjacent_faces_array(vtkNew<vtkHexagonalPrism> sself, long long edgeId) { return sself->GetEdgeToAdjacentFacesArray(edgeId); }
extern "C" const long long* vtk_hexagonal_prism_get_face_to_adjacent_faces_array(vtkNew<vtkHexagonalPrism> sself, long long faceId) { return sself->GetFaceToAdjacentFacesArray(faceId); }
extern "C" const long long* vtk_hexagonal_prism_get_point_to_incident_edges_array(vtkNew<vtkHexagonalPrism> sself, long long pointId) { return sself->GetPointToIncidentEdgesArray(pointId); }
extern "C" const long long* vtk_hexagonal_prism_get_point_to_incident_faces_array(vtkNew<vtkHexagonalPrism> sself, long long pointId) { return sself->GetPointToIncidentFacesArray(pointId); }
extern "C" const long long* vtk_hexagonal_prism_get_point_to_one_ring_points_array(vtkNew<vtkHexagonalPrism> sself, long long pointId) { return sself->GetPointToOneRingPointsArray(pointId); }
extern "C" void vtk_hexagonal_prism_jacobian_inverse(vtkNew<vtkHexagonalPrism> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkHexahedron > vtkHexahedron_new () {return vtkNew < vtkHexahedron > () ;}
extern "C" void vtkHexahedron_destructor (vtkNew < vtkHexahedron > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHexahedron_get_ptr (vtkNew < vtkHexahedron > sself) {return sself . GetPointer () ;}
extern "C" void vtk_hexahedron_get_edge_points(vtkNew<vtkHexahedron> sself, long long edgeId, const long long pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" void vtk_hexahedron_get_edge_points(vtkNew<vtkHexahedron> sself, int edgeId, int pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" long long vtk_hexahedron_get_face_points(vtkNew<vtkHexahedron> sself, long long faceId, const long long pts) { return sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_hexahedron_get_face_points(vtkNew<vtkHexahedron> sself, int faceId, int pts) { sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_hexahedron_get_edge_to_adjacent_faces(vtkNew<vtkHexahedron> sself, long long edgeId, const long long pts) { sself->GetEdgeToAdjacentFaces(edgeId, pts); }
extern "C" long long vtk_hexahedron_get_face_to_adjacent_faces(vtkNew<vtkHexahedron> sself, long long faceId, const long long faceIds) { return sself->GetFaceToAdjacentFaces(faceId, faceIds); }
extern "C" long long vtk_hexahedron_get_point_to_incident_edges(vtkNew<vtkHexahedron> sself, long long pointId, const long long edgeIds) { return sself->GetPointToIncidentEdges(pointId, edgeIds); }
extern "C" long long vtk_hexahedron_get_point_to_incident_faces(vtkNew<vtkHexahedron> sself, long long pointId, const long long faceIds) { return sself->GetPointToIncidentFaces(pointId, faceIds); }
extern "C" long long vtk_hexahedron_get_point_to_one_ring_points(vtkNew<vtkHexahedron> sself, long long pointId, const long long pts) { return sself->GetPointToOneRingPoints(pointId, pts); }
extern "C" bool vtk_hexahedron_get_centroid(vtkNew<vtkHexahedron> sself, double centroid) { return sself->GetCentroid(centroid); }
extern "C" int vtk_hexahedron_get_cell_type(vtkNew<vtkHexahedron> sself) { return sself->GetCellType(); }
extern "C" int vtk_hexahedron_get_number_of_edges(vtkNew<vtkHexahedron> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_hexahedron_get_number_of_faces(vtkNew<vtkHexahedron> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_hexahedron_evaluate_position(vtkNew<vtkHexahedron> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_hexahedron_evaluate_location(vtkNew<vtkHexahedron> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_hexahedron_intersect_with_line(vtkNew<vtkHexahedron> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_hexahedron_derivatives(vtkNew<vtkHexahedron> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int* vtk_hexahedron_get_triangle_cases(vtkNew<vtkHexahedron> sself, int caseId) { return sself->GetTriangleCases(caseId); }
extern "C" void vtk_hexahedron_interpolation_functions(vtkNew<vtkHexahedron> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_hexahedron_interpolation_derivs(vtkNew<vtkHexahedron> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_hexahedron_interpolate_functions(vtkNew<vtkHexahedron> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_hexahedron_interpolate_derivs(vtkNew<vtkHexahedron> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_hexahedron_get_edge_array(vtkNew<vtkHexahedron> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_hexahedron_get_face_array(vtkNew<vtkHexahedron> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" const long long* vtk_hexahedron_get_edge_to_adjacent_faces_array(vtkNew<vtkHexahedron> sself, long long edgeId) { return sself->GetEdgeToAdjacentFacesArray(edgeId); }
extern "C" const long long* vtk_hexahedron_get_face_to_adjacent_faces_array(vtkNew<vtkHexahedron> sself, long long faceId) { return sself->GetFaceToAdjacentFacesArray(faceId); }
extern "C" const long long* vtk_hexahedron_get_point_to_incident_edges_array(vtkNew<vtkHexahedron> sself, long long pointId) { return sself->GetPointToIncidentEdgesArray(pointId); }
extern "C" const long long* vtk_hexahedron_get_point_to_incident_faces_array(vtkNew<vtkHexahedron> sself, long long pointId) { return sself->GetPointToIncidentFacesArray(pointId); }
extern "C" const long long* vtk_hexahedron_get_point_to_one_ring_points_array(vtkNew<vtkHexahedron> sself, long long pointId) { return sself->GetPointToOneRingPointsArray(pointId); }
extern "C" void vtk_hexahedron_jacobian_inverse(vtkNew<vtkHexahedron> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkHierarchicalBoxDataIterator > vtkHierarchicalBoxDataIterator_new () {return vtkNew < vtkHierarchicalBoxDataIterator > () ;}
extern "C" void vtkHierarchicalBoxDataIterator_destructor (vtkNew < vtkHierarchicalBoxDataIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHierarchicalBoxDataIterator_get_ptr (vtkNew < vtkHierarchicalBoxDataIterator > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkHierarchicalBoxDataSet > vtkHierarchicalBoxDataSet_new () {return vtkNew < vtkHierarchicalBoxDataSet > () ;}
extern "C" void vtkHierarchicalBoxDataSet_destructor (vtkNew < vtkHierarchicalBoxDataSet > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHierarchicalBoxDataSet_get_ptr (vtkNew < vtkHierarchicalBoxDataSet > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkHyperTreeGrid > vtkHyperTreeGrid_new () {return vtkNew < vtkHyperTreeGrid > () ;}
extern "C" void vtkHyperTreeGrid_destructor (vtkNew < vtkHyperTreeGrid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHyperTreeGrid_get_ptr (vtkNew < vtkHyperTreeGrid > sself) {return sself . GetPointer () ;}
extern "C" void vtk_hyper_tree_grid_set_mode_squeeze(vtkNew<vtkHyperTreeGrid> sself, const char _arg) { sself->SetModeSqueeze(_arg); }
extern "C" char* vtk_hyper_tree_grid_get_mode_squeeze(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetModeSqueeze(); }
extern "C" void vtk_hyper_tree_grid_squeeze(vtkNew<vtkHyperTreeGrid> sself) { sself->Squeeze(); }
extern "C" int vtk_hyper_tree_grid_get_data_object_type(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetDataObjectType(); }
extern "C" void vtk_hyper_tree_grid_set_dimensions(vtkNew<vtkHyperTreeGrid> sself, const unsigned int dims) { sself->SetDimensions(dims); }
extern "C" void vtk_hyper_tree_grid_set_dimensions(vtkNew<vtkHyperTreeGrid> sself, const int dims) { sself->SetDimensions(dims); }
extern "C" void vtk_hyper_tree_grid_set_dimensions(vtkNew<vtkHyperTreeGrid> sself, unsigned int i, unsigned int j, unsigned int k) { sself->SetDimensions(i, j, k); }
extern "C" void vtk_hyper_tree_grid_set_dimensions(vtkNew<vtkHyperTreeGrid> sself, int i, int j, int k) { sself->SetDimensions(i, j, k); }
extern "C" const unsigned int* vtk_hyper_tree_grid_get_dimensions(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetDimensions(); }
extern "C" void vtk_hyper_tree_grid_get_dimensions(vtkNew<vtkHyperTreeGrid> sself, int dim) { sself->GetDimensions(dim); }
extern "C" void vtk_hyper_tree_grid_get_dimensions(vtkNew<vtkHyperTreeGrid> sself, unsigned int dim) { sself->GetDimensions(dim); }
extern "C" void vtk_hyper_tree_grid_set_extent(vtkNew<vtkHyperTreeGrid> sself, const int extent) { sself->SetExtent(extent); }
extern "C" void vtk_hyper_tree_grid_set_extent(vtkNew<vtkHyperTreeGrid> sself, int x1, int x2, int y1, int y2, int z1, int z2) { sself->SetExtent(x1, x2, y1, y2, z1, z2); }
extern "C" int* vtk_hyper_tree_grid_get_extent(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetExtent(); }
extern "C" void vtk_hyper_tree_grid_get_extent(vtkNew<vtkHyperTreeGrid> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->GetExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_hyper_tree_grid_get_extent(vtkNew<vtkHyperTreeGrid> sself, int _arg) { sself->GetExtent(_arg); }
extern "C" const unsigned int* vtk_hyper_tree_grid_get_cell_dims(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetCellDims(); }
extern "C" void vtk_hyper_tree_grid_get_cell_dims(vtkNew<vtkHyperTreeGrid> sself, int cellDims) { sself->GetCellDims(cellDims); }
extern "C" void vtk_hyper_tree_grid_get_cell_dims(vtkNew<vtkHyperTreeGrid> sself, unsigned int cellDims) { sself->GetCellDims(cellDims); }
extern "C" unsigned int vtk_hyper_tree_grid_get_dimension(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetDimension(); }
extern "C" void vtk_hyper_tree_grid_get_1_d_axis(vtkNew<vtkHyperTreeGrid> sself, unsigned int axis) { sself->Get1DAxis(axis); }
extern "C" void vtk_hyper_tree_grid_get_2_d_axes(vtkNew<vtkHyperTreeGrid> sself, unsigned int axis1, unsigned int axis2) { sself->Get2DAxes(axis1, axis2); }
extern "C" const unsigned int* vtk_hyper_tree_grid_get_axes(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetAxes(); }
extern "C" unsigned int vtk_hyper_tree_grid_get_number_of_children(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetNumberOfChildren(); }
extern "C" void vtk_hyper_tree_grid_set_transposed_root_indexing(vtkNew<vtkHyperTreeGrid> sself, bool _arg) { sself->SetTransposedRootIndexing(_arg); }
extern "C" bool vtk_hyper_tree_grid_get_transposed_root_indexing(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetTransposedRootIndexing(); }
extern "C" void vtk_hyper_tree_grid_set_indexing_mode_to_kji(vtkNew<vtkHyperTreeGrid> sself) { sself->SetIndexingModeToKJI(); }
extern "C" void vtk_hyper_tree_grid_set_indexing_mode_to_ijk(vtkNew<vtkHyperTreeGrid> sself) { sself->SetIndexingModeToIJK(); }
extern "C" unsigned int vtk_hyper_tree_grid_get_orientation(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetOrientation(); }
extern "C" bool vtk_hyper_tree_grid_get_freeze_state(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetFreezeState(); }
extern "C" void vtk_hyper_tree_grid_set_branch_factor(vtkNew<vtkHyperTreeGrid> sself, unsigned int p0) { sself->SetBranchFactor(p0); }
extern "C" unsigned int vtk_hyper_tree_grid_get_branch_factor(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetBranchFactor(); }
extern "C" long long vtk_hyper_tree_grid_get_max_number_of_trees(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetMaxNumberOfTrees(); }
extern "C" long long vtk_hyper_tree_grid_get_number_of_vertices(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetNumberOfVertices(); }
extern "C" long long vtk_hyper_tree_grid_get_number_of_non_empty_trees(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetNumberOfNonEmptyTrees(); }
extern "C" long long vtk_hyper_tree_grid_get_number_of_leaves(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetNumberOfLeaves(); }
extern "C" unsigned int vtk_hyper_tree_grid_get_number_of_levels(vtkNew<vtkHyperTreeGrid> sself, long long p0) { return sself->GetNumberOfLevels(p0); }
extern "C" unsigned int vtk_hyper_tree_grid_get_number_of_levels(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetNumberOfLevels(); }
extern "C" void vtk_hyper_tree_grid_set_fixed_coordinates(vtkNew<vtkHyperTreeGrid> sself, unsigned int axis, double value) { sself->SetFixedCoordinates(axis, value); }
extern "C" bool vtk_hyper_tree_grid_has_mask(vtkNew<vtkHyperTreeGrid> sself) { return sself->HasMask(); }
extern "C" void vtk_hyper_tree_grid_set_has_interface(vtkNew<vtkHyperTreeGrid> sself, bool _arg) { sself->SetHasInterface(_arg); }
extern "C" bool vtk_hyper_tree_grid_get_has_interface(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetHasInterface(); }
extern "C" void vtk_hyper_tree_grid_has_interface_on(vtkNew<vtkHyperTreeGrid> sself) { sself->HasInterfaceOn(); }
extern "C" void vtk_hyper_tree_grid_has_interface_off(vtkNew<vtkHyperTreeGrid> sself) { sself->HasInterfaceOff(); }
extern "C" void vtk_hyper_tree_grid_set_interface_normals_name(vtkNew<vtkHyperTreeGrid> sself, const char _arg) { sself->SetInterfaceNormalsName(_arg); }
extern "C" char* vtk_hyper_tree_grid_get_interface_normals_name(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetInterfaceNormalsName(); }
extern "C" void vtk_hyper_tree_grid_set_interface_intercepts_name(vtkNew<vtkHyperTreeGrid> sself, const char _arg) { sself->SetInterfaceInterceptsName(_arg); }
extern "C" char* vtk_hyper_tree_grid_get_interface_intercepts_name(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetInterfaceInterceptsName(); }
extern "C" void vtk_hyper_tree_grid_set_depth_limiter(vtkNew<vtkHyperTreeGrid> sself, unsigned int _arg) { sself->SetDepthLimiter(_arg); }
extern "C" unsigned int vtk_hyper_tree_grid_get_depth_limiter(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetDepthLimiter(); }
extern "C" unsigned int vtk_hyper_tree_grid_find_dichotomic_x(vtkNew<vtkHyperTreeGrid> sself, double value) { return sself->FindDichotomicX(value); }
extern "C" unsigned int vtk_hyper_tree_grid_find_dichotomic_y(vtkNew<vtkHyperTreeGrid> sself, double value) { return sself->FindDichotomicY(value); }
extern "C" unsigned int vtk_hyper_tree_grid_find_dichotomic_z(vtkNew<vtkHyperTreeGrid> sself, double value) { return sself->FindDichotomicZ(value); }
extern "C" void vtk_hyper_tree_grid_initialize(vtkNew<vtkHyperTreeGrid> sself) { sself->Initialize(); }
extern "C" int vtk_hyper_tree_grid_get_extent_type(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetExtentType(); }
extern "C" unsigned long vtk_hyper_tree_grid_get_actual_memory_size_bytes(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetActualMemorySizeBytes(); }
extern "C" unsigned long vtk_hyper_tree_grid_get_actual_memory_size(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetActualMemorySize(); }
extern "C" unsigned int vtk_hyper_tree_grid_get_child_mask(vtkNew<vtkHyperTreeGrid> sself, unsigned int p0) { return sself->GetChildMask(p0); }
extern "C" void vtk_hyper_tree_grid_get_index_from_level_zero_coordinates(vtkNew<vtkHyperTreeGrid> sself, long long p0, unsigned int p1, unsigned int p2, unsigned int p3) { sself->GetIndexFromLevelZeroCoordinates(p0, p1, p2, p3); }
extern "C" long long vtk_hyper_tree_grid_get_shifted_level_zero_index(vtkNew<vtkHyperTreeGrid> sself, long long p0, unsigned int p1, unsigned int p2, unsigned int p3) { return sself->GetShiftedLevelZeroIndex(p0, p1, p2, p3); }
extern "C" void vtk_hyper_tree_grid_get_level_zero_coordinates_from_index(vtkNew<vtkHyperTreeGrid> sself, long long p0, unsigned int p1, unsigned int p2, unsigned int p3) { sself->GetLevelZeroCoordinatesFromIndex(p0, p1, p2, p3); }
extern "C" void vtk_hyper_tree_grid_get_level_zero_origin_and_size_from_index(vtkNew<vtkHyperTreeGrid> sself, long long p0, double p1, double p2) { sself->GetLevelZeroOriginAndSizeFromIndex(p0, p1, p2); }
extern "C" void vtk_hyper_tree_grid_get_level_zero_origin_from_index(vtkNew<vtkHyperTreeGrid> sself, long long p0, double p1) { sself->GetLevelZeroOriginFromIndex(p0, p1); }
extern "C" long long vtk_hyper_tree_grid_get_global_node_index_max(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetGlobalNodeIndexMax(); }
extern "C" void vtk_hyper_tree_grid_initialize_local_index_node(vtkNew<vtkHyperTreeGrid> sself) { sself->InitializeLocalIndexNode(); }
extern "C" bool vtk_hyper_tree_grid_has_any_ghost_cells(vtkNew<vtkHyperTreeGrid> sself) { return sself->HasAnyGhostCells(); }
extern "C" double* vtk_hyper_tree_grid_get_bounds(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetBounds(); }
extern "C" void vtk_hyper_tree_grid_get_bounds(vtkNew<vtkHyperTreeGrid> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" double* vtk_hyper_tree_grid_get_center(vtkNew<vtkHyperTreeGrid> sself) { return sself->GetCenter(); }
extern "C" void vtk_hyper_tree_grid_get_center(vtkNew<vtkHyperTreeGrid> sself, double center) { sself->GetCenter(center); }
extern "C" long long vtk_hyper_tree_grid_get_number_of_elements(vtkNew<vtkHyperTreeGrid> sself, int type) { return sself->GetNumberOfElements(type); }
extern "C" vtkNew < vtkHyperTreeGridNonOrientedCursor > vtkHyperTreeGridNonOrientedCursor_new () {return vtkNew < vtkHyperTreeGridNonOrientedCursor > () ;}
extern "C" void vtkHyperTreeGridNonOrientedCursor_destructor (vtkNew < vtkHyperTreeGridNonOrientedCursor > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHyperTreeGridNonOrientedCursor_get_ptr (vtkNew < vtkHyperTreeGridNonOrientedCursor > sself) {return sself . GetPointer () ;}
extern "C" bool vtk_hyper_tree_grid_non_oriented_cursor_has_tree(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { return sself->HasTree(); }
extern "C" long long vtk_hyper_tree_grid_non_oriented_cursor_get_vertex_id(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { return sself->GetVertexId(); }
extern "C" long long vtk_hyper_tree_grid_non_oriented_cursor_get_global_node_index(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { return sself->GetGlobalNodeIndex(); }
extern "C" unsigned char vtk_hyper_tree_grid_non_oriented_cursor_get_dimension(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { return sself->GetDimension(); }
extern "C" unsigned char vtk_hyper_tree_grid_non_oriented_cursor_get_number_of_children(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { return sself->GetNumberOfChildren(); }
extern "C" void vtk_hyper_tree_grid_non_oriented_cursor_set_global_index_start(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself, long long index) { sself->SetGlobalIndexStart(index); }
extern "C" void vtk_hyper_tree_grid_non_oriented_cursor_set_global_index_from_local(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself, long long index) { sself->SetGlobalIndexFromLocal(index); }
extern "C" void vtk_hyper_tree_grid_non_oriented_cursor_set_mask(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself, bool state) { sself->SetMask(state); }
extern "C" bool vtk_hyper_tree_grid_non_oriented_cursor_is_masked(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { return sself->IsMasked(); }
extern "C" bool vtk_hyper_tree_grid_non_oriented_cursor_is_leaf(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { return sself->IsLeaf(); }
extern "C" void vtk_hyper_tree_grid_non_oriented_cursor_subdivide_leaf(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { sself->SubdivideLeaf(); }
extern "C" bool vtk_hyper_tree_grid_non_oriented_cursor_is_root(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { return sself->IsRoot(); }
extern "C" unsigned int vtk_hyper_tree_grid_non_oriented_cursor_get_level(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { return sself->GetLevel(); }
extern "C" void vtk_hyper_tree_grid_non_oriented_cursor_to_child(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself, unsigned char ichild) { sself->ToChild(ichild); }
extern "C" void vtk_hyper_tree_grid_non_oriented_cursor_to_root(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { sself->ToRoot(); }
extern "C" void vtk_hyper_tree_grid_non_oriented_cursor_to_parent(vtkNew<vtkHyperTreeGridNonOrientedCursor> sself) { sself->ToParent(); }
extern "C" vtkNew < vtkHyperTreeGridNonOrientedGeometryCursor > vtkHyperTreeGridNonOrientedGeometryCursor_new () {return vtkNew < vtkHyperTreeGridNonOrientedGeometryCursor > () ;}
extern "C" void vtkHyperTreeGridNonOrientedGeometryCursor_destructor (vtkNew < vtkHyperTreeGridNonOrientedGeometryCursor > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHyperTreeGridNonOrientedGeometryCursor_get_ptr (vtkNew < vtkHyperTreeGridNonOrientedGeometryCursor > sself) {return sself . GetPointer () ;}
extern "C" bool vtk_hyper_tree_grid_non_oriented_geometry_cursor_has_tree(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->HasTree(); }
extern "C" long long vtk_hyper_tree_grid_non_oriented_geometry_cursor_get_vertex_id(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->GetVertexId(); }
extern "C" long long vtk_hyper_tree_grid_non_oriented_geometry_cursor_get_global_node_index(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->GetGlobalNodeIndex(); }
extern "C" unsigned char vtk_hyper_tree_grid_non_oriented_geometry_cursor_get_dimension(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->GetDimension(); }
extern "C" unsigned char vtk_hyper_tree_grid_non_oriented_geometry_cursor_get_number_of_children(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->GetNumberOfChildren(); }
extern "C" void vtk_hyper_tree_grid_non_oriented_geometry_cursor_set_global_index_start(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself, long long index) { sself->SetGlobalIndexStart(index); }
extern "C" void vtk_hyper_tree_grid_non_oriented_geometry_cursor_set_global_index_from_local(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself, long long index) { sself->SetGlobalIndexFromLocal(index); }
extern "C" double* vtk_hyper_tree_grid_non_oriented_geometry_cursor_get_origin(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->GetOrigin(); }
extern "C" double* vtk_hyper_tree_grid_non_oriented_geometry_cursor_get_size(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->GetSize(); }
extern "C" void vtk_hyper_tree_grid_non_oriented_geometry_cursor_get_bounds(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" void vtk_hyper_tree_grid_non_oriented_geometry_cursor_get_point(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself, double point) { sself->GetPoint(point); }
extern "C" void vtk_hyper_tree_grid_non_oriented_geometry_cursor_set_mask(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself, bool state) { sself->SetMask(state); }
extern "C" bool vtk_hyper_tree_grid_non_oriented_geometry_cursor_is_masked(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->IsMasked(); }
extern "C" bool vtk_hyper_tree_grid_non_oriented_geometry_cursor_is_leaf(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->IsLeaf(); }
extern "C" void vtk_hyper_tree_grid_non_oriented_geometry_cursor_subdivide_leaf(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { sself->SubdivideLeaf(); }
extern "C" bool vtk_hyper_tree_grid_non_oriented_geometry_cursor_is_root(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->IsRoot(); }
extern "C" unsigned int vtk_hyper_tree_grid_non_oriented_geometry_cursor_get_level(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { return sself->GetLevel(); }
extern "C" void vtk_hyper_tree_grid_non_oriented_geometry_cursor_to_child(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself, unsigned char ichild) { sself->ToChild(ichild); }
extern "C" void vtk_hyper_tree_grid_non_oriented_geometry_cursor_to_root(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { sself->ToRoot(); }
extern "C" void vtk_hyper_tree_grid_non_oriented_geometry_cursor_to_parent(vtkNew<vtkHyperTreeGridNonOrientedGeometryCursor> sself) { sself->ToParent(); }
extern "C" vtkNew < vtkHyperTreeGridNonOrientedMooreSuperCursor > vtkHyperTreeGridNonOrientedMooreSuperCursor_new () {return vtkNew < vtkHyperTreeGridNonOrientedMooreSuperCursor > () ;}
extern "C" void vtkHyperTreeGridNonOrientedMooreSuperCursor_destructor (vtkNew < vtkHyperTreeGridNonOrientedMooreSuperCursor > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHyperTreeGridNonOrientedMooreSuperCursor_get_ptr (vtkNew < vtkHyperTreeGridNonOrientedMooreSuperCursor > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkHyperTreeGridNonOrientedMooreSuperCursorLight > vtkHyperTreeGridNonOrientedMooreSuperCursorLight_new () {return vtkNew < vtkHyperTreeGridNonOrientedMooreSuperCursorLight > () ;}
extern "C" void vtkHyperTreeGridNonOrientedMooreSuperCursorLight_destructor (vtkNew < vtkHyperTreeGridNonOrientedMooreSuperCursorLight > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHyperTreeGridNonOrientedMooreSuperCursorLight_get_ptr (vtkNew < vtkHyperTreeGridNonOrientedMooreSuperCursorLight > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkHyperTreeGridNonOrientedVonNeumannSuperCursor > vtkHyperTreeGridNonOrientedVonNeumannSuperCursor_new () {return vtkNew < vtkHyperTreeGridNonOrientedVonNeumannSuperCursor > () ;}
extern "C" void vtkHyperTreeGridNonOrientedVonNeumannSuperCursor_destructor (vtkNew < vtkHyperTreeGridNonOrientedVonNeumannSuperCursor > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHyperTreeGridNonOrientedVonNeumannSuperCursor_get_ptr (vtkNew < vtkHyperTreeGridNonOrientedVonNeumannSuperCursor > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight > vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_new () {return vtkNew < vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight > () ;}
extern "C" void vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_destructor (vtkNew < vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight_get_ptr (vtkNew < vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkHyperTreeGridOrientedCursor > vtkHyperTreeGridOrientedCursor_new () {return vtkNew < vtkHyperTreeGridOrientedCursor > () ;}
extern "C" void vtkHyperTreeGridOrientedCursor_destructor (vtkNew < vtkHyperTreeGridOrientedCursor > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHyperTreeGridOrientedCursor_get_ptr (vtkNew < vtkHyperTreeGridOrientedCursor > sself) {return sself . GetPointer () ;}
extern "C" bool vtk_hyper_tree_grid_oriented_cursor_has_tree(vtkNew<vtkHyperTreeGridOrientedCursor> sself) { return sself->HasTree(); }
extern "C" long long vtk_hyper_tree_grid_oriented_cursor_get_vertex_id(vtkNew<vtkHyperTreeGridOrientedCursor> sself) { return sself->GetVertexId(); }
extern "C" long long vtk_hyper_tree_grid_oriented_cursor_get_global_node_index(vtkNew<vtkHyperTreeGridOrientedCursor> sself) { return sself->GetGlobalNodeIndex(); }
extern "C" unsigned char vtk_hyper_tree_grid_oriented_cursor_get_dimension(vtkNew<vtkHyperTreeGridOrientedCursor> sself) { return sself->GetDimension(); }
extern "C" unsigned char vtk_hyper_tree_grid_oriented_cursor_get_number_of_children(vtkNew<vtkHyperTreeGridOrientedCursor> sself) { return sself->GetNumberOfChildren(); }
extern "C" void vtk_hyper_tree_grid_oriented_cursor_set_global_index_start(vtkNew<vtkHyperTreeGridOrientedCursor> sself, long long index) { sself->SetGlobalIndexStart(index); }
extern "C" void vtk_hyper_tree_grid_oriented_cursor_set_global_index_from_local(vtkNew<vtkHyperTreeGridOrientedCursor> sself, long long index) { sself->SetGlobalIndexFromLocal(index); }
extern "C" void vtk_hyper_tree_grid_oriented_cursor_set_mask(vtkNew<vtkHyperTreeGridOrientedCursor> sself, bool state) { sself->SetMask(state); }
extern "C" bool vtk_hyper_tree_grid_oriented_cursor_is_masked(vtkNew<vtkHyperTreeGridOrientedCursor> sself) { return sself->IsMasked(); }
extern "C" bool vtk_hyper_tree_grid_oriented_cursor_is_leaf(vtkNew<vtkHyperTreeGridOrientedCursor> sself) { return sself->IsLeaf(); }
extern "C" void vtk_hyper_tree_grid_oriented_cursor_subdivide_leaf(vtkNew<vtkHyperTreeGridOrientedCursor> sself) { sself->SubdivideLeaf(); }
extern "C" bool vtk_hyper_tree_grid_oriented_cursor_is_root(vtkNew<vtkHyperTreeGridOrientedCursor> sself) { return sself->IsRoot(); }
extern "C" unsigned int vtk_hyper_tree_grid_oriented_cursor_get_level(vtkNew<vtkHyperTreeGridOrientedCursor> sself) { return sself->GetLevel(); }
extern "C" void vtk_hyper_tree_grid_oriented_cursor_to_child(vtkNew<vtkHyperTreeGridOrientedCursor> sself, unsigned char ichild) { sself->ToChild(ichild); }
extern "C" vtkNew < vtkHyperTreeGridOrientedGeometryCursor > vtkHyperTreeGridOrientedGeometryCursor_new () {return vtkNew < vtkHyperTreeGridOrientedGeometryCursor > () ;}
extern "C" void vtkHyperTreeGridOrientedGeometryCursor_destructor (vtkNew < vtkHyperTreeGridOrientedGeometryCursor > sself) {sself . Reset () ; return ;}
extern "C" void * vtkHyperTreeGridOrientedGeometryCursor_get_ptr (vtkNew < vtkHyperTreeGridOrientedGeometryCursor > sself) {return sself . GetPointer () ;}
extern "C" bool vtk_hyper_tree_grid_oriented_geometry_cursor_has_tree(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->HasTree(); }
extern "C" long long vtk_hyper_tree_grid_oriented_geometry_cursor_get_vertex_id(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->GetVertexId(); }
extern "C" long long vtk_hyper_tree_grid_oriented_geometry_cursor_get_global_node_index(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->GetGlobalNodeIndex(); }
extern "C" unsigned char vtk_hyper_tree_grid_oriented_geometry_cursor_get_dimension(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->GetDimension(); }
extern "C" unsigned char vtk_hyper_tree_grid_oriented_geometry_cursor_get_number_of_children(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->GetNumberOfChildren(); }
extern "C" void vtk_hyper_tree_grid_oriented_geometry_cursor_set_global_index_start(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself, long long index) { sself->SetGlobalIndexStart(index); }
extern "C" void vtk_hyper_tree_grid_oriented_geometry_cursor_set_global_index_from_local(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself, long long index) { sself->SetGlobalIndexFromLocal(index); }
extern "C" double* vtk_hyper_tree_grid_oriented_geometry_cursor_get_origin(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->GetOrigin(); }
extern "C" double* vtk_hyper_tree_grid_oriented_geometry_cursor_get_size(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->GetSize(); }
extern "C" void vtk_hyper_tree_grid_oriented_geometry_cursor_get_bounds(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" void vtk_hyper_tree_grid_oriented_geometry_cursor_get_point(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself, double point) { sself->GetPoint(point); }
extern "C" void vtk_hyper_tree_grid_oriented_geometry_cursor_set_mask(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself, bool state) { sself->SetMask(state); }
extern "C" bool vtk_hyper_tree_grid_oriented_geometry_cursor_is_masked(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->IsMasked(); }
extern "C" bool vtk_hyper_tree_grid_oriented_geometry_cursor_is_leaf(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->IsLeaf(); }
extern "C" void vtk_hyper_tree_grid_oriented_geometry_cursor_subdivide_leaf(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { sself->SubdivideLeaf(); }
extern "C" bool vtk_hyper_tree_grid_oriented_geometry_cursor_is_root(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->IsRoot(); }
extern "C" unsigned int vtk_hyper_tree_grid_oriented_geometry_cursor_get_level(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself) { return sself->GetLevel(); }
extern "C" void vtk_hyper_tree_grid_oriented_geometry_cursor_to_child(vtkNew<vtkHyperTreeGridOrientedGeometryCursor> sself, unsigned char ichild) { sself->ToChild(ichild); }
extern "C" vtkNew < vtkImageData > vtkImageData_new () {return vtkNew < vtkImageData > () ;}
extern "C" void vtkImageData_destructor (vtkNew < vtkImageData > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImageData_get_ptr (vtkNew < vtkImageData > sself) {return sself . GetPointer () ;}
extern "C" int vtk_image_data_get_data_object_type(vtkNew<vtkImageData> sself) { return sself->GetDataObjectType(); }
extern "C" long long vtk_image_data_get_number_of_cells(vtkNew<vtkImageData> sself) { return sself->GetNumberOfCells(); }
extern "C" long long vtk_image_data_get_number_of_points(vtkNew<vtkImageData> sself) { return sself->GetNumberOfPoints(); }
extern "C" double* vtk_image_data_get_point(vtkNew<vtkImageData> sself, long long ptId) { return sself->GetPoint(ptId); }
extern "C" long long vtk_image_data_find_point(vtkNew<vtkImageData> sself, double x, double y, double z) { return sself->FindPoint(x, y, z); }
extern "C" long long vtk_image_data_find_point(vtkNew<vtkImageData> sself, double x) { return sself->FindPoint(x); }
extern "C" int vtk_image_data_get_cell_type(vtkNew<vtkImageData> sself, long long cellId) { return sself->GetCellType(cellId); }
extern "C" int vtk_image_data_get_max_cell_size(vtkNew<vtkImageData> sself) { return sself->GetMaxCellSize(); }
extern "C" void vtk_image_data_initialize(vtkNew<vtkImageData> sself) { sself->Initialize(); }
extern "C" unsigned char vtk_image_data_is_point_visible(vtkNew<vtkImageData> sself, long long ptId) { return sself->IsPointVisible(ptId); }
extern "C" unsigned char vtk_image_data_is_cell_visible(vtkNew<vtkImageData> sself, long long cellId) { return sself->IsCellVisible(cellId); }
extern "C" bool vtk_image_data_has_any_blank_points(vtkNew<vtkImageData> sself) { return sself->HasAnyBlankPoints(); }
extern "C" bool vtk_image_data_has_any_blank_cells(vtkNew<vtkImageData> sself) { return sself->HasAnyBlankCells(); }
extern "C" void vtk_image_data_get_cell_dims(vtkNew<vtkImageData> sself, int cellDims) { sself->GetCellDims(cellDims); }
extern "C" void vtk_image_data_set_dimensions(vtkNew<vtkImageData> sself, int i, int j, int k) { sself->SetDimensions(i, j, k); }
extern "C" void vtk_image_data_set_dimensions(vtkNew<vtkImageData> sself, const int dims) { sself->SetDimensions(dims); }
extern "C" int* vtk_image_data_get_dimensions(vtkNew<vtkImageData> sself) { return sself->GetDimensions(); }
extern "C" void vtk_image_data_get_dimensions(vtkNew<vtkImageData> sself, int dims) { sself->GetDimensions(dims); }
extern "C" void vtk_image_data_get_dimensions(vtkNew<vtkImageData> sself, long long dims) { sself->GetDimensions(dims); }
extern "C" int vtk_image_data_compute_structured_coordinates(vtkNew<vtkImageData> sself, const double x, int ijk, double pcoords) { return sself->ComputeStructuredCoordinates(x, ijk, pcoords); }
extern "C" int vtk_image_data_get_data_dimension(vtkNew<vtkImageData> sself) { return sself->GetDataDimension(); }
extern "C" long long vtk_image_data_compute_point_id(vtkNew<vtkImageData> sself, int ijk) { return sself->ComputePointId(ijk); }
extern "C" long long vtk_image_data_compute_cell_id(vtkNew<vtkImageData> sself, int ijk) { return sself->ComputeCellId(ijk); }
extern "C" void vtk_image_data_set_axis_update_extent(vtkNew<vtkImageData> sself, int axis, int min, int max, const int updateExtent, int axisUpdateExtent) { sself->SetAxisUpdateExtent(axis, min, max, updateExtent, axisUpdateExtent); }
extern "C" void vtk_image_data_get_axis_update_extent(vtkNew<vtkImageData> sself, int axis, int min, int max, const int updateExtent) { sself->GetAxisUpdateExtent(axis, min, max, updateExtent); }
extern "C" void vtk_image_data_set_extent(vtkNew<vtkImageData> sself, int extent) { sself->SetExtent(extent); }
extern "C" void vtk_image_data_set_extent(vtkNew<vtkImageData> sself, int x1, int x2, int y1, int y2, int z1, int z2) { sself->SetExtent(x1, x2, y1, y2, z1, z2); }
extern "C" int* vtk_image_data_get_extent(vtkNew<vtkImageData> sself) { return sself->GetExtent(); }
extern "C" void vtk_image_data_get_extent(vtkNew<vtkImageData> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->GetExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_image_data_get_extent(vtkNew<vtkImageData> sself, int _arg) { sself->GetExtent(_arg); }
extern "C" double vtk_image_data_get_scalar_type_min(vtkNew<vtkImageData> sself) { return sself->GetScalarTypeMin(); }
extern "C" double vtk_image_data_get_scalar_type_max(vtkNew<vtkImageData> sself) { return sself->GetScalarTypeMax(); }
extern "C" int vtk_image_data_get_scalar_size(vtkNew<vtkImageData> sself) { return sself->GetScalarSize(); }
extern "C" long long* vtk_image_data_get_increments(vtkNew<vtkImageData> sself) { return sself->GetIncrements(); }
extern "C" void vtk_image_data_get_increments(vtkNew<vtkImageData> sself, long long incX, long long incY, long long incZ) { sself->GetIncrements(incX, incY, incZ); }
extern "C" void vtk_image_data_get_increments(vtkNew<vtkImageData> sself, long long inc) { sself->GetIncrements(inc); }
extern "C" void vtk_image_data_get_continuous_increments(vtkNew<vtkImageData> sself, int extent, long long incX, long long incY, long long incZ) { sself->GetContinuousIncrements(extent, incX, incY, incZ); }
extern "C" void* vtk_image_data_get_scalar_pointer_for_extent(vtkNew<vtkImageData> sself, int extent) { return sself->GetScalarPointerForExtent(extent); }
extern "C" void* vtk_image_data_get_scalar_pointer(vtkNew<vtkImageData> sself, int coordinates) { return sself->GetScalarPointer(coordinates); }
extern "C" void* vtk_image_data_get_scalar_pointer(vtkNew<vtkImageData> sself, int x, int y, int z) { return sself->GetScalarPointer(x, y, z); }
extern "C" void* vtk_image_data_get_scalar_pointer(vtkNew<vtkImageData> sself) { return sself->GetScalarPointer(); }
extern "C" long long vtk_image_data_get_scalar_index_for_extent(vtkNew<vtkImageData> sself, int extent) { return sself->GetScalarIndexForExtent(extent); }
extern "C" long long vtk_image_data_get_scalar_index(vtkNew<vtkImageData> sself, int coordinates) { return sself->GetScalarIndex(coordinates); }
extern "C" long long vtk_image_data_get_scalar_index(vtkNew<vtkImageData> sself, int x, int y, int z) { return sself->GetScalarIndex(x, y, z); }
extern "C" float vtk_image_data_get_scalar_component_as_float(vtkNew<vtkImageData> sself, int x, int y, int z, int component) { return sself->GetScalarComponentAsFloat(x, y, z, component); }
extern "C" void vtk_image_data_set_scalar_component_from_float(vtkNew<vtkImageData> sself, int x, int y, int z, int component, float v) { sself->SetScalarComponentFromFloat(x, y, z, component, v); }
extern "C" double vtk_image_data_get_scalar_component_as_double(vtkNew<vtkImageData> sself, int x, int y, int z, int component) { return sself->GetScalarComponentAsDouble(x, y, z, component); }
extern "C" void vtk_image_data_set_scalar_component_from_double(vtkNew<vtkImageData> sself, int x, int y, int z, int component, double v) { sself->SetScalarComponentFromDouble(x, y, z, component, v); }
extern "C" void vtk_image_data_allocate_scalars(vtkNew<vtkImageData> sself, int dataType, int numComponents) { sself->AllocateScalars(dataType, numComponents); }
extern "C" void vtk_image_data_crop(vtkNew<vtkImageData> sself, const int updateExtent) { sself->Crop(updateExtent); }
extern "C" double* vtk_image_data_get_spacing(vtkNew<vtkImageData> sself) { return sself->GetSpacing(); }
extern "C" void vtk_image_data_get_spacing(vtkNew<vtkImageData> sself, double _arg1, double _arg2, double _arg3) { sself->GetSpacing(_arg1, _arg2, _arg3); }
extern "C" void vtk_image_data_get_spacing(vtkNew<vtkImageData> sself, double _arg) { sself->GetSpacing(_arg); }
extern "C" void vtk_image_data_set_spacing(vtkNew<vtkImageData> sself, double i, double j, double k) { sself->SetSpacing(i, j, k); }
extern "C" void vtk_image_data_set_spacing(vtkNew<vtkImageData> sself, const double ijk) { sself->SetSpacing(ijk); }
extern "C" double* vtk_image_data_get_origin(vtkNew<vtkImageData> sself) { return sself->GetOrigin(); }
extern "C" void vtk_image_data_get_origin(vtkNew<vtkImageData> sself, double _arg1, double _arg2, double _arg3) { sself->GetOrigin(_arg1, _arg2, _arg3); }
extern "C" void vtk_image_data_get_origin(vtkNew<vtkImageData> sself, double _arg) { sself->GetOrigin(_arg); }
extern "C" void vtk_image_data_set_origin(vtkNew<vtkImageData> sself, double i, double j, double k) { sself->SetOrigin(i, j, k); }
extern "C" void vtk_image_data_set_origin(vtkNew<vtkImageData> sself, const double ijk) { sself->SetOrigin(ijk); }
extern "C" void vtk_image_data_set_direction_matrix(vtkNew<vtkImageData> sself, const double elements) { sself->SetDirectionMatrix(elements); }
extern "C" void vtk_image_data_set_direction_matrix(vtkNew<vtkImageData> sself, double e00, double e01, double e02, double e10, double e11, double e12, double e20, double e21, double e22) { sself->SetDirectionMatrix(e00, e01, e02, e10, e11, e12, e20, e21, e22); }
extern "C" void vtk_image_data_transform_continuous_index_to_physical_point(vtkNew<vtkImageData> sself, double i, double j, double k, double xyz) { sself->TransformContinuousIndexToPhysicalPoint(i, j, k, xyz); }
extern "C" void vtk_image_data_transform_continuous_index_to_physical_point(vtkNew<vtkImageData> sself, const double ijk, double xyz) { sself->TransformContinuousIndexToPhysicalPoint(ijk, xyz); }
extern "C" void vtk_image_data_transform_index_to_physical_point(vtkNew<vtkImageData> sself, int i, int j, int k, double xyz) { sself->TransformIndexToPhysicalPoint(i, j, k, xyz); }
extern "C" void vtk_image_data_transform_index_to_physical_point(vtkNew<vtkImageData> sself, const int ijk, double xyz) { sself->TransformIndexToPhysicalPoint(ijk, xyz); }
extern "C" void vtk_image_data_transform_continuous_index_to_physical_point(vtkNew<vtkImageData> sself, double i, double j, double k, const double origin, const double spacing, const double direction, double xyz) { sself->TransformContinuousIndexToPhysicalPoint(i, j, k, origin, spacing, direction, xyz); }
extern "C" void vtk_image_data_transform_physical_point_to_continuous_index(vtkNew<vtkImageData> sself, double x, double y, double z, double ijk) { sself->TransformPhysicalPointToContinuousIndex(x, y, z, ijk); }
extern "C" void vtk_image_data_transform_physical_point_to_continuous_index(vtkNew<vtkImageData> sself, const double xyz, double ijk) { sself->TransformPhysicalPointToContinuousIndex(xyz, ijk); }
extern "C" void vtk_image_data_compute_index_to_physical_matrix(vtkNew<vtkImageData> sself, const double origin, const double spacing, const double direction, double result) { sself->ComputeIndexToPhysicalMatrix(origin, spacing, direction, result); }
extern "C" void vtk_image_data_transform_physical_normal_to_continuous_index(vtkNew<vtkImageData> sself, const double xyz, double ijk) { sself->TransformPhysicalNormalToContinuousIndex(xyz, ijk); }
extern "C" void vtk_image_data_transform_physical_plane_to_continuous_index(vtkNew<vtkImageData> sself, const double pplane, double iplane) { sself->TransformPhysicalPlaneToContinuousIndex(pplane, iplane); }
extern "C" int vtk_image_data_get_scalar_type(vtkNew<vtkImageData> sself) { return sself->GetScalarType(); }
extern "C" const char* vtk_image_data_get_scalar_type_as_string(vtkNew<vtkImageData> sself) { return sself->GetScalarTypeAsString(); }
extern "C" int vtk_image_data_get_number_of_scalar_components(vtkNew<vtkImageData> sself) { return sself->GetNumberOfScalarComponents(); }
extern "C" void vtk_image_data_prepare_for_new_data(vtkNew<vtkImageData> sself) { sself->PrepareForNewData(); }
extern "C" void vtk_image_data_compute_internal_extent(vtkNew<vtkImageData> sself, int intExt, int tgtExt, int bnds) { sself->ComputeInternalExtent(intExt, tgtExt, bnds); }
extern "C" int vtk_image_data_get_extent_type(vtkNew<vtkImageData> sself) { return sself->GetExtentType(); }
extern "C" vtkNew < vtkImageTransform > vtkImageTransform_new () {return vtkNew < vtkImageTransform > () ;}
extern "C" void vtkImageTransform_destructor (vtkNew < vtkImageTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImageTransform_get_ptr (vtkNew < vtkImageTransform > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkImplicitBoolean > vtkImplicitBoolean_new () {return vtkNew < vtkImplicitBoolean > () ;}
extern "C" void vtkImplicitBoolean_destructor (vtkNew < vtkImplicitBoolean > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImplicitBoolean_get_ptr (vtkNew < vtkImplicitBoolean > sself) {return sself . GetPointer () ;}
extern "C" double vtk_implicit_boolean_evaluate_function(vtkNew<vtkImplicitBoolean> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_implicit_boolean_evaluate_gradient(vtkNew<vtkImplicitBoolean> sself, double x, double g) { sself->EvaluateGradient(x, g); }
extern "C" unsigned long vtk_implicit_boolean_get_m_time(vtkNew<vtkImplicitBoolean> sself) { return sself->GetMTime(); }
extern "C" void vtk_implicit_boolean_set_operation_type(vtkNew<vtkImplicitBoolean> sself, int _arg) { sself->SetOperationType(_arg); }
extern "C" int vtk_implicit_boolean_get_operation_type_min_value(vtkNew<vtkImplicitBoolean> sself) { return sself->GetOperationTypeMinValue(); }
extern "C" int vtk_implicit_boolean_get_operation_type_max_value(vtkNew<vtkImplicitBoolean> sself) { return sself->GetOperationTypeMaxValue(); }
extern "C" int vtk_implicit_boolean_get_operation_type(vtkNew<vtkImplicitBoolean> sself) { return sself->GetOperationType(); }
extern "C" void vtk_implicit_boolean_set_operation_type_to_union(vtkNew<vtkImplicitBoolean> sself) { sself->SetOperationTypeToUnion(); }
extern "C" void vtk_implicit_boolean_set_operation_type_to_intersection(vtkNew<vtkImplicitBoolean> sself) { sself->SetOperationTypeToIntersection(); }
extern "C" void vtk_implicit_boolean_set_operation_type_to_difference(vtkNew<vtkImplicitBoolean> sself) { sself->SetOperationTypeToDifference(); }
extern "C" void vtk_implicit_boolean_set_operation_type_to_union_of_magnitudes(vtkNew<vtkImplicitBoolean> sself) { sself->SetOperationTypeToUnionOfMagnitudes(); }
extern "C" const char* vtk_implicit_boolean_get_operation_type_as_string(vtkNew<vtkImplicitBoolean> sself) { return sself->GetOperationTypeAsString(); }
extern "C" vtkNew < vtkImplicitDataSet > vtkImplicitDataSet_new () {return vtkNew < vtkImplicitDataSet > () ;}
extern "C" void vtkImplicitDataSet_destructor (vtkNew < vtkImplicitDataSet > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImplicitDataSet_get_ptr (vtkNew < vtkImplicitDataSet > sself) {return sself . GetPointer () ;}
extern "C" unsigned long vtk_implicit_data_set_get_m_time(vtkNew<vtkImplicitDataSet> sself) { return sself->GetMTime(); }
extern "C" double vtk_implicit_data_set_evaluate_function(vtkNew<vtkImplicitDataSet> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_implicit_data_set_evaluate_gradient(vtkNew<vtkImplicitDataSet> sself, double x, double n) { sself->EvaluateGradient(x, n); }
extern "C" void vtk_implicit_data_set_set_out_value(vtkNew<vtkImplicitDataSet> sself, double _arg) { sself->SetOutValue(_arg); }
extern "C" double vtk_implicit_data_set_get_out_value(vtkNew<vtkImplicitDataSet> sself) { return sself->GetOutValue(); }
extern "C" void vtk_implicit_data_set_set_out_gradient(vtkNew<vtkImplicitDataSet> sself, double _arg1, double _arg2, double _arg3) { sself->SetOutGradient(_arg1, _arg2, _arg3); }
extern "C" void vtk_implicit_data_set_set_out_gradient(vtkNew<vtkImplicitDataSet> sself, const double _arg) { sself->SetOutGradient(_arg); }
extern "C" double* vtk_implicit_data_set_get_out_gradient(vtkNew<vtkImplicitDataSet> sself) { return sself->GetOutGradient(); }
extern "C" void vtk_implicit_data_set_get_out_gradient(vtkNew<vtkImplicitDataSet> sself, double _arg1, double _arg2, double _arg3) { sself->GetOutGradient(_arg1, _arg2, _arg3); }
extern "C" void vtk_implicit_data_set_get_out_gradient(vtkNew<vtkImplicitDataSet> sself, double _arg) { sself->GetOutGradient(_arg); }
extern "C" vtkNew < vtkImplicitFunctionCollection > vtkImplicitFunctionCollection_new () {return vtkNew < vtkImplicitFunctionCollection > () ;}
extern "C" void vtkImplicitFunctionCollection_destructor (vtkNew < vtkImplicitFunctionCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImplicitFunctionCollection_get_ptr (vtkNew < vtkImplicitFunctionCollection > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkImplicitHalo > vtkImplicitHalo_new () {return vtkNew < vtkImplicitHalo > () ;}
extern "C" void vtkImplicitHalo_destructor (vtkNew < vtkImplicitHalo > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImplicitHalo_get_ptr (vtkNew < vtkImplicitHalo > sself) {return sself . GetPointer () ;}
extern "C" double vtk_implicit_halo_evaluate_function(vtkNew<vtkImplicitHalo> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_implicit_halo_evaluate_gradient(vtkNew<vtkImplicitHalo> sself, double x, double g) { sself->EvaluateGradient(x, g); }
extern "C" void vtk_implicit_halo_set_radius(vtkNew<vtkImplicitHalo> sself, double _arg) { sself->SetRadius(_arg); }
extern "C" double vtk_implicit_halo_get_radius(vtkNew<vtkImplicitHalo> sself) { return sself->GetRadius(); }
extern "C" void vtk_implicit_halo_set_center(vtkNew<vtkImplicitHalo> sself, double _arg1, double _arg2, double _arg3) { sself->SetCenter(_arg1, _arg2, _arg3); }
extern "C" void vtk_implicit_halo_set_center(vtkNew<vtkImplicitHalo> sself, const double _arg) { sself->SetCenter(_arg); }
extern "C" double* vtk_implicit_halo_get_center(vtkNew<vtkImplicitHalo> sself) { return sself->GetCenter(); }
extern "C" void vtk_implicit_halo_get_center(vtkNew<vtkImplicitHalo> sself, double _arg1, double _arg2, double _arg3) { sself->GetCenter(_arg1, _arg2, _arg3); }
extern "C" void vtk_implicit_halo_get_center(vtkNew<vtkImplicitHalo> sself, double _arg) { sself->GetCenter(_arg); }
extern "C" void vtk_implicit_halo_set_fade_out(vtkNew<vtkImplicitHalo> sself, double _arg) { sself->SetFadeOut(_arg); }
extern "C" double vtk_implicit_halo_get_fade_out(vtkNew<vtkImplicitHalo> sself) { return sself->GetFadeOut(); }
extern "C" vtkNew < vtkImplicitSelectionLoop > vtkImplicitSelectionLoop_new () {return vtkNew < vtkImplicitSelectionLoop > () ;}
extern "C" void vtkImplicitSelectionLoop_destructor (vtkNew < vtkImplicitSelectionLoop > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImplicitSelectionLoop_get_ptr (vtkNew < vtkImplicitSelectionLoop > sself) {return sself . GetPointer () ;}
extern "C" double vtk_implicit_selection_loop_evaluate_function(vtkNew<vtkImplicitSelectionLoop> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_implicit_selection_loop_evaluate_gradient(vtkNew<vtkImplicitSelectionLoop> sself, double x, double n) { sself->EvaluateGradient(x, n); }
extern "C" void vtk_implicit_selection_loop_set_automatic_normal_generation(vtkNew<vtkImplicitSelectionLoop> sself, int _arg) { sself->SetAutomaticNormalGeneration(_arg); }
extern "C" int vtk_implicit_selection_loop_get_automatic_normal_generation(vtkNew<vtkImplicitSelectionLoop> sself) { return sself->GetAutomaticNormalGeneration(); }
extern "C" void vtk_implicit_selection_loop_automatic_normal_generation_on(vtkNew<vtkImplicitSelectionLoop> sself) { sself->AutomaticNormalGenerationOn(); }
extern "C" void vtk_implicit_selection_loop_automatic_normal_generation_off(vtkNew<vtkImplicitSelectionLoop> sself) { sself->AutomaticNormalGenerationOff(); }
extern "C" void vtk_implicit_selection_loop_set_normal(vtkNew<vtkImplicitSelectionLoop> sself, double _arg1, double _arg2, double _arg3) { sself->SetNormal(_arg1, _arg2, _arg3); }
extern "C" void vtk_implicit_selection_loop_set_normal(vtkNew<vtkImplicitSelectionLoop> sself, const double _arg) { sself->SetNormal(_arg); }
extern "C" double* vtk_implicit_selection_loop_get_normal(vtkNew<vtkImplicitSelectionLoop> sself) { return sself->GetNormal(); }
extern "C" void vtk_implicit_selection_loop_get_normal(vtkNew<vtkImplicitSelectionLoop> sself, double data) { sself->GetNormal(data); }
extern "C" unsigned long vtk_implicit_selection_loop_get_m_time(vtkNew<vtkImplicitSelectionLoop> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkImplicitSum > vtkImplicitSum_new () {return vtkNew < vtkImplicitSum > () ;}
extern "C" void vtkImplicitSum_destructor (vtkNew < vtkImplicitSum > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImplicitSum_get_ptr (vtkNew < vtkImplicitSum > sself) {return sself . GetPointer () ;}
extern "C" double vtk_implicit_sum_evaluate_function(vtkNew<vtkImplicitSum> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_implicit_sum_evaluate_gradient(vtkNew<vtkImplicitSum> sself, double x, double g) { sself->EvaluateGradient(x, g); }
extern "C" unsigned long vtk_implicit_sum_get_m_time(vtkNew<vtkImplicitSum> sself) { return sself->GetMTime(); }
extern "C" void vtk_implicit_sum_remove_all_functions(vtkNew<vtkImplicitSum> sself) { sself->RemoveAllFunctions(); }
extern "C" void vtk_implicit_sum_set_normalize_by_weight(vtkNew<vtkImplicitSum> sself, int _arg) { sself->SetNormalizeByWeight(_arg); }
extern "C" int vtk_implicit_sum_get_normalize_by_weight(vtkNew<vtkImplicitSum> sself) { return sself->GetNormalizeByWeight(); }
extern "C" void vtk_implicit_sum_normalize_by_weight_on(vtkNew<vtkImplicitSum> sself) { sself->NormalizeByWeightOn(); }
extern "C" void vtk_implicit_sum_normalize_by_weight_off(vtkNew<vtkImplicitSum> sself) { sself->NormalizeByWeightOff(); }
extern "C" vtkNew < vtkImplicitVolume > vtkImplicitVolume_new () {return vtkNew < vtkImplicitVolume > () ;}
extern "C" void vtkImplicitVolume_destructor (vtkNew < vtkImplicitVolume > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImplicitVolume_get_ptr (vtkNew < vtkImplicitVolume > sself) {return sself . GetPointer () ;}
extern "C" unsigned long vtk_implicit_volume_get_m_time(vtkNew<vtkImplicitVolume> sself) { return sself->GetMTime(); }
extern "C" double vtk_implicit_volume_evaluate_function(vtkNew<vtkImplicitVolume> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_implicit_volume_evaluate_gradient(vtkNew<vtkImplicitVolume> sself, double x, double n) { sself->EvaluateGradient(x, n); }
extern "C" void vtk_implicit_volume_set_out_value(vtkNew<vtkImplicitVolume> sself, double _arg) { sself->SetOutValue(_arg); }
extern "C" double vtk_implicit_volume_get_out_value(vtkNew<vtkImplicitVolume> sself) { return sself->GetOutValue(); }
extern "C" void vtk_implicit_volume_set_out_gradient(vtkNew<vtkImplicitVolume> sself, double _arg1, double _arg2, double _arg3) { sself->SetOutGradient(_arg1, _arg2, _arg3); }
extern "C" void vtk_implicit_volume_set_out_gradient(vtkNew<vtkImplicitVolume> sself, const double _arg) { sself->SetOutGradient(_arg); }
extern "C" double* vtk_implicit_volume_get_out_gradient(vtkNew<vtkImplicitVolume> sself) { return sself->GetOutGradient(); }
extern "C" void vtk_implicit_volume_get_out_gradient(vtkNew<vtkImplicitVolume> sself, double _arg1, double _arg2, double _arg3) { sself->GetOutGradient(_arg1, _arg2, _arg3); }
extern "C" void vtk_implicit_volume_get_out_gradient(vtkNew<vtkImplicitVolume> sself, double _arg) { sself->GetOutGradient(_arg); }
extern "C" vtkNew < vtkImplicitWindowFunction > vtkImplicitWindowFunction_new () {return vtkNew < vtkImplicitWindowFunction > () ;}
extern "C" void vtkImplicitWindowFunction_destructor (vtkNew < vtkImplicitWindowFunction > sself) {sself . Reset () ; return ;}
extern "C" void * vtkImplicitWindowFunction_get_ptr (vtkNew < vtkImplicitWindowFunction > sself) {return sself . GetPointer () ;}
extern "C" double vtk_implicit_window_function_evaluate_function(vtkNew<vtkImplicitWindowFunction> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_implicit_window_function_evaluate_gradient(vtkNew<vtkImplicitWindowFunction> sself, double x, double n) { sself->EvaluateGradient(x, n); }
extern "C" void vtk_implicit_window_function_set_window_range(vtkNew<vtkImplicitWindowFunction> sself, double _arg1, double _arg2) { sself->SetWindowRange(_arg1, _arg2); }
extern "C" void vtk_implicit_window_function_set_window_range(vtkNew<vtkImplicitWindowFunction> sself, const double _arg) { sself->SetWindowRange(_arg); }
extern "C" double* vtk_implicit_window_function_get_window_range(vtkNew<vtkImplicitWindowFunction> sself) { return sself->GetWindowRange(); }
extern "C" void vtk_implicit_window_function_get_window_range(vtkNew<vtkImplicitWindowFunction> sself, double data) { sself->GetWindowRange(data); }
extern "C" void vtk_implicit_window_function_set_window_values(vtkNew<vtkImplicitWindowFunction> sself, double _arg1, double _arg2) { sself->SetWindowValues(_arg1, _arg2); }
extern "C" void vtk_implicit_window_function_set_window_values(vtkNew<vtkImplicitWindowFunction> sself, const double _arg) { sself->SetWindowValues(_arg); }
extern "C" double* vtk_implicit_window_function_get_window_values(vtkNew<vtkImplicitWindowFunction> sself) { return sself->GetWindowValues(); }
extern "C" void vtk_implicit_window_function_get_window_values(vtkNew<vtkImplicitWindowFunction> sself, double data) { sself->GetWindowValues(data); }
extern "C" unsigned long vtk_implicit_window_function_get_m_time(vtkNew<vtkImplicitWindowFunction> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkInEdgeIterator > vtkInEdgeIterator_new () {return vtkNew < vtkInEdgeIterator > () ;}
extern "C" void vtkInEdgeIterator_destructor (vtkNew < vtkInEdgeIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkInEdgeIterator_get_ptr (vtkNew < vtkInEdgeIterator > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_in_edge_iterator_get_vertex(vtkNew<vtkInEdgeIterator> sself) { return sself->GetVertex(); }
extern "C" bool vtk_in_edge_iterator_has_next(vtkNew<vtkInEdgeIterator> sself) { return sself->HasNext(); }
extern "C" vtkNew < vtkIncrementalOctreeNode > vtkIncrementalOctreeNode_new () {return vtkNew < vtkIncrementalOctreeNode > () ;}
extern "C" void vtkIncrementalOctreeNode_destructor (vtkNew < vtkIncrementalOctreeNode > sself) {sself . Reset () ; return ;}
extern "C" void * vtkIncrementalOctreeNode_get_ptr (vtkNew < vtkIncrementalOctreeNode > sself) {return sself . GetPointer () ;}
extern "C" int vtk_incremental_octree_node_get_number_of_points(vtkNew<vtkIncrementalOctreeNode> sself) { return sself->GetNumberOfPoints(); }
extern "C" void vtk_incremental_octree_node_delete_child_nodes(vtkNew<vtkIncrementalOctreeNode> sself) { sself->DeleteChildNodes(); }
extern "C" void vtk_incremental_octree_node_set_bounds(vtkNew<vtkIncrementalOctreeNode> sself, double x1, double x2, double y1, double y2, double z1, double z2) { sself->SetBounds(x1, x2, y1, y2, z1, z2); }
extern "C" void vtk_incremental_octree_node_get_bounds(vtkNew<vtkIncrementalOctreeNode> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" double* vtk_incremental_octree_node_get_min_bounds(vtkNew<vtkIncrementalOctreeNode> sself) { return sself->GetMinBounds(); }
extern "C" void vtk_incremental_octree_node_get_min_bounds(vtkNew<vtkIncrementalOctreeNode> sself, double _arg1, double _arg2, double _arg3) { sself->GetMinBounds(_arg1, _arg2, _arg3); }
extern "C" void vtk_incremental_octree_node_get_min_bounds(vtkNew<vtkIncrementalOctreeNode> sself, double _arg) { sself->GetMinBounds(_arg); }
extern "C" double* vtk_incremental_octree_node_get_max_bounds(vtkNew<vtkIncrementalOctreeNode> sself) { return sself->GetMaxBounds(); }
extern "C" void vtk_incremental_octree_node_get_max_bounds(vtkNew<vtkIncrementalOctreeNode> sself, double _arg1, double _arg2, double _arg3) { sself->GetMaxBounds(_arg1, _arg2, _arg3); }
extern "C" void vtk_incremental_octree_node_get_max_bounds(vtkNew<vtkIncrementalOctreeNode> sself, double _arg) { sself->GetMaxBounds(_arg); }
extern "C" double* vtk_incremental_octree_node_get_min_data_bounds(vtkNew<vtkIncrementalOctreeNode> sself) { return sself->GetMinDataBounds(); }
extern "C" double* vtk_incremental_octree_node_get_max_data_bounds(vtkNew<vtkIncrementalOctreeNode> sself) { return sself->GetMaxDataBounds(); }
extern "C" int vtk_incremental_octree_node_is_leaf(vtkNew<vtkIncrementalOctreeNode> sself) { return sself->IsLeaf(); }
extern "C" int vtk_incremental_octree_node_get_child_index(vtkNew<vtkIncrementalOctreeNode> sself, const double point) { return sself->GetChildIndex(point); }
extern "C" int vtk_incremental_octree_node_contains_point(vtkNew<vtkIncrementalOctreeNode> sself, const double pnt) { return sself->ContainsPoint(pnt); }
extern "C" int vtk_incremental_octree_node_contains_point_by_data(vtkNew<vtkIncrementalOctreeNode> sself, const double pnt) { return sself->ContainsPointByData(pnt); }
extern "C" int vtk_incremental_octree_node_get_number_of_levels(vtkNew<vtkIncrementalOctreeNode> sself) { return sself->GetNumberOfLevels(); }
extern "C" int vtk_incremental_octree_node_get_id(vtkNew<vtkIncrementalOctreeNode> sself) { return sself->GetID(); }
extern "C" vtkNew < vtkIncrementalOctreePointLocator > vtkIncrementalOctreePointLocator_new () {return vtkNew < vtkIncrementalOctreePointLocator > () ;}
extern "C" void vtkIncrementalOctreePointLocator_destructor (vtkNew < vtkIncrementalOctreePointLocator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkIncrementalOctreePointLocator_get_ptr (vtkNew < vtkIncrementalOctreePointLocator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_incremental_octree_point_locator_set_max_points_per_leaf(vtkNew<vtkIncrementalOctreePointLocator> sself, int _arg) { sself->SetMaxPointsPerLeaf(_arg); }
extern "C" int vtk_incremental_octree_point_locator_get_max_points_per_leaf_min_value(vtkNew<vtkIncrementalOctreePointLocator> sself) { return sself->GetMaxPointsPerLeafMinValue(); }
extern "C" int vtk_incremental_octree_point_locator_get_max_points_per_leaf_max_value(vtkNew<vtkIncrementalOctreePointLocator> sself) { return sself->GetMaxPointsPerLeafMaxValue(); }
extern "C" int vtk_incremental_octree_point_locator_get_max_points_per_leaf(vtkNew<vtkIncrementalOctreePointLocator> sself) { return sself->GetMaxPointsPerLeaf(); }
extern "C" void vtk_incremental_octree_point_locator_set_build_cubic_octree(vtkNew<vtkIncrementalOctreePointLocator> sself, int _arg) { sself->SetBuildCubicOctree(_arg); }
extern "C" int vtk_incremental_octree_point_locator_get_build_cubic_octree(vtkNew<vtkIncrementalOctreePointLocator> sself) { return sself->GetBuildCubicOctree(); }
extern "C" void vtk_incremental_octree_point_locator_build_cubic_octree_on(vtkNew<vtkIncrementalOctreePointLocator> sself) { sself->BuildCubicOctreeOn(); }
extern "C" void vtk_incremental_octree_point_locator_build_cubic_octree_off(vtkNew<vtkIncrementalOctreePointLocator> sself) { sself->BuildCubicOctreeOff(); }
extern "C" void vtk_incremental_octree_point_locator_initialize(vtkNew<vtkIncrementalOctreePointLocator> sself) { sself->Initialize(); }
extern "C" void vtk_incremental_octree_point_locator_free_search_structure(vtkNew<vtkIncrementalOctreePointLocator> sself) { sself->FreeSearchStructure(); }
extern "C" void vtk_incremental_octree_point_locator_get_bounds(vtkNew<vtkIncrementalOctreePointLocator> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" double* vtk_incremental_octree_point_locator_get_bounds(vtkNew<vtkIncrementalOctreePointLocator> sself) { return sself->GetBounds(); }
extern "C" int vtk_incremental_octree_point_locator_get_number_of_points(vtkNew<vtkIncrementalOctreePointLocator> sself) { return sself->GetNumberOfPoints(); }
extern "C" int vtk_incremental_octree_point_locator_get_number_of_nodes(vtkNew<vtkIncrementalOctreePointLocator> sself) { return sself->GetNumberOfNodes(); }
extern "C" long long vtk_incremental_octree_point_locator_find_closest_inserted_point(vtkNew<vtkIncrementalOctreePointLocator> sself, const double x) { return sself->FindClosestInsertedPoint(x); }
extern "C" void vtk_incremental_octree_point_locator_build_locator(vtkNew<vtkIncrementalOctreePointLocator> sself) { sself->BuildLocator(); }
extern "C" long long vtk_incremental_octree_point_locator_find_closest_point(vtkNew<vtkIncrementalOctreePointLocator> sself, const double x) { return sself->FindClosestPoint(x); }
extern "C" long long vtk_incremental_octree_point_locator_find_closest_point(vtkNew<vtkIncrementalOctreePointLocator> sself, double x, double y, double z) { return sself->FindClosestPoint(x, y, z); }
extern "C" long long vtk_incremental_octree_point_locator_find_closest_point(vtkNew<vtkIncrementalOctreePointLocator> sself, const double x, double miniDist2) { return sself->FindClosestPoint(x, miniDist2); }
extern "C" long long vtk_incremental_octree_point_locator_find_closest_point(vtkNew<vtkIncrementalOctreePointLocator> sself, double x, double y, double z, double miniDist2) { return sself->FindClosestPoint(x, y, z, miniDist2); }
extern "C" long long vtk_incremental_octree_point_locator_find_closest_point_within_radius(vtkNew<vtkIncrementalOctreePointLocator> sself, double radius, const double x, double dist2) { return sself->FindClosestPointWithinRadius(radius, x, dist2); }
extern "C" long long vtk_incremental_octree_point_locator_find_closest_point_within_squared_radius(vtkNew<vtkIncrementalOctreePointLocator> sself, double radius2, const double x, double dist2) { return sself->FindClosestPointWithinSquaredRadius(radius2, x, dist2); }
extern "C" long long vtk_incremental_octree_point_locator_is_inserted_point(vtkNew<vtkIncrementalOctreePointLocator> sself, const double x) { return sself->IsInsertedPoint(x); }
extern "C" long long vtk_incremental_octree_point_locator_is_inserted_point(vtkNew<vtkIncrementalOctreePointLocator> sself, double x, double y, double z) { return sself->IsInsertedPoint(x, y, z); }
extern "C" int vtk_incremental_octree_point_locator_insert_unique_point(vtkNew<vtkIncrementalOctreePointLocator> sself, const double point, long long pntId) { return sself->InsertUniquePoint(point, pntId); }
extern "C" void vtk_incremental_octree_point_locator_insert_point(vtkNew<vtkIncrementalOctreePointLocator> sself, long long ptId, const double x) { sself->InsertPoint(ptId, x); }
extern "C" long long vtk_incremental_octree_point_locator_insert_next_point(vtkNew<vtkIncrementalOctreePointLocator> sself, const double x) { return sself->InsertNextPoint(x); }
extern "C" void vtk_incremental_octree_point_locator_insert_point_without_checking(vtkNew<vtkIncrementalOctreePointLocator> sself, const double point, long long pntId, int insert) { sself->InsertPointWithoutChecking(point, pntId, insert); }
extern "C" int vtk_incremental_octree_point_locator_get_number_of_levels(vtkNew<vtkIncrementalOctreePointLocator> sself) { return sself->GetNumberOfLevels(); }
extern "C" vtkNew < vtkIterativeClosestPointTransform > vtkIterativeClosestPointTransform_new () {return vtkNew < vtkIterativeClosestPointTransform > () ;}
extern "C" void vtkIterativeClosestPointTransform_destructor (vtkNew < vtkIterativeClosestPointTransform > sself) {sself . Reset () ; return ;}
extern "C" void * vtkIterativeClosestPointTransform_get_ptr (vtkNew < vtkIterativeClosestPointTransform > sself) {return sself . GetPointer () ;}
extern "C" void vtk_iterative_closest_point_transform_set_maximum_number_of_iterations(vtkNew<vtkIterativeClosestPointTransform> sself, int _arg) { sself->SetMaximumNumberOfIterations(_arg); }
extern "C" int vtk_iterative_closest_point_transform_get_maximum_number_of_iterations(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetMaximumNumberOfIterations(); }
extern "C" int vtk_iterative_closest_point_transform_get_number_of_iterations(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetNumberOfIterations(); }
extern "C" void vtk_iterative_closest_point_transform_set_check_mean_distance(vtkNew<vtkIterativeClosestPointTransform> sself, int _arg) { sself->SetCheckMeanDistance(_arg); }
extern "C" int vtk_iterative_closest_point_transform_get_check_mean_distance(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetCheckMeanDistance(); }
extern "C" void vtk_iterative_closest_point_transform_check_mean_distance_on(vtkNew<vtkIterativeClosestPointTransform> sself) { sself->CheckMeanDistanceOn(); }
extern "C" void vtk_iterative_closest_point_transform_check_mean_distance_off(vtkNew<vtkIterativeClosestPointTransform> sself) { sself->CheckMeanDistanceOff(); }
extern "C" void vtk_iterative_closest_point_transform_set_mean_distance_mode(vtkNew<vtkIterativeClosestPointTransform> sself, int _arg) { sself->SetMeanDistanceMode(_arg); }
extern "C" int vtk_iterative_closest_point_transform_get_mean_distance_mode_min_value(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetMeanDistanceModeMinValue(); }
extern "C" int vtk_iterative_closest_point_transform_get_mean_distance_mode_max_value(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetMeanDistanceModeMaxValue(); }
extern "C" int vtk_iterative_closest_point_transform_get_mean_distance_mode(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetMeanDistanceMode(); }
extern "C" void vtk_iterative_closest_point_transform_set_mean_distance_mode_to_rms(vtkNew<vtkIterativeClosestPointTransform> sself) { sself->SetMeanDistanceModeToRMS(); }
extern "C" void vtk_iterative_closest_point_transform_set_mean_distance_mode_to_absolute_value(vtkNew<vtkIterativeClosestPointTransform> sself) { sself->SetMeanDistanceModeToAbsoluteValue(); }
extern "C" const char* vtk_iterative_closest_point_transform_get_mean_distance_mode_as_string(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetMeanDistanceModeAsString(); }
extern "C" void vtk_iterative_closest_point_transform_set_maximum_mean_distance(vtkNew<vtkIterativeClosestPointTransform> sself, double _arg) { sself->SetMaximumMeanDistance(_arg); }
extern "C" double vtk_iterative_closest_point_transform_get_maximum_mean_distance(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetMaximumMeanDistance(); }
extern "C" double vtk_iterative_closest_point_transform_get_mean_distance(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetMeanDistance(); }
extern "C" void vtk_iterative_closest_point_transform_set_maximum_number_of_landmarks(vtkNew<vtkIterativeClosestPointTransform> sself, int _arg) { sself->SetMaximumNumberOfLandmarks(_arg); }
extern "C" int vtk_iterative_closest_point_transform_get_maximum_number_of_landmarks(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetMaximumNumberOfLandmarks(); }
extern "C" void vtk_iterative_closest_point_transform_set_start_by_matching_centroids(vtkNew<vtkIterativeClosestPointTransform> sself, int _arg) { sself->SetStartByMatchingCentroids(_arg); }
extern "C" int vtk_iterative_closest_point_transform_get_start_by_matching_centroids(vtkNew<vtkIterativeClosestPointTransform> sself) { return sself->GetStartByMatchingCentroids(); }
extern "C" void vtk_iterative_closest_point_transform_start_by_matching_centroids_on(vtkNew<vtkIterativeClosestPointTransform> sself) { sself->StartByMatchingCentroidsOn(); }
extern "C" void vtk_iterative_closest_point_transform_start_by_matching_centroids_off(vtkNew<vtkIterativeClosestPointTransform> sself) { sself->StartByMatchingCentroidsOff(); }
extern "C" void vtk_iterative_closest_point_transform_inverse(vtkNew<vtkIterativeClosestPointTransform> sself) { sself->Inverse(); }
extern "C" vtkNew < vtkKdNode > vtkKdNode_new () {return vtkNew < vtkKdNode > () ;}
extern "C" void vtkKdNode_destructor (vtkNew < vtkKdNode > sself) {sself . Reset () ; return ;}
extern "C" void * vtkKdNode_get_ptr (vtkNew < vtkKdNode > sself) {return sself . GetPointer () ;}
extern "C" void vtk_kd_node_set_dim(vtkNew<vtkKdNode> sself, int _arg) { sself->SetDim(_arg); }
extern "C" int vtk_kd_node_get_dim(vtkNew<vtkKdNode> sself) { return sself->GetDim(); }
extern "C" double vtk_kd_node_get_division_position(vtkNew<vtkKdNode> sself) { return sself->GetDivisionPosition(); }
extern "C" void vtk_kd_node_set_number_of_points(vtkNew<vtkKdNode> sself, int _arg) { sself->SetNumberOfPoints(_arg); }
extern "C" int vtk_kd_node_get_number_of_points(vtkNew<vtkKdNode> sself) { return sself->GetNumberOfPoints(); }
extern "C" void vtk_kd_node_set_bounds(vtkNew<vtkKdNode> sself, double x1, double x2, double y1, double y2, double z1, double z2) { sself->SetBounds(x1, x2, y1, y2, z1, z2); }
extern "C" void vtk_kd_node_set_bounds(vtkNew<vtkKdNode> sself, const double b) { sself->SetBounds(b); }
extern "C" void vtk_kd_node_get_bounds(vtkNew<vtkKdNode> sself, double b) { sself->GetBounds(b); }
extern "C" void vtk_kd_node_set_data_bounds(vtkNew<vtkKdNode> sself, double x1, double x2, double y1, double y2, double z1, double z2) { sself->SetDataBounds(x1, x2, y1, y2, z1, z2); }
extern "C" void vtk_kd_node_get_data_bounds(vtkNew<vtkKdNode> sself, double b) { sself->GetDataBounds(b); }
extern "C" void vtk_kd_node_set_data_bounds(vtkNew<vtkKdNode> sself, float v) { sself->SetDataBounds(v); }
extern "C" double* vtk_kd_node_get_min_bounds(vtkNew<vtkKdNode> sself) { return sself->GetMinBounds(); }
extern "C" double* vtk_kd_node_get_max_bounds(vtkNew<vtkKdNode> sself) { return sself->GetMaxBounds(); }
extern "C" void vtk_kd_node_set_min_bounds(vtkNew<vtkKdNode> sself, const double mb) { sself->SetMinBounds(mb); }
extern "C" void vtk_kd_node_set_max_bounds(vtkNew<vtkKdNode> sself, const double mb) { sself->SetMaxBounds(mb); }
extern "C" double* vtk_kd_node_get_min_data_bounds(vtkNew<vtkKdNode> sself) { return sself->GetMinDataBounds(); }
extern "C" double* vtk_kd_node_get_max_data_bounds(vtkNew<vtkKdNode> sself) { return sself->GetMaxDataBounds(); }
extern "C" void vtk_kd_node_set_min_data_bounds(vtkNew<vtkKdNode> sself, const double mb) { sself->SetMinDataBounds(mb); }
extern "C" void vtk_kd_node_set_max_data_bounds(vtkNew<vtkKdNode> sself, const double mb) { sself->SetMaxDataBounds(mb); }
extern "C" void vtk_kd_node_set_id(vtkNew<vtkKdNode> sself, int _arg) { sself->SetID(_arg); }
extern "C" int vtk_kd_node_get_id(vtkNew<vtkKdNode> sself) { return sself->GetID(); }
extern "C" int vtk_kd_node_get_min_id(vtkNew<vtkKdNode> sself) { return sself->GetMinID(); }
extern "C" int vtk_kd_node_get_max_id(vtkNew<vtkKdNode> sself) { return sself->GetMaxID(); }
extern "C" void vtk_kd_node_set_min_id(vtkNew<vtkKdNode> sself, int _arg) { sself->SetMinID(_arg); }
extern "C" void vtk_kd_node_set_max_id(vtkNew<vtkKdNode> sself, int _arg) { sself->SetMaxID(_arg); }
extern "C" void vtk_kd_node_delete_child_nodes(vtkNew<vtkKdNode> sself) { sself->DeleteChildNodes(); }
extern "C" int vtk_kd_node_intersects_box(vtkNew<vtkKdNode> sself, double x1, double x2, double y1, double y2, double z1, double z2, int useDataBounds) { return sself->IntersectsBox(x1, x2, y1, y2, z1, z2, useDataBounds); }
extern "C" int vtk_kd_node_intersects_sphere_2(vtkNew<vtkKdNode> sself, double x, double y, double z, double rSquared, int useDataBounds) { return sself->IntersectsSphere2(x, y, z, rSquared, useDataBounds); }
extern "C" int vtk_kd_node_contains_box(vtkNew<vtkKdNode> sself, double x1, double x2, double y1, double y2, double z1, double z2, int useDataBounds) { return sself->ContainsBox(x1, x2, y1, y2, z1, z2, useDataBounds); }
extern "C" int vtk_kd_node_contains_point(vtkNew<vtkKdNode> sself, double x, double y, double z, int useDataBounds) { return sself->ContainsPoint(x, y, z, useDataBounds); }
extern "C" double vtk_kd_node_get_distance_2_to_boundary(vtkNew<vtkKdNode> sself, double x, double y, double z, int useDataBounds) { return sself->GetDistance2ToBoundary(x, y, z, useDataBounds); }
extern "C" double vtk_kd_node_get_distance_2_to_boundary(vtkNew<vtkKdNode> sself, double x, double y, double z, double boundaryPt, int useDataBounds) { return sself->GetDistance2ToBoundary(x, y, z, boundaryPt, useDataBounds); }
extern "C" double vtk_kd_node_get_distance_2_to_inner_boundary(vtkNew<vtkKdNode> sself, double x, double y, double z) { return sself->GetDistance2ToInnerBoundary(x, y, z); }
extern "C" void vtk_kd_node_print_node(vtkNew<vtkKdNode> sself, int depth) { sself->PrintNode(depth); }
extern "C" void vtk_kd_node_print_verbose_node(vtkNew<vtkKdNode> sself, int depth) { sself->PrintVerboseNode(depth); }
extern "C" vtkNew < vtkKdTree > vtkKdTree_new () {return vtkNew < vtkKdTree > () ;}
extern "C" void vtkKdTree_destructor (vtkNew < vtkKdTree > sself) {sself . Reset () ; return ;}
extern "C" void * vtkKdTree_get_ptr (vtkNew < vtkKdTree > sself) {return sself . GetPointer () ;}
extern "C" void vtk_kd_tree_timing_on(vtkNew<vtkKdTree> sself) { sself->TimingOn(); }
extern "C" void vtk_kd_tree_timing_off(vtkNew<vtkKdTree> sself) { sself->TimingOff(); }
extern "C" void vtk_kd_tree_set_timing(vtkNew<vtkKdTree> sself, int _arg) { sself->SetTiming(_arg); }
extern "C" int vtk_kd_tree_get_timing(vtkNew<vtkKdTree> sself) { return sself->GetTiming(); }
extern "C" void vtk_kd_tree_set_min_cells(vtkNew<vtkKdTree> sself, int _arg) { sself->SetMinCells(_arg); }
extern "C" int vtk_kd_tree_get_min_cells(vtkNew<vtkKdTree> sself) { return sself->GetMinCells(); }
extern "C" int vtk_kd_tree_get_number_of_regions_or_less(vtkNew<vtkKdTree> sself) { return sself->GetNumberOfRegionsOrLess(); }
extern "C" void vtk_kd_tree_set_number_of_regions_or_less(vtkNew<vtkKdTree> sself, int _arg) { sself->SetNumberOfRegionsOrLess(_arg); }
extern "C" int vtk_kd_tree_get_number_of_regions_or_more(vtkNew<vtkKdTree> sself) { return sself->GetNumberOfRegionsOrMore(); }
extern "C" void vtk_kd_tree_set_number_of_regions_or_more(vtkNew<vtkKdTree> sself, int _arg) { sself->SetNumberOfRegionsOrMore(_arg); }
extern "C" double vtk_kd_tree_get_fudge_factor(vtkNew<vtkKdTree> sself) { return sself->GetFudgeFactor(); }
extern "C" void vtk_kd_tree_set_fudge_factor(vtkNew<vtkKdTree> sself, double _arg) { sself->SetFudgeFactor(_arg); }
extern "C" void vtk_kd_tree_omit_x_partitioning(vtkNew<vtkKdTree> sself) { sself->OmitXPartitioning(); }
extern "C" void vtk_kd_tree_omit_y_partitioning(vtkNew<vtkKdTree> sself) { sself->OmitYPartitioning(); }
extern "C" void vtk_kd_tree_omit_z_partitioning(vtkNew<vtkKdTree> sself) { sself->OmitZPartitioning(); }
extern "C" void vtk_kd_tree_omit_xy_partitioning(vtkNew<vtkKdTree> sself) { sself->OmitXYPartitioning(); }
extern "C" void vtk_kd_tree_omit_yz_partitioning(vtkNew<vtkKdTree> sself) { sself->OmitYZPartitioning(); }
extern "C" void vtk_kd_tree_omit_zx_partitioning(vtkNew<vtkKdTree> sself) { sself->OmitZXPartitioning(); }
extern "C" void vtk_kd_tree_omit_no_partitioning(vtkNew<vtkKdTree> sself) { sself->OmitNoPartitioning(); }
extern "C" void vtk_kd_tree_remove_data_set(vtkNew<vtkKdTree> sself, int index) { sself->RemoveDataSet(index); }
extern "C" void vtk_kd_tree_remove_all_data_sets(vtkNew<vtkKdTree> sself) { sself->RemoveAllDataSets(); }
extern "C" int vtk_kd_tree_get_number_of_data_sets(vtkNew<vtkKdTree> sself) { return sself->GetNumberOfDataSets(); }
extern "C" void vtk_kd_tree_get_bounds(vtkNew<vtkKdTree> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" void vtk_kd_tree_set_new_bounds(vtkNew<vtkKdTree> sself, double bounds) { sself->SetNewBounds(bounds); }
extern "C" int vtk_kd_tree_get_number_of_regions(vtkNew<vtkKdTree> sself) { return sself->GetNumberOfRegions(); }
extern "C" void vtk_kd_tree_get_region_bounds(vtkNew<vtkKdTree> sself, int regionID, double bounds) { sself->GetRegionBounds(regionID, bounds); }
extern "C" void vtk_kd_tree_get_region_data_bounds(vtkNew<vtkKdTree> sself, int regionID, double bounds) { sself->GetRegionDataBounds(regionID, bounds); }
extern "C" void vtk_kd_tree_print_tree(vtkNew<vtkKdTree> sself) { sself->PrintTree(); }
extern "C" void vtk_kd_tree_print_verbose_tree(vtkNew<vtkKdTree> sself) { sself->PrintVerboseTree(); }
extern "C" void vtk_kd_tree_print_region(vtkNew<vtkKdTree> sself, int id) { sself->PrintRegion(id); }
extern "C" void vtk_kd_tree_create_cell_lists(vtkNew<vtkKdTree> sself, int dataSetIndex, int regionReqList, int reqListSize) { sself->CreateCellLists(dataSetIndex, regionReqList, reqListSize); }
extern "C" void vtk_kd_tree_create_cell_lists(vtkNew<vtkKdTree> sself, int regionReqList, int listSize) { sself->CreateCellLists(regionReqList, listSize); }
extern "C" void vtk_kd_tree_create_cell_lists(vtkNew<vtkKdTree> sself) { sself->CreateCellLists(); }
extern "C" void vtk_kd_tree_set_include_region_boundary_cells(vtkNew<vtkKdTree> sself, int _arg) { sself->SetIncludeRegionBoundaryCells(_arg); }
extern "C" int vtk_kd_tree_get_include_region_boundary_cells(vtkNew<vtkKdTree> sself) { return sself->GetIncludeRegionBoundaryCells(); }
extern "C" void vtk_kd_tree_include_region_boundary_cells_on(vtkNew<vtkKdTree> sself) { sself->IncludeRegionBoundaryCellsOn(); }
extern "C" void vtk_kd_tree_include_region_boundary_cells_off(vtkNew<vtkKdTree> sself) { sself->IncludeRegionBoundaryCellsOff(); }
extern "C" void vtk_kd_tree_delete_cell_lists(vtkNew<vtkKdTree> sself) { sself->DeleteCellLists(); }
extern "C" int vtk_kd_tree_get_region_containing_cell(vtkNew<vtkKdTree> sself, int set, long long cellID) { return sself->GetRegionContainingCell(set, cellID); }
extern "C" int vtk_kd_tree_get_region_containing_cell(vtkNew<vtkKdTree> sself, long long cellID) { return sself->GetRegionContainingCell(cellID); }
extern "C" int* vtk_kd_tree_all_get_region_containing_cell(vtkNew<vtkKdTree> sself) { return sself->AllGetRegionContainingCell(); }
extern "C" int vtk_kd_tree_get_region_containing_point(vtkNew<vtkKdTree> sself, double x, double y, double z) { return sself->GetRegionContainingPoint(x, y, z); }
extern "C" void vtk_kd_tree_build_locator(vtkNew<vtkKdTree> sself) { sself->BuildLocator(); }
extern "C" long long vtk_kd_tree_find_point(vtkNew<vtkKdTree> sself, double x) { return sself->FindPoint(x); }
extern "C" long long vtk_kd_tree_find_point(vtkNew<vtkKdTree> sself, double x, double y, double z) { return sself->FindPoint(x, y, z); }
extern "C" long long vtk_kd_tree_find_closest_point(vtkNew<vtkKdTree> sself, double x, double dist2) { return sself->FindClosestPoint(x, dist2); }
extern "C" long long vtk_kd_tree_find_closest_point(vtkNew<vtkKdTree> sself, double x, double y, double z, double dist2) { return sself->FindClosestPoint(x, y, z, dist2); }
extern "C" long long vtk_kd_tree_find_closest_point_within_radius(vtkNew<vtkKdTree> sself, double radius, const double x, double dist2) { return sself->FindClosestPointWithinRadius(radius, x, dist2); }
extern "C" long long vtk_kd_tree_find_closest_point_in_region(vtkNew<vtkKdTree> sself, int regionId, double x, double dist2) { return sself->FindClosestPointInRegion(regionId, x, dist2); }
extern "C" long long vtk_kd_tree_find_closest_point_in_region(vtkNew<vtkKdTree> sself, int regionId, double x, double y, double z, double dist2) { return sself->FindClosestPointInRegion(regionId, x, y, z, dist2); }
extern "C" void vtk_kd_tree_free_search_structure(vtkNew<vtkKdTree> sself) { sself->FreeSearchStructure(); }
extern "C" void vtk_kd_tree_generate_representation_using_data_bounds_on(vtkNew<vtkKdTree> sself) { sself->GenerateRepresentationUsingDataBoundsOn(); }
extern "C" void vtk_kd_tree_generate_representation_using_data_bounds_off(vtkNew<vtkKdTree> sself) { sself->GenerateRepresentationUsingDataBoundsOff(); }
extern "C" void vtk_kd_tree_set_generate_representation_using_data_bounds(vtkNew<vtkKdTree> sself, int _arg) { sself->SetGenerateRepresentationUsingDataBounds(_arg); }
extern "C" int vtk_kd_tree_get_generate_representation_using_data_bounds(vtkNew<vtkKdTree> sself) { return sself->GetGenerateRepresentationUsingDataBounds(); }
extern "C" int vtk_kd_tree_new_geometry(vtkNew<vtkKdTree> sself) { return sself->NewGeometry(); }
extern "C" void vtk_kd_tree_invalidate_geometry(vtkNew<vtkKdTree> sself) { sself->InvalidateGeometry(); }
extern "C" vtkNew < vtkKdTreePointLocator > vtkKdTreePointLocator_new () {return vtkNew < vtkKdTreePointLocator > () ;}
extern "C" void vtkKdTreePointLocator_destructor (vtkNew < vtkKdTreePointLocator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkKdTreePointLocator_get_ptr (vtkNew < vtkKdTreePointLocator > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_kd_tree_point_locator_find_closest_point(vtkNew<vtkKdTreePointLocator> sself, const double x) { return sself->FindClosestPoint(x); }
extern "C" long long vtk_kd_tree_point_locator_find_closest_point_within_radius(vtkNew<vtkKdTreePointLocator> sself, double radius, const double x, double dist2) { return sself->FindClosestPointWithinRadius(radius, x, dist2); }
extern "C" void vtk_kd_tree_point_locator_free_search_structure(vtkNew<vtkKdTreePointLocator> sself) { sself->FreeSearchStructure(); }
extern "C" void vtk_kd_tree_point_locator_build_locator(vtkNew<vtkKdTreePointLocator> sself) { sself->BuildLocator(); }
extern "C" vtkNew < vtkLagrangeCurve > vtkLagrangeCurve_new () {return vtkNew < vtkLagrangeCurve > () ;}
extern "C" void vtkLagrangeCurve_destructor (vtkNew < vtkLagrangeCurve > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLagrangeCurve_get_ptr (vtkNew < vtkLagrangeCurve > sself) {return sself . GetPointer () ;}
extern "C" int vtk_lagrange_curve_get_cell_type(vtkNew<vtkLagrangeCurve> sself) { return sself->GetCellType(); }
extern "C" void vtk_lagrange_curve_interpolate_functions(vtkNew<vtkLagrangeCurve> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkLagrangeHexahedron > vtkLagrangeHexahedron_new () {return vtkNew < vtkLagrangeHexahedron > () ;}
extern "C" void vtkLagrangeHexahedron_destructor (vtkNew < vtkLagrangeHexahedron > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLagrangeHexahedron_get_ptr (vtkNew < vtkLagrangeHexahedron > sself) {return sself . GetPointer () ;}
extern "C" int vtk_lagrange_hexahedron_get_cell_type(vtkNew<vtkLagrangeHexahedron> sself) { return sself->GetCellType(); }
extern "C" void vtk_lagrange_hexahedron_interpolate_functions(vtkNew<vtkLagrangeHexahedron> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkLagrangeInterpolation > vtkLagrangeInterpolation_new () {return vtkNew < vtkLagrangeInterpolation > () ;}
extern "C" void vtkLagrangeInterpolation_destructor (vtkNew < vtkLagrangeInterpolation > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLagrangeInterpolation_get_ptr (vtkNew < vtkLagrangeInterpolation > sself) {return sself . GetPointer () ;}
extern "C" void vtk_lagrange_interpolation_evaluate_shape_functions(vtkNew<vtkLagrangeInterpolation> sself, const int order, const double pcoord, double shape) { sself->EvaluateShapeFunctions(order, pcoord, shape); }
extern "C" void vtk_lagrange_interpolation_evaluate_shape_and_gradient(vtkNew<vtkLagrangeInterpolation> sself, const int order, const double pcoord, double shape, double grad) { sself->EvaluateShapeAndGradient(order, pcoord, shape, grad); }
extern "C" int vtk_lagrange_interpolation_tensor_1_shape_functions(vtkNew<vtkLagrangeInterpolation> sself, const int order, const double pcoords, double shape) { return sself->Tensor1ShapeFunctions(order, pcoords, shape); }
extern "C" int vtk_lagrange_interpolation_tensor_1_shape_derivatives(vtkNew<vtkLagrangeInterpolation> sself, const int order, const double pcoords, double derivs) { return sself->Tensor1ShapeDerivatives(order, pcoords, derivs); }
extern "C" int vtk_lagrange_interpolation_tensor_2_shape_functions(vtkNew<vtkLagrangeInterpolation> sself, const int order, const double pcoords, double shape) { return sself->Tensor2ShapeFunctions(order, pcoords, shape); }
extern "C" int vtk_lagrange_interpolation_tensor_2_shape_derivatives(vtkNew<vtkLagrangeInterpolation> sself, const int order, const double pcoords, double derivs) { return sself->Tensor2ShapeDerivatives(order, pcoords, derivs); }
extern "C" int vtk_lagrange_interpolation_tensor_3_shape_functions(vtkNew<vtkLagrangeInterpolation> sself, const int order, const double pcoords, double shape) { return sself->Tensor3ShapeFunctions(order, pcoords, shape); }
extern "C" int vtk_lagrange_interpolation_tensor_3_shape_derivatives(vtkNew<vtkLagrangeInterpolation> sself, const int order, const double pcoords, double derivs) { return sself->Tensor3ShapeDerivatives(order, pcoords, derivs); }
extern "C" void vtk_lagrange_interpolation_wedge_shape_functions(vtkNew<vtkLagrangeInterpolation> sself, const int order, const long long numberOfPoints, const double pcoords, double shape) { sself->WedgeShapeFunctions(order, numberOfPoints, pcoords, shape); }
extern "C" void vtk_lagrange_interpolation_wedge_shape_derivatives(vtkNew<vtkLagrangeInterpolation> sself, const int order, const long long numberOfPoints, const double pcoords, double derivs) { sself->WedgeShapeDerivatives(order, numberOfPoints, pcoords, derivs); }
extern "C" void vtk_lagrange_interpolation_wedge_evaluate(vtkNew<vtkLagrangeInterpolation> sself, const int order, const long long numberOfPoints, const double pcoords, double fieldVals, int fieldDim, double fieldAtPCoords) { sself->WedgeEvaluate(order, numberOfPoints, pcoords, fieldVals, fieldDim, fieldAtPCoords); }
extern "C" vtkNew < vtkLagrangeQuadrilateral > vtkLagrangeQuadrilateral_new () {return vtkNew < vtkLagrangeQuadrilateral > () ;}
extern "C" void vtkLagrangeQuadrilateral_destructor (vtkNew < vtkLagrangeQuadrilateral > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLagrangeQuadrilateral_get_ptr (vtkNew < vtkLagrangeQuadrilateral > sself) {return sself . GetPointer () ;}
extern "C" int vtk_lagrange_quadrilateral_get_cell_type(vtkNew<vtkLagrangeQuadrilateral> sself) { return sself->GetCellType(); }
extern "C" void vtk_lagrange_quadrilateral_interpolate_functions(vtkNew<vtkLagrangeQuadrilateral> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkLagrangeTetra > vtkLagrangeTetra_new () {return vtkNew < vtkLagrangeTetra > () ;}
extern "C" void vtkLagrangeTetra_destructor (vtkNew < vtkLagrangeTetra > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLagrangeTetra_get_ptr (vtkNew < vtkLagrangeTetra > sself) {return sself . GetPointer () ;}
extern "C" int vtk_lagrange_tetra_get_cell_type(vtkNew<vtkLagrangeTetra> sself) { return sself->GetCellType(); }
extern "C" void vtk_lagrange_tetra_interpolate_functions(vtkNew<vtkLagrangeTetra> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkLagrangeTriangle > vtkLagrangeTriangle_new () {return vtkNew < vtkLagrangeTriangle > () ;}
extern "C" void vtkLagrangeTriangle_destructor (vtkNew < vtkLagrangeTriangle > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLagrangeTriangle_get_ptr (vtkNew < vtkLagrangeTriangle > sself) {return sself . GetPointer () ;}
extern "C" int vtk_lagrange_triangle_get_cell_type(vtkNew<vtkLagrangeTriangle> sself) { return sself->GetCellType(); }
extern "C" void vtk_lagrange_triangle_interpolate_functions(vtkNew<vtkLagrangeTriangle> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkLagrangeWedge > vtkLagrangeWedge_new () {return vtkNew < vtkLagrangeWedge > () ;}
extern "C" void vtkLagrangeWedge_destructor (vtkNew < vtkLagrangeWedge > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLagrangeWedge_get_ptr (vtkNew < vtkLagrangeWedge > sself) {return sself . GetPointer () ;}
extern "C" int vtk_lagrange_wedge_get_cell_type(vtkNew<vtkLagrangeWedge> sself) { return sself->GetCellType(); }
extern "C" void vtk_lagrange_wedge_interpolate_functions(vtkNew<vtkLagrangeWedge> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" vtkNew < vtkLine > vtkLine_new () {return vtkNew < vtkLine > () ;}
extern "C" void vtkLine_destructor (vtkNew < vtkLine > sself) {sself . Reset () ; return ;}
extern "C" void * vtkLine_get_ptr (vtkNew < vtkLine > sself) {return sself . GetPointer () ;}
extern "C" int vtk_line_get_cell_type(vtkNew<vtkLine> sself) { return sself->GetCellType(); }
extern "C" int vtk_line_get_cell_dimension(vtkNew<vtkLine> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_line_get_number_of_edges(vtkNew<vtkLine> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_line_get_number_of_faces(vtkNew<vtkLine> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_line_evaluate_position(vtkNew<vtkLine> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_line_evaluate_location(vtkNew<vtkLine> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_line_derivatives(vtkNew<vtkLine> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_line_inflate(vtkNew<vtkLine> sself, double dist) { return sself->Inflate(dist); }
extern "C" int vtk_line_get_parametric_center(vtkNew<vtkLine> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" int vtk_line_intersect_with_line(vtkNew<vtkLine> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_line_intersection(vtkNew<vtkLine> sself, const double p1, const double p2, const double x1, const double x2, double u, double v, const double tolerance, int toleranceType) { return sself->Intersection(p1, p2, x1, x2, u, v, tolerance, toleranceType); }
extern "C" int vtk_line_intersection_3_d(vtkNew<vtkLine> sself, double p1, double p2, double x1, double x2, double u, double v, const double tolerance) { return sself->Intersection3D(p1, p2, x1, x2, u, v, tolerance); }
extern "C" double vtk_line_distance_to_line(vtkNew<vtkLine> sself, const double x, const double p1, const double p2, double t, double closestPoint) { return sself->DistanceToLine(x, p1, p2, t, closestPoint); }
extern "C" double vtk_line_distance_to_line(vtkNew<vtkLine> sself, const double x, const double p1, const double p2) { return sself->DistanceToLine(x, p1, p2); }
extern "C" double vtk_line_distance_between_lines(vtkNew<vtkLine> sself, double l0, double l1, double m0, double m1, double closestPt1, double closestPt2, double t1, double t2) { return sself->DistanceBetweenLines(l0, l1, m0, m1, closestPt1, closestPt2, t1, t2); }
extern "C" double vtk_line_distance_between_line_segments(vtkNew<vtkLine> sself, double l0, double l1, double m0, double m1, double closestPt1, double closestPt2, double t1, double t2) { return sself->DistanceBetweenLineSegments(l0, l1, m0, m1, closestPt1, closestPt2, t1, t2); }
extern "C" void vtk_line_interpolation_functions(vtkNew<vtkLine> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_line_interpolation_derivs(vtkNew<vtkLine> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_line_interpolate_functions(vtkNew<vtkLine> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_line_interpolate_derivs(vtkNew<vtkLine> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" vtkNew < vtkMeanValueCoordinatesInterpolator > vtkMeanValueCoordinatesInterpolator_new () {return vtkNew < vtkMeanValueCoordinatesInterpolator > () ;}
extern "C" void vtkMeanValueCoordinatesInterpolator_destructor (vtkNew < vtkMeanValueCoordinatesInterpolator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMeanValueCoordinatesInterpolator_get_ptr (vtkNew < vtkMeanValueCoordinatesInterpolator > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkMergePoints > vtkMergePoints_new () {return vtkNew < vtkMergePoints > () ;}
extern "C" void vtkMergePoints_destructor (vtkNew < vtkMergePoints > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMergePoints_get_ptr (vtkNew < vtkMergePoints > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_merge_points_is_inserted_point(vtkNew<vtkMergePoints> sself, const double x) { return sself->IsInsertedPoint(x); }
extern "C" int vtk_merge_points_insert_unique_point(vtkNew<vtkMergePoints> sself, const double x, long long ptId) { return sself->InsertUniquePoint(x, ptId); }
extern "C" vtkNew < vtkMolecule > vtkMolecule_new () {return vtkNew < vtkMolecule > () ;}
extern "C" void vtkMolecule_destructor (vtkNew < vtkMolecule > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMolecule_get_ptr (vtkNew < vtkMolecule > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_molecule_get_number_of_atoms(vtkNew<vtkMolecule> sself) { return sself->GetNumberOfAtoms(); }
extern "C" long long vtk_molecule_get_number_of_bonds(vtkNew<vtkMolecule> sself) { return sself->GetNumberOfBonds(); }
extern "C" unsigned short vtk_molecule_get_atom_atomic_number(vtkNew<vtkMolecule> sself, long long atomId) { return sself->GetAtomAtomicNumber(atomId); }
extern "C" void vtk_molecule_set_atom_atomic_number(vtkNew<vtkMolecule> sself, long long atomId, unsigned short atomicNum) { sself->SetAtomAtomicNumber(atomId, atomicNum); }
extern "C" void vtk_molecule_set_atom_position(vtkNew<vtkMolecule> sself, long long atomId, double x, double y, double z) { sself->SetAtomPosition(atomId, x, y, z); }
extern "C" void vtk_molecule_set_atom_position(vtkNew<vtkMolecule> sself, long long atomId, double pos) { sself->SetAtomPosition(atomId, pos); }
extern "C" void vtk_molecule_get_atom_position(vtkNew<vtkMolecule> sself, long long atomId, float pos) { sself->GetAtomPosition(atomId, pos); }
extern "C" void vtk_molecule_get_atom_position(vtkNew<vtkMolecule> sself, long long atomId, double pos) { sself->GetAtomPosition(atomId, pos); }
extern "C" void vtk_molecule_set_bond_order(vtkNew<vtkMolecule> sself, long long bondId, unsigned short order) { sself->SetBondOrder(bondId, order); }
extern "C" unsigned short vtk_molecule_get_bond_order(vtkNew<vtkMolecule> sself, long long bondId) { return sself->GetBondOrder(bondId); }
extern "C" double vtk_molecule_get_bond_length(vtkNew<vtkMolecule> sself, long long bondId) { return sself->GetBondLength(bondId); }
extern "C" bool vtk_molecule_has_lattice(vtkNew<vtkMolecule> sself) { return sself->HasLattice(); }
extern "C" void vtk_molecule_clear_lattice(vtkNew<vtkMolecule> sself) { sself->ClearLattice(); }
extern "C" void vtk_molecule_allocate_atom_ghost_array(vtkNew<vtkMolecule> sself) { sself->AllocateAtomGhostArray(); }
extern "C" void vtk_molecule_allocate_bond_ghost_array(vtkNew<vtkMolecule> sself) { sself->AllocateBondGhostArray(); }
extern "C" long long vtk_molecule_get_bond_id(vtkNew<vtkMolecule> sself, long long a, long long b) { return sself->GetBondId(a, b); }
extern "C" void vtk_molecule_set_atomic_number_array_name(vtkNew<vtkMolecule> sself, const char _arg) { sself->SetAtomicNumberArrayName(_arg); }
extern "C" char* vtk_molecule_get_atomic_number_array_name(vtkNew<vtkMolecule> sself) { return sself->GetAtomicNumberArrayName(); }
extern "C" void vtk_molecule_set_bond_orders_array_name(vtkNew<vtkMolecule> sself, const char _arg) { sself->SetBondOrdersArrayName(_arg); }
extern "C" char* vtk_molecule_get_bond_orders_array_name(vtkNew<vtkMolecule> sself) { return sself->GetBondOrdersArrayName(); }
extern "C" vtkNew < vtkMultiBlockDataSet > vtkMultiBlockDataSet_new () {return vtkNew < vtkMultiBlockDataSet > () ;}
extern "C" void vtkMultiBlockDataSet_destructor (vtkNew < vtkMultiBlockDataSet > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMultiBlockDataSet_get_ptr (vtkNew < vtkMultiBlockDataSet > sself) {return sself . GetPointer () ;}
extern "C" void vtk_multi_block_data_set_set_number_of_blocks(vtkNew<vtkMultiBlockDataSet> sself, unsigned int numBlocks) { sself->SetNumberOfBlocks(numBlocks); }
extern "C" unsigned int vtk_multi_block_data_set_get_number_of_blocks(vtkNew<vtkMultiBlockDataSet> sself) { return sself->GetNumberOfBlocks(); }
extern "C" void vtk_multi_block_data_set_remove_block(vtkNew<vtkMultiBlockDataSet> sself, unsigned int blockno) { sself->RemoveBlock(blockno); }
extern "C" int vtk_multi_block_data_set_has_meta_data(vtkNew<vtkMultiBlockDataSet> sself, unsigned int blockno) { return sself->HasMetaData(blockno); }
extern "C" vtkNew < vtkMultiPieceDataSet > vtkMultiPieceDataSet_new () {return vtkNew < vtkMultiPieceDataSet > () ;}
extern "C" void vtkMultiPieceDataSet_destructor (vtkNew < vtkMultiPieceDataSet > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMultiPieceDataSet_get_ptr (vtkNew < vtkMultiPieceDataSet > sself) {return sself . GetPointer () ;}
extern "C" void vtk_multi_piece_data_set_set_number_of_pieces(vtkNew<vtkMultiPieceDataSet> sself, unsigned int numpieces) { sself->SetNumberOfPieces(numpieces); }
extern "C" unsigned int vtk_multi_piece_data_set_get_number_of_pieces(vtkNew<vtkMultiPieceDataSet> sself) { return sself->GetNumberOfPieces(); }
extern "C" vtkNew < vtkMutableDirectedGraph > vtkMutableDirectedGraph_new () {return vtkNew < vtkMutableDirectedGraph > () ;}
extern "C" void vtkMutableDirectedGraph_destructor (vtkNew < vtkMutableDirectedGraph > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMutableDirectedGraph_get_ptr (vtkNew < vtkMutableDirectedGraph > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_mutable_directed_graph_set_number_of_vertices(vtkNew<vtkMutableDirectedGraph> sself, long long numVerts) { return sself->SetNumberOfVertices(numVerts); }
extern "C" long long vtk_mutable_directed_graph_add_vertex(vtkNew<vtkMutableDirectedGraph> sself) { return sself->AddVertex(); }
extern "C" void vtk_mutable_directed_graph_lazy_add_vertex(vtkNew<vtkMutableDirectedGraph> sself) { sself->LazyAddVertex(); }
extern "C" long long vtk_mutable_directed_graph_add_child(vtkNew<vtkMutableDirectedGraph> sself, long long parent) { return sself->AddChild(parent); }
extern "C" void vtk_mutable_directed_graph_remove_vertex(vtkNew<vtkMutableDirectedGraph> sself, long long v) { sself->RemoveVertex(v); }
extern "C" void vtk_mutable_directed_graph_remove_edge(vtkNew<vtkMutableDirectedGraph> sself, long long e) { sself->RemoveEdge(e); }
extern "C" vtkNew < vtkMutableUndirectedGraph > vtkMutableUndirectedGraph_new () {return vtkNew < vtkMutableUndirectedGraph > () ;}
extern "C" void vtkMutableUndirectedGraph_destructor (vtkNew < vtkMutableUndirectedGraph > sself) {sself . Reset () ; return ;}
extern "C" void * vtkMutableUndirectedGraph_get_ptr (vtkNew < vtkMutableUndirectedGraph > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_mutable_undirected_graph_set_number_of_vertices(vtkNew<vtkMutableUndirectedGraph> sself, long long numVerts) { return sself->SetNumberOfVertices(numVerts); }
extern "C" long long vtk_mutable_undirected_graph_add_vertex(vtkNew<vtkMutableUndirectedGraph> sself) { return sself->AddVertex(); }
extern "C" void vtk_mutable_undirected_graph_lazy_add_vertex(vtkNew<vtkMutableUndirectedGraph> sself) { sself->LazyAddVertex(); }
extern "C" void vtk_mutable_undirected_graph_lazy_add_edge(vtkNew<vtkMutableUndirectedGraph> sself, long long u, long long v) { sself->LazyAddEdge(u, v); }
extern "C" void vtk_mutable_undirected_graph_remove_vertex(vtkNew<vtkMutableUndirectedGraph> sself, long long v) { sself->RemoveVertex(v); }
extern "C" void vtk_mutable_undirected_graph_remove_edge(vtkNew<vtkMutableUndirectedGraph> sself, long long e) { sself->RemoveEdge(e); }
extern "C" vtkNew < vtkNonMergingPointLocator > vtkNonMergingPointLocator_new () {return vtkNew < vtkNonMergingPointLocator > () ;}
extern "C" void vtkNonMergingPointLocator_destructor (vtkNew < vtkNonMergingPointLocator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkNonMergingPointLocator_get_ptr (vtkNew < vtkNonMergingPointLocator > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_non_merging_point_locator_is_inserted_point(vtkNew<vtkNonMergingPointLocator> sself, const double p0) { return sself->IsInsertedPoint(p0); }
extern "C" long long vtk_non_merging_point_locator_is_inserted_point(vtkNew<vtkNonMergingPointLocator> sself, double p0, double p1, double p2) { return sself->IsInsertedPoint(p0, p1, p2); }
extern "C" int vtk_non_merging_point_locator_insert_unique_point(vtkNew<vtkNonMergingPointLocator> sself, const double x, long long ptId) { return sself->InsertUniquePoint(x, ptId); }
extern "C" vtkNew < vtkNonOverlappingAMR > vtkNonOverlappingAMR_new () {return vtkNew < vtkNonOverlappingAMR > () ;}
extern "C" void vtkNonOverlappingAMR_destructor (vtkNew < vtkNonOverlappingAMR > sself) {sself . Reset () ; return ;}
extern "C" void * vtkNonOverlappingAMR_get_ptr (vtkNew < vtkNonOverlappingAMR > sself) {return sself . GetPointer () ;}
extern "C" int vtk_non_overlapping_amr_get_data_object_type(vtkNew<vtkNonOverlappingAMR> sself) { return sself->GetDataObjectType(); }
extern "C" vtkNew < vtkOctreePointLocator > vtkOctreePointLocator_new () {return vtkNew < vtkOctreePointLocator > () ;}
extern "C" void vtkOctreePointLocator_destructor (vtkNew < vtkOctreePointLocator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkOctreePointLocator_get_ptr (vtkNew < vtkOctreePointLocator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_octree_point_locator_set_maximum_points_per_region(vtkNew<vtkOctreePointLocator> sself, int _arg) { sself->SetMaximumPointsPerRegion(_arg); }
extern "C" int vtk_octree_point_locator_get_maximum_points_per_region(vtkNew<vtkOctreePointLocator> sself) { return sself->GetMaximumPointsPerRegion(); }
extern "C" void vtk_octree_point_locator_set_create_cubic_octants(vtkNew<vtkOctreePointLocator> sself, int _arg) { sself->SetCreateCubicOctants(_arg); }
extern "C" int vtk_octree_point_locator_get_create_cubic_octants(vtkNew<vtkOctreePointLocator> sself) { return sself->GetCreateCubicOctants(); }
extern "C" double vtk_octree_point_locator_get_fudge_factor(vtkNew<vtkOctreePointLocator> sself) { return sself->GetFudgeFactor(); }
extern "C" void vtk_octree_point_locator_set_fudge_factor(vtkNew<vtkOctreePointLocator> sself, double _arg) { sself->SetFudgeFactor(_arg); }
extern "C" double* vtk_octree_point_locator_get_bounds(vtkNew<vtkOctreePointLocator> sself) { return sself->GetBounds(); }
extern "C" void vtk_octree_point_locator_get_bounds(vtkNew<vtkOctreePointLocator> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" int vtk_octree_point_locator_get_number_of_leaf_nodes(vtkNew<vtkOctreePointLocator> sself) { return sself->GetNumberOfLeafNodes(); }
extern "C" void vtk_octree_point_locator_get_region_bounds(vtkNew<vtkOctreePointLocator> sself, int regionID, double bounds) { sself->GetRegionBounds(regionID, bounds); }
extern "C" void vtk_octree_point_locator_get_region_data_bounds(vtkNew<vtkOctreePointLocator> sself, int leafNodeID, double bounds) { sself->GetRegionDataBounds(leafNodeID, bounds); }
extern "C" int vtk_octree_point_locator_get_region_containing_point(vtkNew<vtkOctreePointLocator> sself, double x, double y, double z) { return sself->GetRegionContainingPoint(x, y, z); }
extern "C" void vtk_octree_point_locator_build_locator(vtkNew<vtkOctreePointLocator> sself) { sself->BuildLocator(); }
extern "C" long long vtk_octree_point_locator_find_closest_point(vtkNew<vtkOctreePointLocator> sself, const double x) { return sself->FindClosestPoint(x); }
extern "C" long long vtk_octree_point_locator_find_closest_point(vtkNew<vtkOctreePointLocator> sself, double x, double y, double z, double dist2) { return sself->FindClosestPoint(x, y, z, dist2); }
extern "C" long long vtk_octree_point_locator_find_closest_point_within_radius(vtkNew<vtkOctreePointLocator> sself, double radius, const double x, double dist2) { return sself->FindClosestPointWithinRadius(radius, x, dist2); }
extern "C" long long vtk_octree_point_locator_find_closest_point_in_region(vtkNew<vtkOctreePointLocator> sself, int regionId, double x, double dist2) { return sself->FindClosestPointInRegion(regionId, x, dist2); }
extern "C" long long vtk_octree_point_locator_find_closest_point_in_region(vtkNew<vtkOctreePointLocator> sself, int regionId, double x, double y, double z, double dist2) { return sself->FindClosestPointInRegion(regionId, x, y, z, dist2); }
extern "C" void vtk_octree_point_locator_free_search_structure(vtkNew<vtkOctreePointLocator> sself) { sself->FreeSearchStructure(); }
extern "C" vtkNew < vtkOctreePointLocatorNode > vtkOctreePointLocatorNode_new () {return vtkNew < vtkOctreePointLocatorNode > () ;}
extern "C" void vtkOctreePointLocatorNode_destructor (vtkNew < vtkOctreePointLocatorNode > sself) {sself . Reset () ; return ;}
extern "C" void * vtkOctreePointLocatorNode_get_ptr (vtkNew < vtkOctreePointLocatorNode > sself) {return sself . GetPointer () ;}
extern "C" void vtk_octree_point_locator_node_set_number_of_points(vtkNew<vtkOctreePointLocatorNode> sself, int numberOfPoints) { sself->SetNumberOfPoints(numberOfPoints); }
extern "C" int vtk_octree_point_locator_node_get_number_of_points(vtkNew<vtkOctreePointLocatorNode> sself) { return sself->GetNumberOfPoints(); }
extern "C" void vtk_octree_point_locator_node_set_bounds(vtkNew<vtkOctreePointLocatorNode> sself, double xMin, double xMax, double yMin, double yMax, double zMin, double zMax) { sself->SetBounds(xMin, xMax, yMin, yMax, zMin, zMax); }
extern "C" void vtk_octree_point_locator_node_set_bounds(vtkNew<vtkOctreePointLocatorNode> sself, const double b) { sself->SetBounds(b); }
extern "C" void vtk_octree_point_locator_node_get_bounds(vtkNew<vtkOctreePointLocatorNode> sself, double b) { sself->GetBounds(b); }
extern "C" void vtk_octree_point_locator_node_set_data_bounds(vtkNew<vtkOctreePointLocatorNode> sself, double xMin, double xMax, double yMin, double yMax, double zMin, double zMax) { sself->SetDataBounds(xMin, xMax, yMin, yMax, zMin, zMax); }
extern "C" void vtk_octree_point_locator_node_get_data_bounds(vtkNew<vtkOctreePointLocatorNode> sself, double b) { sself->GetDataBounds(b); }
extern "C" double* vtk_octree_point_locator_node_get_min_bounds(vtkNew<vtkOctreePointLocatorNode> sself) { return sself->GetMinBounds(); }
extern "C" double* vtk_octree_point_locator_node_get_max_bounds(vtkNew<vtkOctreePointLocatorNode> sself) { return sself->GetMaxBounds(); }
extern "C" void vtk_octree_point_locator_node_set_min_bounds(vtkNew<vtkOctreePointLocatorNode> sself, double minBounds) { sself->SetMinBounds(minBounds); }
extern "C" void vtk_octree_point_locator_node_set_max_bounds(vtkNew<vtkOctreePointLocatorNode> sself, double maxBounds) { sself->SetMaxBounds(maxBounds); }
extern "C" double* vtk_octree_point_locator_node_get_min_data_bounds(vtkNew<vtkOctreePointLocatorNode> sself) { return sself->GetMinDataBounds(); }
extern "C" double* vtk_octree_point_locator_node_get_max_data_bounds(vtkNew<vtkOctreePointLocatorNode> sself) { return sself->GetMaxDataBounds(); }
extern "C" void vtk_octree_point_locator_node_set_min_data_bounds(vtkNew<vtkOctreePointLocatorNode> sself, double minDataBounds) { sself->SetMinDataBounds(minDataBounds); }
extern "C" void vtk_octree_point_locator_node_set_max_data_bounds(vtkNew<vtkOctreePointLocatorNode> sself, double maxDataBounds) { sself->SetMaxDataBounds(maxDataBounds); }
extern "C" int vtk_octree_point_locator_node_get_id(vtkNew<vtkOctreePointLocatorNode> sself) { return sself->GetID(); }
extern "C" int vtk_octree_point_locator_node_get_min_id(vtkNew<vtkOctreePointLocatorNode> sself) { return sself->GetMinID(); }
extern "C" void vtk_octree_point_locator_node_create_child_nodes(vtkNew<vtkOctreePointLocatorNode> sself) { sself->CreateChildNodes(); }
extern "C" void vtk_octree_point_locator_node_delete_child_nodes(vtkNew<vtkOctreePointLocatorNode> sself) { sself->DeleteChildNodes(); }
extern "C" int vtk_octree_point_locator_node_contains_point(vtkNew<vtkOctreePointLocatorNode> sself, double x, double y, double z, int useDataBounds) { return sself->ContainsPoint(x, y, z, useDataBounds); }
extern "C" int vtk_octree_point_locator_node_get_sub_octant_index(vtkNew<vtkOctreePointLocatorNode> sself, double point, int CheckContainment) { return sself->GetSubOctantIndex(point, CheckContainment); }
extern "C" vtkNew < vtkOrderedTriangulator > vtkOrderedTriangulator_new () {return vtkNew < vtkOrderedTriangulator > () ;}
extern "C" void vtkOrderedTriangulator_destructor (vtkNew < vtkOrderedTriangulator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkOrderedTriangulator_get_ptr (vtkNew < vtkOrderedTriangulator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_ordered_triangulator_init_triangulation(vtkNew<vtkOrderedTriangulator> sself, double xmin, double xmax, double ymin, double ymax, double zmin, double zmax, int numPts) { sself->InitTriangulation(xmin, xmax, ymin, ymax, zmin, zmax, numPts); }
extern "C" void vtk_ordered_triangulator_init_triangulation(vtkNew<vtkOrderedTriangulator> sself, double bounds, int numPts) { sself->InitTriangulation(bounds, numPts); }
extern "C" long long vtk_ordered_triangulator_insert_point(vtkNew<vtkOrderedTriangulator> sself, long long id, double x, double p, int type) { return sself->InsertPoint(id, x, p, type); }
extern "C" long long vtk_ordered_triangulator_insert_point(vtkNew<vtkOrderedTriangulator> sself, long long id, long long sortid, double x, double p, int type) { return sself->InsertPoint(id, sortid, x, p, type); }
extern "C" long long vtk_ordered_triangulator_insert_point(vtkNew<vtkOrderedTriangulator> sself, long long id, long long sortid, long long sortid2, double x, double p, int type) { return sself->InsertPoint(id, sortid, sortid2, x, p, type); }
extern "C" void vtk_ordered_triangulator_triangulate(vtkNew<vtkOrderedTriangulator> sself) { sself->Triangulate(); }
extern "C" void vtk_ordered_triangulator_template_triangulate(vtkNew<vtkOrderedTriangulator> sself, int cellType, int numPts, int numEdges) { sself->TemplateTriangulate(cellType, numPts, numEdges); }
extern "C" void vtk_ordered_triangulator_update_point_type(vtkNew<vtkOrderedTriangulator> sself, long long internalId, int type) { sself->UpdatePointType(internalId, type); }
extern "C" double* vtk_ordered_triangulator_get_point_position(vtkNew<vtkOrderedTriangulator> sself, long long internalId) { return sself->GetPointPosition(internalId); }
extern "C" double* vtk_ordered_triangulator_get_point_location(vtkNew<vtkOrderedTriangulator> sself, long long internalId) { return sself->GetPointLocation(internalId); }
extern "C" long long vtk_ordered_triangulator_get_point_id(vtkNew<vtkOrderedTriangulator> sself, long long internalId) { return sself->GetPointId(internalId); }
extern "C" int vtk_ordered_triangulator_get_number_of_points(vtkNew<vtkOrderedTriangulator> sself) { return sself->GetNumberOfPoints(); }
extern "C" void vtk_ordered_triangulator_set_use_templates(vtkNew<vtkOrderedTriangulator> sself, int _arg) { sself->SetUseTemplates(_arg); }
extern "C" int vtk_ordered_triangulator_get_use_templates(vtkNew<vtkOrderedTriangulator> sself) { return sself->GetUseTemplates(); }
extern "C" void vtk_ordered_triangulator_use_templates_on(vtkNew<vtkOrderedTriangulator> sself) { sself->UseTemplatesOn(); }
extern "C" void vtk_ordered_triangulator_use_templates_off(vtkNew<vtkOrderedTriangulator> sself) { sself->UseTemplatesOff(); }
extern "C" void vtk_ordered_triangulator_set_pre_sorted(vtkNew<vtkOrderedTriangulator> sself, int _arg) { sself->SetPreSorted(_arg); }
extern "C" int vtk_ordered_triangulator_get_pre_sorted(vtkNew<vtkOrderedTriangulator> sself) { return sself->GetPreSorted(); }
extern "C" void vtk_ordered_triangulator_pre_sorted_on(vtkNew<vtkOrderedTriangulator> sself) { sself->PreSortedOn(); }
extern "C" void vtk_ordered_triangulator_pre_sorted_off(vtkNew<vtkOrderedTriangulator> sself) { sself->PreSortedOff(); }
extern "C" void vtk_ordered_triangulator_set_use_two_sort_ids(vtkNew<vtkOrderedTriangulator> sself, int _arg) { sself->SetUseTwoSortIds(_arg); }
extern "C" int vtk_ordered_triangulator_get_use_two_sort_ids(vtkNew<vtkOrderedTriangulator> sself) { return sself->GetUseTwoSortIds(); }
extern "C" void vtk_ordered_triangulator_use_two_sort_ids_on(vtkNew<vtkOrderedTriangulator> sself) { sself->UseTwoSortIdsOn(); }
extern "C" void vtk_ordered_triangulator_use_two_sort_ids_off(vtkNew<vtkOrderedTriangulator> sself) { sself->UseTwoSortIdsOff(); }
extern "C" void vtk_ordered_triangulator_init_tetra_traversal(vtkNew<vtkOrderedTriangulator> sself) { sself->InitTetraTraversal(); }
extern "C" vtkNew < vtkOutEdgeIterator > vtkOutEdgeIterator_new () {return vtkNew < vtkOutEdgeIterator > () ;}
extern "C" void vtkOutEdgeIterator_destructor (vtkNew < vtkOutEdgeIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkOutEdgeIterator_get_ptr (vtkNew < vtkOutEdgeIterator > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_out_edge_iterator_get_vertex(vtkNew<vtkOutEdgeIterator> sself) { return sself->GetVertex(); }
extern "C" bool vtk_out_edge_iterator_has_next(vtkNew<vtkOutEdgeIterator> sself) { return sself->HasNext(); }
extern "C" vtkNew < vtkOverlappingAMR > vtkOverlappingAMR_new () {return vtkNew < vtkOverlappingAMR > () ;}
extern "C" void vtkOverlappingAMR_destructor (vtkNew < vtkOverlappingAMR > sself) {sself . Reset () ; return ;}
extern "C" void * vtkOverlappingAMR_get_ptr (vtkNew < vtkOverlappingAMR > sself) {return sself . GetPointer () ;}
extern "C" void vtk_overlapping_amr_set_origin(vtkNew<vtkOverlappingAMR> sself, const double origin) { sself->SetOrigin(origin); }
extern "C" double* vtk_overlapping_amr_get_origin(vtkNew<vtkOverlappingAMR> sself) { return sself->GetOrigin(); }
extern "C" void vtk_overlapping_amr_set_spacing(vtkNew<vtkOverlappingAMR> sself, unsigned int level, const double spacing) { sself->SetSpacing(level, spacing); }
extern "C" void vtk_overlapping_amr_get_spacing(vtkNew<vtkOverlappingAMR> sself, unsigned int level, double spacing) { sself->GetSpacing(level, spacing); }
extern "C" void vtk_overlapping_amr_get_bounds(vtkNew<vtkOverlappingAMR> sself, unsigned int level, unsigned int id, double bb) { sself->GetBounds(level, id, bb); }
extern "C" void vtk_overlapping_amr_get_origin(vtkNew<vtkOverlappingAMR> sself, unsigned int level, unsigned int id, double origin) { sself->GetOrigin(level, id, origin); }
extern "C" void vtk_overlapping_amr_set_refinement_ratio(vtkNew<vtkOverlappingAMR> sself, unsigned int level, int refRatio) { sself->SetRefinementRatio(level, refRatio); }
extern "C" int vtk_overlapping_amr_get_refinement_ratio(vtkNew<vtkOverlappingAMR> sself, unsigned int level) { return sself->GetRefinementRatio(level); }
extern "C" void vtk_overlapping_amr_set_amr_block_source_index(vtkNew<vtkOverlappingAMR> sself, unsigned int level, unsigned int id, int sourceId) { sself->SetAMRBlockSourceIndex(level, id, sourceId); }
extern "C" int vtk_overlapping_amr_get_amr_block_source_index(vtkNew<vtkOverlappingAMR> sself, unsigned int level, unsigned int id) { return sself->GetAMRBlockSourceIndex(level, id); }
extern "C" bool vtk_overlapping_amr_has_children_information(vtkNew<vtkOverlappingAMR> sself) { return sself->HasChildrenInformation(); }
extern "C" void vtk_overlapping_amr_generate_parent_child_information(vtkNew<vtkOverlappingAMR> sself) { sself->GenerateParentChildInformation(); }
extern "C" unsigned int* vtk_overlapping_amr_get_parents(vtkNew<vtkOverlappingAMR> sself, unsigned int level, unsigned int index, unsigned int numParents) { return sself->GetParents(level, index, numParents); }
extern "C" unsigned int* vtk_overlapping_amr_get_children(vtkNew<vtkOverlappingAMR> sself, unsigned int level, unsigned int index, unsigned int numChildren) { return sself->GetChildren(level, index, numChildren); }
extern "C" void vtk_overlapping_amr_print_parent_child_info(vtkNew<vtkOverlappingAMR> sself, unsigned int level, unsigned int index) { sself->PrintParentChildInfo(level, index); }
extern "C" void vtk_overlapping_amr_get_bounds(vtkNew<vtkOverlappingAMR> sself, double b) { sself->GetBounds(b); }
extern "C" bool vtk_overlapping_amr_find_grid(vtkNew<vtkOverlappingAMR> sself, double q, unsigned int level, unsigned int gridId) { return sself->FindGrid(q, level, gridId); }
extern "C" void vtk_overlapping_amr_audit(vtkNew<vtkOverlappingAMR> sself) { sself->Audit(); }
extern "C" vtkNew < vtkPartitionedDataSet > vtkPartitionedDataSet_new () {return vtkNew < vtkPartitionedDataSet > () ;}
extern "C" void vtkPartitionedDataSet_destructor (vtkNew < vtkPartitionedDataSet > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPartitionedDataSet_get_ptr (vtkNew < vtkPartitionedDataSet > sself) {return sself . GetPointer () ;}
extern "C" void vtk_partitioned_data_set_set_number_of_partitions(vtkNew<vtkPartitionedDataSet> sself, unsigned int numPartitions) { sself->SetNumberOfPartitions(numPartitions); }
extern "C" unsigned int vtk_partitioned_data_set_get_number_of_partitions(vtkNew<vtkPartitionedDataSet> sself) { return sself->GetNumberOfPartitions(); }
extern "C" int vtk_partitioned_data_set_has_meta_data(vtkNew<vtkPartitionedDataSet> sself, unsigned int idx) { return sself->HasMetaData(idx); }
extern "C" void vtk_partitioned_data_set_remove_null_partitions(vtkNew<vtkPartitionedDataSet> sself) { sself->RemoveNullPartitions(); }
extern "C" vtkNew < vtkPartitionedDataSetCollection > vtkPartitionedDataSetCollection_new () {return vtkNew < vtkPartitionedDataSetCollection > () ;}
extern "C" void vtkPartitionedDataSetCollection_destructor (vtkNew < vtkPartitionedDataSetCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPartitionedDataSetCollection_get_ptr (vtkNew < vtkPartitionedDataSetCollection > sself) {return sself . GetPointer () ;}
extern "C" void vtk_partitioned_data_set_collection_set_number_of_partitioned_data_sets(vtkNew<vtkPartitionedDataSetCollection> sself, unsigned int numDataSets) { sself->SetNumberOfPartitionedDataSets(numDataSets); }
extern "C" unsigned int vtk_partitioned_data_set_collection_get_number_of_partitioned_data_sets(vtkNew<vtkPartitionedDataSetCollection> sself) { return sself->GetNumberOfPartitionedDataSets(); }
extern "C" void vtk_partitioned_data_set_collection_remove_partitioned_data_set(vtkNew<vtkPartitionedDataSetCollection> sself, unsigned int idx) { sself->RemovePartitionedDataSet(idx); }
extern "C" unsigned int vtk_partitioned_data_set_collection_get_number_of_partitions(vtkNew<vtkPartitionedDataSetCollection> sself, unsigned int idx) { return sself->GetNumberOfPartitions(idx); }
extern "C" void vtk_partitioned_data_set_collection_set_number_of_partitions(vtkNew<vtkPartitionedDataSetCollection> sself, unsigned int idx, unsigned int numPartitions) { sself->SetNumberOfPartitions(idx, numPartitions); }
extern "C" int vtk_partitioned_data_set_collection_has_meta_data(vtkNew<vtkPartitionedDataSetCollection> sself, unsigned int idx) { return sself->HasMetaData(idx); }
extern "C" unsigned int vtk_partitioned_data_set_collection_get_composite_index(vtkNew<vtkPartitionedDataSetCollection> sself, unsigned int idx) { return sself->GetCompositeIndex(idx); }
extern "C" unsigned int vtk_partitioned_data_set_collection_get_composite_index(vtkNew<vtkPartitionedDataSetCollection> sself, unsigned int idx, unsigned int partition) { return sself->GetCompositeIndex(idx, partition); }
extern "C" unsigned long vtk_partitioned_data_set_collection_get_m_time(vtkNew<vtkPartitionedDataSetCollection> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkPath > vtkPath_new () {return vtkNew < vtkPath > () ;}
extern "C" void vtkPath_destructor (vtkNew < vtkPath > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPath_get_ptr (vtkNew < vtkPath > sself) {return sself . GetPointer () ;}
extern "C" int vtk_path_get_data_object_type(vtkNew<vtkPath> sself) { return sself->GetDataObjectType(); }
extern "C" void vtk_path_insert_next_point(vtkNew<vtkPath> sself, float pts, int code) { sself->InsertNextPoint(pts, code); }
extern "C" void vtk_path_insert_next_point(vtkNew<vtkPath> sself, double pts, int code) { sself->InsertNextPoint(pts, code); }
extern "C" void vtk_path_insert_next_point(vtkNew<vtkPath> sself, double x, double y, double z, int code) { sself->InsertNextPoint(x, y, z, code); }
extern "C" long long vtk_path_get_number_of_cells(vtkNew<vtkPath> sself) { return sself->GetNumberOfCells(); }
extern "C" int vtk_path_get_max_cell_size(vtkNew<vtkPath> sself) { return sself->GetMaxCellSize(); }
extern "C" void vtk_path_allocate(vtkNew<vtkPath> sself, long long size, int extSize) { sself->Allocate(size, extSize); }
extern "C" void vtk_path_reset(vtkNew<vtkPath> sself) { sself->Reset(); }
extern "C" vtkNew < vtkPentagonalPrism > vtkPentagonalPrism_new () {return vtkNew < vtkPentagonalPrism > () ;}
extern "C" void vtkPentagonalPrism_destructor (vtkNew < vtkPentagonalPrism > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPentagonalPrism_get_ptr (vtkNew < vtkPentagonalPrism > sself) {return sself . GetPointer () ;}
extern "C" void vtk_pentagonal_prism_get_edge_points(vtkNew<vtkPentagonalPrism> sself, long long edgeId, const long long pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" void vtk_pentagonal_prism_get_edge_points(vtkNew<vtkPentagonalPrism> sself, int edgeId, int pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" long long vtk_pentagonal_prism_get_face_points(vtkNew<vtkPentagonalPrism> sself, long long faceId, const long long pts) { return sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_pentagonal_prism_get_face_points(vtkNew<vtkPentagonalPrism> sself, int faceId, int pts) { sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_pentagonal_prism_get_edge_to_adjacent_faces(vtkNew<vtkPentagonalPrism> sself, long long edgeId, const long long pts) { sself->GetEdgeToAdjacentFaces(edgeId, pts); }
extern "C" long long vtk_pentagonal_prism_get_face_to_adjacent_faces(vtkNew<vtkPentagonalPrism> sself, long long faceId, const long long faceIds) { return sself->GetFaceToAdjacentFaces(faceId, faceIds); }
extern "C" long long vtk_pentagonal_prism_get_point_to_incident_edges(vtkNew<vtkPentagonalPrism> sself, long long pointId, const long long edgeIds) { return sself->GetPointToIncidentEdges(pointId, edgeIds); }
extern "C" long long vtk_pentagonal_prism_get_point_to_incident_faces(vtkNew<vtkPentagonalPrism> sself, long long pointId, const long long faceIds) { return sself->GetPointToIncidentFaces(pointId, faceIds); }
extern "C" long long vtk_pentagonal_prism_get_point_to_one_ring_points(vtkNew<vtkPentagonalPrism> sself, long long pointId, const long long pts) { return sself->GetPointToOneRingPoints(pointId, pts); }
extern "C" bool vtk_pentagonal_prism_get_centroid(vtkNew<vtkPentagonalPrism> sself, double centroid) { return sself->GetCentroid(centroid); }
extern "C" int vtk_pentagonal_prism_get_cell_type(vtkNew<vtkPentagonalPrism> sself) { return sself->GetCellType(); }
extern "C" int vtk_pentagonal_prism_get_number_of_edges(vtkNew<vtkPentagonalPrism> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_pentagonal_prism_get_number_of_faces(vtkNew<vtkPentagonalPrism> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_pentagonal_prism_evaluate_position(vtkNew<vtkPentagonalPrism> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_pentagonal_prism_evaluate_location(vtkNew<vtkPentagonalPrism> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_pentagonal_prism_intersect_with_line(vtkNew<vtkPentagonalPrism> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_pentagonal_prism_derivatives(vtkNew<vtkPentagonalPrism> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_pentagonal_prism_get_parametric_center(vtkNew<vtkPentagonalPrism> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_pentagonal_prism_interpolation_functions(vtkNew<vtkPentagonalPrism> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_pentagonal_prism_interpolation_derivs(vtkNew<vtkPentagonalPrism> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_pentagonal_prism_interpolate_functions(vtkNew<vtkPentagonalPrism> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_pentagonal_prism_interpolate_derivs(vtkNew<vtkPentagonalPrism> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_pentagonal_prism_get_edge_array(vtkNew<vtkPentagonalPrism> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_pentagonal_prism_get_face_array(vtkNew<vtkPentagonalPrism> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" const long long* vtk_pentagonal_prism_get_edge_to_adjacent_faces_array(vtkNew<vtkPentagonalPrism> sself, long long edgeId) { return sself->GetEdgeToAdjacentFacesArray(edgeId); }
extern "C" const long long* vtk_pentagonal_prism_get_face_to_adjacent_faces_array(vtkNew<vtkPentagonalPrism> sself, long long faceId) { return sself->GetFaceToAdjacentFacesArray(faceId); }
extern "C" const long long* vtk_pentagonal_prism_get_point_to_incident_edges_array(vtkNew<vtkPentagonalPrism> sself, long long pointId) { return sself->GetPointToIncidentEdgesArray(pointId); }
extern "C" const long long* vtk_pentagonal_prism_get_point_to_incident_faces_array(vtkNew<vtkPentagonalPrism> sself, long long pointId) { return sself->GetPointToIncidentFacesArray(pointId); }
extern "C" const long long* vtk_pentagonal_prism_get_point_to_one_ring_points_array(vtkNew<vtkPentagonalPrism> sself, long long pointId) { return sself->GetPointToOneRingPointsArray(pointId); }
extern "C" void vtk_pentagonal_prism_jacobian_inverse(vtkNew<vtkPentagonalPrism> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkPerlinNoise > vtkPerlinNoise_new () {return vtkNew < vtkPerlinNoise > () ;}
extern "C" void vtkPerlinNoise_destructor (vtkNew < vtkPerlinNoise > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPerlinNoise_get_ptr (vtkNew < vtkPerlinNoise > sself) {return sself . GetPointer () ;}
extern "C" double vtk_perlin_noise_evaluate_function(vtkNew<vtkPerlinNoise> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_perlin_noise_evaluate_gradient(vtkNew<vtkPerlinNoise> sself, double x, double n) { sself->EvaluateGradient(x, n); }
extern "C" void vtk_perlin_noise_set_frequency(vtkNew<vtkPerlinNoise> sself, double _arg1, double _arg2, double _arg3) { sself->SetFrequency(_arg1, _arg2, _arg3); }
extern "C" void vtk_perlin_noise_set_frequency(vtkNew<vtkPerlinNoise> sself, const double _arg) { sself->SetFrequency(_arg); }
extern "C" double* vtk_perlin_noise_get_frequency(vtkNew<vtkPerlinNoise> sself) { return sself->GetFrequency(); }
extern "C" void vtk_perlin_noise_get_frequency(vtkNew<vtkPerlinNoise> sself, double data) { sself->GetFrequency(data); }
extern "C" void vtk_perlin_noise_set_phase(vtkNew<vtkPerlinNoise> sself, double _arg1, double _arg2, double _arg3) { sself->SetPhase(_arg1, _arg2, _arg3); }
extern "C" void vtk_perlin_noise_set_phase(vtkNew<vtkPerlinNoise> sself, const double _arg) { sself->SetPhase(_arg); }
extern "C" double* vtk_perlin_noise_get_phase(vtkNew<vtkPerlinNoise> sself) { return sself->GetPhase(); }
extern "C" void vtk_perlin_noise_get_phase(vtkNew<vtkPerlinNoise> sself, double data) { sself->GetPhase(data); }
extern "C" void vtk_perlin_noise_set_amplitude(vtkNew<vtkPerlinNoise> sself, double _arg) { sself->SetAmplitude(_arg); }
extern "C" double vtk_perlin_noise_get_amplitude(vtkNew<vtkPerlinNoise> sself) { return sself->GetAmplitude(); }
extern "C" vtkNew < vtkPiecewiseFunction > vtkPiecewiseFunction_new () {return vtkNew < vtkPiecewiseFunction > () ;}
extern "C" void vtkPiecewiseFunction_destructor (vtkNew < vtkPiecewiseFunction > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPiecewiseFunction_get_ptr (vtkNew < vtkPiecewiseFunction > sself) {return sself . GetPointer () ;}
extern "C" int vtk_piecewise_function_get_data_object_type(vtkNew<vtkPiecewiseFunction> sself) { return sself->GetDataObjectType(); }
extern "C" int vtk_piecewise_function_get_size(vtkNew<vtkPiecewiseFunction> sself) { return sself->GetSize(); }
extern "C" int vtk_piecewise_function_add_point(vtkNew<vtkPiecewiseFunction> sself, double x, double y) { return sself->AddPoint(x, y); }
extern "C" int vtk_piecewise_function_add_point(vtkNew<vtkPiecewiseFunction> sself, double x, double y, double midpoint, double sharpness) { return sself->AddPoint(x, y, midpoint, sharpness); }
extern "C" bool vtk_piecewise_function_remove_point_by_index(vtkNew<vtkPiecewiseFunction> sself, size_t id) { return sself->RemovePointByIndex(id); }
extern "C" int vtk_piecewise_function_remove_point(vtkNew<vtkPiecewiseFunction> sself, double x) { return sself->RemovePoint(x); }
extern "C" int vtk_piecewise_function_remove_point(vtkNew<vtkPiecewiseFunction> sself, double x, double y) { return sself->RemovePoint(x, y); }
extern "C" void vtk_piecewise_function_remove_all_points(vtkNew<vtkPiecewiseFunction> sself) { sself->RemoveAllPoints(); }
extern "C" void vtk_piecewise_function_add_segment(vtkNew<vtkPiecewiseFunction> sself, double x1, double y1, double x2, double y2) { sself->AddSegment(x1, y1, x2, y2); }
extern "C" double vtk_piecewise_function_get_value(vtkNew<vtkPiecewiseFunction> sself, double x) { return sself->GetValue(x); }
extern "C" int vtk_piecewise_function_get_node_value(vtkNew<vtkPiecewiseFunction> sself, int index, double val) { return sself->GetNodeValue(index, val); }
extern "C" int vtk_piecewise_function_set_node_value(vtkNew<vtkPiecewiseFunction> sself, int index, double val) { return sself->SetNodeValue(index, val); }
extern "C" double* vtk_piecewise_function_get_data_pointer(vtkNew<vtkPiecewiseFunction> sself) { return sself->GetDataPointer(); }
extern "C" void vtk_piecewise_function_fill_from_data_pointer(vtkNew<vtkPiecewiseFunction> sself, int p0, double p1) { sself->FillFromDataPointer(p0, p1); }
extern "C" double* vtk_piecewise_function_get_range(vtkNew<vtkPiecewiseFunction> sself) { return sself->GetRange(); }
extern "C" void vtk_piecewise_function_get_range(vtkNew<vtkPiecewiseFunction> sself, double _arg1, double _arg2) { sself->GetRange(_arg1, _arg2); }
extern "C" void vtk_piecewise_function_get_range(vtkNew<vtkPiecewiseFunction> sself, double _arg) { sself->GetRange(_arg); }
extern "C" int vtk_piecewise_function_adjust_range(vtkNew<vtkPiecewiseFunction> sself, double range) { return sself->AdjustRange(range); }
extern "C" void vtk_piecewise_function_get_table(vtkNew<vtkPiecewiseFunction> sself, double x1, double x2, int size, float table, int stride, int logIncrements) { sself->GetTable(x1, x2, size, table, stride, logIncrements); }
extern "C" void vtk_piecewise_function_get_table(vtkNew<vtkPiecewiseFunction> sself, double x1, double x2, int size, double table, int stride, int logIncrements) { sself->GetTable(x1, x2, size, table, stride, logIncrements); }
extern "C" void vtk_piecewise_function_build_function_from_table(vtkNew<vtkPiecewiseFunction> sself, double x1, double x2, int size, double table, int stride) { sself->BuildFunctionFromTable(x1, x2, size, table, stride); }
extern "C" void vtk_piecewise_function_set_clamping(vtkNew<vtkPiecewiseFunction> sself, int _arg) { sself->SetClamping(_arg); }
extern "C" int vtk_piecewise_function_get_clamping(vtkNew<vtkPiecewiseFunction> sself) { return sself->GetClamping(); }
extern "C" void vtk_piecewise_function_clamping_on(vtkNew<vtkPiecewiseFunction> sself) { sself->ClampingOn(); }
extern "C" void vtk_piecewise_function_clamping_off(vtkNew<vtkPiecewiseFunction> sself) { sself->ClampingOff(); }
extern "C" void vtk_piecewise_function_set_use_log_scale(vtkNew<vtkPiecewiseFunction> sself, bool _arg) { sself->SetUseLogScale(_arg); }
extern "C" bool vtk_piecewise_function_get_use_log_scale(vtkNew<vtkPiecewiseFunction> sself) { return sself->GetUseLogScale(); }
extern "C" void vtk_piecewise_function_use_log_scale_on(vtkNew<vtkPiecewiseFunction> sself) { sself->UseLogScaleOn(); }
extern "C" void vtk_piecewise_function_use_log_scale_off(vtkNew<vtkPiecewiseFunction> sself) { sself->UseLogScaleOff(); }
extern "C" const char* vtk_piecewise_function_get_type(vtkNew<vtkPiecewiseFunction> sself) { return sself->GetType(); }
extern "C" double vtk_piecewise_function_get_first_non_zero_value(vtkNew<vtkPiecewiseFunction> sself) { return sself->GetFirstNonZeroValue(); }
extern "C" void vtk_piecewise_function_initialize(vtkNew<vtkPiecewiseFunction> sself) { sself->Initialize(); }
extern "C" void vtk_piecewise_function_set_allow_duplicate_scalars(vtkNew<vtkPiecewiseFunction> sself, int _arg) { sself->SetAllowDuplicateScalars(_arg); }
extern "C" int vtk_piecewise_function_get_allow_duplicate_scalars(vtkNew<vtkPiecewiseFunction> sself) { return sself->GetAllowDuplicateScalars(); }
extern "C" void vtk_piecewise_function_allow_duplicate_scalars_on(vtkNew<vtkPiecewiseFunction> sself) { sself->AllowDuplicateScalarsOn(); }
extern "C" void vtk_piecewise_function_allow_duplicate_scalars_off(vtkNew<vtkPiecewiseFunction> sself) { sself->AllowDuplicateScalarsOff(); }
extern "C" int vtk_piecewise_function_estimate_min_number_of_samples(vtkNew<vtkPiecewiseFunction> sself, const double x1, const double x2) { return sself->EstimateMinNumberOfSamples(x1, x2); }
extern "C" vtkNew < vtkPixel > vtkPixel_new () {return vtkNew < vtkPixel > () ;}
extern "C" void vtkPixel_destructor (vtkNew < vtkPixel > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPixel_get_ptr (vtkNew < vtkPixel > sself) {return sself . GetPointer () ;}
extern "C" int vtk_pixel_get_cell_type(vtkNew<vtkPixel> sself) { return sself->GetCellType(); }
extern "C" int vtk_pixel_get_cell_dimension(vtkNew<vtkPixel> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_pixel_get_number_of_edges(vtkNew<vtkPixel> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_pixel_get_number_of_faces(vtkNew<vtkPixel> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_pixel_evaluate_position(vtkNew<vtkPixel> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_pixel_evaluate_location(vtkNew<vtkPixel> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_pixel_inflate(vtkNew<vtkPixel> sself, double dist) { return sself->Inflate(dist); }
extern "C" double vtk_pixel_compute_bounding_sphere(vtkNew<vtkPixel> sself, double center) { return sself->ComputeBoundingSphere(center); }
extern "C" int vtk_pixel_get_parametric_center(vtkNew<vtkPixel> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" int vtk_pixel_intersect_with_line(vtkNew<vtkPixel> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_pixel_derivatives(vtkNew<vtkPixel> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" void vtk_pixel_interpolation_functions(vtkNew<vtkPixel> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_pixel_interpolation_derivs(vtkNew<vtkPixel> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_pixel_interpolate_functions(vtkNew<vtkPixel> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_pixel_interpolate_derivs(vtkNew<vtkPixel> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" int vtk_pixel_compute_normal(vtkNew<vtkPixel> sself, double n) { return sself->ComputeNormal(n); }
extern "C" vtkNew < vtkPlane > vtkPlane_new () {return vtkNew < vtkPlane > () ;}
extern "C" void vtkPlane_destructor (vtkNew < vtkPlane > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPlane_get_ptr (vtkNew < vtkPlane > sself) {return sself . GetPointer () ;}
extern "C" double vtk_plane_evaluate_function(vtkNew<vtkPlane> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_plane_evaluate_gradient(vtkNew<vtkPlane> sself, double x, double g) { sself->EvaluateGradient(x, g); }
extern "C" void vtk_plane_set_normal(vtkNew<vtkPlane> sself, double _arg1, double _arg2, double _arg3) { sself->SetNormal(_arg1, _arg2, _arg3); }
extern "C" void vtk_plane_set_normal(vtkNew<vtkPlane> sself, const double _arg) { sself->SetNormal(_arg); }
extern "C" double* vtk_plane_get_normal(vtkNew<vtkPlane> sself) { return sself->GetNormal(); }
extern "C" void vtk_plane_get_normal(vtkNew<vtkPlane> sself, double data) { sself->GetNormal(data); }
extern "C" void vtk_plane_set_origin(vtkNew<vtkPlane> sself, double _arg1, double _arg2, double _arg3) { sself->SetOrigin(_arg1, _arg2, _arg3); }
extern "C" void vtk_plane_set_origin(vtkNew<vtkPlane> sself, const double _arg) { sself->SetOrigin(_arg); }
extern "C" double* vtk_plane_get_origin(vtkNew<vtkPlane> sself) { return sself->GetOrigin(); }
extern "C" void vtk_plane_get_origin(vtkNew<vtkPlane> sself, double data) { sself->GetOrigin(data); }
extern "C" void vtk_plane_push(vtkNew<vtkPlane> sself, double distance) { sself->Push(distance); }
extern "C" void vtk_plane_project_point(vtkNew<vtkPlane> sself, const double x, const double origin, const double normal, double xproj) { sself->ProjectPoint(x, origin, normal, xproj); }
extern "C" void vtk_plane_project_point(vtkNew<vtkPlane> sself, const double x, double xproj) { sself->ProjectPoint(x, xproj); }
extern "C" void vtk_plane_project_vector(vtkNew<vtkPlane> sself, const double v, const double origin, const double normal, double vproj) { sself->ProjectVector(v, origin, normal, vproj); }
extern "C" void vtk_plane_project_vector(vtkNew<vtkPlane> sself, const double v, double vproj) { sself->ProjectVector(v, vproj); }
extern "C" void vtk_plane_generalized_project_point(vtkNew<vtkPlane> sself, const double x, const double origin, const double normal, double xproj) { sself->GeneralizedProjectPoint(x, origin, normal, xproj); }
extern "C" void vtk_plane_generalized_project_point(vtkNew<vtkPlane> sself, const double x, double xproj) { sself->GeneralizedProjectPoint(x, xproj); }
extern "C" double vtk_plane_evaluate(vtkNew<vtkPlane> sself, double normal, double origin, double x) { return sself->Evaluate(normal, origin, x); }
extern "C" double vtk_plane_distance_to_plane(vtkNew<vtkPlane> sself, double x, double n, double p0) { return sself->DistanceToPlane(x, n, p0); }
extern "C" double vtk_plane_distance_to_plane(vtkNew<vtkPlane> sself, double x) { return sself->DistanceToPlane(x); }
extern "C" int vtk_plane_intersect_with_line(vtkNew<vtkPlane> sself, const double p1, const double p2, double n, double p0, double t, double x) { return sself->IntersectWithLine(p1, p2, n, p0, t, x); }
extern "C" int vtk_plane_intersect_with_line(vtkNew<vtkPlane> sself, const double p1, const double p2, double t, double x) { return sself->IntersectWithLine(p1, p2, t, x); }
extern "C" int vtk_plane_intersect_with_finite_plane(vtkNew<vtkPlane> sself, double n, double o, double pOrigin, double px, double py, double x0, double x1) { return sself->IntersectWithFinitePlane(n, o, pOrigin, px, py, x0, x1); }
extern "C" int vtk_plane_intersect_with_finite_plane(vtkNew<vtkPlane> sself, double pOrigin, double px, double py, double x0, double x1) { return sself->IntersectWithFinitePlane(pOrigin, px, py, x0, x1); }
extern "C" vtkNew < vtkPlaneCollection > vtkPlaneCollection_new () {return vtkNew < vtkPlaneCollection > () ;}
extern "C" void vtkPlaneCollection_destructor (vtkNew < vtkPlaneCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPlaneCollection_get_ptr (vtkNew < vtkPlaneCollection > sself) {return sself . GetPointer () ;}
extern "C" int vtk_plane_collection_get_number_of_items(vtkNew<vtkPlaneCollection> sself) { return sself->GetNumberOfItems(); }
extern "C" vtkNew < vtkPlanes > vtkPlanes_new () {return vtkNew < vtkPlanes > () ;}
extern "C" void vtkPlanes_destructor (vtkNew < vtkPlanes > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPlanes_get_ptr (vtkNew < vtkPlanes > sself) {return sself . GetPointer () ;}
extern "C" double vtk_planes_evaluate_function(vtkNew<vtkPlanes> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_planes_evaluate_gradient(vtkNew<vtkPlanes> sself, double x, double n) { sself->EvaluateGradient(x, n); }
extern "C" void vtk_planes_set_frustum_planes(vtkNew<vtkPlanes> sself, double planes) { sself->SetFrustumPlanes(planes); }
extern "C" void vtk_planes_set_bounds(vtkNew<vtkPlanes> sself, const double bounds) { sself->SetBounds(bounds); }
extern "C" void vtk_planes_set_bounds(vtkNew<vtkPlanes> sself, double xmin, double xmax, double ymin, double ymax, double zmin, double zmax) { sself->SetBounds(xmin, xmax, ymin, ymax, zmin, zmax); }
extern "C" int vtk_planes_get_number_of_planes(vtkNew<vtkPlanes> sself) { return sself->GetNumberOfPlanes(); }
extern "C" vtkNew < vtkPlanesIntersection > vtkPlanesIntersection_new () {return vtkNew < vtkPlanesIntersection > () ;}
extern "C" void vtkPlanesIntersection_destructor (vtkNew < vtkPlanesIntersection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPlanesIntersection_get_ptr (vtkNew < vtkPlanesIntersection > sself) {return sself . GetPointer () ;}
extern "C" void vtk_planes_intersection_set_region_vertices(vtkNew<vtkPlanesIntersection> sself, double v, int nvertices) { sself->SetRegionVertices(v, nvertices); }
extern "C" int vtk_planes_intersection_get_number_of_region_vertices(vtkNew<vtkPlanesIntersection> sself) { return sself->GetNumberOfRegionVertices(); }
extern "C" int vtk_planes_intersection_get_num_region_vertices(vtkNew<vtkPlanesIntersection> sself) { return sself->GetNumRegionVertices(); }
extern "C" int vtk_planes_intersection_get_region_vertices(vtkNew<vtkPlanesIntersection> sself, double v, int nvertices) { return sself->GetRegionVertices(v, nvertices); }
extern "C" vtkNew < vtkPointData > vtkPointData_new () {return vtkNew < vtkPointData > () ;}
extern "C" void vtkPointData_destructor (vtkNew < vtkPointData > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPointData_get_ptr (vtkNew < vtkPointData > sself) {return sself . GetPointer () ;}
extern "C" void vtk_point_data_null_point(vtkNew<vtkPointData> sself, long long ptId) { sself->NullPoint(ptId); }
extern "C" vtkNew < vtkPointLocator > vtkPointLocator_new () {return vtkNew < vtkPointLocator > () ;}
extern "C" void vtkPointLocator_destructor (vtkNew < vtkPointLocator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPointLocator_get_ptr (vtkNew < vtkPointLocator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_point_locator_set_divisions(vtkNew<vtkPointLocator> sself, int _arg1, int _arg2, int _arg3) { sself->SetDivisions(_arg1, _arg2, _arg3); }
extern "C" void vtk_point_locator_set_divisions(vtkNew<vtkPointLocator> sself, const int _arg) { sself->SetDivisions(_arg); }
extern "C" int* vtk_point_locator_get_divisions(vtkNew<vtkPointLocator> sself) { return sself->GetDivisions(); }
extern "C" void vtk_point_locator_get_divisions(vtkNew<vtkPointLocator> sself, int data) { sself->GetDivisions(data); }
extern "C" void vtk_point_locator_set_number_of_points_per_bucket(vtkNew<vtkPointLocator> sself, int _arg) { sself->SetNumberOfPointsPerBucket(_arg); }
extern "C" int vtk_point_locator_get_number_of_points_per_bucket_min_value(vtkNew<vtkPointLocator> sself) { return sself->GetNumberOfPointsPerBucketMinValue(); }
extern "C" int vtk_point_locator_get_number_of_points_per_bucket_max_value(vtkNew<vtkPointLocator> sself) { return sself->GetNumberOfPointsPerBucketMaxValue(); }
extern "C" int vtk_point_locator_get_number_of_points_per_bucket(vtkNew<vtkPointLocator> sself) { return sself->GetNumberOfPointsPerBucket(); }
extern "C" long long vtk_point_locator_find_closest_point(vtkNew<vtkPointLocator> sself, const double x) { return sself->FindClosestPoint(x); }
extern "C" long long vtk_point_locator_find_closest_point_within_radius(vtkNew<vtkPointLocator> sself, double radius, const double x, double dist2) { return sself->FindClosestPointWithinRadius(radius, x, dist2); }
extern "C" long long vtk_point_locator_find_closest_point_within_radius(vtkNew<vtkPointLocator> sself, double radius, const double x, double inputDataLength, double dist2) { return sself->FindClosestPointWithinRadius(radius, x, inputDataLength, dist2); }
extern "C" void vtk_point_locator_insert_point(vtkNew<vtkPointLocator> sself, long long ptId, const double x) { sself->InsertPoint(ptId, x); }
extern "C" long long vtk_point_locator_insert_next_point(vtkNew<vtkPointLocator> sself, const double x) { return sself->InsertNextPoint(x); }
extern "C" long long vtk_point_locator_is_inserted_point(vtkNew<vtkPointLocator> sself, double x, double y, double z) { return sself->IsInsertedPoint(x, y, z); }
extern "C" long long vtk_point_locator_is_inserted_point(vtkNew<vtkPointLocator> sself, const double x) { return sself->IsInsertedPoint(x); }
extern "C" int vtk_point_locator_insert_unique_point(vtkNew<vtkPointLocator> sself, const double x, long long ptId) { return sself->InsertUniquePoint(x, ptId); }
extern "C" long long vtk_point_locator_find_closest_inserted_point(vtkNew<vtkPointLocator> sself, const double x) { return sself->FindClosestInsertedPoint(x); }
extern "C" void vtk_point_locator_initialize(vtkNew<vtkPointLocator> sself) { sself->Initialize(); }
extern "C" void vtk_point_locator_free_search_structure(vtkNew<vtkPointLocator> sself) { sself->FreeSearchStructure(); }
extern "C" void vtk_point_locator_build_locator(vtkNew<vtkPointLocator> sself) { sself->BuildLocator(); }
extern "C" vtkNew < vtkPointSet > vtkPointSet_new () {return vtkNew < vtkPointSet > () ;}
extern "C" void vtkPointSet_destructor (vtkNew < vtkPointSet > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPointSet_get_ptr (vtkNew < vtkPointSet > sself) {return sself . GetPointer () ;}
extern "C" void vtk_point_set_set_editable(vtkNew<vtkPointSet> sself, bool _arg) { sself->SetEditable(_arg); }
extern "C" bool vtk_point_set_get_editable(vtkNew<vtkPointSet> sself) { return sself->GetEditable(); }
extern "C" void vtk_point_set_editable_on(vtkNew<vtkPointSet> sself) { sself->EditableOn(); }
extern "C" void vtk_point_set_editable_off(vtkNew<vtkPointSet> sself) { sself->EditableOff(); }
extern "C" void vtk_point_set_initialize(vtkNew<vtkPointSet> sself) { sself->Initialize(); }
extern "C" long long vtk_point_set_get_number_of_points(vtkNew<vtkPointSet> sself) { return sself->GetNumberOfPoints(); }
extern "C" void vtk_point_set_get_point(vtkNew<vtkPointSet> sself, long long ptId, double x) { sself->GetPoint(ptId, x); }
extern "C" long long vtk_point_set_find_point(vtkNew<vtkPointSet> sself, double x) { return sself->FindPoint(x); }
extern "C" long long vtk_point_set_get_number_of_cells(vtkNew<vtkPointSet> sself) { return sself->GetNumberOfCells(); }
extern "C" int vtk_point_set_get_max_cell_size(vtkNew<vtkPointSet> sself) { return sself->GetMaxCellSize(); }
extern "C" int vtk_point_set_get_cell_type(vtkNew<vtkPointSet> sself, long long p0) { return sself->GetCellType(p0); }
extern "C" double* vtk_point_set_get_point(vtkNew<vtkPointSet> sself, long long ptId) { return sself->GetPoint(ptId); }
extern "C" void vtk_point_set_build_point_locator(vtkNew<vtkPointSet> sself) { sself->BuildPointLocator(); }
extern "C" void vtk_point_set_build_locator(vtkNew<vtkPointSet> sself) { sself->BuildLocator(); }
extern "C" void vtk_point_set_build_cell_locator(vtkNew<vtkPointSet> sself) { sself->BuildCellLocator(); }
extern "C" unsigned long vtk_point_set_get_m_time(vtkNew<vtkPointSet> sself) { return sself->GetMTime(); }
extern "C" void vtk_point_set_compute_bounds(vtkNew<vtkPointSet> sself) { sself->ComputeBounds(); }
extern "C" void vtk_point_set_squeeze(vtkNew<vtkPointSet> sself) { sself->Squeeze(); }
extern "C" vtkNew < vtkPointSetCellIterator > vtkPointSetCellIterator_new () {return vtkNew < vtkPointSetCellIterator > () ;}
extern "C" void vtkPointSetCellIterator_destructor (vtkNew < vtkPointSetCellIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPointSetCellIterator_get_ptr (vtkNew < vtkPointSetCellIterator > sself) {return sself . GetPointer () ;}
extern "C" bool vtk_point_set_cell_iterator_is_done_with_traversal(vtkNew<vtkPointSetCellIterator> sself) { return sself->IsDoneWithTraversal(); }
extern "C" long long vtk_point_set_cell_iterator_get_cell_id(vtkNew<vtkPointSetCellIterator> sself) { return sself->GetCellId(); }
extern "C" vtkNew < vtkPointsProjectedHull > vtkPointsProjectedHull_new () {return vtkNew < vtkPointsProjectedHull > () ;}
extern "C" void vtkPointsProjectedHull_destructor (vtkNew < vtkPointsProjectedHull > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPointsProjectedHull_get_ptr (vtkNew < vtkPointsProjectedHull > sself) {return sself . GetPointer () ;}
extern "C" int vtk_points_projected_hull_rectangle_intersection_x(vtkNew<vtkPointsProjectedHull> sself, float ymin, float ymax, float zmin, float zmax) { return sself->RectangleIntersectionX(ymin, ymax, zmin, zmax); }
extern "C" int vtk_points_projected_hull_rectangle_intersection_x(vtkNew<vtkPointsProjectedHull> sself, double ymin, double ymax, double zmin, double zmax) { return sself->RectangleIntersectionX(ymin, ymax, zmin, zmax); }
extern "C" int vtk_points_projected_hull_rectangle_intersection_y(vtkNew<vtkPointsProjectedHull> sself, float zmin, float zmax, float xmin, float xmax) { return sself->RectangleIntersectionY(zmin, zmax, xmin, xmax); }
extern "C" int vtk_points_projected_hull_rectangle_intersection_y(vtkNew<vtkPointsProjectedHull> sself, double zmin, double zmax, double xmin, double xmax) { return sself->RectangleIntersectionY(zmin, zmax, xmin, xmax); }
extern "C" int vtk_points_projected_hull_rectangle_intersection_z(vtkNew<vtkPointsProjectedHull> sself, float xmin, float xmax, float ymin, float ymax) { return sself->RectangleIntersectionZ(xmin, xmax, ymin, ymax); }
extern "C" int vtk_points_projected_hull_rectangle_intersection_z(vtkNew<vtkPointsProjectedHull> sself, double xmin, double xmax, double ymin, double ymax) { return sself->RectangleIntersectionZ(xmin, xmax, ymin, ymax); }
extern "C" int vtk_points_projected_hull_get_ccw_hull_x(vtkNew<vtkPointsProjectedHull> sself, float pts, int len) { return sself->GetCCWHullX(pts, len); }
extern "C" int vtk_points_projected_hull_get_ccw_hull_x(vtkNew<vtkPointsProjectedHull> sself, double pts, int len) { return sself->GetCCWHullX(pts, len); }
extern "C" int vtk_points_projected_hull_get_ccw_hull_y(vtkNew<vtkPointsProjectedHull> sself, float pts, int len) { return sself->GetCCWHullY(pts, len); }
extern "C" int vtk_points_projected_hull_get_ccw_hull_y(vtkNew<vtkPointsProjectedHull> sself, double pts, int len) { return sself->GetCCWHullY(pts, len); }
extern "C" int vtk_points_projected_hull_get_ccw_hull_z(vtkNew<vtkPointsProjectedHull> sself, float pts, int len) { return sself->GetCCWHullZ(pts, len); }
extern "C" int vtk_points_projected_hull_get_ccw_hull_z(vtkNew<vtkPointsProjectedHull> sself, double pts, int len) { return sself->GetCCWHullZ(pts, len); }
extern "C" int vtk_points_projected_hull_get_size_ccw_hull_x(vtkNew<vtkPointsProjectedHull> sself) { return sself->GetSizeCCWHullX(); }
extern "C" int vtk_points_projected_hull_get_size_ccw_hull_y(vtkNew<vtkPointsProjectedHull> sself) { return sself->GetSizeCCWHullY(); }
extern "C" int vtk_points_projected_hull_get_size_ccw_hull_z(vtkNew<vtkPointsProjectedHull> sself) { return sself->GetSizeCCWHullZ(); }
extern "C" void vtk_points_projected_hull_update(vtkNew<vtkPointsProjectedHull> sself) { sself->Update(); }
extern "C" vtkNew < vtkPolyData > vtkPolyData_new () {return vtkNew < vtkPolyData > () ;}
extern "C" void vtkPolyData_destructor (vtkNew < vtkPolyData > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPolyData_get_ptr (vtkNew < vtkPolyData > sself) {return sself . GetPointer () ;}
extern "C" int vtk_poly_data_get_data_object_type(vtkNew<vtkPolyData> sself) { return sself->GetDataObjectType(); }
extern "C" long long vtk_poly_data_get_number_of_cells(vtkNew<vtkPolyData> sself) { return sself->GetNumberOfCells(); }
extern "C" int vtk_poly_data_get_cell_type(vtkNew<vtkPolyData> sself, long long cellId) { return sself->GetCellType(cellId); }
extern "C" void vtk_poly_data_compute_cells_bounds(vtkNew<vtkPolyData> sself) { sself->ComputeCellsBounds(); }
extern "C" void vtk_poly_data_get_cells_bounds(vtkNew<vtkPolyData> sself, double bounds) { sself->GetCellsBounds(bounds); }
extern "C" void vtk_poly_data_squeeze(vtkNew<vtkPolyData> sself) { sself->Squeeze(); }
extern "C" int vtk_poly_data_get_max_cell_size(vtkNew<vtkPolyData> sself) { return sself->GetMaxCellSize(); }
extern "C" long long vtk_poly_data_get_cell_id_relative_to_cell_array(vtkNew<vtkPolyData> sself, long long cellId) { return sself->GetCellIdRelativeToCellArray(cellId); }
extern "C" long long vtk_poly_data_get_number_of_verts(vtkNew<vtkPolyData> sself) { return sself->GetNumberOfVerts(); }
extern "C" long long vtk_poly_data_get_number_of_lines(vtkNew<vtkPolyData> sself) { return sself->GetNumberOfLines(); }
extern "C" long long vtk_poly_data_get_number_of_polys(vtkNew<vtkPolyData> sself) { return sself->GetNumberOfPolys(); }
extern "C" long long vtk_poly_data_get_number_of_strips(vtkNew<vtkPolyData> sself) { return sself->GetNumberOfStrips(); }
extern "C" bool vtk_poly_data_allocate_estimate(vtkNew<vtkPolyData> sself, long long numCells, long long maxCellSize) { return sself->AllocateEstimate(numCells, maxCellSize); }
extern "C" bool vtk_poly_data_allocate_estimate(vtkNew<vtkPolyData> sself, long long numVerts, long long maxVertSize, long long numLines, long long maxLineSize, long long numPolys, long long maxPolySize, long long numStrips, long long maxStripSize) { return sself->AllocateEstimate(numVerts, maxVertSize, numLines, maxLineSize, numPolys, maxPolySize, numStrips, maxStripSize); }
extern "C" bool vtk_poly_data_allocate_exact(vtkNew<vtkPolyData> sself, long long numCells, long long connectivitySize) { return sself->AllocateExact(numCells, connectivitySize); }
extern "C" bool vtk_poly_data_allocate_exact(vtkNew<vtkPolyData> sself, long long numVerts, long long vertConnSize, long long numLines, long long lineConnSize, long long numPolys, long long polyConnSize, long long numStrips, long long stripConnSize) { return sself->AllocateExact(numVerts, vertConnSize, numLines, lineConnSize, numPolys, polyConnSize, numStrips, stripConnSize); }
extern "C" void vtk_poly_data_allocate(vtkNew<vtkPolyData> sself, long long numCells, int extSize) { sself->Allocate(numCells, extSize); }
extern "C" long long vtk_poly_data_insert_next_cell(vtkNew<vtkPolyData> sself, int type, int npts, const long long pts) { return sself->InsertNextCell(type, npts, pts); }
extern "C" void vtk_poly_data_reset(vtkNew<vtkPolyData> sself) { sself->Reset(); }
extern "C" void vtk_poly_data_build_cells(vtkNew<vtkPolyData> sself) { sself->BuildCells(); }
extern "C" bool vtk_poly_data_need_to_build_cells(vtkNew<vtkPolyData> sself) { return sself->NeedToBuildCells(); }
extern "C" void vtk_poly_data_build_links(vtkNew<vtkPolyData> sself, int initialSize) { sself->BuildLinks(initialSize); }
extern "C" void vtk_poly_data_delete_cells(vtkNew<vtkPolyData> sself) { sself->DeleteCells(); }
extern "C" void vtk_poly_data_delete_links(vtkNew<vtkPolyData> sself) { sself->DeleteLinks(); }
extern "C" void vtk_poly_data_get_point_cells(vtkNew<vtkPolyData> sself, long long ptId, long long ncells, long long cells) { sself->GetPointCells(ptId, ncells, cells); }
extern "C" void vtk_poly_data_get_point_cells(vtkNew<vtkPolyData> sself, long long ptId, unsigned short ncells, long long cells) { sself->GetPointCells(ptId, ncells, cells); }
extern "C" unsigned char vtk_poly_data_get_cell_points(vtkNew<vtkPolyData> sself, long long cellId, long long npts, const long long pts) { return sself->GetCellPoints(cellId, npts, pts); }
extern "C" int vtk_poly_data_is_triangle(vtkNew<vtkPolyData> sself, int v1, int v2, int v3) { return sself->IsTriangle(v1, v2, v3); }
extern "C" int vtk_poly_data_is_edge(vtkNew<vtkPolyData> sself, long long p1, long long p2) { return sself->IsEdge(p1, p2); }
extern "C" int vtk_poly_data_is_point_used_by_cell(vtkNew<vtkPolyData> sself, long long ptId, long long cellId) { return sself->IsPointUsedByCell(ptId, cellId); }
extern "C" void vtk_poly_data_replace_cell(vtkNew<vtkPolyData> sself, long long cellId, int npts, const long long pts) { sself->ReplaceCell(cellId, npts, pts); }
extern "C" void vtk_poly_data_replace_cell_point(vtkNew<vtkPolyData> sself, long long cellId, long long oldPtId, long long newPtId) { sself->ReplaceCellPoint(cellId, oldPtId, newPtId); }
extern "C" void vtk_poly_data_reverse_cell(vtkNew<vtkPolyData> sself, long long cellId) { sself->ReverseCell(cellId); }
extern "C" void vtk_poly_data_delete_point(vtkNew<vtkPolyData> sself, long long ptId) { sself->DeletePoint(ptId); }
extern "C" void vtk_poly_data_delete_cell(vtkNew<vtkPolyData> sself, long long cellId) { sself->DeleteCell(cellId); }
extern "C" void vtk_poly_data_remove_deleted_cells(vtkNew<vtkPolyData> sself) { sself->RemoveDeletedCells(); }
extern "C" long long vtk_poly_data_insert_next_linked_point(vtkNew<vtkPolyData> sself, int numLinks) { return sself->InsertNextLinkedPoint(numLinks); }
extern "C" long long vtk_poly_data_insert_next_linked_point(vtkNew<vtkPolyData> sself, double x, int numLinks) { return sself->InsertNextLinkedPoint(x, numLinks); }
extern "C" long long vtk_poly_data_insert_next_linked_cell(vtkNew<vtkPolyData> sself, int type, int npts, const long long pts) { return sself->InsertNextLinkedCell(type, npts, pts); }
extern "C" void vtk_poly_data_replace_linked_cell(vtkNew<vtkPolyData> sself, long long cellId, int npts, const long long pts) { sself->ReplaceLinkedCell(cellId, npts, pts); }
extern "C" void vtk_poly_data_remove_cell_reference(vtkNew<vtkPolyData> sself, long long cellId) { sself->RemoveCellReference(cellId); }
extern "C" void vtk_poly_data_add_cell_reference(vtkNew<vtkPolyData> sself, long long cellId) { sself->AddCellReference(cellId); }
extern "C" void vtk_poly_data_remove_reference_to_cell(vtkNew<vtkPolyData> sself, long long ptId, long long cellId) { sself->RemoveReferenceToCell(ptId, cellId); }
extern "C" void vtk_poly_data_add_reference_to_cell(vtkNew<vtkPolyData> sself, long long ptId, long long cellId) { sself->AddReferenceToCell(ptId, cellId); }
extern "C" void vtk_poly_data_resize_cell_list(vtkNew<vtkPolyData> sself, long long ptId, int size) { sself->ResizeCellList(ptId, size); }
extern "C" void vtk_poly_data_initialize(vtkNew<vtkPolyData> sself) { sself->Initialize(); }
extern "C" int vtk_poly_data_get_piece(vtkNew<vtkPolyData> sself) { return sself->GetPiece(); }
extern "C" int vtk_poly_data_get_number_of_pieces(vtkNew<vtkPolyData> sself) { return sself->GetNumberOfPieces(); }
extern "C" int vtk_poly_data_get_ghost_level(vtkNew<vtkPolyData> sself) { return sself->GetGhostLevel(); }
extern "C" void vtk_poly_data_remove_ghost_cells(vtkNew<vtkPolyData> sself) { sself->RemoveGhostCells(); }
extern "C" int vtk_poly_data_get_scalar_field_critical_index(vtkNew<vtkPolyData> sself, long long pointId, int fieldId) { return sself->GetScalarFieldCriticalIndex(pointId, fieldId); }
extern "C" int vtk_poly_data_get_scalar_field_critical_index(vtkNew<vtkPolyData> sself, long long pointId, const char fieldName) { return sself->GetScalarFieldCriticalIndex(pointId, fieldName); }
extern "C" unsigned long vtk_poly_data_get_mesh_m_time(vtkNew<vtkPolyData> sself) { return sself->GetMeshMTime(); }
extern "C" unsigned long vtk_poly_data_get_m_time(vtkNew<vtkPolyData> sself) { return sself->GetMTime(); }
extern "C" unsigned char vtk_poly_data_get_cell(vtkNew<vtkPolyData> sself, long long cellId, const long long pts) { return sself->GetCell(cellId, pts); }
extern "C" vtkNew < vtkPolyDataCollection > vtkPolyDataCollection_new () {return vtkNew < vtkPolyDataCollection > () ;}
extern "C" void vtkPolyDataCollection_destructor (vtkNew < vtkPolyDataCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPolyDataCollection_get_ptr (vtkNew < vtkPolyDataCollection > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkPolyLine > vtkPolyLine_new () {return vtkNew < vtkPolyLine > () ;}
extern "C" void vtkPolyLine_destructor (vtkNew < vtkPolyLine > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPolyLine_get_ptr (vtkNew < vtkPolyLine > sself) {return sself . GetPointer () ;}
extern "C" int vtk_poly_line_get_cell_type(vtkNew<vtkPolyLine> sself) { return sself->GetCellType(); }
extern "C" int vtk_poly_line_get_cell_dimension(vtkNew<vtkPolyLine> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_poly_line_get_number_of_edges(vtkNew<vtkPolyLine> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_poly_line_get_number_of_faces(vtkNew<vtkPolyLine> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_poly_line_evaluate_position(vtkNew<vtkPolyLine> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_poly_line_evaluate_location(vtkNew<vtkPolyLine> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_poly_line_intersect_with_line(vtkNew<vtkPolyLine> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_poly_line_derivatives(vtkNew<vtkPolyLine> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_poly_line_get_parametric_center(vtkNew<vtkPolyLine> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" vtkNew < vtkPolyPlane > vtkPolyPlane_new () {return vtkNew < vtkPolyPlane > () ;}
extern "C" void vtkPolyPlane_destructor (vtkNew < vtkPolyPlane > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPolyPlane_get_ptr (vtkNew < vtkPolyPlane > sself) {return sself . GetPointer () ;}
extern "C" double vtk_poly_plane_evaluate_function(vtkNew<vtkPolyPlane> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_poly_plane_evaluate_gradient(vtkNew<vtkPolyPlane> sself, double x, double g) { sself->EvaluateGradient(x, g); }
extern "C" unsigned long vtk_poly_plane_get_m_time(vtkNew<vtkPolyPlane> sself) { return sself->GetMTime(); }
extern "C" vtkNew < vtkPolyVertex > vtkPolyVertex_new () {return vtkNew < vtkPolyVertex > () ;}
extern "C" void vtkPolyVertex_destructor (vtkNew < vtkPolyVertex > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPolyVertex_get_ptr (vtkNew < vtkPolyVertex > sself) {return sself . GetPointer () ;}
extern "C" int vtk_poly_vertex_get_cell_type(vtkNew<vtkPolyVertex> sself) { return sself->GetCellType(); }
extern "C" int vtk_poly_vertex_get_cell_dimension(vtkNew<vtkPolyVertex> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_poly_vertex_get_number_of_edges(vtkNew<vtkPolyVertex> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_poly_vertex_get_number_of_faces(vtkNew<vtkPolyVertex> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_poly_vertex_evaluate_position(vtkNew<vtkPolyVertex> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_poly_vertex_evaluate_location(vtkNew<vtkPolyVertex> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_poly_vertex_intersect_with_line(vtkNew<vtkPolyVertex> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_poly_vertex_derivatives(vtkNew<vtkPolyVertex> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_poly_vertex_get_parametric_center(vtkNew<vtkPolyVertex> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" vtkNew < vtkPolygon > vtkPolygon_new () {return vtkNew < vtkPolygon > () ;}
extern "C" void vtkPolygon_destructor (vtkNew < vtkPolygon > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPolygon_get_ptr (vtkNew < vtkPolygon > sself) {return sself . GetPointer () ;}
extern "C" int vtk_polygon_get_cell_type(vtkNew<vtkPolygon> sself) { return sself->GetCellType(); }
extern "C" int vtk_polygon_get_cell_dimension(vtkNew<vtkPolygon> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_polygon_get_number_of_edges(vtkNew<vtkPolygon> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_polygon_get_number_of_faces(vtkNew<vtkPolygon> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_polygon_evaluate_position(vtkNew<vtkPolygon> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_polygon_evaluate_location(vtkNew<vtkPolygon> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_polygon_intersect_with_line(vtkNew<vtkPolygon> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_polygon_derivatives(vtkNew<vtkPolygon> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" double vtk_polygon_compute_area(vtkNew<vtkPolygon> sself) { return sself->ComputeArea(); }
extern "C" void vtk_polygon_interpolate_functions(vtkNew<vtkPolygon> sself, const double x, double sf) { sself->InterpolateFunctions(x, sf); }
extern "C" void vtk_polygon_compute_normal(vtkNew<vtkPolygon> sself, int numPts, double pts, double n) { sself->ComputeNormal(numPts, pts, n); }
extern "C" bool vtk_polygon_is_convex(vtkNew<vtkPolygon> sself) { return sself->IsConvex(); }
extern "C" int vtk_polygon_parameterize_polygon(vtkNew<vtkPolygon> sself, double p0, double p10, double l10, double p20, double l20, double n) { return sself->ParameterizePolygon(p0, p10, l10, p20, l20, n); }
extern "C" int vtk_polygon_point_in_polygon(vtkNew<vtkPolygon> sself, double x, int numPts, double pts, double bounds, double n) { return sself->PointInPolygon(x, numPts, pts, bounds, n); }
extern "C" double vtk_polygon_distance_to_polygon(vtkNew<vtkPolygon> sself, double x, int numPts, double pts, double bounds, double closest) { return sself->DistanceToPolygon(x, numPts, pts, bounds, closest); }
extern "C" int vtk_polygon_intersect_polygon_with_polygon(vtkNew<vtkPolygon> sself, int npts, double pts, double bounds, int npts2, double pts2, double bounds2, double tol, double x) { return sself->IntersectPolygonWithPolygon(npts, pts, bounds, npts2, pts2, bounds2, tol, x); }
extern "C" bool vtk_polygon_get_use_mvc_interpolation(vtkNew<vtkPolygon> sself) { return sself->GetUseMVCInterpolation(); }
extern "C" void vtk_polygon_set_use_mvc_interpolation(vtkNew<vtkPolygon> sself, bool _arg) { sself->SetUseMVCInterpolation(_arg); }
extern "C" void vtk_polygon_set_tolerance(vtkNew<vtkPolygon> sself, double _arg) { sself->SetTolerance(_arg); }
extern "C" double vtk_polygon_get_tolerance_min_value(vtkNew<vtkPolygon> sself) { return sself->GetToleranceMinValue(); }
extern "C" double vtk_polygon_get_tolerance_max_value(vtkNew<vtkPolygon> sself) { return sself->GetToleranceMaxValue(); }
extern "C" double vtk_polygon_get_tolerance(vtkNew<vtkPolygon> sself) { return sself->GetTolerance(); }
extern "C" int vtk_polygon_ear_cut_triangulation(vtkNew<vtkPolygon> sself, int measure) { return sself->EarCutTriangulation(measure); }
extern "C" int vtk_polygon_unbiased_ear_cut_triangulation(vtkNew<vtkPolygon> sself, int seed, int measure) { return sself->UnbiasedEarCutTriangulation(seed, measure); }
extern "C" vtkNew < vtkPolyhedron > vtkPolyhedron_new () {return vtkNew < vtkPolyhedron > () ;}
extern "C" void vtkPolyhedron_destructor (vtkNew < vtkPolyhedron > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPolyhedron_get_ptr (vtkNew < vtkPolyhedron > sself) {return sself . GetPointer () ;}
extern "C" void vtk_polyhedron_get_edge_points(vtkNew<vtkPolyhedron> sself, long long edgeId, const long long pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" void vtk_polyhedron_get_edge_points(vtkNew<vtkPolyhedron> sself, int edgeId, int pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" long long vtk_polyhedron_get_face_points(vtkNew<vtkPolyhedron> sself, long long faceId, const long long pts) { return sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_polyhedron_get_face_points(vtkNew<vtkPolyhedron> sself, int faceId, int pts) { sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_polyhedron_get_edge_to_adjacent_faces(vtkNew<vtkPolyhedron> sself, long long edgeId, const long long pts) { sself->GetEdgeToAdjacentFaces(edgeId, pts); }
extern "C" long long vtk_polyhedron_get_face_to_adjacent_faces(vtkNew<vtkPolyhedron> sself, long long faceId, const long long faceIds) { return sself->GetFaceToAdjacentFaces(faceId, faceIds); }
extern "C" long long vtk_polyhedron_get_point_to_incident_edges(vtkNew<vtkPolyhedron> sself, long long pointId, const long long edgeIds) { return sself->GetPointToIncidentEdges(pointId, edgeIds); }
extern "C" long long vtk_polyhedron_get_point_to_incident_faces(vtkNew<vtkPolyhedron> sself, long long pointId, const long long faceIds) { return sself->GetPointToIncidentFaces(pointId, faceIds); }
extern "C" long long vtk_polyhedron_get_point_to_one_ring_points(vtkNew<vtkPolyhedron> sself, long long pointId, const long long pts) { return sself->GetPointToOneRingPoints(pointId, pts); }
extern "C" bool vtk_polyhedron_get_centroid(vtkNew<vtkPolyhedron> sself, double centroid) { return sself->GetCentroid(centroid); }
extern "C" double* vtk_polyhedron_get_parametric_coords(vtkNew<vtkPolyhedron> sself) { return sself->GetParametricCoords(); }
extern "C" int vtk_polyhedron_get_cell_type(vtkNew<vtkPolyhedron> sself) { return sself->GetCellType(); }
extern "C" int vtk_polyhedron_requires_initialization(vtkNew<vtkPolyhedron> sself) { return sself->RequiresInitialization(); }
extern "C" int vtk_polyhedron_get_number_of_edges(vtkNew<vtkPolyhedron> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_polyhedron_get_number_of_faces(vtkNew<vtkPolyhedron> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_polyhedron_evaluate_position(vtkNew<vtkPolyhedron> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_polyhedron_evaluate_location(vtkNew<vtkPolyhedron> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_polyhedron_intersect_with_line(vtkNew<vtkPolyhedron> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_polyhedron_derivatives(vtkNew<vtkPolyhedron> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_polyhedron_get_parametric_center(vtkNew<vtkPolyhedron> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" int vtk_polyhedron_is_primary_cell(vtkNew<vtkPolyhedron> sself) { return sself->IsPrimaryCell(); }
extern "C" void vtk_polyhedron_interpolate_functions(vtkNew<vtkPolyhedron> sself, const double x, double sf) { sself->InterpolateFunctions(x, sf); }
extern "C" void vtk_polyhedron_interpolate_derivs(vtkNew<vtkPolyhedron> sself, const double x, double derivs) { sself->InterpolateDerivs(x, derivs); }
extern "C" int vtk_polyhedron_requires_explicit_face_representation(vtkNew<vtkPolyhedron> sself) { return sself->RequiresExplicitFaceRepresentation(); }
extern "C" int vtk_polyhedron_is_inside(vtkNew<vtkPolyhedron> sself, const double x, double tolerance) { return sself->IsInside(x, tolerance); }
extern "C" bool vtk_polyhedron_is_convex(vtkNew<vtkPolyhedron> sself) { return sself->IsConvex(); }
extern "C" vtkNew < vtkPyramid > vtkPyramid_new () {return vtkNew < vtkPyramid > () ;}
extern "C" void vtkPyramid_destructor (vtkNew < vtkPyramid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkPyramid_get_ptr (vtkNew < vtkPyramid > sself) {return sself . GetPointer () ;}
extern "C" void vtk_pyramid_get_edge_points(vtkNew<vtkPyramid> sself, long long edgeId, const long long pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" void vtk_pyramid_get_edge_points(vtkNew<vtkPyramid> sself, int edgeId, int pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" long long vtk_pyramid_get_face_points(vtkNew<vtkPyramid> sself, long long faceId, const long long pts) { return sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_pyramid_get_face_points(vtkNew<vtkPyramid> sself, int faceId, int pts) { sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_pyramid_get_edge_to_adjacent_faces(vtkNew<vtkPyramid> sself, long long edgeId, const long long pts) { sself->GetEdgeToAdjacentFaces(edgeId, pts); }
extern "C" long long vtk_pyramid_get_face_to_adjacent_faces(vtkNew<vtkPyramid> sself, long long faceId, const long long faceIds) { return sself->GetFaceToAdjacentFaces(faceId, faceIds); }
extern "C" long long vtk_pyramid_get_point_to_incident_edges(vtkNew<vtkPyramid> sself, long long pointId, const long long edgeIds) { return sself->GetPointToIncidentEdges(pointId, edgeIds); }
extern "C" long long vtk_pyramid_get_point_to_incident_faces(vtkNew<vtkPyramid> sself, long long pointId, const long long faceIds) { return sself->GetPointToIncidentFaces(pointId, faceIds); }
extern "C" long long vtk_pyramid_get_point_to_one_ring_points(vtkNew<vtkPyramid> sself, long long pointId, const long long pts) { return sself->GetPointToOneRingPoints(pointId, pts); }
extern "C" bool vtk_pyramid_get_centroid(vtkNew<vtkPyramid> sself, double centroid) { return sself->GetCentroid(centroid); }
extern "C" int vtk_pyramid_get_cell_type(vtkNew<vtkPyramid> sself) { return sself->GetCellType(); }
extern "C" int vtk_pyramid_get_number_of_edges(vtkNew<vtkPyramid> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_pyramid_get_number_of_faces(vtkNew<vtkPyramid> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_pyramid_evaluate_position(vtkNew<vtkPyramid> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_pyramid_evaluate_location(vtkNew<vtkPyramid> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_pyramid_intersect_with_line(vtkNew<vtkPyramid> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_pyramid_derivatives(vtkNew<vtkPyramid> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int* vtk_pyramid_get_triangle_cases(vtkNew<vtkPyramid> sself, int caseId) { return sself->GetTriangleCases(caseId); }
extern "C" int vtk_pyramid_get_parametric_center(vtkNew<vtkPyramid> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_pyramid_interpolation_functions(vtkNew<vtkPyramid> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_pyramid_interpolation_derivs(vtkNew<vtkPyramid> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_pyramid_interpolate_functions(vtkNew<vtkPyramid> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_pyramid_interpolate_derivs(vtkNew<vtkPyramid> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" int vtk_pyramid_jacobian_inverse(vtkNew<vtkPyramid> sself, const double pcoords, double inverse, double derivs) { return sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" const long long* vtk_pyramid_get_edge_array(vtkNew<vtkPyramid> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_pyramid_get_face_array(vtkNew<vtkPyramid> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" const long long* vtk_pyramid_get_edge_to_adjacent_faces_array(vtkNew<vtkPyramid> sself, long long edgeId) { return sself->GetEdgeToAdjacentFacesArray(edgeId); }
extern "C" const long long* vtk_pyramid_get_face_to_adjacent_faces_array(vtkNew<vtkPyramid> sself, long long faceId) { return sself->GetFaceToAdjacentFacesArray(faceId); }
extern "C" const long long* vtk_pyramid_get_point_to_incident_edges_array(vtkNew<vtkPyramid> sself, long long pointId) { return sself->GetPointToIncidentEdgesArray(pointId); }
extern "C" const long long* vtk_pyramid_get_point_to_incident_faces_array(vtkNew<vtkPyramid> sself, long long pointId) { return sself->GetPointToIncidentFacesArray(pointId); }
extern "C" const long long* vtk_pyramid_get_point_to_one_ring_points_array(vtkNew<vtkPyramid> sself, long long pointId) { return sself->GetPointToOneRingPointsArray(pointId); }
extern "C" vtkNew < vtkQuad > vtkQuad_new () {return vtkNew < vtkQuad > () ;}
extern "C" void vtkQuad_destructor (vtkNew < vtkQuad > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuad_get_ptr (vtkNew < vtkQuad > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quad_get_cell_type(vtkNew<vtkQuad> sself) { return sself->GetCellType(); }
extern "C" int vtk_quad_get_cell_dimension(vtkNew<vtkQuad> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quad_get_number_of_edges(vtkNew<vtkQuad> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quad_get_number_of_faces(vtkNew<vtkQuad> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quad_evaluate_position(vtkNew<vtkQuad> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quad_evaluate_location(vtkNew<vtkQuad> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_quad_intersect_with_line(vtkNew<vtkQuad> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_quad_derivatives(vtkNew<vtkQuad> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_quad_get_parametric_center(vtkNew<vtkQuad> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_quad_interpolation_functions(vtkNew<vtkQuad> sself, const double pcoords, double sf) { sself->InterpolationFunctions(pcoords, sf); }
extern "C" void vtk_quad_interpolation_derivs(vtkNew<vtkQuad> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_quad_interpolate_functions(vtkNew<vtkQuad> sself, const double pcoords, double sf) { sself->InterpolateFunctions(pcoords, sf); }
extern "C" void vtk_quad_interpolate_derivs(vtkNew<vtkQuad> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_quad_get_edge_array(vtkNew<vtkQuad> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" vtkNew < vtkQuadraticEdge > vtkQuadraticEdge_new () {return vtkNew < vtkQuadraticEdge > () ;}
extern "C" void vtkQuadraticEdge_destructor (vtkNew < vtkQuadraticEdge > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadraticEdge_get_ptr (vtkNew < vtkQuadraticEdge > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quadratic_edge_get_cell_type(vtkNew<vtkQuadraticEdge> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadratic_edge_get_cell_dimension(vtkNew<vtkQuadraticEdge> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quadratic_edge_get_number_of_edges(vtkNew<vtkQuadraticEdge> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quadratic_edge_get_number_of_faces(vtkNew<vtkQuadraticEdge> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quadratic_edge_evaluate_position(vtkNew<vtkQuadraticEdge> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quadratic_edge_evaluate_location(vtkNew<vtkQuadraticEdge> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_quadratic_edge_derivatives(vtkNew<vtkQuadraticEdge> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_quadratic_edge_intersect_with_line(vtkNew<vtkQuadraticEdge> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_quadratic_edge_get_parametric_center(vtkNew<vtkQuadraticEdge> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_quadratic_edge_interpolation_functions(vtkNew<vtkQuadraticEdge> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_edge_interpolation_derivs(vtkNew<vtkQuadraticEdge> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_quadratic_edge_interpolate_functions(vtkNew<vtkQuadraticEdge> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_edge_interpolate_derivs(vtkNew<vtkQuadraticEdge> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" vtkNew < vtkQuadraticHexahedron > vtkQuadraticHexahedron_new () {return vtkNew < vtkQuadraticHexahedron > () ;}
extern "C" void vtkQuadraticHexahedron_destructor (vtkNew < vtkQuadraticHexahedron > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadraticHexahedron_get_ptr (vtkNew < vtkQuadraticHexahedron > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quadratic_hexahedron_get_cell_type(vtkNew<vtkQuadraticHexahedron> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadratic_hexahedron_get_cell_dimension(vtkNew<vtkQuadraticHexahedron> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quadratic_hexahedron_get_number_of_edges(vtkNew<vtkQuadraticHexahedron> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quadratic_hexahedron_get_number_of_faces(vtkNew<vtkQuadraticHexahedron> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quadratic_hexahedron_evaluate_position(vtkNew<vtkQuadraticHexahedron> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quadratic_hexahedron_evaluate_location(vtkNew<vtkQuadraticHexahedron> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_quadratic_hexahedron_derivatives(vtkNew<vtkQuadraticHexahedron> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_quadratic_hexahedron_intersect_with_line(vtkNew<vtkQuadraticHexahedron> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_quadratic_hexahedron_interpolation_functions(vtkNew<vtkQuadraticHexahedron> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_hexahedron_interpolation_derivs(vtkNew<vtkQuadraticHexahedron> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_quadratic_hexahedron_interpolate_functions(vtkNew<vtkQuadraticHexahedron> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_hexahedron_interpolate_derivs(vtkNew<vtkQuadraticHexahedron> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_quadratic_hexahedron_get_edge_array(vtkNew<vtkQuadraticHexahedron> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_quadratic_hexahedron_get_face_array(vtkNew<vtkQuadraticHexahedron> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" void vtk_quadratic_hexahedron_jacobian_inverse(vtkNew<vtkQuadraticHexahedron> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkQuadraticLinearQuad > vtkQuadraticLinearQuad_new () {return vtkNew < vtkQuadraticLinearQuad > () ;}
extern "C" void vtkQuadraticLinearQuad_destructor (vtkNew < vtkQuadraticLinearQuad > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadraticLinearQuad_get_ptr (vtkNew < vtkQuadraticLinearQuad > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quadratic_linear_quad_get_cell_type(vtkNew<vtkQuadraticLinearQuad> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadratic_linear_quad_get_cell_dimension(vtkNew<vtkQuadraticLinearQuad> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quadratic_linear_quad_get_number_of_edges(vtkNew<vtkQuadraticLinearQuad> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quadratic_linear_quad_get_number_of_faces(vtkNew<vtkQuadraticLinearQuad> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quadratic_linear_quad_evaluate_position(vtkNew<vtkQuadraticLinearQuad> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quadratic_linear_quad_evaluate_location(vtkNew<vtkQuadraticLinearQuad> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_quadratic_linear_quad_derivatives(vtkNew<vtkQuadraticLinearQuad> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_quadratic_linear_quad_intersect_with_line(vtkNew<vtkQuadraticLinearQuad> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_quadratic_linear_quad_get_parametric_center(vtkNew<vtkQuadraticLinearQuad> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_quadratic_linear_quad_interpolation_functions(vtkNew<vtkQuadraticLinearQuad> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_linear_quad_interpolation_derivs(vtkNew<vtkQuadraticLinearQuad> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_quadratic_linear_quad_interpolate_functions(vtkNew<vtkQuadraticLinearQuad> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_linear_quad_interpolate_derivs(vtkNew<vtkQuadraticLinearQuad> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" int* vtk_quadratic_linear_quad_get_edge_array(vtkNew<vtkQuadraticLinearQuad> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" vtkNew < vtkQuadraticLinearWedge > vtkQuadraticLinearWedge_new () {return vtkNew < vtkQuadraticLinearWedge > () ;}
extern "C" void vtkQuadraticLinearWedge_destructor (vtkNew < vtkQuadraticLinearWedge > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadraticLinearWedge_get_ptr (vtkNew < vtkQuadraticLinearWedge > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quadratic_linear_wedge_get_cell_type(vtkNew<vtkQuadraticLinearWedge> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadratic_linear_wedge_get_cell_dimension(vtkNew<vtkQuadraticLinearWedge> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quadratic_linear_wedge_get_number_of_edges(vtkNew<vtkQuadraticLinearWedge> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quadratic_linear_wedge_get_number_of_faces(vtkNew<vtkQuadraticLinearWedge> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quadratic_linear_wedge_evaluate_position(vtkNew<vtkQuadraticLinearWedge> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quadratic_linear_wedge_evaluate_location(vtkNew<vtkQuadraticLinearWedge> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_quadratic_linear_wedge_derivatives(vtkNew<vtkQuadraticLinearWedge> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_quadratic_linear_wedge_intersect_with_line(vtkNew<vtkQuadraticLinearWedge> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_quadratic_linear_wedge_get_parametric_center(vtkNew<vtkQuadraticLinearWedge> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_quadratic_linear_wedge_interpolation_functions(vtkNew<vtkQuadraticLinearWedge> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_linear_wedge_interpolation_derivs(vtkNew<vtkQuadraticLinearWedge> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_quadratic_linear_wedge_interpolate_functions(vtkNew<vtkQuadraticLinearWedge> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_linear_wedge_interpolate_derivs(vtkNew<vtkQuadraticLinearWedge> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_quadratic_linear_wedge_get_edge_array(vtkNew<vtkQuadraticLinearWedge> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_quadratic_linear_wedge_get_face_array(vtkNew<vtkQuadraticLinearWedge> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" void vtk_quadratic_linear_wedge_jacobian_inverse(vtkNew<vtkQuadraticLinearWedge> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkQuadraticPolygon > vtkQuadraticPolygon_new () {return vtkNew < vtkQuadraticPolygon > () ;}
extern "C" void vtkQuadraticPolygon_destructor (vtkNew < vtkQuadraticPolygon > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadraticPolygon_get_ptr (vtkNew < vtkQuadraticPolygon > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quadratic_polygon_get_cell_type(vtkNew<vtkQuadraticPolygon> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadratic_polygon_get_cell_dimension(vtkNew<vtkQuadraticPolygon> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quadratic_polygon_get_number_of_edges(vtkNew<vtkQuadraticPolygon> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quadratic_polygon_get_number_of_faces(vtkNew<vtkQuadraticPolygon> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quadratic_polygon_evaluate_position(vtkNew<vtkQuadraticPolygon> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quadratic_polygon_evaluate_location(vtkNew<vtkQuadraticPolygon> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_quadratic_polygon_intersect_with_line(vtkNew<vtkQuadraticPolygon> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_quadratic_polygon_interpolate_functions(vtkNew<vtkQuadraticPolygon> sself, const double x, double weights) { sself->InterpolateFunctions(x, weights); }
extern "C" int vtk_quadratic_polygon_parameterize_polygon(vtkNew<vtkQuadraticPolygon> sself, double p0, double p10, double l10, double p20, double l20, double n) { return sself->ParameterizePolygon(p0, p10, l10, p20, l20, n); }
extern "C" int vtk_quadratic_polygon_point_in_polygon(vtkNew<vtkQuadraticPolygon> sself, double x, int numPts, double pts, double bounds, double n) { return sself->PointInPolygon(x, numPts, pts, bounds, n); }
extern "C" double vtk_quadratic_polygon_distance_to_polygon(vtkNew<vtkQuadraticPolygon> sself, double x, int numPts, double pts, double bounds, double closest) { return sself->DistanceToPolygon(x, numPts, pts, bounds, closest); }
extern "C" int vtk_quadratic_polygon_intersect_polygon_with_polygon(vtkNew<vtkQuadraticPolygon> sself, int npts, double pts, double bounds, int npts2, double pts2, double bounds2, double tol, double x) { return sself->IntersectPolygonWithPolygon(npts, pts, bounds, npts2, pts2, bounds2, tol, x); }
extern "C" void vtk_quadratic_polygon_derivatives(vtkNew<vtkQuadraticPolygon> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" bool vtk_quadratic_polygon_get_use_mvc_interpolation(vtkNew<vtkQuadraticPolygon> sself) { return sself->GetUseMVCInterpolation(); }
extern "C" void vtk_quadratic_polygon_set_use_mvc_interpolation(vtkNew<vtkQuadraticPolygon> sself, bool _arg) { sself->SetUseMVCInterpolation(_arg); }
extern "C" vtkNew < vtkQuadraticPyramid > vtkQuadraticPyramid_new () {return vtkNew < vtkQuadraticPyramid > () ;}
extern "C" void vtkQuadraticPyramid_destructor (vtkNew < vtkQuadraticPyramid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadraticPyramid_get_ptr (vtkNew < vtkQuadraticPyramid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quadratic_pyramid_get_cell_type(vtkNew<vtkQuadraticPyramid> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadratic_pyramid_get_cell_dimension(vtkNew<vtkQuadraticPyramid> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quadratic_pyramid_get_number_of_edges(vtkNew<vtkQuadraticPyramid> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quadratic_pyramid_get_number_of_faces(vtkNew<vtkQuadraticPyramid> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quadratic_pyramid_evaluate_position(vtkNew<vtkQuadraticPyramid> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quadratic_pyramid_evaluate_location(vtkNew<vtkQuadraticPyramid> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_quadratic_pyramid_derivatives(vtkNew<vtkQuadraticPyramid> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_quadratic_pyramid_intersect_with_line(vtkNew<vtkQuadraticPyramid> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_quadratic_pyramid_get_parametric_center(vtkNew<vtkQuadraticPyramid> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_quadratic_pyramid_interpolation_functions(vtkNew<vtkQuadraticPyramid> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_pyramid_interpolation_derivs(vtkNew<vtkQuadraticPyramid> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_quadratic_pyramid_interpolate_functions(vtkNew<vtkQuadraticPyramid> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_pyramid_interpolate_derivs(vtkNew<vtkQuadraticPyramid> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_quadratic_pyramid_get_edge_array(vtkNew<vtkQuadraticPyramid> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_quadratic_pyramid_get_face_array(vtkNew<vtkQuadraticPyramid> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" void vtk_quadratic_pyramid_jacobian_inverse(vtkNew<vtkQuadraticPyramid> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkQuadraticQuad > vtkQuadraticQuad_new () {return vtkNew < vtkQuadraticQuad > () ;}
extern "C" void vtkQuadraticQuad_destructor (vtkNew < vtkQuadraticQuad > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadraticQuad_get_ptr (vtkNew < vtkQuadraticQuad > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quadratic_quad_get_cell_type(vtkNew<vtkQuadraticQuad> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadratic_quad_get_cell_dimension(vtkNew<vtkQuadraticQuad> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quadratic_quad_get_number_of_edges(vtkNew<vtkQuadraticQuad> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quadratic_quad_get_number_of_faces(vtkNew<vtkQuadraticQuad> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quadratic_quad_evaluate_position(vtkNew<vtkQuadraticQuad> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quadratic_quad_evaluate_location(vtkNew<vtkQuadraticQuad> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_quadratic_quad_derivatives(vtkNew<vtkQuadraticQuad> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_quadratic_quad_intersect_with_line(vtkNew<vtkQuadraticQuad> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_quadratic_quad_get_parametric_center(vtkNew<vtkQuadraticQuad> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_quadratic_quad_interpolation_functions(vtkNew<vtkQuadraticQuad> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_quad_interpolation_derivs(vtkNew<vtkQuadraticQuad> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_quadratic_quad_interpolate_functions(vtkNew<vtkQuadraticQuad> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_quad_interpolate_derivs(vtkNew<vtkQuadraticQuad> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" vtkNew < vtkQuadraticTetra > vtkQuadraticTetra_new () {return vtkNew < vtkQuadraticTetra > () ;}
extern "C" void vtkQuadraticTetra_destructor (vtkNew < vtkQuadraticTetra > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadraticTetra_get_ptr (vtkNew < vtkQuadraticTetra > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quadratic_tetra_get_cell_type(vtkNew<vtkQuadraticTetra> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadratic_tetra_get_cell_dimension(vtkNew<vtkQuadraticTetra> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quadratic_tetra_get_number_of_edges(vtkNew<vtkQuadraticTetra> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quadratic_tetra_get_number_of_faces(vtkNew<vtkQuadraticTetra> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quadratic_tetra_evaluate_position(vtkNew<vtkQuadraticTetra> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quadratic_tetra_evaluate_location(vtkNew<vtkQuadraticTetra> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_quadratic_tetra_derivatives(vtkNew<vtkQuadraticTetra> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_quadratic_tetra_intersect_with_line(vtkNew<vtkQuadraticTetra> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_quadratic_tetra_get_parametric_center(vtkNew<vtkQuadraticTetra> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" double vtk_quadratic_tetra_get_parametric_distance(vtkNew<vtkQuadraticTetra> sself, const double pcoords) { return sself->GetParametricDistance(pcoords); }
extern "C" void vtk_quadratic_tetra_interpolation_functions(vtkNew<vtkQuadraticTetra> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_tetra_interpolation_derivs(vtkNew<vtkQuadraticTetra> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_quadratic_tetra_interpolate_functions(vtkNew<vtkQuadraticTetra> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_tetra_interpolate_derivs(vtkNew<vtkQuadraticTetra> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_quadratic_tetra_get_edge_array(vtkNew<vtkQuadraticTetra> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_quadratic_tetra_get_face_array(vtkNew<vtkQuadraticTetra> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" void vtk_quadratic_tetra_jacobian_inverse(vtkNew<vtkQuadraticTetra> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkQuadraticTriangle > vtkQuadraticTriangle_new () {return vtkNew < vtkQuadraticTriangle > () ;}
extern "C" void vtkQuadraticTriangle_destructor (vtkNew < vtkQuadraticTriangle > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadraticTriangle_get_ptr (vtkNew < vtkQuadraticTriangle > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quadratic_triangle_get_cell_type(vtkNew<vtkQuadraticTriangle> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadratic_triangle_get_cell_dimension(vtkNew<vtkQuadraticTriangle> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quadratic_triangle_get_number_of_edges(vtkNew<vtkQuadraticTriangle> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quadratic_triangle_get_number_of_faces(vtkNew<vtkQuadraticTriangle> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quadratic_triangle_evaluate_position(vtkNew<vtkQuadraticTriangle> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quadratic_triangle_evaluate_location(vtkNew<vtkQuadraticTriangle> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_quadratic_triangle_derivatives(vtkNew<vtkQuadraticTriangle> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_quadratic_triangle_intersect_with_line(vtkNew<vtkQuadraticTriangle> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_quadratic_triangle_get_parametric_center(vtkNew<vtkQuadraticTriangle> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" double vtk_quadratic_triangle_get_parametric_distance(vtkNew<vtkQuadraticTriangle> sself, const double pcoords) { return sself->GetParametricDistance(pcoords); }
extern "C" void vtk_quadratic_triangle_interpolation_functions(vtkNew<vtkQuadraticTriangle> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_triangle_interpolation_derivs(vtkNew<vtkQuadraticTriangle> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_quadratic_triangle_interpolate_functions(vtkNew<vtkQuadraticTriangle> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_triangle_interpolate_derivs(vtkNew<vtkQuadraticTriangle> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" vtkNew < vtkQuadraticWedge > vtkQuadraticWedge_new () {return vtkNew < vtkQuadraticWedge > () ;}
extern "C" void vtkQuadraticWedge_destructor (vtkNew < vtkQuadraticWedge > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadraticWedge_get_ptr (vtkNew < vtkQuadraticWedge > sself) {return sself . GetPointer () ;}
extern "C" int vtk_quadratic_wedge_get_cell_type(vtkNew<vtkQuadraticWedge> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadratic_wedge_get_cell_dimension(vtkNew<vtkQuadraticWedge> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_quadratic_wedge_get_number_of_edges(vtkNew<vtkQuadraticWedge> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_quadratic_wedge_get_number_of_faces(vtkNew<vtkQuadraticWedge> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_quadratic_wedge_evaluate_position(vtkNew<vtkQuadraticWedge> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_quadratic_wedge_evaluate_location(vtkNew<vtkQuadraticWedge> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_quadratic_wedge_derivatives(vtkNew<vtkQuadraticWedge> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_quadratic_wedge_intersect_with_line(vtkNew<vtkQuadraticWedge> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_quadratic_wedge_get_parametric_center(vtkNew<vtkQuadraticWedge> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_quadratic_wedge_interpolation_functions(vtkNew<vtkQuadraticWedge> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_wedge_interpolation_derivs(vtkNew<vtkQuadraticWedge> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_quadratic_wedge_interpolate_functions(vtkNew<vtkQuadraticWedge> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_quadratic_wedge_interpolate_derivs(vtkNew<vtkQuadraticWedge> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_quadratic_wedge_get_edge_array(vtkNew<vtkQuadraticWedge> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_quadratic_wedge_get_face_array(vtkNew<vtkQuadraticWedge> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" void vtk_quadratic_wedge_jacobian_inverse(vtkNew<vtkQuadraticWedge> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkQuadratureSchemeDefinition > vtkQuadratureSchemeDefinition_new () {return vtkNew < vtkQuadratureSchemeDefinition > () ;}
extern "C" void vtkQuadratureSchemeDefinition_destructor (vtkNew < vtkQuadratureSchemeDefinition > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadratureSchemeDefinition_get_ptr (vtkNew < vtkQuadratureSchemeDefinition > sself) {return sself . GetPointer () ;}
extern "C" void vtk_quadrature_scheme_definition_clear(vtkNew<vtkQuadratureSchemeDefinition> sself) { sself->Clear(); }
extern "C" void vtk_quadrature_scheme_definition_initialize(vtkNew<vtkQuadratureSchemeDefinition> sself, int cellType, int numberOfNodes, int numberOfQuadraturePoints, double shapeFunctionWeights) { sself->Initialize(cellType, numberOfNodes, numberOfQuadraturePoints, shapeFunctionWeights); }
extern "C" void vtk_quadrature_scheme_definition_initialize(vtkNew<vtkQuadratureSchemeDefinition> sself, int cellType, int numberOfNodes, int numberOfQuadraturePoints, double shapeFunctionWeights, double quadratureWeights) { sself->Initialize(cellType, numberOfNodes, numberOfQuadraturePoints, shapeFunctionWeights, quadratureWeights); }
extern "C" int vtk_quadrature_scheme_definition_get_cell_type(vtkNew<vtkQuadratureSchemeDefinition> sself) { return sself->GetCellType(); }
extern "C" int vtk_quadrature_scheme_definition_get_quadrature_key(vtkNew<vtkQuadratureSchemeDefinition> sself) { return sself->GetQuadratureKey(); }
extern "C" int vtk_quadrature_scheme_definition_get_number_of_nodes(vtkNew<vtkQuadratureSchemeDefinition> sself) { return sself->GetNumberOfNodes(); }
extern "C" int vtk_quadrature_scheme_definition_get_number_of_quadrature_points(vtkNew<vtkQuadratureSchemeDefinition> sself) { return sself->GetNumberOfQuadraturePoints(); }
extern "C" const double* vtk_quadrature_scheme_definition_get_shape_function_weights(vtkNew<vtkQuadratureSchemeDefinition> sself) { return sself->GetShapeFunctionWeights(); }
extern "C" const double* vtk_quadrature_scheme_definition_get_shape_function_weights(vtkNew<vtkQuadratureSchemeDefinition> sself, int quadraturePointId) { return sself->GetShapeFunctionWeights(quadraturePointId); }
extern "C" const double* vtk_quadrature_scheme_definition_get_quadrature_weights(vtkNew<vtkQuadratureSchemeDefinition> sself) { return sself->GetQuadratureWeights(); }
extern "C" vtkNew < vtkQuadric > vtkQuadric_new () {return vtkNew < vtkQuadric > () ;}
extern "C" void vtkQuadric_destructor (vtkNew < vtkQuadric > sself) {sself . Reset () ; return ;}
extern "C" void * vtkQuadric_get_ptr (vtkNew < vtkQuadric > sself) {return sself . GetPointer () ;}
extern "C" double vtk_quadric_evaluate_function(vtkNew<vtkQuadric> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_quadric_evaluate_gradient(vtkNew<vtkQuadric> sself, double x, double g) { sself->EvaluateGradient(x, g); }
extern "C" void vtk_quadric_set_coefficients(vtkNew<vtkQuadric> sself, double a) { sself->SetCoefficients(a); }
extern "C" void vtk_quadric_set_coefficients(vtkNew<vtkQuadric> sself, double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9) { sself->SetCoefficients(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9); }
extern "C" double* vtk_quadric_get_coefficients(vtkNew<vtkQuadric> sself) { return sself->GetCoefficients(); }
extern "C" void vtk_quadric_get_coefficients(vtkNew<vtkQuadric> sself, double data) { sself->GetCoefficients(data); }
extern "C" vtkNew < vtkRectilinearGrid > vtkRectilinearGrid_new () {return vtkNew < vtkRectilinearGrid > () ;}
extern "C" void vtkRectilinearGrid_destructor (vtkNew < vtkRectilinearGrid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkRectilinearGrid_get_ptr (vtkNew < vtkRectilinearGrid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_rectilinear_grid_get_data_object_type(vtkNew<vtkRectilinearGrid> sself) { return sself->GetDataObjectType(); }
extern "C" void vtk_rectilinear_grid_initialize(vtkNew<vtkRectilinearGrid> sself) { sself->Initialize(); }
extern "C" long long vtk_rectilinear_grid_get_number_of_cells(vtkNew<vtkRectilinearGrid> sself) { return sself->GetNumberOfCells(); }
extern "C" long long vtk_rectilinear_grid_get_number_of_points(vtkNew<vtkRectilinearGrid> sself) { return sself->GetNumberOfPoints(); }
extern "C" double* vtk_rectilinear_grid_get_point(vtkNew<vtkRectilinearGrid> sself, long long ptId) { return sself->GetPoint(ptId); }
extern "C" long long vtk_rectilinear_grid_find_point(vtkNew<vtkRectilinearGrid> sself, double x) { return sself->FindPoint(x); }
extern "C" int vtk_rectilinear_grid_get_cell_type(vtkNew<vtkRectilinearGrid> sself, long long cellId) { return sself->GetCellType(cellId); }
extern "C" int vtk_rectilinear_grid_get_max_cell_size(vtkNew<vtkRectilinearGrid> sself) { return sself->GetMaxCellSize(); }
extern "C" unsigned char vtk_rectilinear_grid_is_point_visible(vtkNew<vtkRectilinearGrid> sself, long long ptId) { return sself->IsPointVisible(ptId); }
extern "C" unsigned char vtk_rectilinear_grid_is_cell_visible(vtkNew<vtkRectilinearGrid> sself, long long cellId) { return sself->IsCellVisible(cellId); }
extern "C" bool vtk_rectilinear_grid_has_any_blank_points(vtkNew<vtkRectilinearGrid> sself) { return sself->HasAnyBlankPoints(); }
extern "C" bool vtk_rectilinear_grid_has_any_blank_cells(vtkNew<vtkRectilinearGrid> sself) { return sself->HasAnyBlankCells(); }
extern "C" void vtk_rectilinear_grid_get_cell_dims(vtkNew<vtkRectilinearGrid> sself, int cellDims) { sself->GetCellDims(cellDims); }
extern "C" void vtk_rectilinear_grid_set_dimensions(vtkNew<vtkRectilinearGrid> sself, int i, int j, int k) { sself->SetDimensions(i, j, k); }
extern "C" void vtk_rectilinear_grid_set_dimensions(vtkNew<vtkRectilinearGrid> sself, const int dim) { sself->SetDimensions(dim); }
extern "C" int* vtk_rectilinear_grid_get_dimensions(vtkNew<vtkRectilinearGrid> sself) { return sself->GetDimensions(); }
extern "C" void vtk_rectilinear_grid_get_dimensions(vtkNew<vtkRectilinearGrid> sself, int data) { sself->GetDimensions(data); }
extern "C" int vtk_rectilinear_grid_get_data_dimension(vtkNew<vtkRectilinearGrid> sself) { return sself->GetDataDimension(); }
extern "C" int vtk_rectilinear_grid_compute_structured_coordinates(vtkNew<vtkRectilinearGrid> sself, double x, int ijk, double pcoords) { return sself->ComputeStructuredCoordinates(x, ijk, pcoords); }
extern "C" long long vtk_rectilinear_grid_compute_point_id(vtkNew<vtkRectilinearGrid> sself, int ijk) { return sself->ComputePointId(ijk); }
extern "C" long long vtk_rectilinear_grid_compute_cell_id(vtkNew<vtkRectilinearGrid> sself, int ijk) { return sself->ComputeCellId(ijk); }
extern "C" void vtk_rectilinear_grid_get_point(vtkNew<vtkRectilinearGrid> sself, const int i, const int j, const int k, double p) { sself->GetPoint(i, j, k, p); }
extern "C" void vtk_rectilinear_grid_set_extent(vtkNew<vtkRectilinearGrid> sself, int extent) { sself->SetExtent(extent); }
extern "C" void vtk_rectilinear_grid_set_extent(vtkNew<vtkRectilinearGrid> sself, int xMin, int xMax, int yMin, int yMax, int zMin, int zMax) { sself->SetExtent(xMin, xMax, yMin, yMax, zMin, zMax); }
extern "C" int* vtk_rectilinear_grid_get_extent(vtkNew<vtkRectilinearGrid> sself) { return sself->GetExtent(); }
extern "C" void vtk_rectilinear_grid_get_extent(vtkNew<vtkRectilinearGrid> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->GetExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_rectilinear_grid_get_extent(vtkNew<vtkRectilinearGrid> sself, int _arg) { sself->GetExtent(_arg); }
extern "C" int vtk_rectilinear_grid_get_extent_type(vtkNew<vtkRectilinearGrid> sself) { return sself->GetExtentType(); }
extern "C" void vtk_rectilinear_grid_crop(vtkNew<vtkRectilinearGrid> sself, const int updateExtent) { sself->Crop(updateExtent); }
extern "C" int vtk_rectilinear_grid_get_scalar_type(vtkNew<vtkRectilinearGrid> sself) { return sself->GetScalarType(); }
extern "C" const char* vtk_rectilinear_grid_get_scalar_type_as_string(vtkNew<vtkRectilinearGrid> sself) { return sself->GetScalarTypeAsString(); }
extern "C" int vtk_rectilinear_grid_get_number_of_scalar_components(vtkNew<vtkRectilinearGrid> sself) { return sself->GetNumberOfScalarComponents(); }
extern "C" vtkNew < vtkReebGraph > vtkReebGraph_new () {return vtkNew < vtkReebGraph > () ;}
extern "C" void vtkReebGraph_destructor (vtkNew < vtkReebGraph > sself) {sself . Reset () ; return ;}
extern "C" void * vtkReebGraph_get_ptr (vtkNew < vtkReebGraph > sself) {return sself . GetPointer () ;}
extern "C" int vtk_reeb_graph_stream_triangle(vtkNew<vtkReebGraph> sself, long long vertex0Id, double scalar0, long long vertex1Id, double scalar1, long long vertex2Id, double scalar2) { return sself->StreamTriangle(vertex0Id, scalar0, vertex1Id, scalar1, vertex2Id, scalar2); }
extern "C" int vtk_reeb_graph_stream_tetrahedron(vtkNew<vtkReebGraph> sself, long long vertex0Id, double scalar0, long long vertex1Id, double scalar1, long long vertex2Id, double scalar2, long long vertex3Id, double scalar3) { return sself->StreamTetrahedron(vertex0Id, scalar0, vertex1Id, scalar1, vertex2Id, scalar2, vertex3Id, scalar3); }
extern "C" void vtk_reeb_graph_close_stream(vtkNew<vtkReebGraph> sself) { sself->CloseStream(); }
extern "C" vtkNew < vtkReebGraphSimplificationMetric > vtkReebGraphSimplificationMetric_new () {return vtkNew < vtkReebGraphSimplificationMetric > () ;}
extern "C" void vtkReebGraphSimplificationMetric_destructor (vtkNew < vtkReebGraphSimplificationMetric > sself) {sself . Reset () ; return ;}
extern "C" void * vtkReebGraphSimplificationMetric_get_ptr (vtkNew < vtkReebGraphSimplificationMetric > sself) {return sself . GetPointer () ;}
extern "C" void vtk_reeb_graph_simplification_metric_set_lower_bound(vtkNew<vtkReebGraphSimplificationMetric> sself, double _arg) { sself->SetLowerBound(_arg); }
extern "C" double vtk_reeb_graph_simplification_metric_get_lower_bound(vtkNew<vtkReebGraphSimplificationMetric> sself) { return sself->GetLowerBound(); }
extern "C" void vtk_reeb_graph_simplification_metric_set_upper_bound(vtkNew<vtkReebGraphSimplificationMetric> sself, double _arg) { sself->SetUpperBound(_arg); }
extern "C" double vtk_reeb_graph_simplification_metric_get_upper_bound(vtkNew<vtkReebGraphSimplificationMetric> sself) { return sself->GetUpperBound(); }
extern "C" vtkNew < vtkSelection > vtkSelection_new () {return vtkNew < vtkSelection > () ;}
extern "C" void vtkSelection_destructor (vtkNew < vtkSelection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSelection_get_ptr (vtkNew < vtkSelection > sself) {return sself . GetPointer () ;}
extern "C" int vtk_selection_get_data_object_type(vtkNew<vtkSelection> sself) { return sself->GetDataObjectType(); }
extern "C" unsigned int vtk_selection_get_number_of_nodes(vtkNew<vtkSelection> sself) { return sself->GetNumberOfNodes(); }
extern "C" const char* vtk_selection_get_node_name_at_index(vtkNew<vtkSelection> sself, unsigned int idx) { return sself->GetNodeNameAtIndex(idx); }
extern "C" void vtk_selection_remove_node(vtkNew<vtkSelection> sself, unsigned int idx) { sself->RemoveNode(idx); }
extern "C" void vtk_selection_remove_node(vtkNew<vtkSelection> sself, const char* name) { sself->RemoveNode(name); }
extern "C" void vtk_selection_remove_all_nodes(vtkNew<vtkSelection> sself) { sself->RemoveAllNodes(); }
extern "C" void vtk_selection_set_expression(vtkNew<vtkSelection> sself, const char* _arg) { sself->SetExpression(_arg); }
extern "C" const char* vtk_selection_get_expression(vtkNew<vtkSelection> sself) { return sself->GetExpression(); }
extern "C" unsigned long vtk_selection_get_m_time(vtkNew<vtkSelection> sself) { return sself->GetMTime(); }
extern "C" void vtk_selection_dump(vtkNew<vtkSelection> sself) { sself->Dump(); }
extern "C" vtkNew < vtkSelectionNode > vtkSelectionNode_new () {return vtkNew < vtkSelectionNode > () ;}
extern "C" void vtkSelectionNode_destructor (vtkNew < vtkSelectionNode > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSelectionNode_get_ptr (vtkNew < vtkSelectionNode > sself) {return sself . GetPointer () ;}
extern "C" void vtk_selection_node_initialize(vtkNew<vtkSelectionNode> sself) { sself->Initialize(); }
extern "C" unsigned long vtk_selection_node_get_m_time(vtkNew<vtkSelectionNode> sself) { return sself->GetMTime(); }
extern "C" void vtk_selection_node_set_content_type(vtkNew<vtkSelectionNode> sself, int type) { sself->SetContentType(type); }
extern "C" int vtk_selection_node_get_content_type(vtkNew<vtkSelectionNode> sself) { return sself->GetContentType(); }
extern "C" const char* vtk_selection_node_get_content_type_as_string(vtkNew<vtkSelectionNode> sself, int type) { return sself->GetContentTypeAsString(type); }
extern "C" void vtk_selection_node_set_field_type(vtkNew<vtkSelectionNode> sself, int type) { sself->SetFieldType(type); }
extern "C" int vtk_selection_node_get_field_type(vtkNew<vtkSelectionNode> sself) { return sself->GetFieldType(); }
extern "C" const char* vtk_selection_node_get_field_type_as_string(vtkNew<vtkSelectionNode> sself, int type) { return sself->GetFieldTypeAsString(type); }
extern "C" int vtk_selection_node_get_field_type_from_string(vtkNew<vtkSelectionNode> sself, const char type) { return sself->GetFieldTypeFromString(type); }
extern "C" int vtk_selection_node_convert_selection_field_to_attribute_type(vtkNew<vtkSelectionNode> sself, int val) { return sself->ConvertSelectionFieldToAttributeType(val); }
extern "C" int vtk_selection_node_convert_attribute_type_to_selection_field(vtkNew<vtkSelectionNode> sself, int val) { return sself->ConvertAttributeTypeToSelectionField(val); }
extern "C" void vtk_selection_node_set_query_string(vtkNew<vtkSelectionNode> sself, const char _arg) { sself->SetQueryString(_arg); }
extern "C" char* vtk_selection_node_get_query_string(vtkNew<vtkSelectionNode> sself) { return sself->GetQueryString(); }
extern "C" vtkNew < vtkSimpleCellTessellator > vtkSimpleCellTessellator_new () {return vtkNew < vtkSimpleCellTessellator > () ;}
extern "C" void vtkSimpleCellTessellator_destructor (vtkNew < vtkSimpleCellTessellator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSimpleCellTessellator_get_ptr (vtkNew < vtkSimpleCellTessellator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_simple_cell_tessellator_reset(vtkNew<vtkSimpleCellTessellator> sself) { sself->Reset(); }
extern "C" int vtk_simple_cell_tessellator_get_fixed_subdivisions(vtkNew<vtkSimpleCellTessellator> sself) { return sself->GetFixedSubdivisions(); }
extern "C" int vtk_simple_cell_tessellator_get_max_subdivision_level(vtkNew<vtkSimpleCellTessellator> sself) { return sself->GetMaxSubdivisionLevel(); }
extern "C" int vtk_simple_cell_tessellator_get_max_adaptive_subdivisions(vtkNew<vtkSimpleCellTessellator> sself) { return sself->GetMaxAdaptiveSubdivisions(); }
extern "C" void vtk_simple_cell_tessellator_set_fixed_subdivisions(vtkNew<vtkSimpleCellTessellator> sself, int level) { sself->SetFixedSubdivisions(level); }
extern "C" void vtk_simple_cell_tessellator_set_max_subdivision_level(vtkNew<vtkSimpleCellTessellator> sself, int level) { sself->SetMaxSubdivisionLevel(level); }
extern "C" void vtk_simple_cell_tessellator_set_subdivision_levels(vtkNew<vtkSimpleCellTessellator> sself, int fixed, int maxLevel) { sself->SetSubdivisionLevels(fixed, maxLevel); }
extern "C" vtkNew < vtkSmoothErrorMetric > vtkSmoothErrorMetric_new () {return vtkNew < vtkSmoothErrorMetric > () ;}
extern "C" void vtkSmoothErrorMetric_destructor (vtkNew < vtkSmoothErrorMetric > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSmoothErrorMetric_get_ptr (vtkNew < vtkSmoothErrorMetric > sself) {return sself . GetPointer () ;}
extern "C" double vtk_smooth_error_metric_get_angle_tolerance(vtkNew<vtkSmoothErrorMetric> sself) { return sself->GetAngleTolerance(); }
extern "C" void vtk_smooth_error_metric_set_angle_tolerance(vtkNew<vtkSmoothErrorMetric> sself, double value) { sself->SetAngleTolerance(value); }
extern "C" int vtk_smooth_error_metric_requires_edge_subdivision(vtkNew<vtkSmoothErrorMetric> sself, double leftPoint, double midPoint, double rightPoint, double alpha) { return sself->RequiresEdgeSubdivision(leftPoint, midPoint, rightPoint, alpha); }
extern "C" double vtk_smooth_error_metric_get_error(vtkNew<vtkSmoothErrorMetric> sself, double leftPoint, double midPoint, double rightPoint, double alpha) { return sself->GetError(leftPoint, midPoint, rightPoint, alpha); }
extern "C" vtkNew < vtkSortFieldData > vtkSortFieldData_new () {return vtkNew < vtkSortFieldData > () ;}
extern "C" void vtkSortFieldData_destructor (vtkNew < vtkSortFieldData > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSortFieldData_get_ptr (vtkNew < vtkSortFieldData > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkSphere > vtkSphere_new () {return vtkNew < vtkSphere > () ;}
extern "C" void vtkSphere_destructor (vtkNew < vtkSphere > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSphere_get_ptr (vtkNew < vtkSphere > sself) {return sself . GetPointer () ;}
extern "C" double vtk_sphere_evaluate_function(vtkNew<vtkSphere> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_sphere_evaluate_gradient(vtkNew<vtkSphere> sself, double x, double n) { sself->EvaluateGradient(x, n); }
extern "C" void vtk_sphere_set_radius(vtkNew<vtkSphere> sself, double _arg) { sself->SetRadius(_arg); }
extern "C" double vtk_sphere_get_radius(vtkNew<vtkSphere> sself) { return sself->GetRadius(); }
extern "C" void vtk_sphere_set_center(vtkNew<vtkSphere> sself, double _arg1, double _arg2, double _arg3) { sself->SetCenter(_arg1, _arg2, _arg3); }
extern "C" void vtk_sphere_set_center(vtkNew<vtkSphere> sself, const double _arg) { sself->SetCenter(_arg); }
extern "C" double* vtk_sphere_get_center(vtkNew<vtkSphere> sself) { return sself->GetCenter(); }
extern "C" void vtk_sphere_get_center(vtkNew<vtkSphere> sself, double data) { sself->GetCenter(data); }
extern "C" double vtk_sphere_evaluate(vtkNew<vtkSphere> sself, double center, double R, double x) { return sself->Evaluate(center, R, x); }
extern "C" void vtk_sphere_compute_bounding_sphere(vtkNew<vtkSphere> sself, float pts, long long numPts, float sphere, long long hints) { sself->ComputeBoundingSphere(pts, numPts, sphere, hints); }
extern "C" void vtk_sphere_compute_bounding_sphere(vtkNew<vtkSphere> sself, double pts, long long numPts, double sphere, long long hints) { sself->ComputeBoundingSphere(pts, numPts, sphere, hints); }
extern "C" void vtk_sphere_compute_bounding_sphere(vtkNew<vtkSphere> sself, float spheres, long long numSpheres, float sphere, long long hints) { sself->ComputeBoundingSphere(spheres, numSpheres, sphere, hints); }
extern "C" void vtk_sphere_compute_bounding_sphere(vtkNew<vtkSphere> sself, double spheres, long long numSpheres, double sphere, long long hints) { sself->ComputeBoundingSphere(spheres, numSpheres, sphere, hints); }
extern "C" vtkNew < vtkSpheres > vtkSpheres_new () {return vtkNew < vtkSpheres > () ;}
extern "C" void vtkSpheres_destructor (vtkNew < vtkSpheres > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSpheres_get_ptr (vtkNew < vtkSpheres > sself) {return sself . GetPointer () ;}
extern "C" double vtk_spheres_evaluate_function(vtkNew<vtkSpheres> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_spheres_evaluate_gradient(vtkNew<vtkSpheres> sself, double x, double n) { sself->EvaluateGradient(x, n); }
extern "C" int vtk_spheres_get_number_of_spheres(vtkNew<vtkSpheres> sself) { return sself->GetNumberOfSpheres(); }
extern "C" vtkNew < vtkStaticCellLinks > vtkStaticCellLinks_new () {return vtkNew < vtkStaticCellLinks > () ;}
extern "C" void vtkStaticCellLinks_destructor (vtkNew < vtkStaticCellLinks > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStaticCellLinks_get_ptr (vtkNew < vtkStaticCellLinks > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_static_cell_links_get_number_of_cells(vtkNew<vtkStaticCellLinks> sself, long long ptId) { return sself->GetNumberOfCells(ptId); }
extern "C" long long vtk_static_cell_links_get_ncells(vtkNew<vtkStaticCellLinks> sself, long long ptId) { return sself->GetNcells(ptId); }
extern "C" long long* vtk_static_cell_links_get_cells(vtkNew<vtkStaticCellLinks> sself, long long ptId) { return sself->GetCells(ptId); }
extern "C" void vtk_static_cell_links_select_cells(vtkNew<vtkStaticCellLinks> sself, long long minMaxDegree, unsigned char cellSelection) { sself->SelectCells(minMaxDegree, cellSelection); }
extern "C" void vtk_static_cell_links_initialize(vtkNew<vtkStaticCellLinks> sself) { sself->Initialize(); }
extern "C" void vtk_static_cell_links_squeeze(vtkNew<vtkStaticCellLinks> sself) { sself->Squeeze(); }
extern "C" void vtk_static_cell_links_reset(vtkNew<vtkStaticCellLinks> sself) { sself->Reset(); }
extern "C" unsigned long vtk_static_cell_links_get_actual_memory_size(vtkNew<vtkStaticCellLinks> sself) { return sself->GetActualMemorySize(); }
extern "C" vtkNew < vtkStaticCellLocator > vtkStaticCellLocator_new () {return vtkNew < vtkStaticCellLocator > () ;}
extern "C" void vtkStaticCellLocator_destructor (vtkNew < vtkStaticCellLocator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStaticCellLocator_get_ptr (vtkNew < vtkStaticCellLocator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_static_cell_locator_set_divisions(vtkNew<vtkStaticCellLocator> sself, int _arg1, int _arg2, int _arg3) { sself->SetDivisions(_arg1, _arg2, _arg3); }
extern "C" void vtk_static_cell_locator_set_divisions(vtkNew<vtkStaticCellLocator> sself, const int _arg) { sself->SetDivisions(_arg); }
extern "C" int* vtk_static_cell_locator_get_divisions(vtkNew<vtkStaticCellLocator> sself) { return sself->GetDivisions(); }
extern "C" void vtk_static_cell_locator_get_divisions(vtkNew<vtkStaticCellLocator> sself, int data) { sself->GetDivisions(data); }
extern "C" long long vtk_static_cell_locator_find_cell(vtkNew<vtkStaticCellLocator> sself, double x) { return sself->FindCell(x); }
extern "C" int vtk_static_cell_locator_intersect_with_line(vtkNew<vtkStaticCellLocator> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_static_cell_locator_intersect_with_line(vtkNew<vtkStaticCellLocator> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId, long long cellId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId, cellId); }
extern "C" void vtk_static_cell_locator_free_search_structure(vtkNew<vtkStaticCellLocator> sself) { sself->FreeSearchStructure(); }
extern "C" void vtk_static_cell_locator_build_locator(vtkNew<vtkStaticCellLocator> sself) { sself->BuildLocator(); }
extern "C" void vtk_static_cell_locator_set_max_number_of_buckets(vtkNew<vtkStaticCellLocator> sself, long long _arg) { sself->SetMaxNumberOfBuckets(_arg); }
extern "C" long long vtk_static_cell_locator_get_max_number_of_buckets_min_value(vtkNew<vtkStaticCellLocator> sself) { return sself->GetMaxNumberOfBucketsMinValue(); }
extern "C" long long vtk_static_cell_locator_get_max_number_of_buckets_max_value(vtkNew<vtkStaticCellLocator> sself) { return sself->GetMaxNumberOfBucketsMaxValue(); }
extern "C" long long vtk_static_cell_locator_get_max_number_of_buckets(vtkNew<vtkStaticCellLocator> sself) { return sself->GetMaxNumberOfBuckets(); }
extern "C" bool vtk_static_cell_locator_get_large_ids(vtkNew<vtkStaticCellLocator> sself) { return sself->GetLargeIds(); }
extern "C" void vtk_static_cell_locator_set_use_diagonal_length_tolerance(vtkNew<vtkStaticCellLocator> sself, bool _arg) { sself->SetUseDiagonalLengthTolerance(_arg); }
extern "C" bool vtk_static_cell_locator_get_use_diagonal_length_tolerance(vtkNew<vtkStaticCellLocator> sself) { return sself->GetUseDiagonalLengthTolerance(); }
extern "C" void vtk_static_cell_locator_use_diagonal_length_tolerance_on(vtkNew<vtkStaticCellLocator> sself) { sself->UseDiagonalLengthToleranceOn(); }
extern "C" void vtk_static_cell_locator_use_diagonal_length_tolerance_off(vtkNew<vtkStaticCellLocator> sself) { sself->UseDiagonalLengthToleranceOff(); }
extern "C" vtkNew < vtkStaticPointLocator > vtkStaticPointLocator_new () {return vtkNew < vtkStaticPointLocator > () ;}
extern "C" void vtkStaticPointLocator_destructor (vtkNew < vtkStaticPointLocator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStaticPointLocator_get_ptr (vtkNew < vtkStaticPointLocator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_static_point_locator_set_number_of_points_per_bucket(vtkNew<vtkStaticPointLocator> sself, int _arg) { sself->SetNumberOfPointsPerBucket(_arg); }
extern "C" int vtk_static_point_locator_get_number_of_points_per_bucket_min_value(vtkNew<vtkStaticPointLocator> sself) { return sself->GetNumberOfPointsPerBucketMinValue(); }
extern "C" int vtk_static_point_locator_get_number_of_points_per_bucket_max_value(vtkNew<vtkStaticPointLocator> sself) { return sself->GetNumberOfPointsPerBucketMaxValue(); }
extern "C" int vtk_static_point_locator_get_number_of_points_per_bucket(vtkNew<vtkStaticPointLocator> sself) { return sself->GetNumberOfPointsPerBucket(); }
extern "C" void vtk_static_point_locator_set_divisions(vtkNew<vtkStaticPointLocator> sself, int _arg1, int _arg2, int _arg3) { sself->SetDivisions(_arg1, _arg2, _arg3); }
extern "C" void vtk_static_point_locator_set_divisions(vtkNew<vtkStaticPointLocator> sself, const int _arg) { sself->SetDivisions(_arg); }
extern "C" int* vtk_static_point_locator_get_divisions(vtkNew<vtkStaticPointLocator> sself) { return sself->GetDivisions(); }
extern "C" void vtk_static_point_locator_get_divisions(vtkNew<vtkStaticPointLocator> sself, int data) { sself->GetDivisions(data); }
extern "C" long long vtk_static_point_locator_find_closest_point(vtkNew<vtkStaticPointLocator> sself, const double x) { return sself->FindClosestPoint(x); }
extern "C" long long vtk_static_point_locator_find_closest_point_within_radius(vtkNew<vtkStaticPointLocator> sself, double radius, const double x, double dist2) { return sself->FindClosestPointWithinRadius(radius, x, dist2); }
extern "C" long long vtk_static_point_locator_find_closest_point_within_radius(vtkNew<vtkStaticPointLocator> sself, double radius, const double x, double inputDataLength, double dist2) { return sself->FindClosestPointWithinRadius(radius, x, inputDataLength, dist2); }
extern "C" int vtk_static_point_locator_intersect_with_line(vtkNew<vtkStaticPointLocator> sself, double a0, double a1, double tol, double t, double lineX, double ptX, long long ptId) { return sself->IntersectWithLine(a0, a1, tol, t, lineX, ptX, ptId); }
extern "C" void vtk_static_point_locator_merge_points(vtkNew<vtkStaticPointLocator> sself, double tol, long long mergeMap) { sself->MergePoints(tol, mergeMap); }
extern "C" void vtk_static_point_locator_initialize(vtkNew<vtkStaticPointLocator> sself) { sself->Initialize(); }
extern "C" void vtk_static_point_locator_free_search_structure(vtkNew<vtkStaticPointLocator> sself) { sself->FreeSearchStructure(); }
extern "C" void vtk_static_point_locator_build_locator(vtkNew<vtkStaticPointLocator> sself) { sself->BuildLocator(); }
extern "C" void vtk_static_point_locator_build_locator(vtkNew<vtkStaticPointLocator> sself, const double inBounds) { sself->BuildLocator(inBounds); }
extern "C" long long vtk_static_point_locator_get_number_of_points_in_bucket(vtkNew<vtkStaticPointLocator> sself, long long bNum) { return sself->GetNumberOfPointsInBucket(bNum); }
extern "C" void vtk_static_point_locator_set_max_number_of_buckets(vtkNew<vtkStaticPointLocator> sself, long long _arg) { sself->SetMaxNumberOfBuckets(_arg); }
extern "C" long long vtk_static_point_locator_get_max_number_of_buckets_min_value(vtkNew<vtkStaticPointLocator> sself) { return sself->GetMaxNumberOfBucketsMinValue(); }
extern "C" long long vtk_static_point_locator_get_max_number_of_buckets_max_value(vtkNew<vtkStaticPointLocator> sself) { return sself->GetMaxNumberOfBucketsMaxValue(); }
extern "C" long long vtk_static_point_locator_get_max_number_of_buckets(vtkNew<vtkStaticPointLocator> sself) { return sself->GetMaxNumberOfBuckets(); }
extern "C" bool vtk_static_point_locator_get_large_ids(vtkNew<vtkStaticPointLocator> sself) { return sself->GetLargeIds(); }
extern "C" double* vtk_static_point_locator_get_spacing(vtkNew<vtkStaticPointLocator> sself) { return sself->GetSpacing(); }
extern "C" void vtk_static_point_locator_get_spacing(vtkNew<vtkStaticPointLocator> sself, double spacing) { sself->GetSpacing(spacing); }
extern "C" vtkNew < vtkStaticPointLocator2D > vtkStaticPointLocator2D_new () {return vtkNew < vtkStaticPointLocator2D > () ;}
extern "C" void vtkStaticPointLocator2D_destructor (vtkNew < vtkStaticPointLocator2D > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStaticPointLocator2D_get_ptr (vtkNew < vtkStaticPointLocator2D > sself) {return sself . GetPointer () ;}
extern "C" void vtk_static_point_locator_2_d_set_number_of_points_per_bucket(vtkNew<vtkStaticPointLocator2D> sself, int _arg) { sself->SetNumberOfPointsPerBucket(_arg); }
extern "C" int vtk_static_point_locator_2_d_get_number_of_points_per_bucket_min_value(vtkNew<vtkStaticPointLocator2D> sself) { return sself->GetNumberOfPointsPerBucketMinValue(); }
extern "C" int vtk_static_point_locator_2_d_get_number_of_points_per_bucket_max_value(vtkNew<vtkStaticPointLocator2D> sself) { return sself->GetNumberOfPointsPerBucketMaxValue(); }
extern "C" int vtk_static_point_locator_2_d_get_number_of_points_per_bucket(vtkNew<vtkStaticPointLocator2D> sself) { return sself->GetNumberOfPointsPerBucket(); }
extern "C" void vtk_static_point_locator_2_d_set_divisions(vtkNew<vtkStaticPointLocator2D> sself, int _arg1, int _arg2) { sself->SetDivisions(_arg1, _arg2); }
extern "C" void vtk_static_point_locator_2_d_set_divisions(vtkNew<vtkStaticPointLocator2D> sself, const int _arg) { sself->SetDivisions(_arg); }
extern "C" int* vtk_static_point_locator_2_d_get_divisions(vtkNew<vtkStaticPointLocator2D> sself) { return sself->GetDivisions(); }
extern "C" void vtk_static_point_locator_2_d_get_divisions(vtkNew<vtkStaticPointLocator2D> sself, int data) { sself->GetDivisions(data); }
extern "C" long long vtk_static_point_locator_2_d_find_closest_point(vtkNew<vtkStaticPointLocator2D> sself, const double x) { return sself->FindClosestPoint(x); }
extern "C" long long vtk_static_point_locator_2_d_find_closest_point_within_radius(vtkNew<vtkStaticPointLocator2D> sself, double radius, const double x, double dist2) { return sself->FindClosestPointWithinRadius(radius, x, dist2); }
extern "C" long long vtk_static_point_locator_2_d_find_closest_point_within_radius(vtkNew<vtkStaticPointLocator2D> sself, double radius, const double x, double inputDataLength, double dist2) { return sself->FindClosestPointWithinRadius(radius, x, inputDataLength, dist2); }
extern "C" int vtk_static_point_locator_2_d_intersect_with_line(vtkNew<vtkStaticPointLocator2D> sself, double a0, double a1, double tol, double t, double lineX, double ptX, long long ptId) { return sself->IntersectWithLine(a0, a1, tol, t, lineX, ptX, ptId); }
extern "C" void vtk_static_point_locator_2_d_merge_points(vtkNew<vtkStaticPointLocator2D> sself, double tol, long long mergeMap) { sself->MergePoints(tol, mergeMap); }
extern "C" void vtk_static_point_locator_2_d_initialize(vtkNew<vtkStaticPointLocator2D> sself) { sself->Initialize(); }
extern "C" void vtk_static_point_locator_2_d_free_search_structure(vtkNew<vtkStaticPointLocator2D> sself) { sself->FreeSearchStructure(); }
extern "C" void vtk_static_point_locator_2_d_build_locator(vtkNew<vtkStaticPointLocator2D> sself) { sself->BuildLocator(); }
extern "C" long long vtk_static_point_locator_2_d_get_number_of_points_in_bucket(vtkNew<vtkStaticPointLocator2D> sself, long long bNum) { return sself->GetNumberOfPointsInBucket(bNum); }
extern "C" void vtk_static_point_locator_2_d_set_max_number_of_buckets(vtkNew<vtkStaticPointLocator2D> sself, long long _arg) { sself->SetMaxNumberOfBuckets(_arg); }
extern "C" long long vtk_static_point_locator_2_d_get_max_number_of_buckets_min_value(vtkNew<vtkStaticPointLocator2D> sself) { return sself->GetMaxNumberOfBucketsMinValue(); }
extern "C" long long vtk_static_point_locator_2_d_get_max_number_of_buckets_max_value(vtkNew<vtkStaticPointLocator2D> sself) { return sself->GetMaxNumberOfBucketsMaxValue(); }
extern "C" long long vtk_static_point_locator_2_d_get_max_number_of_buckets(vtkNew<vtkStaticPointLocator2D> sself) { return sself->GetMaxNumberOfBuckets(); }
extern "C" bool vtk_static_point_locator_2_d_get_large_ids(vtkNew<vtkStaticPointLocator2D> sself) { return sself->GetLargeIds(); }
extern "C" void vtk_static_point_locator_2_d_get_bounds(vtkNew<vtkStaticPointLocator2D> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" double* vtk_static_point_locator_2_d_get_spacing(vtkNew<vtkStaticPointLocator2D> sself) { return sself->GetSpacing(); }
extern "C" void vtk_static_point_locator_2_d_get_spacing(vtkNew<vtkStaticPointLocator2D> sself, double spacing) { sself->GetSpacing(spacing); }
extern "C" void vtk_static_point_locator_2_d_get_bucket_indices(vtkNew<vtkStaticPointLocator2D> sself, const double x, int ij) { sself->GetBucketIndices(x, ij); }
extern "C" long long vtk_static_point_locator_2_d_get_bucket_index(vtkNew<vtkStaticPointLocator2D> sself, const double x) { return sself->GetBucketIndex(x); }
extern "C" vtkNew < vtkStructuredExtent > vtkStructuredExtent_new () {return vtkNew < vtkStructuredExtent > () ;}
extern "C" void vtkStructuredExtent_destructor (vtkNew < vtkStructuredExtent > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStructuredExtent_get_ptr (vtkNew < vtkStructuredExtent > sself) {return sself . GetPointer () ;}
extern "C" void vtk_structured_extent_clamp(vtkNew<vtkStructuredExtent> sself, int ext, const int wholeExt) { sself->Clamp(ext, wholeExt); }
extern "C" bool vtk_structured_extent_strictly_smaller(vtkNew<vtkStructuredExtent> sself, const int ext, const int wholeExt) { return sself->StrictlySmaller(ext, wholeExt); }
extern "C" bool vtk_structured_extent_smaller(vtkNew<vtkStructuredExtent> sself, const int ext, const int wholeExt) { return sself->Smaller(ext, wholeExt); }
extern "C" void vtk_structured_extent_grow(vtkNew<vtkStructuredExtent> sself, int ext, int count) { sself->Grow(ext, count); }
extern "C" void vtk_structured_extent_grow(vtkNew<vtkStructuredExtent> sself, int ext, int count, int wholeExt) { sself->Grow(ext, count, wholeExt); }
extern "C" void vtk_structured_extent_transform(vtkNew<vtkStructuredExtent> sself, int ext, int wholeExt) { sself->Transform(ext, wholeExt); }
extern "C" void vtk_structured_extent_get_dimensions(vtkNew<vtkStructuredExtent> sself, const int ext, int dims) { sself->GetDimensions(ext, dims); }
extern "C" vtkNew < vtkStructuredGrid > vtkStructuredGrid_new () {return vtkNew < vtkStructuredGrid > () ;}
extern "C" void vtkStructuredGrid_destructor (vtkNew < vtkStructuredGrid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStructuredGrid_get_ptr (vtkNew < vtkStructuredGrid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_structured_grid_get_data_object_type(vtkNew<vtkStructuredGrid> sself) { return sself->GetDataObjectType(); }
extern "C" long long vtk_structured_grid_get_number_of_points(vtkNew<vtkStructuredGrid> sself) { return sself->GetNumberOfPoints(); }
extern "C" void vtk_structured_grid_get_point(vtkNew<vtkStructuredGrid> sself, long long ptId, double p) { sself->GetPoint(ptId, p); }
extern "C" int vtk_structured_grid_get_cell_type(vtkNew<vtkStructuredGrid> sself, long long cellId) { return sself->GetCellType(cellId); }
extern "C" void vtk_structured_grid_set_dimensions(vtkNew<vtkStructuredGrid> sself, int i, int j, int k) { sself->SetDimensions(i, j, k); }
extern "C" void vtk_structured_grid_set_dimensions(vtkNew<vtkStructuredGrid> sself, const int dim) { sself->SetDimensions(dim); }
extern "C" int* vtk_structured_grid_get_dimensions(vtkNew<vtkStructuredGrid> sself) { return sself->GetDimensions(); }
extern "C" void vtk_structured_grid_get_dimensions(vtkNew<vtkStructuredGrid> sself, int dim) { sself->GetDimensions(dim); }
extern "C" int vtk_structured_grid_get_data_dimension(vtkNew<vtkStructuredGrid> sself) { return sself->GetDataDimension(); }
extern "C" void vtk_structured_grid_set_extent(vtkNew<vtkStructuredGrid> sself, int extent) { sself->SetExtent(extent); }
extern "C" void vtk_structured_grid_set_extent(vtkNew<vtkStructuredGrid> sself, int xMin, int xMax, int yMin, int yMax, int zMin, int zMax) { sself->SetExtent(xMin, xMax, yMin, yMax, zMin, zMax); }
extern "C" int* vtk_structured_grid_get_extent(vtkNew<vtkStructuredGrid> sself) { return sself->GetExtent(); }
extern "C" void vtk_structured_grid_get_extent(vtkNew<vtkStructuredGrid> sself, int _arg1, int _arg2, int _arg3, int _arg4, int _arg5, int _arg6) { sself->GetExtent(_arg1, _arg2, _arg3, _arg4, _arg5, _arg6); }
extern "C" void vtk_structured_grid_get_extent(vtkNew<vtkStructuredGrid> sself, int _arg) { sself->GetExtent(_arg); }
extern "C" int vtk_structured_grid_get_extent_type(vtkNew<vtkStructuredGrid> sself) { return sself->GetExtentType(); }
extern "C" void vtk_structured_grid_blank_point(vtkNew<vtkStructuredGrid> sself, long long ptId) { sself->BlankPoint(ptId); }
extern "C" void vtk_structured_grid_un_blank_point(vtkNew<vtkStructuredGrid> sself, long long ptId) { sself->UnBlankPoint(ptId); }
extern "C" void vtk_structured_grid_blank_cell(vtkNew<vtkStructuredGrid> sself, long long ptId) { sself->BlankCell(ptId); }
extern "C" void vtk_structured_grid_un_blank_cell(vtkNew<vtkStructuredGrid> sself, long long ptId) { sself->UnBlankCell(ptId); }
extern "C" unsigned char vtk_structured_grid_is_point_visible(vtkNew<vtkStructuredGrid> sself, long long ptId) { return sself->IsPointVisible(ptId); }
extern "C" unsigned char vtk_structured_grid_is_cell_visible(vtkNew<vtkStructuredGrid> sself, long long cellId) { return sself->IsCellVisible(cellId); }
extern "C" bool vtk_structured_grid_has_any_blank_points(vtkNew<vtkStructuredGrid> sself) { return sself->HasAnyBlankPoints(); }
extern "C" bool vtk_structured_grid_has_any_blank_cells(vtkNew<vtkStructuredGrid> sself) { return sself->HasAnyBlankCells(); }
extern "C" void vtk_structured_grid_get_cell_dims(vtkNew<vtkStructuredGrid> sself, int cellDims) { sself->GetCellDims(cellDims); }
extern "C" void vtk_structured_grid_crop(vtkNew<vtkStructuredGrid> sself, const int updateExtent) { sself->Crop(updateExtent); }
extern "C" void vtk_structured_grid_get_point(vtkNew<vtkStructuredGrid> sself, int i, int j, int k, double p, bool adjustForExtent) { sself->GetPoint(i, j, k, p, adjustForExtent); }
extern "C" vtkNew < vtkStructuredPoints > vtkStructuredPoints_new () {return vtkNew < vtkStructuredPoints > () ;}
extern "C" void vtkStructuredPoints_destructor (vtkNew < vtkStructuredPoints > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStructuredPoints_get_ptr (vtkNew < vtkStructuredPoints > sself) {return sself . GetPointer () ;}
extern "C" int vtk_structured_points_get_data_object_type(vtkNew<vtkStructuredPoints> sself) { return sself->GetDataObjectType(); }
extern "C" vtkNew < vtkStructuredPointsCollection > vtkStructuredPointsCollection_new () {return vtkNew < vtkStructuredPointsCollection > () ;}
extern "C" void vtkStructuredPointsCollection_destructor (vtkNew < vtkStructuredPointsCollection > sself) {sself . Reset () ; return ;}
extern "C" void * vtkStructuredPointsCollection_get_ptr (vtkNew < vtkStructuredPointsCollection > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkSuperquadric > vtkSuperquadric_new () {return vtkNew < vtkSuperquadric > () ;}
extern "C" void vtkSuperquadric_destructor (vtkNew < vtkSuperquadric > sself) {sself . Reset () ; return ;}
extern "C" void * vtkSuperquadric_get_ptr (vtkNew < vtkSuperquadric > sself) {return sself . GetPointer () ;}
extern "C" double vtk_superquadric_evaluate_function(vtkNew<vtkSuperquadric> sself, double x) { return sself->EvaluateFunction(x); }
extern "C" void vtk_superquadric_evaluate_gradient(vtkNew<vtkSuperquadric> sself, double x, double g) { sself->EvaluateGradient(x, g); }
extern "C" void vtk_superquadric_set_center(vtkNew<vtkSuperquadric> sself, double _arg1, double _arg2, double _arg3) { sself->SetCenter(_arg1, _arg2, _arg3); }
extern "C" void vtk_superquadric_set_center(vtkNew<vtkSuperquadric> sself, const double _arg) { sself->SetCenter(_arg); }
extern "C" double* vtk_superquadric_get_center(vtkNew<vtkSuperquadric> sself) { return sself->GetCenter(); }
extern "C" void vtk_superquadric_get_center(vtkNew<vtkSuperquadric> sself, double data) { sself->GetCenter(data); }
extern "C" void vtk_superquadric_set_scale(vtkNew<vtkSuperquadric> sself, double _arg1, double _arg2, double _arg3) { sself->SetScale(_arg1, _arg2, _arg3); }
extern "C" void vtk_superquadric_set_scale(vtkNew<vtkSuperquadric> sself, const double _arg) { sself->SetScale(_arg); }
extern "C" double* vtk_superquadric_get_scale(vtkNew<vtkSuperquadric> sself) { return sself->GetScale(); }
extern "C" void vtk_superquadric_get_scale(vtkNew<vtkSuperquadric> sself, double data) { sself->GetScale(data); }
extern "C" double vtk_superquadric_get_thickness(vtkNew<vtkSuperquadric> sself) { return sself->GetThickness(); }
extern "C" void vtk_superquadric_set_thickness(vtkNew<vtkSuperquadric> sself, double _arg) { sself->SetThickness(_arg); }
extern "C" double vtk_superquadric_get_thickness_min_value(vtkNew<vtkSuperquadric> sself) { return sself->GetThicknessMinValue(); }
extern "C" double vtk_superquadric_get_thickness_max_value(vtkNew<vtkSuperquadric> sself) { return sself->GetThicknessMaxValue(); }
extern "C" double vtk_superquadric_get_phi_roundness(vtkNew<vtkSuperquadric> sself) { return sself->GetPhiRoundness(); }
extern "C" void vtk_superquadric_set_phi_roundness(vtkNew<vtkSuperquadric> sself, double e) { sself->SetPhiRoundness(e); }
extern "C" double vtk_superquadric_get_theta_roundness(vtkNew<vtkSuperquadric> sself) { return sself->GetThetaRoundness(); }
extern "C" void vtk_superquadric_set_theta_roundness(vtkNew<vtkSuperquadric> sself, double e) { sself->SetThetaRoundness(e); }
extern "C" void vtk_superquadric_set_size(vtkNew<vtkSuperquadric> sself, double _arg) { sself->SetSize(_arg); }
extern "C" double vtk_superquadric_get_size(vtkNew<vtkSuperquadric> sself) { return sself->GetSize(); }
extern "C" void vtk_superquadric_toroidal_on(vtkNew<vtkSuperquadric> sself) { sself->ToroidalOn(); }
extern "C" void vtk_superquadric_toroidal_off(vtkNew<vtkSuperquadric> sself) { sself->ToroidalOff(); }
extern "C" int vtk_superquadric_get_toroidal(vtkNew<vtkSuperquadric> sself) { return sself->GetToroidal(); }
extern "C" void vtk_superquadric_set_toroidal(vtkNew<vtkSuperquadric> sself, int _arg) { sself->SetToroidal(_arg); }
extern "C" vtkNew < vtkTable > vtkTable_new () {return vtkNew < vtkTable > () ;}
extern "C" void vtkTable_destructor (vtkNew < vtkTable > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTable_get_ptr (vtkNew < vtkTable > sself) {return sself . GetPointer () ;}
extern "C" void vtk_table_dump(vtkNew<vtkTable> sself, unsigned int colWidth, int rowLimit) { sself->Dump(colWidth, rowLimit); }
extern "C" int vtk_table_get_data_object_type(vtkNew<vtkTable> sself) { return sself->GetDataObjectType(); }
extern "C" long long vtk_table_get_number_of_rows(vtkNew<vtkTable> sself) { return sself->GetNumberOfRows(); }
extern "C" void vtk_table_set_number_of_rows(vtkNew<vtkTable> sself, const long long p0) { sself->SetNumberOfRows(p0); }
extern "C" long long vtk_table_insert_next_blank_row(vtkNew<vtkTable> sself, double default_num_val) { return sself->InsertNextBlankRow(default_num_val); }
extern "C" void vtk_table_remove_row(vtkNew<vtkTable> sself, long long row) { sself->RemoveRow(row); }
extern "C" long long vtk_table_get_number_of_columns(vtkNew<vtkTable> sself) { return sself->GetNumberOfColumns(); }
extern "C" const char* vtk_table_get_column_name(vtkNew<vtkTable> sself, long long col) { return sself->GetColumnName(col); }
extern "C" void vtk_table_remove_column_by_name(vtkNew<vtkTable> sself, const char name) { sself->RemoveColumnByName(name); }
extern "C" void vtk_table_remove_column(vtkNew<vtkTable> sself, long long col) { sself->RemoveColumn(col); }
extern "C" void vtk_table_initialize(vtkNew<vtkTable> sself) { sself->Initialize(); }
extern "C" long long vtk_table_get_number_of_elements(vtkNew<vtkTable> sself, int type) { return sself->GetNumberOfElements(type); }
extern "C" vtkNew < vtkTetra > vtkTetra_new () {return vtkNew < vtkTetra > () ;}
extern "C" void vtkTetra_destructor (vtkNew < vtkTetra > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTetra_get_ptr (vtkNew < vtkTetra > sself) {return sself . GetPointer () ;}
extern "C" void vtk_tetra_get_edge_points(vtkNew<vtkTetra> sself, long long edgeId, const long long pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" void vtk_tetra_get_edge_points(vtkNew<vtkTetra> sself, int edgeId, int pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" long long vtk_tetra_get_face_points(vtkNew<vtkTetra> sself, long long faceId, const long long pts) { return sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_tetra_get_face_points(vtkNew<vtkTetra> sself, int faceId, int pts) { sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_tetra_get_edge_to_adjacent_faces(vtkNew<vtkTetra> sself, long long edgeId, const long long pts) { sself->GetEdgeToAdjacentFaces(edgeId, pts); }
extern "C" long long vtk_tetra_get_face_to_adjacent_faces(vtkNew<vtkTetra> sself, long long faceId, const long long faceIds) { return sself->GetFaceToAdjacentFaces(faceId, faceIds); }
extern "C" long long vtk_tetra_get_point_to_incident_edges(vtkNew<vtkTetra> sself, long long pointId, const long long edgeIds) { return sself->GetPointToIncidentEdges(pointId, edgeIds); }
extern "C" long long vtk_tetra_get_point_to_incident_faces(vtkNew<vtkTetra> sself, long long pointId, const long long faceIds) { return sself->GetPointToIncidentFaces(pointId, faceIds); }
extern "C" long long vtk_tetra_get_point_to_one_ring_points(vtkNew<vtkTetra> sself, long long pointId, const long long pts) { return sself->GetPointToOneRingPoints(pointId, pts); }
extern "C" bool vtk_tetra_get_centroid(vtkNew<vtkTetra> sself, double centroid) { return sself->GetCentroid(centroid); }
extern "C" int vtk_tetra_get_cell_type(vtkNew<vtkTetra> sself) { return sself->GetCellType(); }
extern "C" int vtk_tetra_get_number_of_edges(vtkNew<vtkTetra> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_tetra_get_number_of_faces(vtkNew<vtkTetra> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_tetra_evaluate_position(vtkNew<vtkTetra> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_tetra_evaluate_location(vtkNew<vtkTetra> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_tetra_intersect_with_line(vtkNew<vtkTetra> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_tetra_derivatives(vtkNew<vtkTetra> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int* vtk_tetra_get_triangle_cases(vtkNew<vtkTetra> sself, int caseId) { return sself->GetTriangleCases(caseId); }
extern "C" int vtk_tetra_get_parametric_center(vtkNew<vtkTetra> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" double vtk_tetra_get_parametric_distance(vtkNew<vtkTetra> sself, const double pcoords) { return sself->GetParametricDistance(pcoords); }
extern "C" void vtk_tetra_tetra_center(vtkNew<vtkTetra> sself, double p1, double p2, double p3, double p4, double center) { sself->TetraCenter(p1, p2, p3, p4, center); }
extern "C" double vtk_tetra_circumsphere(vtkNew<vtkTetra> sself, double x1, double x2, double x3, double x4, double center) { return sself->Circumsphere(x1, x2, x3, x4, center); }
extern "C" double vtk_tetra_insphere(vtkNew<vtkTetra> sself, double p1, double p2, double p3, double p4, double center) { return sself->Insphere(p1, p2, p3, p4, center); }
extern "C" int vtk_tetra_barycentric_coords(vtkNew<vtkTetra> sself, double x, double x1, double x2, double x3, double x4, double bcoords) { return sself->BarycentricCoords(x, x1, x2, x3, x4, bcoords); }
extern "C" double vtk_tetra_compute_volume(vtkNew<vtkTetra> sself, double p1, double p2, double p3, double p4) { return sself->ComputeVolume(p1, p2, p3, p4); }
extern "C" int vtk_tetra_jacobian_inverse(vtkNew<vtkTetra> sself, double inverse, double derivs) { return sself->JacobianInverse(inverse, derivs); }
extern "C" void vtk_tetra_interpolation_functions(vtkNew<vtkTetra> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_tetra_interpolation_derivs(vtkNew<vtkTetra> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_tetra_interpolate_functions(vtkNew<vtkTetra> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_tetra_interpolate_derivs(vtkNew<vtkTetra> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_tetra_get_edge_array(vtkNew<vtkTetra> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_tetra_get_face_array(vtkNew<vtkTetra> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" const long long* vtk_tetra_get_edge_to_adjacent_faces_array(vtkNew<vtkTetra> sself, long long edgeId) { return sself->GetEdgeToAdjacentFacesArray(edgeId); }
extern "C" const long long* vtk_tetra_get_face_to_adjacent_faces_array(vtkNew<vtkTetra> sself, long long faceId) { return sself->GetFaceToAdjacentFacesArray(faceId); }
extern "C" const long long* vtk_tetra_get_point_to_incident_edges_array(vtkNew<vtkTetra> sself, long long pointId) { return sself->GetPointToIncidentEdgesArray(pointId); }
extern "C" const long long* vtk_tetra_get_point_to_incident_faces_array(vtkNew<vtkTetra> sself, long long pointId) { return sself->GetPointToIncidentFacesArray(pointId); }
extern "C" const long long* vtk_tetra_get_point_to_one_ring_points_array(vtkNew<vtkTetra> sself, long long pointId) { return sself->GetPointToOneRingPointsArray(pointId); }
extern "C" vtkNew < vtkTree > vtkTree_new () {return vtkNew < vtkTree > () ;}
extern "C" void vtkTree_destructor (vtkNew < vtkTree > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTree_get_ptr (vtkNew < vtkTree > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_tree_get_root(vtkNew<vtkTree> sself) { return sself->GetRoot(); }
extern "C" long long vtk_tree_get_number_of_children(vtkNew<vtkTree> sself, long long v) { return sself->GetNumberOfChildren(v); }
extern "C" long long vtk_tree_get_child(vtkNew<vtkTree> sself, long long v, long long i) { return sself->GetChild(v, i); }
extern "C" long long vtk_tree_get_parent(vtkNew<vtkTree> sself, long long v) { return sself->GetParent(v); }
extern "C" long long vtk_tree_get_level(vtkNew<vtkTree> sself, long long v) { return sself->GetLevel(v); }
extern "C" bool vtk_tree_is_leaf(vtkNew<vtkTree> sself, long long vertex) { return sself->IsLeaf(vertex); }
extern "C" vtkNew < vtkTreeBFSIterator > vtkTreeBFSIterator_new () {return vtkNew < vtkTreeBFSIterator > () ;}
extern "C" void vtkTreeBFSIterator_destructor (vtkNew < vtkTreeBFSIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTreeBFSIterator_get_ptr (vtkNew < vtkTreeBFSIterator > sself) {return sself . GetPointer () ;}
extern "C" vtkNew < vtkTreeDFSIterator > vtkTreeDFSIterator_new () {return vtkNew < vtkTreeDFSIterator > () ;}
extern "C" void vtkTreeDFSIterator_destructor (vtkNew < vtkTreeDFSIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTreeDFSIterator_get_ptr (vtkNew < vtkTreeDFSIterator > sself) {return sself . GetPointer () ;}
extern "C" void vtk_tree_dfs_iterator_set_mode(vtkNew<vtkTreeDFSIterator> sself, int mode) { sself->SetMode(mode); }
extern "C" int vtk_tree_dfs_iterator_get_mode(vtkNew<vtkTreeDFSIterator> sself) { return sself->GetMode(); }
extern "C" vtkNew < vtkTriQuadraticHexahedron > vtkTriQuadraticHexahedron_new () {return vtkNew < vtkTriQuadraticHexahedron > () ;}
extern "C" void vtkTriQuadraticHexahedron_destructor (vtkNew < vtkTriQuadraticHexahedron > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTriQuadraticHexahedron_get_ptr (vtkNew < vtkTriQuadraticHexahedron > sself) {return sself . GetPointer () ;}
extern "C" int vtk_tri_quadratic_hexahedron_get_cell_type(vtkNew<vtkTriQuadraticHexahedron> sself) { return sself->GetCellType(); }
extern "C" int vtk_tri_quadratic_hexahedron_get_cell_dimension(vtkNew<vtkTriQuadraticHexahedron> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_tri_quadratic_hexahedron_get_number_of_edges(vtkNew<vtkTriQuadraticHexahedron> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_tri_quadratic_hexahedron_get_number_of_faces(vtkNew<vtkTriQuadraticHexahedron> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_tri_quadratic_hexahedron_evaluate_position(vtkNew<vtkTriQuadraticHexahedron> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_tri_quadratic_hexahedron_evaluate_location(vtkNew<vtkTriQuadraticHexahedron> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_tri_quadratic_hexahedron_derivatives(vtkNew<vtkTriQuadraticHexahedron> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_tri_quadratic_hexahedron_intersect_with_line(vtkNew<vtkTriQuadraticHexahedron> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_tri_quadratic_hexahedron_interpolation_functions(vtkNew<vtkTriQuadraticHexahedron> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_tri_quadratic_hexahedron_interpolation_derivs(vtkNew<vtkTriQuadraticHexahedron> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_tri_quadratic_hexahedron_interpolate_functions(vtkNew<vtkTriQuadraticHexahedron> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_tri_quadratic_hexahedron_interpolate_derivs(vtkNew<vtkTriQuadraticHexahedron> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_tri_quadratic_hexahedron_get_edge_array(vtkNew<vtkTriQuadraticHexahedron> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_tri_quadratic_hexahedron_get_face_array(vtkNew<vtkTriQuadraticHexahedron> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" void vtk_tri_quadratic_hexahedron_jacobian_inverse(vtkNew<vtkTriQuadraticHexahedron> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" vtkNew < vtkTriQuadraticPyramid > vtkTriQuadraticPyramid_new () {return vtkNew < vtkTriQuadraticPyramid > () ;}
extern "C" void vtkTriQuadraticPyramid_destructor (vtkNew < vtkTriQuadraticPyramid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTriQuadraticPyramid_get_ptr (vtkNew < vtkTriQuadraticPyramid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_tri_quadratic_pyramid_get_cell_type(vtkNew<vtkTriQuadraticPyramid> sself) { return sself->GetCellType(); }
extern "C" int vtk_tri_quadratic_pyramid_get_cell_dimension(vtkNew<vtkTriQuadraticPyramid> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_tri_quadratic_pyramid_get_number_of_edges(vtkNew<vtkTriQuadraticPyramid> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_tri_quadratic_pyramid_get_number_of_faces(vtkNew<vtkTriQuadraticPyramid> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_tri_quadratic_pyramid_evaluate_position(vtkNew<vtkTriQuadraticPyramid> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_tri_quadratic_pyramid_evaluate_location(vtkNew<vtkTriQuadraticPyramid> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_tri_quadratic_pyramid_intersect_with_line(vtkNew<vtkTriQuadraticPyramid> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_tri_quadratic_pyramid_derivatives(vtkNew<vtkTriQuadraticPyramid> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_tri_quadratic_pyramid_get_parametric_center(vtkNew<vtkTriQuadraticPyramid> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" double vtk_tri_quadratic_pyramid_get_parametric_distance(vtkNew<vtkTriQuadraticPyramid> sself, const double pcoords) { return sself->GetParametricDistance(pcoords); }
extern "C" void vtk_tri_quadratic_pyramid_interpolation_functions(vtkNew<vtkTriQuadraticPyramid> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_tri_quadratic_pyramid_interpolation_derivs(vtkNew<vtkTriQuadraticPyramid> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_tri_quadratic_pyramid_interpolate_functions(vtkNew<vtkTriQuadraticPyramid> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_tri_quadratic_pyramid_interpolate_derivs(vtkNew<vtkTriQuadraticPyramid> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" void vtk_tri_quadratic_pyramid_jacobian_inverse(vtkNew<vtkTriQuadraticPyramid> sself, const double pcoords, double inverse, double derivs) { sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" const long long* vtk_tri_quadratic_pyramid_get_edge_array(vtkNew<vtkTriQuadraticPyramid> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_tri_quadratic_pyramid_get_face_array(vtkNew<vtkTriQuadraticPyramid> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" vtkNew < vtkTriangle > vtkTriangle_new () {return vtkNew < vtkTriangle > () ;}
extern "C" void vtkTriangle_destructor (vtkNew < vtkTriangle > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTriangle_get_ptr (vtkNew < vtkTriangle > sself) {return sself . GetPointer () ;}
extern "C" int vtk_triangle_get_cell_type(vtkNew<vtkTriangle> sself) { return sself->GetCellType(); }
extern "C" int vtk_triangle_get_cell_dimension(vtkNew<vtkTriangle> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_triangle_get_number_of_edges(vtkNew<vtkTriangle> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_triangle_get_number_of_faces(vtkNew<vtkTriangle> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_triangle_evaluate_position(vtkNew<vtkTriangle> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_triangle_evaluate_location(vtkNew<vtkTriangle> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" void vtk_triangle_derivatives(vtkNew<vtkTriangle> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" double vtk_triangle_compute_area(vtkNew<vtkTriangle> sself) { return sself->ComputeArea(); }
extern "C" void vtk_triangle_interpolation_functions(vtkNew<vtkTriangle> sself, const double pcoords, double sf) { sself->InterpolationFunctions(pcoords, sf); }
extern "C" void vtk_triangle_interpolation_derivs(vtkNew<vtkTriangle> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_triangle_interpolate_functions(vtkNew<vtkTriangle> sself, const double pcoords, double sf) { sself->InterpolateFunctions(pcoords, sf); }
extern "C" void vtk_triangle_interpolate_derivs(vtkNew<vtkTriangle> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" const long long* vtk_triangle_get_edge_array(vtkNew<vtkTriangle> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" int vtk_triangle_intersect_with_line(vtkNew<vtkTriangle> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" int vtk_triangle_get_parametric_center(vtkNew<vtkTriangle> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" double vtk_triangle_get_parametric_distance(vtkNew<vtkTriangle> sself, const double pcoords) { return sself->GetParametricDistance(pcoords); }
extern "C" void vtk_triangle_triangle_center(vtkNew<vtkTriangle> sself, const double p1, const double p2, const double p3, double center) { sself->TriangleCenter(p1, p2, p3, center); }
extern "C" double vtk_triangle_triangle_area(vtkNew<vtkTriangle> sself, const double p1, const double p2, const double p3) { return sself->TriangleArea(p1, p2, p3); }
extern "C" double vtk_triangle_circumcircle(vtkNew<vtkTriangle> sself, const double p1, const double p2, const double p3, double center) { return sself->Circumcircle(p1, p2, p3, center); }
extern "C" int vtk_triangle_barycentric_coords(vtkNew<vtkTriangle> sself, const double x, const double x1, const double x2, const double x3, double bcoords) { return sself->BarycentricCoords(x, x1, x2, x3, bcoords); }
extern "C" int vtk_triangle_project_to_2_d(vtkNew<vtkTriangle> sself, const double x1, const double x2, const double x3, double v1, double v2, double v3) { return sself->ProjectTo2D(x1, x2, x3, v1, v2, v3); }
extern "C" void vtk_triangle_compute_normal(vtkNew<vtkTriangle> sself, const double v1, const double v2, const double v3, double n) { sself->ComputeNormal(v1, v2, v3, n); }
extern "C" void vtk_triangle_compute_normal_direction(vtkNew<vtkTriangle> sself, const double v1, const double v2, const double v3, double n) { sself->ComputeNormalDirection(v1, v2, v3, n); }
extern "C" int vtk_triangle_triangles_intersect(vtkNew<vtkTriangle> sself, const double p1, const double q1, const double r1, const double p2, const double q2, const double r2) { return sself->TrianglesIntersect(p1, q1, r1, p2, q2, r2); }
extern "C" int vtk_triangle_point_in_triangle(vtkNew<vtkTriangle> sself, const double x, const double x1, const double x2, const double x3, const double tol2) { return sself->PointInTriangle(x, x1, x2, x3, tol2); }
extern "C" void vtk_triangle_compute_quadric(vtkNew<vtkTriangle> sself, const double x1, const double x2, const double x3, double quadric) { sself->ComputeQuadric(x1, x2, x3, quadric); }
extern "C" vtkNew < vtkTriangleStrip > vtkTriangleStrip_new () {return vtkNew < vtkTriangleStrip > () ;}
extern "C" void vtkTriangleStrip_destructor (vtkNew < vtkTriangleStrip > sself) {sself . Reset () ; return ;}
extern "C" void * vtkTriangleStrip_get_ptr (vtkNew < vtkTriangleStrip > sself) {return sself . GetPointer () ;}
extern "C" int vtk_triangle_strip_get_cell_type(vtkNew<vtkTriangleStrip> sself) { return sself->GetCellType(); }
extern "C" int vtk_triangle_strip_get_cell_dimension(vtkNew<vtkTriangleStrip> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_triangle_strip_get_number_of_edges(vtkNew<vtkTriangleStrip> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_triangle_strip_get_number_of_faces(vtkNew<vtkTriangleStrip> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_triangle_strip_evaluate_position(vtkNew<vtkTriangleStrip> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_triangle_strip_evaluate_location(vtkNew<vtkTriangleStrip> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_triangle_strip_intersect_with_line(vtkNew<vtkTriangleStrip> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_triangle_strip_derivatives(vtkNew<vtkTriangleStrip> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_triangle_strip_get_parametric_center(vtkNew<vtkTriangleStrip> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" vtkNew < vtkUndirectedGraph > vtkUndirectedGraph_new () {return vtkNew < vtkUndirectedGraph > () ;}
extern "C" void vtkUndirectedGraph_destructor (vtkNew < vtkUndirectedGraph > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUndirectedGraph_get_ptr (vtkNew < vtkUndirectedGraph > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_undirected_graph_get_in_degree(vtkNew<vtkUndirectedGraph> sself, long long v) { return sself->GetInDegree(v); }
extern "C" vtkNew < vtkUniformGrid > vtkUniformGrid_new () {return vtkNew < vtkUniformGrid > () ;}
extern "C" void vtkUniformGrid_destructor (vtkNew < vtkUniformGrid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUniformGrid_get_ptr (vtkNew < vtkUniformGrid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_uniform_grid_get_grid_description(vtkNew<vtkUniformGrid> sself) { return sself->GetGridDescription(); }
extern "C" void vtk_uniform_grid_blank_point(vtkNew<vtkUniformGrid> sself, long long ptId) { sself->BlankPoint(ptId); }
extern "C" void vtk_uniform_grid_un_blank_point(vtkNew<vtkUniformGrid> sself, long long ptId) { sself->UnBlankPoint(ptId); }
extern "C" void vtk_uniform_grid_blank_point(vtkNew<vtkUniformGrid> sself, const int i, const int j, const int k) { sself->BlankPoint(i, j, k); }
extern "C" void vtk_uniform_grid_un_blank_point(vtkNew<vtkUniformGrid> sself, const int i, const int j, const int k) { sself->UnBlankPoint(i, j, k); }
extern "C" void vtk_uniform_grid_blank_cell(vtkNew<vtkUniformGrid> sself, long long ptId) { sself->BlankCell(ptId); }
extern "C" void vtk_uniform_grid_un_blank_cell(vtkNew<vtkUniformGrid> sself, long long ptId) { sself->UnBlankCell(ptId); }
extern "C" void vtk_uniform_grid_blank_cell(vtkNew<vtkUniformGrid> sself, const int i, const int j, const int k) { sself->BlankCell(i, j, k); }
extern "C" void vtk_uniform_grid_un_blank_cell(vtkNew<vtkUniformGrid> sself, const int i, const int j, const int k) { sself->UnBlankCell(i, j, k); }
extern "C" unsigned char vtk_uniform_grid_is_point_visible(vtkNew<vtkUniformGrid> sself, long long pointId) { return sself->IsPointVisible(pointId); }
extern "C" unsigned char vtk_uniform_grid_is_cell_visible(vtkNew<vtkUniformGrid> sself, long long cellId) { return sself->IsCellVisible(cellId); }
extern "C" vtkNew < vtkUniformGridAMR > vtkUniformGridAMR_new () {return vtkNew < vtkUniformGridAMR > () ;}
extern "C" void vtkUniformGridAMR_destructor (vtkNew < vtkUniformGridAMR > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUniformGridAMR_get_ptr (vtkNew < vtkUniformGridAMR > sself) {return sself . GetPointer () ;}
extern "C" int vtk_uniform_grid_amr_get_data_object_type(vtkNew<vtkUniformGridAMR> sself) { return sself->GetDataObjectType(); }
extern "C" void vtk_uniform_grid_amr_initialize(vtkNew<vtkUniformGridAMR> sself) { sself->Initialize(); }
extern "C" void vtk_uniform_grid_amr_initialize(vtkNew<vtkUniformGridAMR> sself, int numLevels, const int blocksPerLevel) { sself->Initialize(numLevels, blocksPerLevel); }
extern "C" void vtk_uniform_grid_amr_set_grid_description(vtkNew<vtkUniformGridAMR> sself, int gridDescription) { sself->SetGridDescription(gridDescription); }
extern "C" int vtk_uniform_grid_amr_get_grid_description(vtkNew<vtkUniformGridAMR> sself) { return sself->GetGridDescription(); }
extern "C" unsigned int vtk_uniform_grid_amr_get_number_of_levels(vtkNew<vtkUniformGridAMR> sself) { return sself->GetNumberOfLevels(); }
extern "C" unsigned int vtk_uniform_grid_amr_get_total_number_of_blocks(vtkNew<vtkUniformGridAMR> sself) { return sself->GetTotalNumberOfBlocks(); }
extern "C" unsigned int vtk_uniform_grid_amr_get_number_of_data_sets(vtkNew<vtkUniformGridAMR> sself, const unsigned int level) { return sself->GetNumberOfDataSets(level); }
extern "C" void vtk_uniform_grid_amr_get_bounds(vtkNew<vtkUniformGridAMR> sself, double bounds) { sself->GetBounds(bounds); }
extern "C" const double* vtk_uniform_grid_amr_get_bounds(vtkNew<vtkUniformGridAMR> sself) { return sself->GetBounds(); }
extern "C" void vtk_uniform_grid_amr_get_min(vtkNew<vtkUniformGridAMR> sself, double min) { sself->GetMin(min); }
extern "C" void vtk_uniform_grid_amr_get_max(vtkNew<vtkUniformGridAMR> sself, double max) { sself->GetMax(max); }
extern "C" int vtk_uniform_grid_amr_get_composite_index(vtkNew<vtkUniformGridAMR> sself, const unsigned int level, const unsigned int index) { return sself->GetCompositeIndex(level, index); }
extern "C" void vtk_uniform_grid_amr_get_level_and_index(vtkNew<vtkUniformGridAMR> sself, const unsigned int compositeIdx, unsigned int level, unsigned int idx) { sself->GetLevelAndIndex(compositeIdx, level, idx); }
extern "C" vtkNew < vtkUniformGridAMRDataIterator > vtkUniformGridAMRDataIterator_new () {return vtkNew < vtkUniformGridAMRDataIterator > () ;}
extern "C" void vtkUniformGridAMRDataIterator_destructor (vtkNew < vtkUniformGridAMRDataIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUniformGridAMRDataIterator_get_ptr (vtkNew < vtkUniformGridAMRDataIterator > sself) {return sself . GetPointer () ;}
extern "C" int vtk_uniform_grid_amr_data_iterator_has_current_meta_data(vtkNew<vtkUniformGridAMRDataIterator> sself) { return sself->HasCurrentMetaData(); }
extern "C" unsigned int vtk_uniform_grid_amr_data_iterator_get_current_flat_index(vtkNew<vtkUniformGridAMRDataIterator> sself) { return sself->GetCurrentFlatIndex(); }
extern "C" unsigned int vtk_uniform_grid_amr_data_iterator_get_current_level(vtkNew<vtkUniformGridAMRDataIterator> sself) { return sself->GetCurrentLevel(); }
extern "C" unsigned int vtk_uniform_grid_amr_data_iterator_get_current_index(vtkNew<vtkUniformGridAMRDataIterator> sself) { return sself->GetCurrentIndex(); }
extern "C" void vtk_uniform_grid_amr_data_iterator_go_to_first_item(vtkNew<vtkUniformGridAMRDataIterator> sself) { sself->GoToFirstItem(); }
extern "C" void vtk_uniform_grid_amr_data_iterator_go_to_next_item(vtkNew<vtkUniformGridAMRDataIterator> sself) { sself->GoToNextItem(); }
extern "C" int vtk_uniform_grid_amr_data_iterator_is_done_with_traversal(vtkNew<vtkUniformGridAMRDataIterator> sself) { return sself->IsDoneWithTraversal(); }
extern "C" vtkNew < vtkUniformHyperTreeGrid > vtkUniformHyperTreeGrid_new () {return vtkNew < vtkUniformHyperTreeGrid > () ;}
extern "C" void vtkUniformHyperTreeGrid_destructor (vtkNew < vtkUniformHyperTreeGrid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUniformHyperTreeGrid_get_ptr (vtkNew < vtkUniformHyperTreeGrid > sself) {return sself . GetPointer () ;}
extern "C" void vtk_uniform_hyper_tree_grid_set_origin(vtkNew<vtkUniformHyperTreeGrid> sself, double _arg1, double _arg2, double _arg3) { sself->SetOrigin(_arg1, _arg2, _arg3); }
extern "C" void vtk_uniform_hyper_tree_grid_set_origin(vtkNew<vtkUniformHyperTreeGrid> sself, const double _arg) { sself->SetOrigin(_arg); }
extern "C" double* vtk_uniform_hyper_tree_grid_get_origin(vtkNew<vtkUniformHyperTreeGrid> sself) { return sself->GetOrigin(); }
extern "C" void vtk_uniform_hyper_tree_grid_get_origin(vtkNew<vtkUniformHyperTreeGrid> sself, double _arg1, double _arg2, double _arg3) { sself->GetOrigin(_arg1, _arg2, _arg3); }
extern "C" void vtk_uniform_hyper_tree_grid_get_origin(vtkNew<vtkUniformHyperTreeGrid> sself, double _arg) { sself->GetOrigin(_arg); }
extern "C" void vtk_uniform_hyper_tree_grid_set_grid_scale(vtkNew<vtkUniformHyperTreeGrid> sself, double p0, double p1, double p2) { sself->SetGridScale(p0, p1, p2); }
extern "C" void vtk_uniform_hyper_tree_grid_set_grid_scale(vtkNew<vtkUniformHyperTreeGrid> sself, double p0) { sself->SetGridScale(p0); }
extern "C" double* vtk_uniform_hyper_tree_grid_get_grid_scale(vtkNew<vtkUniformHyperTreeGrid> sself) { return sself->GetGridScale(); }
extern "C" void vtk_uniform_hyper_tree_grid_get_grid_scale(vtkNew<vtkUniformHyperTreeGrid> sself, double _arg1, double _arg2, double _arg3) { sself->GetGridScale(_arg1, _arg2, _arg3); }
extern "C" void vtk_uniform_hyper_tree_grid_get_grid_scale(vtkNew<vtkUniformHyperTreeGrid> sself, double _arg) { sself->GetGridScale(_arg); }
extern "C" void vtk_uniform_hyper_tree_grid_set_grid_scale(vtkNew<vtkUniformHyperTreeGrid> sself, double p0) { sself->SetGridScale(p0); }
extern "C" void vtk_uniform_hyper_tree_grid_get_level_zero_origin_from_index(vtkNew<vtkUniformHyperTreeGrid> sself, long long p0, double p1) { sself->GetLevelZeroOriginFromIndex(p0, p1); }
extern "C" unsigned long vtk_uniform_hyper_tree_grid_get_actual_memory_size_bytes(vtkNew<vtkUniformHyperTreeGrid> sself) { return sself->GetActualMemorySizeBytes(); }
extern "C" vtkNew < vtkUnstructuredGrid > vtkUnstructuredGrid_new () {return vtkNew < vtkUnstructuredGrid > () ;}
extern "C" void vtkUnstructuredGrid_destructor (vtkNew < vtkUnstructuredGrid > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUnstructuredGrid_get_ptr (vtkNew < vtkUnstructuredGrid > sself) {return sself . GetPointer () ;}
extern "C" int vtk_unstructured_grid_get_data_object_type(vtkNew<vtkUnstructuredGrid> sself) { return sself->GetDataObjectType(); }
extern "C" bool vtk_unstructured_grid_allocate_estimate(vtkNew<vtkUnstructuredGrid> sself, long long numCells, long long maxCellSize) { return sself->AllocateEstimate(numCells, maxCellSize); }
extern "C" bool vtk_unstructured_grid_allocate_exact(vtkNew<vtkUnstructuredGrid> sself, long long numCells, long long connectivitySize) { return sself->AllocateExact(numCells, connectivitySize); }
extern "C" void vtk_unstructured_grid_allocate(vtkNew<vtkUnstructuredGrid> sself, long long numCells, int extSize) { sself->Allocate(numCells, extSize); }
extern "C" void vtk_unstructured_grid_reset(vtkNew<vtkUnstructuredGrid> sself) { sself->Reset(); }
extern "C" int vtk_unstructured_grid_get_cell_type(vtkNew<vtkUnstructuredGrid> sself, long long cellId) { return sself->GetCellType(cellId); }
extern "C" void vtk_unstructured_grid_get_cell_points(vtkNew<vtkUnstructuredGrid> sself, long long cellId, long long npts, const long long pts) { sself->GetCellPoints(cellId, npts, pts); }
extern "C" void vtk_unstructured_grid_get_point_cells(vtkNew<vtkUnstructuredGrid> sself, long long ptId, long long ncells, long long cells) { sself->GetPointCells(ptId, ncells, cells); }
extern "C" void vtk_unstructured_grid_get_point_cells(vtkNew<vtkUnstructuredGrid> sself, long long ptId, unsigned short ncells, long long cells) { sself->GetPointCells(ptId, ncells, cells); }
extern "C" void vtk_unstructured_grid_squeeze(vtkNew<vtkUnstructuredGrid> sself) { sself->Squeeze(); }
extern "C" void vtk_unstructured_grid_initialize(vtkNew<vtkUnstructuredGrid> sself) { sself->Initialize(); }
extern "C" int vtk_unstructured_grid_get_max_cell_size(vtkNew<vtkUnstructuredGrid> sself) { return sself->GetMaxCellSize(); }
extern "C" void vtk_unstructured_grid_build_links(vtkNew<vtkUnstructuredGrid> sself) { sself->BuildLinks(); }
extern "C" void vtk_unstructured_grid_get_face_stream(vtkNew<vtkUnstructuredGrid> sself, long long cellId, long long nfaces, const long long ptIds) { sself->GetFaceStream(cellId, nfaces, ptIds); }
extern "C" bool vtk_unstructured_grid_is_cell_boundary(vtkNew<vtkUnstructuredGrid> sself, long long cellId, long long npts, const long long ptIds) { return sself->IsCellBoundary(cellId, npts, ptIds); }
extern "C" long long vtk_unstructured_grid_insert_next_linked_cell(vtkNew<vtkUnstructuredGrid> sself, int type, int npts, const long long pts) { return sself->InsertNextLinkedCell(type, npts, pts); }
extern "C" void vtk_unstructured_grid_remove_reference_to_cell(vtkNew<vtkUnstructuredGrid> sself, long long ptId, long long cellId) { sself->RemoveReferenceToCell(ptId, cellId); }
extern "C" void vtk_unstructured_grid_add_reference_to_cell(vtkNew<vtkUnstructuredGrid> sself, long long ptId, long long cellId) { sself->AddReferenceToCell(ptId, cellId); }
extern "C" void vtk_unstructured_grid_resize_cell_list(vtkNew<vtkUnstructuredGrid> sself, long long ptId, int size) { sself->ResizeCellList(ptId, size); }
extern "C" int vtk_unstructured_grid_get_piece(vtkNew<vtkUnstructuredGrid> sself) { return sself->GetPiece(); }
extern "C" int vtk_unstructured_grid_get_number_of_pieces(vtkNew<vtkUnstructuredGrid> sself) { return sself->GetNumberOfPieces(); }
extern "C" int vtk_unstructured_grid_get_ghost_level(vtkNew<vtkUnstructuredGrid> sself) { return sself->GetGhostLevel(); }
extern "C" int vtk_unstructured_grid_is_homogeneous(vtkNew<vtkUnstructuredGrid> sself) { return sself->IsHomogeneous(); }
extern "C" void vtk_unstructured_grid_remove_ghost_cells(vtkNew<vtkUnstructuredGrid> sself) { sself->RemoveGhostCells(); }
extern "C" long long* vtk_unstructured_grid_get_faces(vtkNew<vtkUnstructuredGrid> sself, long long cellId) { return sself->GetFaces(cellId); }
extern "C" int vtk_unstructured_grid_initialize_faces_representation(vtkNew<vtkUnstructuredGrid> sself, long long numPrevCells) { return sself->InitializeFacesRepresentation(numPrevCells); }
extern "C" unsigned long vtk_unstructured_grid_get_mesh_m_time(vtkNew<vtkUnstructuredGrid> sself) { return sself->GetMeshMTime(); }
extern "C" void vtk_unstructured_grid_convert_face_stream_point_ids(vtkNew<vtkUnstructuredGrid> sself, long long nfaces, long long faceStream, long long idMap) { sself->ConvertFaceStreamPointIds(nfaces, faceStream, idMap); }
extern "C" vtkNew < vtkUnstructuredGridCellIterator > vtkUnstructuredGridCellIterator_new () {return vtkNew < vtkUnstructuredGridCellIterator > () ;}
extern "C" void vtkUnstructuredGridCellIterator_destructor (vtkNew < vtkUnstructuredGridCellIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkUnstructuredGridCellIterator_get_ptr (vtkNew < vtkUnstructuredGridCellIterator > sself) {return sself . GetPointer () ;}
extern "C" bool vtk_unstructured_grid_cell_iterator_is_done_with_traversal(vtkNew<vtkUnstructuredGridCellIterator> sself) { return sself->IsDoneWithTraversal(); }
extern "C" long long vtk_unstructured_grid_cell_iterator_get_cell_id(vtkNew<vtkUnstructuredGridCellIterator> sself) { return sself->GetCellId(); }
extern "C" void vtk_unstructured_grid_cell_iterator_go_to_cell(vtkNew<vtkUnstructuredGridCellIterator> sself, long long cellId) { sself->GoToCell(cellId); }
extern "C" vtkNew < vtkVertex > vtkVertex_new () {return vtkNew < vtkVertex > () ;}
extern "C" void vtkVertex_destructor (vtkNew < vtkVertex > sself) {sself . Reset () ; return ;}
extern "C" void * vtkVertex_get_ptr (vtkNew < vtkVertex > sself) {return sself . GetPointer () ;}
extern "C" int vtk_vertex_get_cell_type(vtkNew<vtkVertex> sself) { return sself->GetCellType(); }
extern "C" int vtk_vertex_get_cell_dimension(vtkNew<vtkVertex> sself) { return sself->GetCellDimension(); }
extern "C" int vtk_vertex_get_number_of_edges(vtkNew<vtkVertex> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_vertex_get_number_of_faces(vtkNew<vtkVertex> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_vertex_evaluate_position(vtkNew<vtkVertex> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_vertex_evaluate_location(vtkNew<vtkVertex> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_vertex_inflate(vtkNew<vtkVertex> sself, double p0) { return sself->Inflate(p0); }
extern "C" int vtk_vertex_get_parametric_center(vtkNew<vtkVertex> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" int vtk_vertex_intersect_with_line(vtkNew<vtkVertex> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_vertex_derivatives(vtkNew<vtkVertex> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" void vtk_vertex_interpolation_functions(vtkNew<vtkVertex> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_vertex_interpolation_derivs(vtkNew<vtkVertex> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_vertex_interpolate_functions(vtkNew<vtkVertex> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_vertex_interpolate_derivs(vtkNew<vtkVertex> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" vtkNew < vtkVertexListIterator > vtkVertexListIterator_new () {return vtkNew < vtkVertexListIterator > () ;}
extern "C" void vtkVertexListIterator_destructor (vtkNew < vtkVertexListIterator > sself) {sself . Reset () ; return ;}
extern "C" void * vtkVertexListIterator_get_ptr (vtkNew < vtkVertexListIterator > sself) {return sself . GetPointer () ;}
extern "C" long long vtk_vertex_list_iterator_next(vtkNew<vtkVertexListIterator> sself) { return sself->Next(); }
extern "C" bool vtk_vertex_list_iterator_has_next(vtkNew<vtkVertexListIterator> sself) { return sself->HasNext(); }
extern "C" vtkNew < vtkVoxel > vtkVoxel_new () {return vtkNew < vtkVoxel > () ;}
extern "C" void vtkVoxel_destructor (vtkNew < vtkVoxel > sself) {sself . Reset () ; return ;}
extern "C" void * vtkVoxel_get_ptr (vtkNew < vtkVoxel > sself) {return sself . GetPointer () ;}
extern "C" void vtk_voxel_get_edge_points(vtkNew<vtkVoxel> sself, long long edgeId, const long long pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" void vtk_voxel_get_edge_points(vtkNew<vtkVoxel> sself, int edgeId, int pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" long long vtk_voxel_get_face_points(vtkNew<vtkVoxel> sself, long long faceId, const long long pts) { return sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_voxel_get_face_points(vtkNew<vtkVoxel> sself, int faceId, int pts) { sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_voxel_get_edge_to_adjacent_faces(vtkNew<vtkVoxel> sself, long long edgeId, const long long pts) { sself->GetEdgeToAdjacentFaces(edgeId, pts); }
extern "C" long long vtk_voxel_get_face_to_adjacent_faces(vtkNew<vtkVoxel> sself, long long faceId, const long long faces) { return sself->GetFaceToAdjacentFaces(faceId, faces); }
extern "C" long long vtk_voxel_get_point_to_incident_edges(vtkNew<vtkVoxel> sself, long long pointId, const long long edges) { return sself->GetPointToIncidentEdges(pointId, edges); }
extern "C" long long vtk_voxel_get_point_to_incident_faces(vtkNew<vtkVoxel> sself, long long pointId, const long long faces) { return sself->GetPointToIncidentFaces(pointId, faces); }
extern "C" long long vtk_voxel_get_point_to_one_ring_points(vtkNew<vtkVoxel> sself, long long pointId, const long long pts) { return sself->GetPointToOneRingPoints(pointId, pts); }
extern "C" bool vtk_voxel_get_centroid(vtkNew<vtkVoxel> sself, double centroid) { return sself->GetCentroid(centroid); }
extern "C" double vtk_voxel_compute_bounding_sphere(vtkNew<vtkVoxel> sself, double center) { return sself->ComputeBoundingSphere(center); }
extern "C" int vtk_voxel_get_cell_type(vtkNew<vtkVoxel> sself) { return sself->GetCellType(); }
extern "C" int vtk_voxel_get_number_of_edges(vtkNew<vtkVoxel> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_voxel_get_number_of_faces(vtkNew<vtkVoxel> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_voxel_evaluate_position(vtkNew<vtkVoxel> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_voxel_evaluate_location(vtkNew<vtkVoxel> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_voxel_intersect_with_line(vtkNew<vtkVoxel> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_voxel_derivatives(vtkNew<vtkVoxel> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int vtk_voxel_inflate(vtkNew<vtkVoxel> sself, double dist) { return sself->Inflate(dist); }
extern "C" void vtk_voxel_interpolation_derivs(vtkNew<vtkVoxel> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_voxel_interpolate_functions(vtkNew<vtkVoxel> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_voxel_interpolate_derivs(vtkNew<vtkVoxel> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" void vtk_voxel_interpolation_functions(vtkNew<vtkVoxel> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" int* vtk_voxel_get_triangle_cases(vtkNew<vtkVoxel> sself, int caseId) { return sself->GetTriangleCases(caseId); }
extern "C" const long long* vtk_voxel_get_edge_array(vtkNew<vtkVoxel> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_voxel_get_face_array(vtkNew<vtkVoxel> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" const long long* vtk_voxel_get_edge_to_adjacent_faces_array(vtkNew<vtkVoxel> sself, long long edgeId) { return sself->GetEdgeToAdjacentFacesArray(edgeId); }
extern "C" const long long* vtk_voxel_get_face_to_adjacent_faces_array(vtkNew<vtkVoxel> sself, long long faceId) { return sself->GetFaceToAdjacentFacesArray(faceId); }
extern "C" const long long* vtk_voxel_get_point_to_incident_edges_array(vtkNew<vtkVoxel> sself, long long pointId) { return sself->GetPointToIncidentEdgesArray(pointId); }
extern "C" const long long* vtk_voxel_get_point_to_incident_faces_array(vtkNew<vtkVoxel> sself, long long pointId) { return sself->GetPointToIncidentFacesArray(pointId); }
extern "C" const long long* vtk_voxel_get_point_to_one_ring_points_array(vtkNew<vtkVoxel> sself, long long pointId) { return sself->GetPointToOneRingPointsArray(pointId); }
extern "C" vtkNew < vtkWedge > vtkWedge_new () {return vtkNew < vtkWedge > () ;}
extern "C" void vtkWedge_destructor (vtkNew < vtkWedge > sself) {sself . Reset () ; return ;}
extern "C" void * vtkWedge_get_ptr (vtkNew < vtkWedge > sself) {return sself . GetPointer () ;}
extern "C" void vtk_wedge_get_edge_points(vtkNew<vtkWedge> sself, long long edgeId, const long long pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" void vtk_wedge_get_edge_points(vtkNew<vtkWedge> sself, int edgeId, int pts) { sself->GetEdgePoints(edgeId, pts); }
extern "C" long long vtk_wedge_get_face_points(vtkNew<vtkWedge> sself, long long faceId, const long long pts) { return sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_wedge_get_face_points(vtkNew<vtkWedge> sself, int faceId, int pts) { sself->GetFacePoints(faceId, pts); }
extern "C" void vtk_wedge_get_edge_to_adjacent_faces(vtkNew<vtkWedge> sself, long long edgeId, const long long pts) { sself->GetEdgeToAdjacentFaces(edgeId, pts); }
extern "C" long long vtk_wedge_get_face_to_adjacent_faces(vtkNew<vtkWedge> sself, long long faceId, const long long faceIds) { return sself->GetFaceToAdjacentFaces(faceId, faceIds); }
extern "C" long long vtk_wedge_get_point_to_incident_edges(vtkNew<vtkWedge> sself, long long pointId, const long long edgeIds) { return sself->GetPointToIncidentEdges(pointId, edgeIds); }
extern "C" long long vtk_wedge_get_point_to_incident_faces(vtkNew<vtkWedge> sself, long long pointId, const long long faceIds) { return sself->GetPointToIncidentFaces(pointId, faceIds); }
extern "C" long long vtk_wedge_get_point_to_one_ring_points(vtkNew<vtkWedge> sself, long long pointId, const long long pts) { return sself->GetPointToOneRingPoints(pointId, pts); }
extern "C" bool vtk_wedge_get_centroid(vtkNew<vtkWedge> sself, double centroid) { return sself->GetCentroid(centroid); }
extern "C" int vtk_wedge_get_cell_type(vtkNew<vtkWedge> sself) { return sself->GetCellType(); }
extern "C" int vtk_wedge_get_number_of_edges(vtkNew<vtkWedge> sself) { return sself->GetNumberOfEdges(); }
extern "C" int vtk_wedge_get_number_of_faces(vtkNew<vtkWedge> sself) { return sself->GetNumberOfFaces(); }
extern "C" int vtk_wedge_evaluate_position(vtkNew<vtkWedge> sself, const double x, double closestPoint, int subId, double pcoords, double dist2, double weights) { return sself->EvaluatePosition(x, closestPoint, subId, pcoords, dist2, weights); }
extern "C" void vtk_wedge_evaluate_location(vtkNew<vtkWedge> sself, int subId, const double pcoords, double x, double weights) { sself->EvaluateLocation(subId, pcoords, x, weights); }
extern "C" int vtk_wedge_intersect_with_line(vtkNew<vtkWedge> sself, const double p1, const double p2, double tol, double t, double x, double pcoords, int subId) { return sself->IntersectWithLine(p1, p2, tol, t, x, pcoords, subId); }
extern "C" void vtk_wedge_derivatives(vtkNew<vtkWedge> sself, int subId, const double pcoords, const double values, int dim, double derivs) { sself->Derivatives(subId, pcoords, values, dim, derivs); }
extern "C" int* vtk_wedge_get_triangle_cases(vtkNew<vtkWedge> sself, int caseId) { return sself->GetTriangleCases(caseId); }
extern "C" int vtk_wedge_get_parametric_center(vtkNew<vtkWedge> sself, double pcoords) { return sself->GetParametricCenter(pcoords); }
extern "C" void vtk_wedge_interpolation_functions(vtkNew<vtkWedge> sself, const double pcoords, double weights) { sself->InterpolationFunctions(pcoords, weights); }
extern "C" void vtk_wedge_interpolation_derivs(vtkNew<vtkWedge> sself, const double pcoords, double derivs) { sself->InterpolationDerivs(pcoords, derivs); }
extern "C" void vtk_wedge_interpolate_functions(vtkNew<vtkWedge> sself, const double pcoords, double weights) { sself->InterpolateFunctions(pcoords, weights); }
extern "C" void vtk_wedge_interpolate_derivs(vtkNew<vtkWedge> sself, const double pcoords, double derivs) { sself->InterpolateDerivs(pcoords, derivs); }
extern "C" int vtk_wedge_jacobian_inverse(vtkNew<vtkWedge> sself, const double pcoords, double inverse, double derivs) { return sself->JacobianInverse(pcoords, inverse, derivs); }
extern "C" const long long* vtk_wedge_get_edge_array(vtkNew<vtkWedge> sself, long long edgeId) { return sself->GetEdgeArray(edgeId); }
extern "C" const long long* vtk_wedge_get_face_array(vtkNew<vtkWedge> sself, long long faceId) { return sself->GetFaceArray(faceId); }
extern "C" const long long* vtk_wedge_get_edge_to_adjacent_faces_array(vtkNew<vtkWedge> sself, long long edgeId) { return sself->GetEdgeToAdjacentFacesArray(edgeId); }
extern "C" const long long* vtk_wedge_get_face_to_adjacent_faces_array(vtkNew<vtkWedge> sself, long long faceId) { return sself->GetFaceToAdjacentFacesArray(faceId); }
extern "C" const long long* vtk_wedge_get_point_to_incident_edges_array(vtkNew<vtkWedge> sself, long long pointId) { return sself->GetPointToIncidentEdgesArray(pointId); }
extern "C" const long long* vtk_wedge_get_point_to_incident_faces_array(vtkNew<vtkWedge> sself, long long pointId) { return sself->GetPointToIncidentFacesArray(pointId); }
extern "C" const long long* vtk_wedge_get_point_to_one_ring_points_array(vtkNew<vtkWedge> sself, long long pointId) { return sself->GetPointToOneRingPointsArray(pointId); }
extern "C" vtkNew < vtkXMLDataElement > vtkXMLDataElement_new () {return vtkNew < vtkXMLDataElement > () ;}
extern "C" void vtkXMLDataElement_destructor (vtkNew < vtkXMLDataElement > sself) {sself . Reset () ; return ;}
extern "C" void * vtkXMLDataElement_get_ptr (vtkNew < vtkXMLDataElement > sself) {return sself . GetPointer () ;}
extern "C" char* vtk_xml_data_element_get_name(vtkNew<vtkXMLDataElement> sself) { return sself->GetName(); }
extern "C" void vtk_xml_data_element_set_name(vtkNew<vtkXMLDataElement> sself, const char _arg) { sself->SetName(_arg); }
extern "C" char* vtk_xml_data_element_get_id(vtkNew<vtkXMLDataElement> sself) { return sself->GetId(); }
extern "C" void vtk_xml_data_element_set_id(vtkNew<vtkXMLDataElement> sself, const char _arg) { sself->SetId(_arg); }
extern "C" const char* vtk_xml_data_element_get_attribute(vtkNew<vtkXMLDataElement> sself, const char name) { return sself->GetAttribute(name); }
extern "C" void vtk_xml_data_element_set_attribute(vtkNew<vtkXMLDataElement> sself, const char name, const char value) { sself->SetAttribute(name, value); }
extern "C" void vtk_xml_data_element_set_character_data(vtkNew<vtkXMLDataElement> sself, const char data, int length) { sself->SetCharacterData(data, length); }
extern "C" void vtk_xml_data_element_add_character_data(vtkNew<vtkXMLDataElement> sself, const char c, size_t length) { sself->AddCharacterData(c, length); }
extern "C" char* vtk_xml_data_element_get_character_data(vtkNew<vtkXMLDataElement> sself) { return sself->GetCharacterData(); }
extern "C" int vtk_xml_data_element_get_scalar_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int value) { return sself->GetScalarAttribute(name, value); }
extern "C" int vtk_xml_data_element_get_scalar_attribute(vtkNew<vtkXMLDataElement> sself, const char name, float value) { return sself->GetScalarAttribute(name, value); }
extern "C" int vtk_xml_data_element_get_scalar_attribute(vtkNew<vtkXMLDataElement> sself, const char name, double value) { return sself->GetScalarAttribute(name, value); }
extern "C" int vtk_xml_data_element_get_scalar_attribute(vtkNew<vtkXMLDataElement> sself, const char name, long value) { return sself->GetScalarAttribute(name, value); }
extern "C" int vtk_xml_data_element_get_scalar_attribute(vtkNew<vtkXMLDataElement> sself, const char name, unsigned long value) { return sself->GetScalarAttribute(name, value); }
extern "C" void vtk_xml_data_element_set_int_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int value) { sself->SetIntAttribute(name, value); }
extern "C" void vtk_xml_data_element_set_float_attribute(vtkNew<vtkXMLDataElement> sself, const char name, float value) { sself->SetFloatAttribute(name, value); }
extern "C" void vtk_xml_data_element_set_double_attribute(vtkNew<vtkXMLDataElement> sself, const char name, double value) { sself->SetDoubleAttribute(name, value); }
extern "C" void vtk_xml_data_element_set_unsigned_long_attribute(vtkNew<vtkXMLDataElement> sself, const char name, unsigned long value) { sself->SetUnsignedLongAttribute(name, value); }
extern "C" int vtk_xml_data_element_get_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, int value) { return sself->GetVectorAttribute(name, length, value); }
extern "C" int vtk_xml_data_element_get_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, float value) { return sself->GetVectorAttribute(name, length, value); }
extern "C" int vtk_xml_data_element_get_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, double value) { return sself->GetVectorAttribute(name, length, value); }
extern "C" int vtk_xml_data_element_get_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, long value) { return sself->GetVectorAttribute(name, length, value); }
extern "C" int vtk_xml_data_element_get_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, unsigned long value) { return sself->GetVectorAttribute(name, length, value); }
extern "C" void vtk_xml_data_element_set_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, const int value) { sself->SetVectorAttribute(name, length, value); }
extern "C" void vtk_xml_data_element_set_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, const float value) { sself->SetVectorAttribute(name, length, value); }
extern "C" void vtk_xml_data_element_set_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, const double value) { sself->SetVectorAttribute(name, length, value); }
extern "C" void vtk_xml_data_element_set_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, const unsigned long value) { sself->SetVectorAttribute(name, length, value); }
extern "C" int vtk_xml_data_element_get_scalar_attribute(vtkNew<vtkXMLDataElement> sself, const char name, long long value) { return sself->GetScalarAttribute(name, value); }
extern "C" int vtk_xml_data_element_get_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, long long value) { return sself->GetVectorAttribute(name, length, value); }
extern "C" void vtk_xml_data_element_set_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, const long long value) { sself->SetVectorAttribute(name, length, value); }
extern "C" int vtk_xml_data_element_get_scalar_attribute(vtkNew<vtkXMLDataElement> sself, const char name, unsigned long long value) { return sself->GetScalarAttribute(name, value); }
extern "C" int vtk_xml_data_element_get_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, unsigned long long value) { return sself->GetVectorAttribute(name, length, value); }
extern "C" void vtk_xml_data_element_set_vector_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int length, const unsigned long long value) { sself->SetVectorAttribute(name, length, value); }
extern "C" int vtk_xml_data_element_get_word_type_attribute(vtkNew<vtkXMLDataElement> sself, const char name, int value) { return sself->GetWordTypeAttribute(name, value); }
extern "C" int vtk_xml_data_element_get_number_of_attributes(vtkNew<vtkXMLDataElement> sself) { return sself->GetNumberOfAttributes(); }
extern "C" const char* vtk_xml_data_element_get_attribute_name(vtkNew<vtkXMLDataElement> sself, int idx) { return sself->GetAttributeName(idx); }
extern "C" const char* vtk_xml_data_element_get_attribute_value(vtkNew<vtkXMLDataElement> sself, int idx) { return sself->GetAttributeValue(idx); }
extern "C" void vtk_xml_data_element_remove_attribute(vtkNew<vtkXMLDataElement> sself, const char name) { sself->RemoveAttribute(name); }
extern "C" void vtk_xml_data_element_remove_all_attributes(vtkNew<vtkXMLDataElement> sself) { sself->RemoveAllAttributes(); }
extern "C" int vtk_xml_data_element_get_number_of_nested_elements(vtkNew<vtkXMLDataElement> sself) { return sself->GetNumberOfNestedElements(); }
extern "C" void vtk_xml_data_element_remove_all_nested_elements(vtkNew<vtkXMLDataElement> sself) { sself->RemoveAllNestedElements(); }
extern "C" long long vtk_xml_data_element_get_xml_byte_index(vtkNew<vtkXMLDataElement> sself) { return sself->GetXMLByteIndex(); }
extern "C" void vtk_xml_data_element_set_xml_byte_index(vtkNew<vtkXMLDataElement> sself, long long _arg) { sself->SetXMLByteIndex(_arg); }
extern "C" void vtk_xml_data_element_set_attribute_encoding(vtkNew<vtkXMLDataElement> sself, int _arg) { sself->SetAttributeEncoding(_arg); }
extern "C" int vtk_xml_data_element_get_attribute_encoding_min_value(vtkNew<vtkXMLDataElement> sself) { return sself->GetAttributeEncodingMinValue(); }
extern "C" int vtk_xml_data_element_get_attribute_encoding_max_value(vtkNew<vtkXMLDataElement> sself) { return sself->GetAttributeEncodingMaxValue(); }
extern "C" int vtk_xml_data_element_get_attribute_encoding(vtkNew<vtkXMLDataElement> sself) { return sself->GetAttributeEncoding(); }
extern "C" void vtk_xml_data_element_print_xml(vtkNew<vtkXMLDataElement> sself, const char fname) { sself->PrintXML(fname); }
extern "C" int vtk_xml_data_element_get_character_data_width(vtkNew<vtkXMLDataElement> sself) { return sself->GetCharacterDataWidth(); }
extern "C" void vtk_xml_data_element_set_character_data_width(vtkNew<vtkXMLDataElement> sself, int _arg) { sself->SetCharacterDataWidth(_arg); }
