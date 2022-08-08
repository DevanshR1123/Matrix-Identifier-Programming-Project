// function to sort rows of a matrix

#include <conio.h>
#include <stdio.h>

void sort_rows(float a[MAX_ROWS][MAX_COLS], int m, int n) {
    int i, j;
    for ( i = 0; i < m; i++)
        for ( j = i + 1; j < m; j++)
            if (a[i][0] < a[j][0])
                swap_rows(a, m, n, i, j);
}
