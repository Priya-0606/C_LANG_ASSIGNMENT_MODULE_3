//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
main()
{
	int num, i, Sum=0, M;
	
	printf("Enter a number for Plus series : ");
	scanf("%d",&num);
	
for(i=1;i<=num;i++)
	{
		M = M+i;
		printf("\n\t Addition = %d ",M);
		Sum = Sum+M;
	}
	printf("\n\n\t Sum : %d",Sum);
	
}



 










