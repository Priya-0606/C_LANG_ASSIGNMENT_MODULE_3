//12.Write a program in C to find the number of times a given word 'is' appears in the given string.

#include<stdio.h>
#include<string.h>

int main() 
{
    char str[100], word[3] = "is";
    int count = 0, i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    

    for (i = 0; str[i] != '\0'; i++) 
	{
        for (j = 0; j < 2; j++) 
		{
            if (str[i + j] != word[j]) 
                break;
        }
        if (j == 2) 
            count++;      
    }

    printf("\n\n\t The word 'is' appears %d times in the string.", count);

    return 0;
}
