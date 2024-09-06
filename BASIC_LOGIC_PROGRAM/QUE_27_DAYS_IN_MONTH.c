//27.Convert days into months

#include<stdio.h>
main()
{
	int  Days;
	float Months, C = 30;
	
	printf("Enter Days : ");
	scanf("%d",&Days);
	
	Months = Days / C ;
	
	printf("Days into Months : %.2f",Months);
	
}
