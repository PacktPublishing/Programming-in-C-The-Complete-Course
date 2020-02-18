//           Passing a structure to a function using call by reference

#include <stdio.h>
struct employees
{
	unsigned int emp_code ;
	int basic_sal ;
	float hra , pf , bonus ;
	};  // end of structure specification
	int main()
	{
		struct employees evar ;
		float get_netsalary(struct employees *) ; // function prototype
		float net_sal ;
		printf("Enter the employee code, basic salary,hra,pf and bonus ");
scanf("%u%d%f%f%f",&evar.emp_code,&evar.basic_sal,&evar.hra,&evar.pf,&evar.bonus);
net_sal=get_netsalary(&evar); // calling function by reference		
printf("Net Salary = %8.2f",net_sal);
	}   // end of definition (body) of the function main()
	
	// following is the definition of the function get_netsalary()
	float get_netsalary(struct employees *fvar)
{
float net_sal ;
net_sal=fvar->basic_sal + fvar->hra + fvar->bonus - fvar->pf ;
return net_sal ;
}
