// Matrix Identifier

// #include <conio.h>
#include <math.h>
#include <stdio.h>

#include "params.h"

int main() {
    int i, j, k;
    int m, n;
    int a[MAX_ROWS][MAX_COLS];
    float x[MAX_ROWS][MAX_COLS];

    printf("Enter values for m and n: ");
    scanf("%d %d", &m, &n);

    printf("Enter the matrix: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("\n\nThe matrix is: \n");
    print_mat(a, m, n);

    printf("\n");

    printf("rank of matrix is: %d\n", rank(a, m, n));
    printf("nullity of matrix is: %d\n", nullity(a, m, n));
    printf("trace of matrix is: %d\n\n", trace(a, m, n));
    printf("Orthogonal Matrix: %s\n", orthogonal(a, m, n) ? "Yes" : "No");
    printf("Diagonal Matrix: %s\n", diagmat(a, m, n) ? "Yes" : "No");
    printf("Lower Triangular Matrix: %s\n", lowerT(a, m, n) ? "Yes" : "No");
    printf("Upper Triangular Matrix: %s\n", upperT(a, m, n) ? "Yes" : "No");
    printf("Skew Symmetric Matrix: %s\n", skewsymmetric(a, m, n) ? "Yes" : "No");
    printf("Symmetric Matrix: %s\n", symmetric(a, m, n) ? "Yes" : "No");

    printf("\n");

    rref(x, a, m, n);

    printf("The reduced row echelon form is: \n");
    print_mat_float(x, m, n);

    // getch();

    return 0;
}
