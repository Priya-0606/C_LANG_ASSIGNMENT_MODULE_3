//28.Convert years into days and months

#include<stdio.h>
main()
{
	
	int Years, Months, Days;
	
	printf("\n\n\n\t Enter the number of the Years : ");
	scanf("%d",&Years);
	
	Months = 12 * Years;
	Days = 365 * Years;
	
	printf("\n\n\t Total Months are : %d Months", Months);
	printf("\n\n\t Total Days are : %d Days", Days);
	
}
