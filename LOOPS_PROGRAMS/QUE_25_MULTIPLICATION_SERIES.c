//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include<stdio.h>
main()
{
	int num, i, Sum=0, M;
	
	printf("Enter a number for Multiplication series : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		M = i*i;
		printf("\n\t %d  %d",i,M);
		Sum = Sum*i;
		Sum = Sum+i;
	}
	printf("\n\n\t Sum : %d",Sum);
}



 










