//16. Calculate the Sum of Natural Numbers Using the While Loop

#include<stdio.h>
main()
{
	int n, i, Sum = 0;
	
	printf("\n\n\t Enter a positive numbers : ");
	scanf("%d",&n);
	
	i = 1;
	while(i <= n)
	{
		Sum += i;
		//printf("\n\n\t Sum : %d", Sum += i);
		i++;
	}
	
	printf("\n\n\t Sum : %d",Sum);
}

  



