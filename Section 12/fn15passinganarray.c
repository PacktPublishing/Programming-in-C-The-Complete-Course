/*               Passing an array to a function           
                    ( a typical example of call by reference )      */
                    
#include <stdio.h>
int main()
{
	int arr[]={10,15,25,90,120};
	int n ;
	void sample(int *); // function prototype
	sample(arr) ; //calling the function using call by reference

	// printing the array after returning from function   
	for (n=0;n<5;++n)
	{
		printf("arr[%d] = %5d\n",n,arr[n]) ;
	}
}  // end of definition of function main()

// following is the definition of the function sample()
void sample(int pnt[])
{
	int n ;
	for (n=0;n<5;++n)
	{
		*(pnt+n)=*(pnt+n) + 100 ;  // same as pnt[n]=pnt[n] + 100
	}
}
