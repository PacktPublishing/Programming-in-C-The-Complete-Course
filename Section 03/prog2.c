#include <stdio.h>
int main()
{
	int a,b ; // decl. of variables a and b
	float c;  // decl. of variable c
	printf("Enter the values of a and b");
	scanf("%d%d",&a,&b); // reading the values from user
	c=a+b ;
	printf("%f",c);
	c=a-b ;
	//printf("\n%f",c);
	printf("\t%f",c);
}
