//4. WAP to find factorial using recursion

#include<stdio.h>

int Factorial(int);

main()
{
	int n, Fact;
	
	printf("\n\n\t Enter a number to find factorial : ");
	scanf("%d",&n);
	
	Fact=Factorial(n);	
	printf("\n\n\t Factorial of %d is : %d", n, Fact);
}

int Factorial(int n) //4
{
	if(n==0)
		return 1;		
	else
		return n*(Factorial(n-1));	
}


