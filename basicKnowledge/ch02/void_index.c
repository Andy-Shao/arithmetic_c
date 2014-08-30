#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int swap2(void *x, void *y, int size){
    void *tmp;

    if((tmp = malloc(size)) == NULL) return -1;

    memcpy(tmp, x, size);
    memcpy(x, y, size);
    memcpy(y, tmp, size);
    free(tmp);

    return 0;
}

main(){
    int x=1, y=2;
    printf("x=%d, y=%d\n", x, y);
    swap2(&x, &y, sizeof(int));
    printf("After swap2(&x, &y, sizeof(int)): x=%d, y=%d\n", x, y);
}
