/* 17. Write a C program to check whether a triangle can be formed with the given
values for the angles. */

#include<stdio.h>
main()
{
	
	int S1, S2, S3;
	
	printf("\n\n\n\t Enter angle of side of Triangle : ");
	scanf("%d",&S1);
	
	printf("\n\n\t Enter angle of side of Triangle: ");
	scanf("%d",&S2);
	
	printf("\n\n\t Enter angle of side of Triangle : ");
	scanf("%d",&S3);
	
	if(S1 + S2 + S3 == 180)
		printf("\n\n\t The Angles can form a Triangle ");
		
	else
		printf("\n\n\t The Angles can not form a Triangle ");
	
}
