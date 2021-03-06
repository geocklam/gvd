/*******************************************************
 ** Generalized Voronoi Diagram Project               **
 ** Copyright (c) 2015 John Martin Edwards            **
 ** Scientific Computing and Imaging Institute        **
 ** 72 S Central Campus Drive, Room 3750              **
 ** Salt Lake City, UT 84112                          **
 **                                                   **
 ** For information about this project contact        **
 ** John Edwards at                                   **
 **    edwardsjohnmartin@gmail.com                    **
 ** or visit                                          **
 **    sci.utah.edu/~jedwards/research/gvd/index.html **
 *******************************************************/

#ifndef __OCTREE_GPU_H__
#define __OCTREE_GPU_H__

#include <vector>

#include "./opencl/defs.h"

#include "./mvertex_network.h"
#include "./vectorn.h"
#include "./options.h"

NAMESPACE_OCT_BEGIN

void BuildOctreeGpu(
    const std::vector<LabeledGeometry>& geometries,
    GeomVertices& geom_vertices,
    MVertexNetwork& mvertices,
    const OctreeOptions& o);

NAMESPACE_OCT_END

#endif
