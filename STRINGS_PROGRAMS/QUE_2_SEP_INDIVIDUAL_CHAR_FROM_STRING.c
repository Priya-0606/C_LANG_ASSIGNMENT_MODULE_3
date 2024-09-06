//2. Write a program in C to separate individual characters from a string.
#include<stdio.h>
main()
{
	char String[100];
	int i, Count=0;
	
	printf("\n\n\t Enter String  : ");
	//scanf("%s",&String);
	gets(String);
	
	for(i=0;String[i]!='\0';i++)
	{
		printf("\n\n\t %c",String[i]);
		//count++;
	}

}
