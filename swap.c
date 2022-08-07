// swap function
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_float(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void swap_rows(float a[MAX_ROWS][MAX_COLS], int m, int n, int i, int j) {
    for (int k = 0; k < n; k++)
        swap_float(&a[i][k], &a[j][k]);
}