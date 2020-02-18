/*    Sample program to show the working of local variables    */
#include <stdio.h>
int main()
{
	int n=200 ;       // local to calling function main()
	void sample() ;   //function prototype
	sample();         // calling the function
printf("Value of n = %d",n);
	}

/* following is the definition of the function sample() */
void sample()
{
	int n=100 ;       // local to called function sample()
printf("Value of n = %d\n",n);
}  // end of definition (body) of the function sample()
