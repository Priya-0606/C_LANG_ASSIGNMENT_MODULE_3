// 18. Calculate person’s Annual salary

#include<stdio.h>
main()
{
	int Salary, Anual_Salary;

	
	printf("Enter your Monthely Salary");
	scanf("%d", &Salary);
	
	Anual_Salary = Salary*12;
	
	printf("Your Anual Salary is : %d",Anual_Salary);
}
