//15.Calculate sum of 10 numbers using of while loop
#include<stdio.h>
main()
{
	int num,i,Sum=0;
	
	i=1;
	while(i<=10)
	{
		printf("\n\n\t Enter any Number(%d) : ",i);
		scanf("%d",&num);
		Sum+=num;
		i++;
	}
	printf("\n\n\t Sum : %d",Sum);
}

