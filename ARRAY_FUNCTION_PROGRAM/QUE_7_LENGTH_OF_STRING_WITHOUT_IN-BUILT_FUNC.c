//7. WAP Find out length of string without using inbuilt function

#include<stdio.h>
main()
{
	
	char String[100];
	int i, Count=0;
	
	printf("\n\n\t Enter String  : ");
	scanf("%s",&String);
	
	for(i=0;String[i]!='\0';i++)
	{
		Count++;
	}
	
	printf("\n\n\t Length of the String is '%d' ",Count);
	
}




