#include <stdio.h>

int f(int **iptr){
    int a = 10;
    *iptr = &a;
    return 0;
}

main(){
//    int **int_index;
//    f(int_index);
}
