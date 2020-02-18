/* A sample program that illustrates that local variables are given precedence */

#include <stdio.h>
int n=10 ; // global variable
int main()
{
	int n=90 ;  // local variable
	printf("%d\n",n);
}


