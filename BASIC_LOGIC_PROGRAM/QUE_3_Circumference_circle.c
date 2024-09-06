//wap to calculate circumference of circle 2*pi*r

#include <stdio.h>
main()
{
	int r ;
	float pi = 3.14, Circumference, Area;
	
	printf("\n\n\t Enter any number : ");
	scanf("%d",&r);
	
	Area = pi*r*r;
	Circumference = 2*pi*r;
	
	printf("\n\n\t Area of Circle : %.2f",Area);
	printf("\n\n\t Circumference of circle = %.2f",Circumference);
}
