//8. WAP to accept the height of a person in centimeters and categorize the person according to their height.   

#include<stdio.h>
main()
{
	int height;
	
	printf("Enter Your Height (in Centimeter) : ");
	scanf("%d",&height);
	
	if(height < 140)
		printf("\n\t You have Short Height!! ");
		
	else if (height >= 140 && height <= 160)
		printf("\n\t You have Average Height!! ");
		
	else if (height >= 160 && height <= 180)
		printf("\n\t You are Tall!!");
		
	else
		printf("You have Abnormal Height!!!");
		
	
	
}
