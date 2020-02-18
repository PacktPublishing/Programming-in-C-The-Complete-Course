///////  Program to find biggest among 3 numbers using nested if  ////////
#include <stdio.h>
int main()
{
	unsigned long pop1,pop2,pop3 ;
	printf("Enter the populations of 3 cities");
	scanf("%lu%lu%lu",&pop1,&pop2,&pop3) ;
	if (pop1>pop2)
	if(pop1>pop3)
	printf("The biggest population = %lu",pop1);
	else
	printf("The biggest population = %lu",pop3);
	else
	if(pop2>pop3)
	printf("The biggest population = %lu",pop2);
	else
	printf("The biggest population = %lu",pop3);
}
  
