
// function to find rank of matrix
int rank(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    float mat_copy[MAX_ROWS][MAX_COLS];
    rref(mat_copy, a, m, n);
    return trace_float(mat_copy, m, n);
}

// function to find nullity of matrix
int nullity(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    return m - rank(a, m, n);
}