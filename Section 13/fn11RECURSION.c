// WAP of a recusrive function that calculates and returns the factorial of a number
#include <stdio.h>
long int rec_fact(int n)
{
	long f ;
	if (n==0)
	return 1 ;
 	f=n * rec_fact(n-1);
    return f ;  // this statement will be put on to the stack 

	}  // end of definition of the function recfact()
int main()
{
	int num ; long fct ;
	printf("Enter the number");
	scanf("%d",&num);
	fct=rec_fact(num);
	printf("Factorial of %d is %ld ",num,fct);
	
}
