// checks if matrix is symmetric

int symmetric(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    int i, j;
    if (m != n) return 0;

    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            if (a[i][j] != a[j][i]) return 0;

    return 1;
}
