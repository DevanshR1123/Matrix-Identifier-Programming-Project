// checks if matrix is skew symmetric

int skewsymmetric(int a[10][10], int m, int n) {
    int i, j;
    if (m != n) return 0;

    for (i = 1; i <= m; i++)
        for (j = 1; j <= n; j++)
            if (a[i][j] != -a[j][i]) return 0;

    return 1;
}
