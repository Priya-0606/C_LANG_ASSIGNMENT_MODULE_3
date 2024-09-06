//28. 1 2 3 6 9 18 27 54...

#include<stdio.h>

main()
{
    int num, i, T;

    printf("Enter the number of terms: ");
    scanf("%d",&num);

    printf("The series is: ");
    for(i=1; i<=num; i++)
    {
        printf("%d ", T);
        if(i % 2 == 0)
        //if it's even it will be multiplied by 1.5.
        	T *= 3.0 / 2.0;
        else
        //if it's odd it will be multiplied by 2.
            T *= 2.0;
    }

    printf("\n");

}
