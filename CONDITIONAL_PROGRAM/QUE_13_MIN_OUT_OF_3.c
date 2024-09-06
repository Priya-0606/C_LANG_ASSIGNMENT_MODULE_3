// 13.WAP to find minimum number among 3 numbers using ternary operator

#include<stdio.h>
main()
{
	int N1, N2, N3, Min;
	
	printf("Enter any Number : ");
	scanf("%d %d %d",&N1, &N2, &N3);
	
	Min = (N1<N2) ? (N1<N3) ? N1: N3 : (N2<N3) ? N2 : N3;
	
	printf("\n\n\t %d is Minimum.", Min); 
}
