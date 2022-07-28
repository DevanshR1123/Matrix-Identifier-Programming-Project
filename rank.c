#include "params.h"



//function to find rank of matrix
int rank(int a[MAX_ROWS][MAX_COLS], int m, int n){
    rref(a,m,n);
    return trace(a,m,n);
}

//function to find nullity of matrix
int nullity(int a[MAX_ROWS][MAX_COLS], int m, int n){
    return m-rank(a,m,n);
}