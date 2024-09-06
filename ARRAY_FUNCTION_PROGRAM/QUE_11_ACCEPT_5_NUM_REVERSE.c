//11.WAP to accept 5 numbers from user and display in reverse order using for loop and array.

#include<stdio.h>
main()
{
	int i, n[5], N;
	
	printf("\n\n\t Enter Number{ %d } : ",i);
	scanf("%d",&n);
	
	/*for(i=1;i<=5;i++)
	{
		printf("\n\n\t Enter Number{ %d } : ",i);
		scanf("%d",&n);
	}*/
	for(i=n;i>0;i/=10)
	{
		N = i % 10; 
		printf("%d",N); 
	}
}
