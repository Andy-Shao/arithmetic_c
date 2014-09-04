#include "grap.h"

void graph_init(Graph *graph, int (*match)(const void *key1, const void *key2), void (*destroy)(void *data)){
	//Initialize the graph.
	graph->vcount = 0;
	graph->ecount = 0;
	graph->match = match;
	graph->destroy = destroy;
	
	//initialize the list of adjacency-list structures.
	list_init(&graph->adjlist, NULL);
	
	return;
}
void graph_destroy(Graph *graph){
	AdjList *adjlist;
	
	//Remove each adjacency-list structure and destroy its adjacency list.
	
}
int graph_ins_vertex(Graph *graph, const void *data);
int graph_ins_edge(Graph *graph, const void *data1, const void *data2);
int graph_rem_vertex(Graph *graph, void **data);
int graph_rem_edge(Graph *graph, void *data1, void **data2);
int graph_adjlist(const Graph *graph, const void *data, AdjList **adjlist);
int graph_is_adjacent(const Graph *graph, const void *data1, const void *data2);