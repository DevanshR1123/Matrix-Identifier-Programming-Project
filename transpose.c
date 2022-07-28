void transpose(int x[10][10],int a,int b) 
{
    int i,j,temp;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(i<j)
            {
                temp=x[i][j];
                x[i][j]=x[j][i];
                x[j][i]=temp;
            }
        }
    }
}
