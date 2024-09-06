/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there 
c. Sum of even numbers
d. Sum of odd numbers   */

#include<stdio.h>
main()
{
	int num,i, EvenCount=0, OddCount=0, EvenSum=0, OddSum=0;
	
	printf("\n\t Enter 10 Numbers.");
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t Enter any Number : ");
		scanf("%d",&num);
		
		if (num % 2 == 0)
		{
			EvenCount++;
			EvenSum += num;
			printf("\n\t%d is Even Number.",num);
		}
	
		else 
		{
			OddCount++;
			OddSum += num;
			printf("\n\t %d is Odd Number.",num);
		}
		
	}
	
	printf("\n\t Even Numbers : %d ",EvenCount);
	printf("\n\t Odd Numbers : %d ",OddCount);
	printf("\n\t Sum of Even Numbers : %d ",EvenSum);
	printf("\n\t Sum of Odd Numbers : %d ",OddSum);
	
}
