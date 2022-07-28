#include <params.h>

//funtction to find reduced row echelon form
void rref(int a[MAX_ROWS][MAX_COLS], int m, int n){
    int i, j, k;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            a[i][j] = a[i][j]/a[i][i];
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            for(k = 0; k < n; k++)
                if (k != i)
                    a[i][j] = a[i][j] - a[i][k]*a[k][j];
    }
 
}