/*    WAP that prints all odd numbers from 1 to 100    */ 
#include <stdio.h>
int main()
{
	int n=1 ;
	 /* while(n<=100)
	{
		printf("%d\t",n) ;
		n+=2 ; // n=n+2
	} */

/*	 do
	{
		printf("%d\t",n) ;
		n+=2 ; // n=n+2
	}
while(n<=100) ;
*/

for (;n<=100;n+=2)
printf("%d\t",n);

}
