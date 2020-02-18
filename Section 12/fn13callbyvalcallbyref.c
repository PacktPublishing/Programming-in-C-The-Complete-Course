/*   WAP a program that demonstrates the working of call by value  */
#include <stdio.h>
int main()
{
	void somedata(int,float) ; // function prototype
	int a=100 ;
	float b=200.0 ;
	somedata(a,b) ; // Call by value (passing the copies of values of a and b)
	printf("values of a and b after returnung from function = %d\t%.2f\n\n",a,b);
	 		   }               
	 		   
// following is the definition(body) of the function somedata()

void somedata(int a1,float b1)
{
	a1+=100 ; // same as a=a+100 ;
	b1*=2 ;   // same as b=b*2  ;
	printf("Values of formal paratmeters a1 and b1 = %d\t%.2f\n\n",a1,b1);
}
