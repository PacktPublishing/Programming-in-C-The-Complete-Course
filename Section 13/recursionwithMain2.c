                       /*     A recursion example      */
#include <stdio.h>
int main()
{ 
int exitstatus ;
printf("Everyone should learn coding  \n");
printf("Enter 1 to continue and 0 to exit ");
scanf("%d",&exitstatus);
if (exitstatus==1)
	main() ;  // a recursive call
	
}
