

// funtction to find reduced row echelon form
void rref(float x[MAX_ROWS][MAX_COLS], int a[MAX_ROWS][MAX_COLS], int m, int n) {
    float p;

    copy_float_int(x, a, m, n);

    sort_rows(x, m, n);

    for (int i = 0; i < m; i++) {
        p = x[i][i];
        if (p != 0.0) {
            for (int j = 0; j < n; j++)
                x[i][j] = x[i][j] / p;

            for (int k = 0; k < m; k++)
                if (k != i) {
                    p = x[k][i];
                    for (int j = 0; j < n; j++)
                        x[k][j] = x[k][j] - p * x[i][j];
                }
        }

        for (int a = 0; a < m; a++)
            for (int b = 0; b < n; b++)
                if (x[a][b] == 0.0 || x[a][b] <= 0.00001)
                    x[a][b] = 0.0;

        printf("\n");
        printf("Step %d: \n", i + 1);
        print_mat_float(x, m, n);
    }
}
