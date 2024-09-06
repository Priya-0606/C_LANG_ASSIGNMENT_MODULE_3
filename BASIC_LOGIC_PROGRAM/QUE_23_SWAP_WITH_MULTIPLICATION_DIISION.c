//23. WAP to calculate swap 2 numbers with using of multiplication and division.

#include <stdio.h>
main()
{
	
	int A, B;
	
	A = 4;
	B = 12;
	
	printf("Enter any value : ");
	scanf("%d",&A);
	
	printf("Enter any value : ");
	scanf("%d",&B);
	
	printf("\n\n\t Before swapping!!");
	
	printf("\n\n\tA :%d",A);
	printf("\n\tB :%d",B);
	
	
	A = A * B;
	B = A / B;
	A = A / B;
	
	printf("\n\n\tAfter Swapping !!");
	printf("\n\n\tA = %d",A);
	printf("\n\n\t B = %d",B);
	
}
