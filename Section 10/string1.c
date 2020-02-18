                 /*    WAP that finds the length of a string     */
#include <stdio.h>
#include <string.h>
int main()
{
	char city[100] ;
	int l ;
	printf("Enter the city name");
	gets(city) ; // scanf("%s",city) ;
	l=strlen(city);
	printf("Length = %d",l);
}
