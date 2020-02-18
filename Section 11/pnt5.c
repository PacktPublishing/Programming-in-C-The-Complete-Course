/*                   Pointer arithmetic              */
#include <stdio.h>
int main()
{
	 double a=100.00 ;
	 double *pt ; // declaration of pointer to  double
	 pt=&a ;
	 printf("Address = %u\t value = %lf\n",pt,*pt);
	 ++pt ;
	 printf("Address = %u\t value = %lf\n",pt,*pt);
	 }
