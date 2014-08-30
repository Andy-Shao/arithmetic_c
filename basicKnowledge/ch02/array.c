int f(){
    int a[10], *iptr;
    iptr = a;
    iptr[0] = 5;
    return 0;
}

int g(){
    int a[10], *iptr;
    iptr = a;
    *iptr = 5; //*(iptr + i)
    return 0;
}

/*
 * Can't write something looks like that "int g (int a[][]){".
 * You ought to give the other size for a array.
 */
int g2(int a[][2]){
    a[2][0] = 5;

    return 0;
}

/*
 * the f() and g() haven't any different!
 * the "a[i][j]" eaquals to the "*(*(a + i) + j)"
 */
main(){
    f();
    g();
}
