// check lower triangular matrix or not

int lowerT(int arr[MAX_ROWS][MAX_COLS], int x, int y) {
    if (x != y) return 0;
int i, j;
    for ( i = 0; i < x; i++)
        for ( j = 0; j < y; j++)
            if (i <= j && arr[i][j] != 0) return 0;

    return 1;
}
