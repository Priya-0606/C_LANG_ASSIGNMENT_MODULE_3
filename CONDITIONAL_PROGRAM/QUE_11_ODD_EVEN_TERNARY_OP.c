//11.WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int N;
	
	printf("\n\n\tEnter any Number : ");
	scanf("%d",&N);
	
	(N%2==0) ? printf("\n\t %d is Even", N): printf("\n\t %d is Odd", N);

	
}
