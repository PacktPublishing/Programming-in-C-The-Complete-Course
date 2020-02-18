//       WAP that writes values of some variables on a disk file
#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned long transaction_Id ;
	char customer_name[20];
	float bill_amt ;
	FILE *fpnt ; // decl. of pointer to structure FILE
fpnt=fopen("c:\\myfiles\\cust.txt","w");
if (fpnt==NULL)
{
	printf("Unable to open the file ....") ;
	exit(0) ; // terminates the program 
}
printf("Enter the customer name,transaction Id and bill amount");
gets(customer_name);
scanf("%lu%f",&transaction_Id,&bill_amt);
fprintf(fpnt,"%s %lu %.2f",customer_name,transaction_Id,bill_amt);
fclose(fpnt);
}
