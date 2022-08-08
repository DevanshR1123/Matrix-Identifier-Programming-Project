// checks if matrix is symmetric

int symmetric(int a[10][10], int m, int n) {
    if (m != n) return 0;
    int i, j;
    for ( i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            if (a[i][j] != a[j][i]) return 0;

    return 1;
}
