//       WAP that reads values of some variables from a disk file
#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned long transaction_Id ;
	char customer_name[20];
	float bill_amt ;
	FILE *fpnt ; // decl. of pointer to structure FILE
fpnt=fopen("c:\\myfiles\\cust.txt","r");
if (fpnt==NULL)
{
	printf("Unable to open the file ....") ;
	exit(0) ; // terminates the program 
}
fscanf(fpnt,"%s%lu%f",customer_name,&transaction_Id,&bill_amt);
printf("%s\t%lu\t%.2f",customer_name,transaction_Id,bill_amt);
fclose(fpnt);
}
