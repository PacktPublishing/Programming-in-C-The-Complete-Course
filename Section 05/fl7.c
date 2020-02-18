/* Program to find biggest among 3 numbers 
using && logical operator (conjunction operator) */
#include <stdio.h>
int main()
{	unsigned long pop1,pop2,pop3 ;
	printf("Enter the populations of 3 cities ");
	scanf("%lu%lu%lu",&pop1,&pop2,&pop3) ;
if (pop1>pop2 && pop1>pop3)
printf("The biggest population = %lu",pop1);
else
if(pop2>pop3)
printf("The biggest population = %lu",pop2);
else
printf("The biggest population = %lu",pop3);
}
