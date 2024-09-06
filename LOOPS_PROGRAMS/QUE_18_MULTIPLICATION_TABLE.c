//18. Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
main()
{
	int i, N;
	
	printf("\n\n\t Enter a number for multiplivation table : ");
	scanf("%d",&N);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d = %d" , N, i, N*i);
	}
}
