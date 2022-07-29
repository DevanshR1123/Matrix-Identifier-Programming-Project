// print a matrix

#include <stdio.h>

void print_mat(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
}

void print_mat_float(float a[MAX_ROWS][MAX_COLS], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%2.2f ", a[i][j]);
        printf("\n");
    }
    printf("\n");
}