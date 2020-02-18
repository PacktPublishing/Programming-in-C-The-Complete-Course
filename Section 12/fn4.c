/*    ASCII Table */
#include <stdio.h>

void display()
{
	int a=0 ;
	while(a<=255)
	{
		printf("[%d] = [%c]\n",a,a) ;
		++a ; 	
		} // end of loop block
} // end of definition of the function display()

int main()
{
	display() ;  // calling the function
}


