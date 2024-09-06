//5. WAP to print factorial of given number

#include<stdio.h>
main()
{
	int i, Fact = 1, num;
	
	printf("\n\n\t Enter any Number : ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		Fact = Fact*i;
	}
	printf("\n\t %d is factorial of %d.",Fact,num);
}
