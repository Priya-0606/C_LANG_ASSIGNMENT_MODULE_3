//10.WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
main()
{
	
	int A;
	
	printf("\n\n\n\tEnter any Number :");
	scanf("%d",&A);
	
	if (A>0)
		printf("\n\n\tNumber is Positive!!");
		
	else if (A<0)
		printf("\n\n\tNumber is Negative!!");
		
	else 
		printf("\n\n\tNumber is zero!!");
	
}
