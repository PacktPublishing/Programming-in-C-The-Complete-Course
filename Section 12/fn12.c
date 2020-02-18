/*  A program that illustrates that a function can return only one value  */
#include <stdio.h>
int main()
{
	int getbiggest(int,int,int); // function prototype
	int x,y,z,biggest ;
	printf("Input any 3 values");
	scanf("%d%d%d",&x,&y,&z); 
	biggest=getbiggest(x,y,z); // calling the biggest() fn. by passing 3 args. 
	printf("The biggest value is %d",biggest);
	}
	
	// following is the definition(body) of the function getbiggest()
	int getbiggest(int x,int y,int z)
	{
		if (x>y)
		if (x>z)
		return y,z,x ;
		else
		return z ;
		else
		if(y>z)
		return y ;
		else
		return z ;
	}
