//14.Accept 5 numbers from user and find those numbers factorials

#include<stdio.h>
main()
{
	int Fact = 1,num, i = 1, j;
	
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Enter 5 number to find Factorial : ");
	 	scanf("%d",&num);
	 	
	 	Fact = 1;
	 	for(j=1;j<=num;j++)
			{
				Fact = Fact*j;
			}
		printf("\n\t %d is factorial of %d.",Fact, num);
	}
	

}
