void diagmat(int arr[][],int x,int y)
{


    //check except Diagonal elements are 0 or not
    int i,j;
    int check=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
        if(i!=j && *arr[i][j]!=0)
        {
            check=1;
            break;
        }
        }
    }
    if(check==1)
        printf("Given Matrix is not a diagonal Matrix.");
    else
        printf("Given Matrix is a diagonal Matrix.");
}
