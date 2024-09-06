//24. 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
main()
{
	int num, i, Sum=0;
	
	printf("Enter a number for plus series : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		printf("\t %d",i);
		Sum+=i;
	}
	printf("\n\n\t Sum : %d",Sum);
}

