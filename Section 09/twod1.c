/* WAP that reads values into the elements of a 2D array and prints them*/ 
#include <stdio.h>
int main()
{
	int scores[3][3],i,j;
	/*reading the values into the array */
	for (i=0;i<3;++i) // outer loop
	{
		for(j=0;j<3;++j)  // inner loop
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&scores[i][j]);
		}
	}
	/* Now we are printing the values into a matrix form */
	printf("\n Display the values into matrix form:\n\n\n");
	for(i=0;i<3;++i)
	{
		for (j=0;j<3;++j)
{
	printf("%d\t",scores[i][j]);
		}		
		printf("\n");
	 } 

}
