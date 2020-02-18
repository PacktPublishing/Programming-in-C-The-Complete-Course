/*                   Pointer arithmetic              */
#include <stdio.h>
int main()
{
	float a=100.00 ;
	float *pt ; // declaration of pointer to float
	pt=&a ;
	printf("Address = %u\t value = %5.2f\n",pt,*pt);
	++pt ;
	printf("Address = %u\t value = %5.2f\n",pt,*pt);
	 }
