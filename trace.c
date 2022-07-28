#include <params.h>


//function to find trace of matrix
int trace(int a[MAX_ROWS][MAX_COLS], int m, int n){
    int i, j, trace = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (i == j)
                trace = trace + a[i][j];
    return trace;
}