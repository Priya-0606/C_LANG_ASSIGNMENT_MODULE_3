//4. WAP to print table up to given numbers.
#include<stdio.h>
main()
{
	int i, n, n1;
	
	printf("\n\n\n\t enter a number to create a multiplication table : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{ 
		for(n1=1;n1<=n;n1++)
		{
			printf("\n\n\t %d * %d = %d", n, i, n*i);
			i++;
		}
	}
}
