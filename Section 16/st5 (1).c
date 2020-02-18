//    WAP to access structure members using pointer to structure
#include <stdio.h>
#include <string.h>
int main()
{
struct sales
{
char salesman_code[10];
float jan_sales,feb_sales,mar_sales ;
}sv,*pt ;
//struct sales  sv ;    // decl. of structure variable
//struct sales *pt ;  // decl . of pointer to structure
pt=&sv ;                // assigning address of structure sv
strcpy(pt->salesman_code,"NY001") ;
pt->jan_sales=12000.00 ;
pt->feb_sales=10000.00 ;
pt->mar_sales=90000.00 ;

puts(pt->salesman_code);
printf("January Sales  = %10.2f\n",pt->jan_sales);
printf("February Sales = %10.2f\n",pt->feb_sales);
printf("March Sales    = %10.2f\n\n",pt->mar_sales);
}
