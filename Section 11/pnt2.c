/* A program using * 'value at address' or Dereference operator 
or indirection operator  */

#include <stdio.h>
int main()
{
int a=100,*ip ;
float b=90.99,*dp ;
ip=&a ;	// assigining address of a into ip
dp=&b ; // assigning address of b into dp
printf("value of a = %d\n",*ip);
printf("value of b = %.2f\n",*dp);
}


