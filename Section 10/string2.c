                  /*    WAP that copies one string into another     */
#include <stdio.h>
#include <string.h>
int main()
{
	char a[]="Java Training at Mahajans" ;
	char b[50];
	strcpy(b,a);   
	printf("Target string = \n%s",b); // puts(b) ;
}

