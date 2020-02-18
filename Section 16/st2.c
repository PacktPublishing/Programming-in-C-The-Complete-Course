#include <stdio.h>
int main()
{
	struct students
	{
		unsigned long reg_no ;
		float mk1,mk2,mk3 ;
	} ; // end of structure specification
	struct students svar ; // decl. of structure variable
	float pc ;
 svar.reg_no=909 ; svar.mk1=89.0 ; svar.mk2=99.0 ; svar.mk3=100.0 ;
 	pc=(svar.mk1+svar.mk2+svar.mk3)/300 * 100 ;
	printf("Percentage = %.2f",pc);
	}

