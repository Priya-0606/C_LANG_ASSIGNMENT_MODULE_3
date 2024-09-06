//13. Write a program in C to remove characters from a string except alphabets

#include<stdio.h>

int main()
{
	char str[30];
	int i,j;
    printf("\n\n\t Enter a string with numbers String:");
    gets(str);
    
    for (i = 0; str[i] != '\0'; ++i) 
	{
    	while (str[i] >= '0' && str[i] <= '9') 
	 	{
         	for (j = i; str[j] != '\0'; ++j) 
		 	{
            	str[j] = str[j + 1];
        	}
        	str[j] = '\0';
    	}
   	}
    printf("\n\n\t After removing all numbers string is: %s ",str);

	return 0;
}

