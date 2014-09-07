#ifndef DFS_H_
#define DFS_H_

#include "../graph/graph.h"

//Define a structure for vertices in a depth-frist search.
typedef struct DfsVertex_{
    void *data;
    VertexColor color;
}DfsVertex;

//Public Interface
int dfs(Graph *graph, List *ordered);

#endif
