// Matrix Identifier

#include <math.h>
#include <stdio.h>
#include <string.h>

#include "params.h"

int main() {
    int i, j, k;
    int m, n;
    int a[MAX_ROWS][MAX_COLS];

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    printf("Enter the matrix: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("The matrix is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("rank of matrix is: %d\n", rank(a, m, n));
    printf("nullity of matrix is: %d\n", nullity(a, m, n));
    printf("trace of matrix is: %d\n", trace(a, m, n));
    printf("Diagonal Matrix: %d\n", diagmat(a, m, n));
    printf("Lower Triangular Matrix: %d\n", lowerT(a, m, n));
    printf("Upper Triangular Matrix: %d\n", upperT(a, m, n));
    printf("Orthogonal Matrix: %d\n", orthogonal(a, m, n));

    rref(a, m, n);

    printf("The reduced row echelon form is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}