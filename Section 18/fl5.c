//       WAP that writes a structure on a disk file
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
	fpnt=fopen("c:\\myfiles\\items.bin","wb");
	if (fpnt==NULL)
	{
		printf("Unable to open the file .....");
		exit(0);
	}
	pvar.code=101 ;
	strcpy(pvar.desc,"Microwave");
	pvar.price=600 ;
	pvar.year_of_man=2017 ;
	fwrite(&pvar,sizeof(struct products),1,fpnt);
	fclose(fpnt) ;
	 }

