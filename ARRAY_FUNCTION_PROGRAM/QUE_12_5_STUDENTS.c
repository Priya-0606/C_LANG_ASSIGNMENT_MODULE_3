//12.WAP to accept 5 students name and store it in array
#include<stdio.h>
main()
{
	int i, Students[5][50];
	for(i=0; i<5; i++) 
	{
    	printf("\n\n\t Enter student %d's name: ", i+1);
    	scanf("%49s", Students[i]); 
	}

		for(i=0; i<5; i++)
	{
    	printf("\n\n\t Student %d's name: %s", i+1, Students[i]);
	}

}
