#include<stdio.h>
int main()
{
 int a[10][10],i,j,m;
 
 printf("Enter order of square matrix: ");
 scanf("%d",&m);
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=m;j++)
  {
   printf("Enter value of a[%d][%d]: ",i,j);
   scanf("%d",&a[i][j]);
  }
 }
 for(i=1;i<=m;i++)
 {
  for(j=1;j<=m;j++)
  {
   if(a[i][j]!=-a[j][i])
   {
    printf("\n\nMatrix is not skew symmetric");
    getch();
    exit();
   }
  }
 }
 printf("\n\nMatrix is skew symmetric");
 getch();
}
