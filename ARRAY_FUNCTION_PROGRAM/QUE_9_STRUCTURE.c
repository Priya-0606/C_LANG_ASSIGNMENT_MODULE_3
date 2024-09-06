/*//9. WAP to show difference between Structure and Union.

//Structure

#include<stdio.h>
#include<string.h>
struct Employee
{
//structure members
	int Empno;
	int Age;    
	char Empname[50];
	char Address[50];	
}E;
	main()
{
	printf("\n\n\t Enter Empno : ");
	scanf("%d",&E.Empno);
	
	printf("\n\n\t Enter Emplyee's Name : ");
	scanf("%s",&E.Empname);
	
	printf("\n\n\t Enter Emplyee's Age : ");
	scanf("%d",&E.Age);
	
	printf("\n\n\t Enter Employee Address : ");
	scanf("%s",&E.Address);
	
	printf("\n\n\t Employee Number : %d",E.Empno);
	printf("\n\n\t Employee Name : %s",E.Empname);
	printf("\n\n\t Emplyee's Age : %d",E.Age);
	printf("\n\n\t Employee Address : %s", E.Address);
}*/

//Union.

#include<stdio.h>
#include<string.h>
union Employee
{
	int Empno;
	int Age;    
	char Empname[50];
	char Address[50];	
}E;

main()
{
	printf("\n\n\t Enter Empno : ");
	scanf("%d",&E.Empno);
	
	printf("\n\n\t Enter Emplyee's Name : ");
	scanf("%s",&E.Empname);
	
	printf("\n\n\t Enter Emplyee's Age : ");
	scanf("%d",&E.Age);
	
	printf("\n\n\t Enter Employee Address : ");
	scanf("%s",&E.Address);
	
	printf("\n\n\t Employee Number : %d",E.Empno);
	printf("\n\n\t Employee Name : %s",E.Empname);
	printf("\n\n\t Emplyee's Age : %d",E.Age);
	printf("\n\n\t Employee Address : %s", E.Address);
	
}


