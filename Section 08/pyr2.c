/* WAP that prints the follwing pattern -

*
* *
* * *
* * * *
* * * * *

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
			printf("* ") ;
		}  // end of inner loop
	printf("\n");
	} // end of outer lopp
	
}

