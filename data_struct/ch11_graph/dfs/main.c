#include <stdio.h>
#include <string.h>

#include "dfs.h"

typedef struct String_{
    int length;
    char *s;
}String;

static void string_init(String *str, char *s, int length){
   str->s = s;
   str->length = length;
}
static int match_string(const void *key1, const void *key2){
    String *str1 = (String *)key1;
    String *str2 = (String *)key2;

    if(str1->length != str2->length) return -1;

    return bcmp(str1->s, str2->s, str1->length);
}
static void dfsVertex_init(DfsVertex *vertex, void *data){
   vertex->data = data;
   vertex->color = white;
}
static int create_DfsVertex(DfsVertex *vertex, char *s, int length){
   if((vertex = (DfsVertex *)malloc(sizeof(DfsVertex))) == NULL) return -1; 

   String *str;
   if((str = (String *)malloc(sizeof(String))) == NULL) return -1;
   string_init(str, s, length);

   dfsVertex_init(vertex, str);
}

int main(){
    Graph *graph;
    if((graph = (Graph *)malloc(sizeof(Graph))) == NULL) return -1;
    graph_init(graph, &match_string, &free);

    DfsVertex *cs100, *cs200, *ma100, *cs300, *ma300, *cs150;
    create_DfsVertex(cs100, "cs100", 5);
    create_DfsVertex(cs200, "cs200", 5);
    create_DfsVertex(ma100, "ma100", 5);
    create_DfsVertex(cs300, "cs300", 5);
    create_DfsVertex(ma300, "ma300", 5);
    create_DfsVertex(cs150, "cs150", 5);

    graph_ins_vertex(graph, cs100);
    //graph_ins_vertex(graph, cs200);
    //graph_ins_vertex(graph, ma100);
    //graph_ins_vertex(graph, cs300);
    //graph_ins_vertex(graph, ma300);
    //graph_ins_vertex(graph, cs150);

    printf("dfs.h\n");
}
