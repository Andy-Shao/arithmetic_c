#include <stdio.h>

int match_int(int *key1, int * key2){
    printf("*key1 is %d\n", *key1);
    printf("*key2 is %d\n", *key2);

    return 0;
}

main(){
    //int (*match)(void *key1, void *key2) = match_int;
    int (*match)(int *key1, int *key2) = match_int;
    int x=1, y=2;

    match(&x, &y);
}
