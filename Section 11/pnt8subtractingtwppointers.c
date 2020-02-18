/*                  Subtracting two pointer variables             
after literal subtraction,result will be divided by size of the data type */

#include <stdio.h>
int main()
{
	int arr[]={100,200,90,800,1000};
	int n=&arr[4]-&arr[2];
	printf("n = %d\n",n);
	/////////////////////////////////////////////////////
	double amount[]={100.0,200.15,9000.99,1000.11,2500.55} ;
	n=&amount[4]-&amount[0];  
	printf("n = %d\n",n);
	
	}  
