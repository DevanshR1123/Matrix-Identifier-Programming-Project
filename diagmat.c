
// check except Diagonal elements are 0 or not
int diagmat(int arr[MAX_ROWS][MAX_COLS], int x, int y) {
    if (x != y) return 0;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            if (i != j && arr[i][j] != 0) return 0;

    return 1;
}
