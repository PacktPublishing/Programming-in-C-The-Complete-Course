/* WAP that stores address of a pointer variable into a pointer to pointer variable */
#include <stdio.h>
int main()
{
	int val=1000,*pnt,**ppnt ;
	pnt=&val ; // assigning address of val into pnt
	ppnt=&pnt ;
	printf("Address of val = %u\n",pnt);
	printf("Value of val = %d\n",*pnt);
	printf("Address of pointer varaible pnt = %u\n",ppnt);
	printf("Address of val = %u\n",*ppnt);
	printf("Value of val = %d\n",**ppnt);
	}
