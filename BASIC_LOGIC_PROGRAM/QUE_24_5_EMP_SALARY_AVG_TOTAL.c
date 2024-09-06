//24.Accept 5 employees name and salary and count average and total salary

#include<stdio.h>
main()
{
	
	int S1, S2, S3, S4, S5, Avg, total;
	char a[20], b[20], c[20], d[20], e[20];
	
	printf("\n\n\n\tEnter Name of Employee 1 and Salary : ");
	scanf("%s  %d",&a, &S1);
	printf("\n\t Enter Name of Employee 2 and Salary : ");
	scanf("%s  %d",&b, &S2);
	printf("\n\t Enter Name of Employee 3 and Salary : ");
	scanf("%s  %d",&c, &S3 );
	printf("\n\t Enter Name of Employee 4 and Salary : ");
	scanf("%s  %d",&d, &S4);
	printf("\n\t Enter Name of Employee 5 and Salary : ");
	scanf("%s  %d",&e, &S5);
	
	total = S1 + S2 + S3 + S4 +S5 ;
	Avg = total / 5;
	
	printf("\n\n\t Average of the Salary : %d",Avg);
	printf("\n\t Total of the Salary : %d",total);
	
	
	
	
}
