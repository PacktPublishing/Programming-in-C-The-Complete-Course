#include <stdio.h>
#include <ctype.h>
int main()
{
	char letter ;
	printf("Enter the letter");
	letter=getchar() ;   // scanf("%c",&letter) ;
	switch(toupper(letter))
	{
		case 'A':
			case 'E':
				case 'I':
					case 'O':
						case 'U':
							printf("Vowel");
							break ;
							default:
								printf("Consonant");
							} // end of switch case block
						} 
