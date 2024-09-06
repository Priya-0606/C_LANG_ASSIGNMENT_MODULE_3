/*22. Calculate compound interest (Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P
*/

#include <stdio.h>
#include <math.h>
int main()
{
	
	
	float pri, rate, t, Amount, Compound_interest;
	
	printf("\n\n\t Enter te Principle Amount : ");
	scanf("%f",&pri);
	
	printf("\n\t Enter the Anual intrest rate : ");
	scanf("%f",&rate);
	
	printf("\n\t Enter the time period : ");
	scanf("%f",&t);
	
	Amount = pri*pow((1 + (rate / 100)) ,(t));
	
	Compound_interest = Amount - pri;

	printf("\n\t Compound Intrest : Rs. %.2f",Compound_interest);
	printf("\n\t Amount : Rs. %.2f",Amount);
	
	
	
}

