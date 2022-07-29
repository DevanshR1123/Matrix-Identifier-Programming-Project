

// function to find trace of matrix
int trace(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    if (m != n) return 0;

    int i, j, trace = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (i == j)
                trace = trace + a[i][j];
    return trace;
}

float trace_float(float a[MAX_ROWS][MAX_COLS], int m, int n) {
    if (m != n) return 0;

    int i, j, trace = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (i == j)
                trace = trace + a[i][j];
    return trace;
}