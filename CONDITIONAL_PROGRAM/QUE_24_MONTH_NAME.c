//34. Accept month number and display month name

#include<stdio.h>
main()
{
	
	int month_num, month_name;
	
	printf("Enter a month number(1 to 12) : ");
	scanf("%d",&month_num);
	
	switch(month_num)
	{
		case 1: printf("\n\t january");
			break;
		case 2: printf("\n\t February");
			break;
		case 3: printf("\n\t  March");
			break;
		case 4: printf("\n\t April");
			break;
		case 5: printf("\n\t May");
			break;
		case 6: printf("\n\t june");
			break;
		case 7: printf("\n\t july");
			break;
		case 8: printf("\n\t August");
			break;
		case 9: printf("\n\t September");
			break;
		case 10: printf("\n\t October");
			break;
		case 11: printf("\n\t November");
			break;
		case 12: printf("\n\t  December");
			break;
		
	}
	
}
