//10.WAP to perform Palindrome number using for loop and function

#include<stdio.h>
int is_pal(int);
main()
{
	int A;
	
	printf("\n\n\t Enter any (three or more digit) Number : ");
	scanf("%d",&A);
	
	is_pal(A);
	
}

int is_pal(int A)
{ 
	int i, P, n;
	
	P = 0;
	
	for(n=A;A!=0;A/=10)
	{
		P = P*10 + A % 10;
	}
		
	if(n == P)
		printf("\n\n\t %d is a palindrome.", n);
	else 
		printf("\n\n\t %d is not a palindrome.", n);
		
	}


