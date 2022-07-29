int skewsymmetric(int a[10][10],int order)
{
 int i,j;
 for(i=1;i<=order;i++)
 {
  for(j=1;j<=order;j++)
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
