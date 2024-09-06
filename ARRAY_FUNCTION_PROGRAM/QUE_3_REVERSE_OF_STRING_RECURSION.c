//3. WAP to find reverse of string using recursion

#include<stdio.h>
#include<string.h>

void rev(char [], int, int);
main()
{
	char S[50];
	int string;
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",&S);
	string = strlen(S);
	rev(S, 0, string - 1);
	printf("\n\n\t The string after reversing : %s ",S);
	
}
void rev(char S[], int index, int string)
{
	char temp;
	if (index >= string / 2) 
	{
        return; 
    }
    temp = S[index];
    S[index] = S[string - index - 1]; 
    S[string - index - 1] = temp;
    rev(S, index + 1, string);
}
