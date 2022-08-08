// checks if matrix is skew symmetric

int skewsymmetric(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    if (m != n) return 0;
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != -a[j][i]) return 0;

    return 1;
}
