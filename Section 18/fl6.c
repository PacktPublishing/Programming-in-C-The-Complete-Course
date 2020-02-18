//       WAP that reads a structure from a disk file
#include <stdio.h>
#include <stdlib.h>
int main()
{
	struct products
	{
		int code ;
	    char desc[25] ;   // product description
		float price ;
		int year_of_man ; // year of manufacturing
	
	} pvar ;
	FILE *fpnt ; // decl. of pointer to structure FILE
	fpnt=fopen("c:\\myfiles\\items.bin","rb");
	if (fpnt==NULL)
	{
		printf("Unable to open the file .....");
		exit(0);
	}
	 
	fread(&pvar,sizeof(struct products),1,fpnt);
	printf("Product code = %d\ndescription = %s\nPrice = %.2f\nYear of manufacturing =	 %d\n",pvar.code,pvar.desc,pvar.price,pvar.year_of_man);
	fclose(fpnt) ;
	 }
