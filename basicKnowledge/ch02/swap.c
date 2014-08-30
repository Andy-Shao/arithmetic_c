#include <stdio.h>

void swap1(int x, int y){
    int tmp;
    tmp = x; 
    x = y;
    y = tmp;

    return;
}

void swap2(int *x, int*y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;

    return;
}

main(){
    int x=1, y=2;
    printf("x=%d, y=%d\n", x, y);
    swap1(x,y);
    printf("After swap1(x,y): x=%d, y=%d\n", x, y);
    swap2(&x,&y);
    printf("After swap2(&x,&y): x=%d, y=%d\n", x, y);
}
