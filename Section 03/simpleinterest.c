/* WAP that reads principal amount,rate of interest and time. Calculate and print 
simple interest */
#include <stdio.h>
int main()
{
	float pmt,roi,sint ;
	int tm ;
	printf("Enter the principal amount,time and rate of interest");
	scanf("%f%d%f",&pmt,&tm,&roi);
	sint=(pmt * tm * roi)/100 ;
	printf("Simple Interest = %.2f",sint);
	 }
  
