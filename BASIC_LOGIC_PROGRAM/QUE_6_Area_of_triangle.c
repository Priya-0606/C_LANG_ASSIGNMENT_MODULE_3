//Find area of Triangle Formula : A = 1/2 × b × h

#include <stdio.h>
main()
{
	float b, h, A;
	
	printf("\n\t\t Enter value of height (h) =  ", h);
	scanf("%f",& h);
	
	printf("\n\t\t Enter Value of base (b) = ", b);
	scanf("%f",&b);
	
	//A = (1/2)*b*h;
	A = (b * h) / 2;
	
	printf("\n\t\tArea of Triangle = %f",A);
	
	//return(0);
	
	
}
 
