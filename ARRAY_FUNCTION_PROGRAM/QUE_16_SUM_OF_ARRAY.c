//16.Accept 5 numbers from user and perform sum of array
#include<stdio.h>
main()
{
	int numbers[5]; 
    int i, sum = 0; 

    for(i=0; i<5; i++) 
	{
        printf("\n\n\t Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    for(i=0; i<5; i++) 
	{
        sum += numbers[i];
    }
    printf("\n\n\t Sum of the array: %d\n", sum);

}
