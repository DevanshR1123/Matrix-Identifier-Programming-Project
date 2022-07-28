#include "params.h"

void copy(int y[MAX_ROWS][MAX_COLS],int x[MAX_ROWS][MAX_COLS],int a,int b) 
{
    int i,j;
    for(i=0;i<a;i++)
        for(j=0;j<b;j++)
            y[i][j]=x[i][j];    
}
