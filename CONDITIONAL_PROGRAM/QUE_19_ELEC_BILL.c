/* 19. Write a program in C to calculate and print the electricity bill of a given customer. 
The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total
amount to be paid to the customer. The charge are as follow :
20. Unit                               21. Charge/unit  
22.upto 350                            23. @1.20 
24. 350 and above but less than 600    25. @1.50 
26. 600 and above but less than 800    27. @1.80 
28. 800 and above                      29. @2.00 */

#include <stdio.h>

int main()
 {
	
    int c_id;
    char c_name[50];
    int units;
    float total;

    printf("\n\n\n\tEnter Customer ID: ");
    scanf("%d", &cid);

    printf("\n\n\tEnter Customer Name: ");
    scanf("%s", &customer_name);

    printf("\n\n\tEnter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 350) 
    	printf("\n\n\t Rs. '%.2f' is Total Amount ",total = units*1.20 );
    else if (units > 350 && units < 600) 
        printf("\n\n\t Rs. '%.2f' is Total Amount ", total = units*1.50 );
    else if (units >= 600 && units < 800) 
        printf("\n\n\t Rs. '%.2f' is Total Amount ", total = units*1.80 );
    else 
        printf("\n\n\t Rs. '%.2f' is Total Amount ", total = units*2.00 );

    printf("\n\n\tCustomer ID: %d", c_id);
    printf("\n\n\tCustomer Name: %s", c_name);
    printf("\n\n\tUnits Consumed: %d", units);
    printf("\n\n\tTotal Amount: Rs. %.2f",total);
    
}
