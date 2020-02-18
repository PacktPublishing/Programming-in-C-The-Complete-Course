/* A sample program demonstrating the working of global variables */

#include <stdio.h>
int n=1000 ;
int main()
{
	void sample();   // function prototype
	printf("Value of n in main() = %d\n",n);
	sample() ;  // calling the function
	printf("Value of n in main() = %d\n",n);
}


/*   following is the definition(body) of the function sample()  */
void sample()
{
	void check() ;  // fucntion prototype of check() function
	printf("Value of n in sample()= %d\n",n);
    check() ;
	printf("Value of n in sample() = %d\n",n);
}  // end of definition of sample() function

void check()
{
	printf("Value of n in check= %d\n",n);
    n+=500 ;
	printf("Value of n in check= %d\n",n);
}  // end of definition of check() function
