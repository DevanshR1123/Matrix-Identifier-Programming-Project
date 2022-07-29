

// function to find rank of matrix
int rank(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    int mat_copy[MAX_ROWS][MAX_COLS];
    copy(mat_copy, a, m, n);
    rref(mat_copy, m, n);
    return trace(mat_copy, m, n);
}

// function to find nullity of matrix
int nullity(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    return m - rank(a, m, n);
}