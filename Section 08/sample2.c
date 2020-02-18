/*   WAP that reads a number and prints it's mathematical table   */
#include <stdio.h>
int main()
{
	int a , c=1 ;
	printf("Enter the number ");
	scanf("%d",&a);
	 while(c<=10)
	{
		printf("%d * %d = %d\n",a,c,a*c);
		++c ;
	}
	
	
	/* do
	{
		printf("%d * %d = %d\n",a,c,a*c);
		++c ;
	}
	while(c<=10) ;
	*/
	 /* 
	for (c=1;c<=10;++c)
	printf("%d * %d = %d\n",a,c,a*c);
	*/
}
