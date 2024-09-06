//19.Calculate compound interest

#include <stdio.h>
#include <math.h>
int main()
{
	
	
	float principle, rate, time, compound_interest;
	
	printf("Enter te Principle Amount : ");
	scanf("%f",&principle);
	
	printf("Enter the Anual intrest rate : ");
	scanf("%f",&rate);
	
	printf("Enter the time period : ");
	scanf("%f",&time);
	
	compound_interest = principle*pow(  (1 + (rate / 100)) ,(time));
	
	printf("");
	printf("Compound Intrest : Rs. %.2f",compound_interest);
	
	
	
}
