/* 16. Write a C program to read temperature in centigrade and display a suitable message according to the 
temperature state below:
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot   */

#include<stdio.h>
main()
{
	
	float temp;
	
	printf("\n\n\n\tEnter Temprature : ");
	scanf("%f", &temp);
	
	if(temp < 0)
		printf("\n\n\tFreezing Weather !!!");
	
	else if (temp >= 0 && temp <= 10) 
        printf("\n\tVery Cold weather !!\n");
        
    else if (temp >= 10 && temp <= 20) 
        printf("\n\tCold weather !! \n");
        
    else if (temp >= 20 && temp <= 30) 
        printf("\n\tNormal in Temprature !\n");
        
    else if (temp >= 30 && temp <= 40) 
        printf("\n\tIts Hot Weather !! \n");
	
	else 
		printf("\n\tWeather is Very Hot!!");
}
