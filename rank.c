#include <params.h>
#include <./rref.c>
#include <./trace.c>


//function to find rank of matrix
int rank(int a[MAX_ROWS][MAX_COLS], int m, int n){
    rref(a,m,n);
    return trace(a,m,n);
}