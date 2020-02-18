/* A sample program demonstrating the working of global variables */

#include <stdio.h>
int n=1000 ;
int main()
{
	void sample();
	printf("Value of n = %d\n",n);
	sample() ;  // calling the function
}

/*   following is the definition(body) of the function sample()  */
void sample()
{
	void check() ;  // fucntion prototype of check() function
	printf("Value of n = %d\n",n);
    check() ; // calling check()
}

void check()
{
	printf("Value of n = %d\n",n);
}
