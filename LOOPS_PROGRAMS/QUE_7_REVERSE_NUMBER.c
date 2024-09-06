//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include<stdio.h>
main()
{
	int R, N = 64728;
	
	while(N>0)
	{
		R = N % 10; 
		printf("%d",R); 
		N = N/10; 
	}
	
}
