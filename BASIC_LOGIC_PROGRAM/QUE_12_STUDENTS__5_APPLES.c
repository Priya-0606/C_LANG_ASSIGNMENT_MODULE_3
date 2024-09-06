//Accept number of students from user. I need to give 5 apples to each
//student. How many apples are required?

#include<stdio.h>
main()
{
	
	int n, q = 5;
	
	printf("Enter number of students to share Apples : ");
	scanf("%d",&n);
	
	q = q * n;
	
	printf("Number of Apples needed are : %d ",q);	
}
