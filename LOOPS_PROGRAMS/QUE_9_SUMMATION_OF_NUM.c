//9. Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
main()
{
	int R, N, Sum;
	
	printf("\n\n\t Enter Any Number : ");
	scanf("%d",&N);
	
	while(N>0)
	{
		
		R = N % 10; 
		printf("%d",R); 
		N = N/10; 
		Sum = Sum + R;
	}
	
	printf("\n\t Sum : %d",Sum);
	
	
}
