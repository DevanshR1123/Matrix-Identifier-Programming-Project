
 int multiply (int Multiplication[10][10],int rows,int columns,int Number )
 {
  int i,j;
 	for(i=0;i<rows;i++)
  	{
   		for(j=0;j<columns;j++)
    	{
      		Multiplication[i][j] = Number * Multiplication[i][j];    
   	 }
  	}
 }
