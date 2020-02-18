 /*   WAP to print all natural numbers from 1 to 100 using do .. while loop   */
#include <stdio.h>
int main()
{
	int n=101 ; 
	do
	{
		printf("%d\t",n);
		++n ;
	}
	while(n<=100);
	printf("\nThe control is out of the loop block");
		}
