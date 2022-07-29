// function to transpose a matrix

void transpose(int x[MAX_ROWS][MAX_COLS], int a, int b) {
    int i, j, temp;
    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
            if (i < j)
                swap(&x[i][j], &x[j][i]);
}
