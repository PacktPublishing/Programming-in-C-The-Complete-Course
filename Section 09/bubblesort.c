/*   WAP that reads values in an array and performs bubble sort     
1] There are n-1 passes in bubble sort where n is the array size.
2] In each successive pass the number of comparisons keep decreasing by one.
*/
#include <stdio.h>
int main()
{
	int arr[10],i,j,temp ;
	// reading values into array
	for (i=0;i<10;++i)
	{
		printf("arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	
	// following is the code for bubble sort
	for (i=0;i<9;++i)    // outer loop for passes
	{
		for (j=0;j<(9-i);++j)  // inner loop for comparisons
		{
			if (arr[j]<arr[j+1])
			{
			temp=arr[j] ;
			arr[j]=arr[j+1] ;
			arr[j+1]=temp ;
			} // end of if block
		} // end of inner loop
	} // end of outer loop
	
	// printing the sorted array elements
	for(i=0;i<10;++i)
	printf("%d\t",arr[i]);
}
