

void multiply(int dest[MAX_ROWS][MAX_COLS], int x[MAX_ROWS][MAX_COLS], int y[MAX_ROWS][MAX_COLS], int a, int b, int c) {
   int i, j, k;
   for ( i = 0; i < a; i++)
        for ( j = 0; j < c; j++) {
            dest[i][j] = 0;
            for ( k = 0; k < b; k++)
                dest[i][j] += x[i][k] * y[k][j];
        }
}
