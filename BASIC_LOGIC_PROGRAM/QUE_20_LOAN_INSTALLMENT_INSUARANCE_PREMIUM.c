//20. Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary.

#include<stdio.h>
main()
{
	
	int A, C = 0.1, insu_pre, loan_ins;
	
	printf("\n\n\n\tEnter your monthly salary : ");
	scanf("%d",&A);
	
	insu_pre = A - (A / 10) ;
	loan_ins = insu_pre - (A / 10);
	
	printf("\n\n\tAfter deduction of Insuarance Premium : %d",insu_pre);
	printf("\n\n\tAfter deduction of loan installment : %d",loan_ins);
	
}
