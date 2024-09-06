//30. WAP to convert years into days and days into years

#include<stdio.h>
main()
{
	
	int Years, Days, Te, Me;
	
	printf("\n\n\t Enter Time in Years : ");
	scanf("%d",&Years);
	
	Days = 365 * Years;
	printf("\n\n\t Total Days are : %d Days", Days);
	
	printf("\n\n\t Enter Time in Days : ");
	scanf("%d",&Days);
	
	Years = Days / 365;
	Me = Years*365;
	Te = Days - Me;
	printf("\n\t Total Years are : %d Years %d Days", Years, Te );
	
}
