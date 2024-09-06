//25.Accept 5 expense from user and find average of expense

#include<stdio.h>
main()
{
	
	int q, a, z, x, c, exp, avg;
	
	printf("\n\n\tElectricity Bill Expense : ");
	scanf("%d",&q);
	printf("\n\tGas Bill Expense : ");
	scanf("%d",&a);
	printf("\n\tWI-FI Bill Expense : ");
	scanf("%d",&z);
	printf("\n\tGrossary Bill Expense : ");
	scanf("%d",&x);
	printf("\n\tPersonal Expense : ");
	scanf("%d",&c);
	
	exp = q + a + z + x + c ;
	avg = exp / 2;
	
	printf("\n\n\tTotal Personal Expenses : %d",exp);
	printf("\n\tAverage of Personal Expenses : %d",avg);
}
