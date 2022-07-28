void multiplication(int c[10][10],int x[10][10],int y[10][10],int a,int b,int c) //c=destination
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            for(k=0;k<c;k++)
            {
                c[i][j]+=x[i][k]*y[k][j];
            }
        }
    }
}
