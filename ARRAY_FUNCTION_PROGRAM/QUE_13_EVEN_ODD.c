//13.WAP to accept 5 numbers from user and check entered number is even or odd using of array

#include<stdio.h>
main()
{
	int i;
	char Array[30];
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter Array[%d] : ",i+1);
		scanf("%d",&Array[i]);
	}
	printf("\n\n\t------------------------Even Array----------------------------------");
	for(i=0;i<5;i++)
	{
		if(Array[i]%2==0)
		{
			printf("\n\n\t Even Array[%d] : %d", i+1, Array[i]);
		}	
	}
	printf("\n\n\t------------------------Odd Array----------------------------------");
	for(i=0;i<5;i++)
	{
		if(Array[i]%2!=0)
		{
			printf("\n\n\t Odd Array[%d] : %d ", i+1, Array[i]);
		}	
	}
	printf("\n\t----------------------------------------------------------------------\n");
}
