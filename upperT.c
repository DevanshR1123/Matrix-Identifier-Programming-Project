//check upper triangular matrix or not
#include "params.h"

int upperT(int arr[MAX_ROWS][MAX_COLS],int x,int y){
    if(x!=y) return 0;
    
    int i,j;
    int check=0;

    for(i=0;i<x;i++)
        for(j=0;j<y;j++)
            if(i<=j&&arr[i][j]==0)
            {
                check=1;
                break;
            }
        
    return check;
}
