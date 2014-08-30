#include <stdio.h>

int fact(int n){
    if(n < 0) return 0;
    else if(n == 0) return 0;
    else if(n == 1) return 1;
    else return n * fact(n-1);
}

main(){
    int n = 3;
    printf("n = %d", n);
    n = fact(n);
    printf("After n = fact(n) is: n = %d", n);
}
