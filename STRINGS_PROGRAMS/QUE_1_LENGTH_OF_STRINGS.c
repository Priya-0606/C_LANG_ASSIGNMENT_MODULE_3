//1. Write a program in C to find the length of a string without using library functions.

#include<stdio.h>
main()
{
	int Count_S = 0, i;
	char S[50];
	
	printf("\n\n\t Enter a String : ");
	gets(S);
	
	for(i=0;S[i]!='\0';i++)
	{
		Count_S++;
	}
	printf("\n\n\t Length of the String : %d", Count_S);
}

