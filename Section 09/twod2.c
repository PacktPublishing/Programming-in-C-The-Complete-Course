/* WAP of matrix addition */ 
#include <stdio.h>
int main()
{
	int a[][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int b[][3]={
	{1,7,8},
	{2,3,4},
	{1,2,3}
	};
	int c[3][3],i,j ;
	
	for (i=0;i<3;++i)  // outer loop for traversing rows
	{
		for (j=0;j<3;++j)  // inner loop for traversing columns
		{
		
		c[i][j]=a[i][j]+b[i][j];
	}
}
	
	// printing the resultant matrix (2-d array)
	
	for (i=0;i<3;++i)
	{
		for (j=0;j<3;++j)
		{
			printf("%d\t",c[i][j]);
		} // end of inner loop block
	printf("\n");
	} // end of outer loop block
}

