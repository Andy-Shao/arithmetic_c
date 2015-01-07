#ifndef GRAPH_H_
#define GRAPH_H_

#include <stdlib.h>
#include "../../ch07_collection/set/set.h"

//Define a structure for adjacency lists.
//邻接表链表中的结点
typedef struct AdjList_{
    void *vertex;//端点数据
    Set adjacent;//顶点的邻接表实现
}AdjList;

//Define a structure for graphs.
typedef struct Graph_{
    int vcount;//顶点的个数
    int ecount;//边的个数

    //match vertex
    int (*match)(const void *key1, const void *key2);
    void (*destroy)(void *data);

    //邻接表链表
    List adjlists;
}Graph;

//Define colors for vertices in graphs.
typedef enum VertexColor_{white, gray, black} VertexColor;

//Public Interface
void graph_init(Graph *graph, int (*match)(const void *key1, const void *key2), void (*destroy)(void *data));
void graph_destroy(Graph *graph);
int graph_ins_vertex(Graph *graph, const void *data);
int graph_ins_edge(Graph *graph, const void *data1, const void *data2);
int graph_rem_vertex(Graph *graph, void **data);
int graph_rem_edge(Graph *graph, void *data1, void **data2);
int graph_adjlist(const Graph *graph, const void *data, AdjList **adjlist);
int graph_is_adjacent(const Graph *graph, const void *data1, const void *data2);
#define graph_adjlists(graph) ((graph)->adjlists)
#define graph_vcount(graph) ((graph)->vcount)
#define graph_ecount(graph) ((graph)->ecount)

#endif
