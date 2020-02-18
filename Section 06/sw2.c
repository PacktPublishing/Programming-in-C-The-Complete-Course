#include <stdio.h>
int main()
{
	int no_of_years,bsal ;
	float hra,pf,bonus,netsal ;
printf("Enter the number of years of experience ");
scanf("%d",&no_of_years) ;
switch(no_of_years)
{
	case 1:
		case 2:
		bsal=9000 ;
		hra=1000 ;
		pf=2000 ;
		bonus=900 ;
		break ;
		
		case 3:
		bsal=11000 ;
		hra=1300 ;
		pf=2400 ;
		bonus=1000 ;
		break ;
default:
	 	bsal=12000 ;
		hra=1400 ;
		pf=2500 ;
		bonus=1100 ;
		
}  // end of swicth case block

netsal=bsal+hra+bonus-pf ;
printf("Net Salary = %.2f",netsal);
}

