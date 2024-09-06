//15. Write a program in C to find the largest and smallest words in a string.

#include<stdio.h>
#include <string.h>  
#include<stdlib.h>
main()  
{     
    char string[1000];   
    printf("\n\n\n\t enter your string: ");
    
    fgets(string,sizeof string,stdin);
    
    char words[100][100], small[100], large[100];  
    int i = 0, j = 0, k, length;  
      
    for(k=0; string[k]!='\0'; k++){  
        if(string[k] != ' ' && string[k] != '\0'){  
            words[i][j++] = string[k];  
        }  
        else{  
            words[i][j] = '\0';  
            //Increment row count to store new word  
            i++;  
            //Set column count to 0  
            j = 0;  
        }  
    }  
      
    //Store row count in variable length  
    length = i + 1;  
       
    strcpy(small, words[0]);  
    strcpy(large, words[0]);  
      
    //Determine smallest and largest word in the string  
    for(k = 0; k < length; k++){  
        if(strlen(small) > strlen(words[k]))
		{  
            strcpy(small, words[k]);  
        }  
        if(strlen(large) < strlen(words[k]))  
            strcpy(large, words[k]);  
    }  
      
    printf("\n\n\t Smallest word: %s", small);  
    printf("\n\t Largest word: %s", large);  
      
    return 0;  
}  

