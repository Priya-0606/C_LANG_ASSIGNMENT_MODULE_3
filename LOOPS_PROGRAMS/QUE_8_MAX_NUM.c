// 8. Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
main()
{
	int N, R, Max;
	
	printf("\n\n\t Enter Any Number : ");
	scanf("%d",&N);
	
	Max = N % 10;
	
	while(N>0)
	{
		R = N % 10; 
		printf("%d",R); 
		N = N/10; 
		
		if(R > Max)
			Max = R;
	}
	printf("\n\t %d Is Maximum.",Max);
	
}
