/*  WAP that reads a number and passes it to a function that
displays it's reverse. The called function is not required to return a value   */
#include<stdio.h>
int main()
{
	void getreverse(long) ; // function prototype
	long num ;
	printf("Enter the number");
	scanf("%ld",&num);
	getreverse(num); // calling the function by passing num
	printf("\nLearning is fun !!!");
	}   // end of definition of main() function
	
	void getreverse(long num1)
	{
		int r ;
		while(num1 != 0)
		{
			r=num1%10 ;
			printf("%d",r);
			num1=num1/10 ;
		} // end of loop block
	}   // end of definition of getreverse() function
	 
