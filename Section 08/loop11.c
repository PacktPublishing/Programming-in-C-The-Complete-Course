/*   WAP that reads a number and prints it's reverse  */
#include <stdio.h>
int main()
{
	int x,r ;
	printf("Enter the number to reverse");
	scanf("%d",&x);
for (;x!=0;x=x/10)
{
		r=x%10 ;
		printf("%d",r);
}
	/* while(x!=0)
	{
		r=x%10 ;
		printf("%d",r);
		x=x/10 ;
	}
*/	
 } 
