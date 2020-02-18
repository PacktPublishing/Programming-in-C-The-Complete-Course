/*     WAP that reads a number and passes it to a fucntion that calculates and 
returns it's factorial */

#include <stdio.h>
int main()
{
	int num ; long fct ;
	long calcfact(int) ; // Prototype 
	printf("Enter the number");
	scanf("%d",&num);
	fct=calcfact(num); // calling the funtion by paasing num
	printf("Factorial of %d = %ld",num,fct) ;
	}
	
	/* following is the definition(body) of the function calcfact() */
	long calcfact(int num)
	{
		long f=1 ;
		while(num>=2)
{
	f=f*num ;  // same as writing f*=num ;
    --num ; 	
		}	// end of loop	
return f ;
	}
