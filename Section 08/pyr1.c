/* WAP that prints the follwing pattern -
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/                        								
#include <stdio.h>
int main()
{
	int i,j,n ;
	printf("Enter the number of rows");
	scanf("%d",&n);
	for (i=1;i<=n;++i)      // outer loop
	{
		for (j=1;j<=i;++j)  // inner loop 
		{
			printf("%d ",i) ;
		}  // end of inner loop
	printf("\n");
	} // end of outer lopp
	
}

