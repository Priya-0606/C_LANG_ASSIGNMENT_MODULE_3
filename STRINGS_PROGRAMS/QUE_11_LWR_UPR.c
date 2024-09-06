//11.Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.

#include<stdio.h>
#include<string.h>
main()
{
	char Sen[40];
	int i;
	
	printf("\n\n\t Enter String : ");
	gets(Sen);
	
	for (i = 0; i < strlen(Sen); i++) 
	{
        if (islower(Sen[i])) 
		{
            Sen[i] = toupper(Sen[i]); // convert to uppercase
        }
		else if (isupper(Sen[i])) 
		{
            Sen[i] = tolower(Sen[i]); // convert to lowercase
        }
    }
	printf("\n\n\t Modified String : %s", Sen);
}
