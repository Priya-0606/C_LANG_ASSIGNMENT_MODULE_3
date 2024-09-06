//10.Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)

#include<stdio.h>
main()
{
	int R, N, Sum, last_num, first_num;
	
	printf("\n\n\t Enter Any Number : ");
	scanf("%d",&N);
	
	last_num = N % 10;
	printf("\n\n\t Last digit : %d\n\n\t ",last_num);
	
	while(N>0)
	{
		R = N % 10; 
		printf("%d",R); 
		N = N/10; 
	}
	
	first_num = R;
	printf("\n\n\t First digit : %d",first_num);
	
	Sum = first_num + last_num;
	
	printf("\n\n\t Sum : %d",Sum);
}


