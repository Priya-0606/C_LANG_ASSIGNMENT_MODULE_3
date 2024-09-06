//17. Calculate 5 numbers from user and calculate number of even and odd using  of while loop

#include<stdio.h>
main()
{
	int num, i, EvenSum=0, OddSum=0;
	
	printf("\n\t Enter 5 Numbers.");
	
	i =1;
	while(i<=5)
	{
		printf("\n\n\t Enter any Number : ");
		scanf("%d",&num);
		
		if (num % 2 == 0)
		{
			EvenSum += num;
			printf("\n\t %d is Even Number.",num);
		}
	
		else 
		{
			OddSum += num;
			printf("\n\t %d is Odd Number.",num);
		}
		i++;
	}
	printf("\n\n\t Sum of Even Numbers : %d ",EvenSum);
	printf("\n\t Sum of Odd Numbers : %d ",OddSum);
	
}



