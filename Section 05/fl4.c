#include <stdio.h>
int main()
{
int bsal ;
float hra,pf,bonus,netsalary ;
printf("Enter the basic salary");
scanf("%d",&bsal);
if(bsal>=10000)
{
	hra=5.5/100*bsal ;
	pf=30.0/100*bsal ;
	bonus=75.0/100*bsal ;
	}
	else
{
	hra=2.5/100*bsal ;
	pf=20.0/100*bsal ;
	bonus=35.0/100*bsal ;
	}
	netsalary=bsal+hra+bonus-pf ;
printf("Net Salary = %.2f",netsalary);
 }
 
