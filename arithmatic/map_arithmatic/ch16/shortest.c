#include <float.h>
#include <stdio.h>

#include "graphalg.h"

static void relax(PathVertex *u, PathVertex *v, double weight){
    //Relax an edge between two vertices u and v.
    if(v->d > u->d + weight){
        v->d = u->d + weight;
        v->parent = u;
    }
    return;
}

int shortest(Graph *graph, const PathVertex *start, List *paths, int (*match) (const void *key1, const void *key2)){
    AdjList *adjlist;
    PathVertex *pth_vertex, *adj_vertex;
    ListElmt *element, *member;
    double minimum;
    int found, i;

    //Initialize all of the vertices in the graph.
    found = 0;

    for (element=list_head(&graph_adjlists(graph)); element != NULL; element=list_next(element)){
        pth_vertex = ((AdjList*) list_data(element))->vertex;

        if(match(pth_vertex, start)){
            //Initialize the start vertex.
            pth_vertex->color = white;
            pth_vertex->d = 0;
            pth_vertex->parent = NULL;
            found = 1;
        }else {
            //Initialize vertices other than the start vertex.
            pth_vertex->color = white;
            pth_vertex-d = DBL_MAX;
            pth_vertex->parent = NULL;
        }

        //Return if the start vertex was not found.
        if(!found) return -1;

        //Use Dijkstar's algorithm to compute shortest from the start vertex.
        i = 0;
    }
}
