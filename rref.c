

// funtction to find reduced row echelon form
void rref(float x[MAX_ROWS][MAX_COLS], int a[MAX_ROWS][MAX_COLS], int m, int n) {
    int i, j, k;
    float p;

    copy_float_int(x, a, m, n);

    for (i = 0; i < m; i++) {
        p = x[i][i];
        if (p != 0)
            for (j = 0; j < n; j++)
                x[i][j] = x[i][j] / p;

        for (k = 0; k < m; k++)
            if (k != i) {
                p = x[k][i];
                for (j = 0; j < n; j++)
                    x[k][j] = x[k][j] - p * x[i][j];
            }

        for (j = 0; j < n; j++)
            if (x[i][j] == 0.0 || x[i][j] == -0.0)
                x[i][j] = 0.0;
    }
}
