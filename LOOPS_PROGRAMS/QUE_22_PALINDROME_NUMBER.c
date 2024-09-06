//22. Accept 3 numbers from user using while loop and check each numbers palindrome.

#include<stdio.h>
main()
{
	int A, i, P, n;
	
	i = 1;
	while(i<=3)
	{
		printf("\n\n\t Enter any (three or more digit) Number : ");
		scanf("%d",&A);
		
		n = A;
		P = 0;
		
		while(A != 0)
		{
			P = P*10 + A % 10;
			A /= 10;
		}
		
		if(n == P)
			printf("\n\n\t %d is a palindrome.", n);
		else 
			printf("\n\n\t %d is not a palindrome.", n);
		
		i++;
	}

}
