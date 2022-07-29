

// funtction to find reduced row echelon form
void rref(float x[MAX_ROWS][MAX_COLS], int a[MAX_ROWS][MAX_COLS], int m, int n) {
    int i, j, k;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            x[i][j] = (float)a[i][j];
        }
    }

    print_mat_float(x, m, n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            x[i][j] /= x[i][i];
        printf("%f ", x[i][j]);
    }

    print_mat_float(x, m, n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            for (k = 0; k < m; k++)
                if (k != i)
                    x[i][j] = x[i][j] - x[i][k] * x[k][j];
        print_mat_float(x, m, n);
    }
}