//14.Write a program in C to combine two strings manually

#include<stdio.h>
#include<string.h>

main()
{
	char S1[40], S2[40];
	
	printf("\n\n\t Enter String - 1 (Without Spaces) : ");
	scanf("%s",&S1);
	printf("\n\n\t Enter String - 2 (Without Spaces) : ");
	scanf("%s",&S2);
	
	printf("\n\n\t Concatenate Strings : %s",strcat(S1 , S2));
}


