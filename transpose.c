#include <stdio.h>
int transpose()
{
    int x[3][3],i,j,small,big;
    int sum=0;
    clrscr();
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",%x[i][j]);
        }
    }
    small=x[0][0];
    big=x[0][0];
    for(i=0;i<3);i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",x[i][j]);
            sum+=x[i][j];
            if(x[i][j]<small)
             small=x[i][j];
            if(x[i][j]>big)
             big=x[i][j];
        }
        printf("\n");
    }
    printf("Sum = %d \nSmallest = %d \nLargest = %d",sum,small,big);
    getch();
    return 0;
}
