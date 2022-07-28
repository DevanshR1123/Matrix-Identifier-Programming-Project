// Matrix Identifier

#include <stdio.h>
#include <math.h>
#include <string.h>


#define MAX_ROWS 10
#define MAX_COLS 10

void swap (int, int);


void rref(int[MAX_ROWS][MAX_COLS],int,int);


int main (){
    int i, j, k;
    int m, n;
    int a[MAX_ROWS][MAX_COLS];

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    printf("Enter the matrix: \n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("The matrix is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("rank of matrix is: %d\n",rank(a,m,n));
    printf("trace of matrix is: %d\n",trace(a,m,n));


    rref(a,m,n);

    printf("The reduced row echelon form is: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;

}

//funtction to find reduced row echelon form
void rref(int a[MAX_ROWS][MAX_COLS], int m, int n){
    int i, j, k;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            a[i][j] = a[i][j]/a[i][i];
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
            for(k = 0; k < n; k++)
                if (k != i)
                    a[i][j] = a[i][j] - a[i][k]*a[k][j];
    }
 
}

//function to find trace of matrix
int trace(int a[MAX_ROWS][MAX_COLS], int m, int n){
    int i, j, trace = 0;
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            if (i == j)
                trace = trace + a[i][j];
    return trace;
}

//function to find rank of matrix
int rank(int a[MAX_ROWS][MAX_COLS], int m, int n){
    rref(a,m,n);
    return trace(a,m,n);
}