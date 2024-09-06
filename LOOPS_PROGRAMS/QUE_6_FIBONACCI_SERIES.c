//6. WAP to print Fibonacci series up to given numbers
#include<stdio.h>
main()
{
	
	int N1, N2, i, N, n;
	
	printf("Enter Any Number to Start Fibonacci Series : ");
	scanf("%d",&n);
	
	printf("	%d	%d ",N1, N2);
	
	for(i=1; i<=n; i++)
	{
		N = N1 + N2;
		printf("	%d",N);
		N1 = N2;
		N2 = N;
		
	}
	
	
}
