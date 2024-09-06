//Accept marks from user and check pass or fail

#include<stdio.h>
main()
{
	
	int A;
	
	printf("\n\n\tEnter your marks : ");
	scanf("%d",&A);
	
	if (A<40)
	{
		printf("\n\tYour Fail!");
	}
	else
	{
		printf("\n\n\tYour Pass!!!");
	}
}
