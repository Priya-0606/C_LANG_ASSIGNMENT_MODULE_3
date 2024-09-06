//26.Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main()
{
	
	float C, F;
	
	printf("Enter Temprature in Fahernheit : ");
	scanf("%f",&F);
	
	C = (F - 32) *5 / 9;
	
	printf("Temrature in Celsius : %.2f",C);
	
	
}
