#ifndef BFS_H_
#define BFS_H_

#include "graph.h"

//Define a structure a vertices in a breadth-first search.
typedef struct BfsVertex_{
    void *data;
    VertexColor color;
    int hops;
}BfsVertex;

//Public Interface
int bfs(Graph *graph, BfsVertex *start, List *hops);

#endif
