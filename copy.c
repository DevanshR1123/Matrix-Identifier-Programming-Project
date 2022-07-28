void copy(int x[10][10],int y[10][10],int a,int b) 
{
    int i,j,temp;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            y[i][j]=x[i][j];
        }
    }
}
