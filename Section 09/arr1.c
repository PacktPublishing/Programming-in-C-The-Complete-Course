// WAP that reads the temperatures of a city for the last 10 days into an array.

#include <stdio.h>
int main()
{
	float tmp[10] ; 
	int n=0 ;
	while(n<10)
	{
		printf("Enter the temperature of day %d ",n+1);
		scanf("%f",&tmp[n]);
		++n ;
	}
n=0 ; // reinitialising the value of n again to 0.
while(n<10)
	{
		printf("Temperature of day %d = %.2f\n",n+1,tmp[n]);
		 	++n ;
			 }

}
