/*    Sample program to show the working of local variables    */
#include <stdio.h>

int main()
{
	void sample() ; //function prototype
	sample();   // calling the function
	printf("Value of n = %d",n);
	}

/* following is the definition of the function sample() */
void sample()
{
	int n=100 ;
printf("Value of n = %d",n);
}  // end of definition (body) of the function sample()
