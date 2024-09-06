/* 30.If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe
minimum bill should be of Rs. 256/- */

#include<stdio.h>
main()
{
	
	int bill, min_bill = 256;
	float Charge;
	
	printf("\n\n\n\t Enter Bill Amount :");
	scanf("%d",&bill);
	
	if(bill > 800)
	{
		Charge = bill + (bill * 0.18);
		printf("Payable Bill is : %.2f",Charge);
	}
	else if(bill < min_bill)
		printf("Minimum bill amount is 256. Please pay 256. ");
		
	else
		printf("Thank you, For visiting!!");

}
