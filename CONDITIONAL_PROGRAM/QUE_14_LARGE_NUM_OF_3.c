//14.WAP to find the largest of three numbers.

#include<stdio.h>
main()
{
	
	int X, Y, Z;
	
	printf("\n\n\n\tEnter NUmber 1 X : ");
	scanf("%d",&X);
	printf("\n\n\tEnter NUmber 2 Y : ");
	scanf("%d",&Y);
	printf("\n\n\tEnter NUmber 3 Z : ");
	scanf("%d",&Z);
	
	if ( X > Y && X > Z)
		printf("\n\n\t X is max number !");
		
	else if ( Y > X && Y > Z)
		printf("\n\n\t Y is max number !");
		
	else
		printf("\n\n\t Z is max number !");
	
}
