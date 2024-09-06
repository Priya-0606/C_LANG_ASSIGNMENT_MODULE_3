//35.Accept the input month number and print number of days in that month.

#include<stdio.h>
main()
{
	
	int month_num, month_name;
	
	printf("\n\n\tEnter a month number(1 to 12) : ");
	scanf("%d",&month_num);
	
	switch(month_num)
	{
		case 1: printf("\n\t january : 31");
			break;
		case 2: printf("\n\t February : 28");
			break;
		case 3: printf("\n\t  March : 31");
			break;
		case 4: printf("\n\t April : 30");
			break;
		case 5: printf("\n\t May : 31");
			break;
		case 6: printf("\n\t june : 30");
			break;
		case 7: printf("\n\t july : 31");
			break;
		case 8: printf("\n\t August : 31");
			break;
		case 9: printf("\n\t September : 30");
			break;
		case 10: printf("\n\t October : 31");
			break;
		case 11: printf("\n\t November : 30");
			break;
		case 12: printf("\n\t  December :31");
			break;
		
	}
	
}
