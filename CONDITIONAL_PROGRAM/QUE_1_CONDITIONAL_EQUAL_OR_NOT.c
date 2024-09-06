// Write a C program to accept two integers and check whether they are equal
//or not

#include<stdio.h>
main()
{
	
	int A,B;
	
	printf("Enter Num A : ");
	scanf("%d",&A);
	
	printf("Enter Num B : ");
	scanf("%d",&B);
	
	if (A == B)
	{
		printf("\n\n\t Numbers %d and %d are equal", A, B);
	}
	else 
	{
		printf("\n\n\t Numbers %d and %d are not equal", A, B);	
	}
	
}
