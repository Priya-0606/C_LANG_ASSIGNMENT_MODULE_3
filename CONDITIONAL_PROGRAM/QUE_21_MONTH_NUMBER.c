/* 31. Write a program in C to read any Month Number in integer and display the
number of days for this month. */

#include<stdio.h>

main() 
{
    int month;

    printf("Enter a month number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("This month has 31 days.");
            break;
            
        case 4:
        case 6:
        case 9:
        case 11:
            printf("This month has 30 days.");
            break;
            
        case 2:
            printf("This month has 28 or 29 days.");
            break;
            
        default:
            printf("Invalid month number.");
    }
}
 
