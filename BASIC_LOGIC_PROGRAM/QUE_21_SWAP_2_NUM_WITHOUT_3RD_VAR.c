//Accept 2 numbers from user and swap 2 numbers with using 3 rd variable
//and without using 3 rd variable

#include<stdio.h>
main()
{
	int a, b;
	
	printf("\n\n\tEnter number A :");
	scanf("%d",&a);
	
	printf("\n\n\tEnter number B :");
	scanf("%d",&b);
	
	printf("\n\n\tBefore Swapping !!");
	printf("\n\n\tA = %d",a);
	printf("\n\n\tB = %d",b);
	
	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\n\n\tAfter Swapping !!");
	printf("\n\n\tA = %d",a);
	printf("\n\n\t B = %d",b);
	
}
