/* A sample program that shows you how to override local variable
so that we can access global variable  */

#include <stdio.h>
int n=10 ;
int main()
{
	int n=90 ; // local variable
	printf("%d\n",n);
	{
		extern int n ;
		printf("%d\n",n);
	}
	}
