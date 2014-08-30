#include <stdio.h>
#include <stdlib.h>

int g(int **iptr){
    if((*iptr = (int *)malloc(sizeof(int))) == NULL) return -1;

    return 0;
}

main(){}
