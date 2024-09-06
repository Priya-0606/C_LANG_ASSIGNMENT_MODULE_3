//13.calculate the Factorial of a Given Number using while loop
#include<stdio.h>
main()
{
	int Fact = 1,num, i;
	
	printf("\n\n\t Enter any number to find Factorial : ");
	scanf("%d",&num);
	
	i = 1;
	while(i<=num)
	{
		Fact = Fact*i;
		i++;
	}
	printf("\n\t %d is factorial of %d.",Fact,num);
}
