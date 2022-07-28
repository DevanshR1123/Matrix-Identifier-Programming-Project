int upperT(int arr[][],int x,int y)
{


    //check upper triangular matrix or not
    int i,j;
    int check=0;
    if(x==y)
    {
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(i<=j&&arr[i][j]!=0)
            {
              check==0;
            }
            else
            {
                check=1;
                break;
            }
        }
    }
    return check;
}
