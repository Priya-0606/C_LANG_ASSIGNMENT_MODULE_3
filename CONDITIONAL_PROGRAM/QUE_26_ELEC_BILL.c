/* 36.Write a C program to input electricity unit charges and calculate total
electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit 
For next 100 units Rs. 0.75/unit 
For next 100 units Rs. 1.20/unit 
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill  */

#include<stdio.h>
main()
{
	
	float Q, A;
	
	printf("\n\n\t Enter Your Electricity Unit : ");
	scanf("%f",&Q);
	
	A = Q * 1.50;
	
	if(Q > 250)
		printf("\n\tYour Electricity bill is Rs. %.2f",A*4.50);
	else if(Q <= 200)
		printf("\n\tYour Electricity bill is Rs. %.2f",A*3.20);
	else if(Q <= 100)
		printf("\n\tYour Electricity bill is Rs. %.2f",A*2.75);
	else if(Q <= 50)
		printf("\n\tYour Electricity bill is Rs. %.2f",A);
	else 
		printf("\n\t Your Electricity bill is Rs. %.2f",(A*1.50)*0.20);
	
}
