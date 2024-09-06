//23. C Program to Reverse a Number Using FOR Loop

#include<stdio.h>
main()
{
	int N, R;
	
	printf("\n\n\t Enter any number : ");
	scanf("%d",&N);
	
	while(N>0)
	{
		R = N % 10; 
		printf("%d",R); 
		N = N/10; 
	}
}
