/* WAP that reads marks of a student in 3 subjects. Calculate the percentage of marks
assuming the max. marks to be 300 */ 
#include <stdio.h>
 main()
 {
 	int meng,mmaths,mcomp ;
 	float p ;
 	printf("Enter the marks in 3 subjects");
 	scanf("%d%d%d",&meng,&mmaths,&mcomp);
 	p=(meng+mmaths+mcomp)/300.0 * 100 ; 
 printf("Percentage of marks = %.2f",p);
}
