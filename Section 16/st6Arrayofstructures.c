//   WAP that uses array of strcutures
#include <stdio.h>
int main()
{
	struct laptops
	{
		int RAM ;
		int HDD_SPACE ;
		float price ;
	} 
	struct laptops sr[3]; // decl. of array of 3 structures
	int n ;
// folowing loop is used to read values into elements of structure array
	for (n=0;n<3;++n)
	{     
		printf("Enter RAM , Hard disk space and Price\n");
		scanf("%d%d%f",&sr[n].RAM,&sr[n].HDD_SPACE,&sr[n].price);
	}

	// following loop is used to display elements of structure array
	for (n=0;n<3;++n)
	{
printf("RAM = %3d\tHard disk space = %3d\tPrice = %10.2f\n",sr[n].RAM,sr[n].HDD_SPACE,sr[n].price);
}
}
