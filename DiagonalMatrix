#include <stdio.h>
void diagmat()
{
int row_size,col_size;
    //Get size of matrix
    printf("Enter the row Size Of the Matrix:");
    scanf("%d",&row_size);
    printf("Enter the columns Size Of the Matrix:");
    scanf("%d",&col_size);

    int matrix[row_size][col_size];

    //Taking input of the matrix
    int i,j;
    printf("Enter the Matrix Element:\n");
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    //check except Diagonal elements are 0 or not
    int point=0;
    for(i=0;i<row_size;i++)
    {
        for(j=0;j<col_size;j++)
        {
        if(i!=j && matrix[i][j]!=0)
        {
            point=1;
            break;
        }
        }
    }
    if(point==1)
        printf("Given Matrix is not a diagonal Matrix.");
    else
        printf("Given Matrix is a diagonal Matrix.");
}

int main()
{
    diagmat();
    return 0;
}
