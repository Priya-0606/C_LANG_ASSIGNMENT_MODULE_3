//2. WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
//Assesment : create menu driven Calculator using function.
#include<stdio.h>
#include<stdlib.h>

void Addition_operation(int, int);
void Subtraction_operation(int, int);
void Multiplication_operation(int, int);
void Division_operation(int, int);

main()
{
	int N1, N2, Choice, i;
	char Repeat = 'Y';
	
	for(i=1;Repeat=='Y'||Repeat=='y';i++)
	{
		printf("\n\n\t Enter Number - 1 : ");
		scanf("%d", &N1);
		printf("\n\n\t Enter Number - 2 :  ");
		scanf("%d", &N2);
	
		printf("\n\n\t ------------Menu-------- ");
		printf("\n\n\t 1. Addition ");
		printf("\n\n\t 2. Subtraction");
		printf("\n\n\t 3. Multiplication");
		printf("\n\n\t 4. Division ");
		printf("\n\n\t 5. Exit");
		printf("\n\n\t --------------------------------------");
	
	
		printf("\n\n\t Enter your Choice of operation : ");
		scanf("%d",&Choice);
	
		switch(Choice)
		{
			case 1 : Addition_operation(N1,N2);
				 	break;
				 
			case 2 : Subtraction_operation(N1,N2);
			     	break;
			     
			case 3 : Multiplication_operation(N1,N2);
				 	break;
				 
			case 4 :Division_operation(N1,N2);
					break;
				
			case 5 : exit(0);
		
			default : printf("\n\n\t Input proper choice!!!!");
			     	break;
		}
		printf("\n\n\t Do you want to repeat? (y/n): ");
		scanf(" %c",&Repeat);	
	}
	return 0;
}
	
void Addition_operation(int a, int b)
{
	printf("\n\n\t Addition = %d", a+b);
}

void Subtraction_operation(int a, int b)
{
	printf("\n\n\t Subtraction = %d", a-b);
}

void Multiplication_operation(int a, int b)
{
	printf("\n\n\t Multiplication = %d", a*b);
}

void Division_operation(int a, int b)
{
	printf("\n\n\t Division = %d", a/b);
}

