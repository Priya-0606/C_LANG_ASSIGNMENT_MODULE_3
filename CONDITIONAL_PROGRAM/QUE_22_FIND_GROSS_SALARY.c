/*32.Write a C program to input basic salary of an employee and calculateits
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
base_sal <= 20000 : HRA = 25%, DA = 90% 
base_sal > 20000 : HRA = 30%, DA = 95%\  */

#include<stdio.h>
main()
{
	
	float base_sal, HRA, DA, gross_sal;
	
	printf("\n\n\t Enter Basic Salary : ");
	scanf("%f", &base_sal);
	
	if(base_sal <= 10000)
	{
		HRA = base_sal * 0.20;
		DA = base_sal * 0.80;
	}
	else if(base_sal <= 20000)
	{
		HRA = base_sal * 0.25;
		DA = base_sal * 0.90;
	}
	else 
	{
		HRA = base_sal * 0.30;
		DA = base_sal * 0.95;
	}
	
	gross_sal = base_sal + HRA +DA;
	
	printf("Gross salary: %.2f\n", gross_sal);
	
}
