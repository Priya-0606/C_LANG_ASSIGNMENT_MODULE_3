/*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo)   */

#include <stdio.h>
main()
{
	int a,b;
	
	printf("\n\n\t Enter any number 1 : ");
	scanf("%d",&a);
	printf("\n\n\t Enter any number 2 : ");
	scanf("%d",&b);
	
	printf("\n\n\tAddition = %d",a+b);
	printf("\n\n\tSubstraction = %d",a-b);
	printf("\n\n\tMultiplication = %d",a*b);
	printf("\n\n\tDivision = %d",a/b);
	printf("\n\n\tModulo = %d",a%b);
	
	
}
