// multiply a matrix by a scalar

void scalar_multiply(int x[MAX_ROWS][MAX_COLS], int rows, int columns, int k) {
    int i, j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            x[i][j] = k * x[i][j];
}
