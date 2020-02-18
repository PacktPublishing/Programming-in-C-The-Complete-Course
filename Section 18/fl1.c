//         WAP that reads character by character and writes them to a file 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fpnt ; // decl. of pointer to structure FILE
	char mychar ;
	fpnt=fopen("c:\\myfiles\\data.txt","w");
	if(fpnt==NULL)
	{
		printf("Unable to open the file .....");
		exit(0);   // terminates the program
	}
while((mychar=getchar())!=EOF)
{
	fputc(mychar,fpnt);
	}	
fclose(fpnt);
}
