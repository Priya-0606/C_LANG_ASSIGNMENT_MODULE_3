/*8. WAP to reverse a string and check that the string is palindrome or not
Write a program of structure employee that provides the following
a. information -print and display empno, empname, address
andage
b. Write a program of structure for five employee that
provides the following information -print and display empno, empname, address andage*/

#include<stdio.h>
#include<string.h> 
main()
{
// WAP TO CHECK WHETHER STRING IS PALINDROME OR NOT.
	char str[15];
	
	printf("\n\n\t Enter a string: ");
	scanf("%s",str);
	
	int i, j = strlen(str)-1;
	int palindrome = 1;
	
	for(i = 0; i < j; i++)
	{
		if (str[i] != str[j])
			{
				palindrome = 0;
				break;
			}
		j--;
	}
	if (palindrome)
		printf("\n\n\t %s is a palindrome.", str);
	else
		printf("\n\n\t %s is not a palindrome.", str);

//information -print and display empno, empname, address and age.

	struct Employee
	{
		//structure members
		int Empno;
		int Age;    
		char Empname[50];
		char Address[50];	
	}E;


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
	
	struct Employee
	main()
	{
		
	{
		//structure members
		int Empno;
		int Age;    
		char Empname[50];
		float Address[50];	
	}

	struct Employee E[5]; 
	
	for(i = 0; i < 5; i++) 
	{
			printf("\n\n\t Enter Empno for employee %d : ", i + 1);
			scanf("%d", &E[i].Empno);
			printf("\n\n\t Enter Name for employee %d : ", i + 1);
			scanf("%s", E[i].Empname);
			printf("\n\n\t Enter Address for employee %d : ", i + 1);
			scanf("%s", E[i].Address);
			printf("\n\n\t Enter Age for employee %d : ", i + 1);
			scanf("%d", &E[i].Age);
	}
		
	printf("\n\n\t Employee Information:\n");

    for( i = 0; i < 5; i++) 
	{
		printf("\n\n\t Empno : %d", E[i].Empno);
		printf("\n\n\t Name : %s", E[i].Empname);
		printf("\n\n\t Address : %s", E[i].Address);
		printf("\n\n\t Age : %d", E[i].Age);
	}
	}	
}
	
	

