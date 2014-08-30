#include <stdio.h>
#include <stdlib.h>

#include "frames.h"
#include "list.h"

main(){
    List *frame; 

    if((frame = (List *)malloc(sizeof(List))) == NULL) return -1;
    list_init(frame, free);
    printf("Finished! create & init the list.\n");

    list_destroy(frame);
    printf("Finished! destroy the list.\n");

    return;
}
