//2. WAP to accept 5 numbers from user and display all numbers.

#include<stdio.h>
main()
{
	int num,i;
	
	
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Enter any Number : ");
		scanf("%d",&num);
		
		printf("\n\t You Entered : %d",num);
	}
}
