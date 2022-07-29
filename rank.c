
// function to find rank of matrix
int rank(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    float mat_copy[MAX_ROWS][MAX_COLS];
    rref(mat_copy, a, m, n);
    int i, j;
    int rank = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (mat_copy[i][j] != 0) {
                rank++;
                break;
            }

    return rank;
}

// function to find nullity of matrix
int nullity(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    int r = rank(a, m, n);
    return n - r;
}