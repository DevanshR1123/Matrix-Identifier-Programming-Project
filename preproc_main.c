// Matrix Identifier

#include <conio.h>
#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void swap(int *, int *);
void print_mat(int[MAX_ROWS][MAX_COLS], int, int);
void print_mat_float(float[MAX_ROWS][MAX_COLS], int, int);
void copy(int[MAX_ROWS][MAX_COLS], int[MAX_ROWS][MAX_COLS], int, int);
void copy_float(float[MAX_ROWS][MAX_COLS], float[MAX_ROWS][MAX_COLS], int, int);
void copy_float_int(float[MAX_ROWS][MAX_COLS], int[MAX_ROWS][MAX_COLS], int, int);
void sort_rows(float[MAX_ROWS][MAX_COLS], int, int);
void swap_rows(float[MAX_ROWS][MAX_COLS], int, int, int, int);
void swap_float(float *, float *);

int rank(int[MAX_ROWS][MAX_COLS], int, int);
int nullity(int[MAX_ROWS][MAX_COLS], int, int);
int trace(int[MAX_ROWS][MAX_COLS], int, int);
float trace_float(float[MAX_ROWS][MAX_COLS], int, int);
void rref(float[MAX_ROWS][MAX_COLS], int[MAX_ROWS][MAX_COLS], int, int);

int upperT(int[MAX_ROWS][MAX_COLS], int, int);
int lowerT(int[MAX_ROWS][MAX_COLS], int, int);
int diagmat(int[MAX_ROWS][MAX_COLS], int, int);

void multiply(int[MAX_ROWS][MAX_COLS], int[MAX_ROWS][MAX_COLS], int[MAX_ROWS][MAX_COLS], int, int, int);
void transpose(int[MAX_ROWS][MAX_COLS], int, int);
int orthogonal(int[MAX_ROWS][MAX_COLS], int, int);

int skewsymmetric(int[MAX_ROWS][MAX_COLS], int, int);
int symmetric(int[MAX_ROWS][MAX_COLS], int, int);
void scalar_multiply(int[MAX_ROWS][MAX_COLS], int, int, int);

void copy(int y[MAX_ROWS][MAX_COLS], int x[MAX_ROWS][MAX_COLS], int a, int b) {
    int i, j;
    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
            y[i][j] = x[i][j];
}

void copy_float_int(float y[MAX_ROWS][MAX_COLS], int x[MAX_ROWS][MAX_COLS], int a, int b) {
    int i, j;
    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
            y[i][j] = (float)x[i][j];
}

void copy_float(float y[MAX_ROWS][MAX_COLS], float x[MAX_ROWS][MAX_COLS], int a, int b) {
    int i, j;
    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
            y[i][j] = x[i][j];
}

int diagmat(int arr[MAX_ROWS][MAX_COLS], int x, int y) {
    if (x != y) return 0;
    int i, j;
    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++)
            if (i != j && arr[i][j] != 0) return 0;

    return 1;
}

int lowerT(int arr[MAX_ROWS][MAX_COLS], int x, int y) {
    if (x != y) return 0;
    int i, j;
    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++)
            if (i <= j && arr[i][j] != 0) return 0;

    return 1;
}

void multiply(int dest[MAX_ROWS][MAX_COLS], int x[MAX_ROWS][MAX_COLS], int y[MAX_ROWS][MAX_COLS], int a, int b, int c) {
    int i, j, k;
    for (i = 0; i < a; i++)
        for (j = 0; j < c; j++) {
            dest[i][j] = 0;
            for (k = 0; k < b; k++)
                dest[i][j] += x[i][k] * y[k][j];
        }
}

int orthogonal(int x[MAX_ROWS][MAX_COLS], int a, int b) {
    int transx[MAX_ROWS][MAX_COLS], multiplication[MAX_ROWS][MAX_COLS], i, j, rank_m;

    copy(transx, x, a, b);

    transpose(transx, a, b);

    multiply(multiplication, x, transx, a, b, a);

    rank_m = rank(multiplication, a, a);

    return rank_m == a;
}

void print_mat(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("\n");
}

void print_mat_float(float a[MAX_ROWS][MAX_COLS], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%2.2f ", a[i][j]);
        printf("\n");
    }
    printf("\n");
}

int rank(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    float mat_copy[MAX_ROWS][MAX_COLS];
    rref(mat_copy, a, m, n);
    int rank = 0;
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (mat_copy[i][j] != 0) {
                rank++;
                break;
            }

    return rank;
}

int nullity(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    int r = rank(a, m, n);
    return n - r;
}

void rref(float x[MAX_ROWS][MAX_COLS], int y[MAX_ROWS][MAX_COLS], int m, int n) {
    float p;
    int i, j, k, a, b;

    copy_float_int(x, y, m, n);

    sort_rows(x, m, n);

    for (i = 0; i < m; i++) {
        p = x[i][i];
        if (p != 0.0) {
            for (int j = 0; j < n; j++)
                x[i][j] = x[i][j] / p;

            for (k = 0; k < m; k++)
                if (k != i) {
                    p = x[k][i];
                    for (j = 0; j < n; j++)
                        x[k][j] = x[k][j] - p * x[i][j];
                }
        }

        for (a = 0; a < m; a++)
            for (b = 0; b < n; b++)
                if (x[a][b] == 0.0 || x[a][b] <= 0.00001)
                    x[a][b] = 0.0;
    }
}

void scalar_multiply(int x[MAX_ROWS][MAX_COLS], int rows, int columns, int k) {
    int i, j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < columns; j++)
            x[i][j] = k * x[i][j];
}

int skewsymmetric(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    if (m != n) return 0;
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != -a[j][i]) return 0;

    return 1;
}

void sort_rows(float a[MAX_ROWS][MAX_COLS], int m, int n) {
    int i, j;
    for (i = 0; i < m; i++)
        for (j = i + 1; j < m; j++)
            if (a[i][0] < a[j][0])
                swap_rows(a, m, n, i, j);
}

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
    int k;
    for (k = 0; k < n; k++)
        swap_float(&a[i][k], &a[j][k]);
}

int symmetric(int a[MAX_ROWS][MAX_COLS], int m, int n) {
    if (m != n) return 0;
    int i, j;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] != a[j][i]) return 0;

    return 1;
}

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

void transpose(int x[MAX_ROWS][MAX_COLS], int a, int b) {
    int i, j;
    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
            if (i < j)
                swap(&x[i][j], &x[j][i]);
}

int upperT(int arr[MAX_ROWS][MAX_COLS], int x, int y) {
    if (x != y) return 0;
    int i, j;
    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++)
            if (i >= j && arr[i][j] != 0) return 0;

    return 1;
}

int main() {
    int i, j, k;
    int m, n;
    int a[MAX_ROWS][MAX_COLS];
    float x[MAX_ROWS][MAX_COLS];

    printf("Enter values for m and n: ");
    scanf("%d %d", &m, &n);

    printf("Enter the matrix: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("\n----------------------------------------------------\n");

    printf("\nThe matrix is: \n");
    print_mat(a, m, n);

    printf("\n");

    printf("rank of matrix is: %d\n", rank(a, m, n));
    printf("nullity of matrix is: %d\n", nullity(a, m, n));
    printf("trace of matrix is: %d\n\n", trace(a, m, n));
    printf("Orthogonal Matrix: %s\n", orthogonal(a, m, n) ? "Yes" : "No");
    printf("Diagonal Matrix: %s\n", diagmat(a, m, n) ? "Yes" : "No");
    printf("Lower Triangular Matrix: %s\n", lowerT(a, m, n) ? "Yes" : "No");
    printf("Upper Triangular Matrix: %s\n", upperT(a, m, n) ? "Yes" : "No");
    printf("Skew Symmetric Matrix: %s\n", skewsymmetric(a, m, n) ? "Yes" : "No");
    printf("Symmetric Matrix: %s\n", symmetric(a, m, n) ? "Yes" : "No");

    printf("\n");

    rref(x, a, m, n);

    printf("The reduced row echelon form is: \n");
    print_mat_float(x, m, n);

    printf("\n----------------------------------------------------\n");

    getch();

    return 0;
}
