// WAP that reads character by character from a file and displays on screen 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fpnt ; // decl. of pointer to structure FILE
	char mychar ;
	fpnt=fopen("c:\\myfiles\\data.txt","r");
	if(fpnt==NULL)
	{
		printf("Unable to open the file .....");
		exit(0);   // terminates the program
	}
while (mychar!=EOF)
{
	mychar=fgetc(fpnt);
	putchar(mychar);
	}	
fclose(fpnt);
}
