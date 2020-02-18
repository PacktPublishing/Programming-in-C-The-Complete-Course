/*  WAP that reads two numbers a and b. Print mathematical tables of
all the numbers within this range.  */
#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c ;
	printf("Enter the starting number and ending number");
	scanf("%d%d",&a,&b);
	for (;a<=b;++a)  // outer loop
	{
		for (c=1;c<=10;++c)  // inner loop
		{
			printf("%d * %d = %d\n",a,c,a*c);
		} // end of inner loop
		getch() ;  // halts the screen
	printf("______________________________________\n"); // just a separator line
	} // end of outer loop
}
