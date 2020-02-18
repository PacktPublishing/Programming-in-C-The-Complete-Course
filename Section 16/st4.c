//                  WAP that used multiple structure variables(structures)  
#include <stdio.h>
int main()
{
	struct books
	{
		unsigned long book_code ;
		unsigned int npages;
		float price ;
	} bvar1,bvar2,bvar3 ;  
	// struct books bvar1,bvar2,bvar3 ;
	printf("Enter the book_code, number of pages and price of the first book ");
	scanf("%lu%u%f",&bvar1.book_code,&bvar1.npages,&bvar1.price);
	printf("Enter the book_code, number of pages and price of the second book ");
	scanf("%lu%u%f",&bvar2.book_code,&bvar2.npages,&bvar2.price);
	printf("Enter the book_code, number of pages and price of the third book ");
	scanf("%lu%u%f",&bvar3.book_code,&bvar3.npages,&bvar3.price);
printf("\nBook code = %8lu\tPages = %5u\tPrice  =%7.2f",bvar1.book_code,bvar1.npages,bvar1.price);
printf("\nBook code = %8lu\tPages = %5u\tPrice  =%7.2f",bvar2.book_code,bvar2.npages,bvar2.price);
printf("\nBook code = %8lu\tPages = %5u\tPrice  =%7.2f",bvar3.book_code,bvar3.npages,bvar3.price);
}
