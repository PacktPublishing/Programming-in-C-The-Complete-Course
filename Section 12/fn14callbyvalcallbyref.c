/*   WAP a program that demonstrates the working of call by reference  */
#include <stdio.h>
int main()
{
	void somedata(int *,float *) ; // function prototype
	int a=100 ;
	float b=200.0 ;
	somedata(&a,&b) ;//Call by reference(passing the addresses of arguments)
	printf("\nvalues of a and b after returnung from function = %d\t%.2f\n\n",a,b);
	 		   }               
	 		   
// following is the definition(body) of the function somedata()

void somedata(int *a1,float *b1)
{
	*a1=*a1 + 100 ; // same as *a1+=100 ;
	*b1=*b1 * 2 ;   // same as b=b*2  ;
	 }
