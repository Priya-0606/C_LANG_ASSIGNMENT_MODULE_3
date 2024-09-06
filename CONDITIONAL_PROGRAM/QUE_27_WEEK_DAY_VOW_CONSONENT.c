/*37. WAP to show
i. Monday to Sunday using switch case 
ii. Vowel or Consonant using switch case           */

#include<stdio.h>
main()
{
	
	//i. Monday to Sunday using switch case 
	
	int week_num;
	char vow;
	
	printf("Enter a week number(1 to 7) : ");
	scanf("%d",&week_num);
	switch(week_num)
	{
		case 1:printf("\n\n\t Monday");
			break;
		
		case 2:printf("\n\n\t Tuesday");
			break;
			
		case 3:printf("\n\n\t Wedensday");
			break;
			
		case 4:printf("\n\n\t Thursday");
			break;
			
		case 5:printf("\n\n\t Friday");
			break;
			
		case 6:printf("\n\n\t Saturday");
			break;
			
		case 7:printf("\n\n\t Sunday");
			break;
		
		default : printf("\n\n\t Invalid number");
			break;
	}
	
	//ii. Vowel or Consonant using switch case 
	
	printf("\n\n\t Enter any Character : ");
	scanf(" %c",&vow);
	
	switch(vow)
	{
		case 'a' :
		case 'e' : 
		case 'i' : 
		case 'o' :
		case 'u' : 
		case 'A' : 
		case 'E' :
		case 'I' : 
		case 'O' :
		case 'U' : printf("\n\n\t Character %c is vowel.", vow);
			 break;
			 
		default : printf("\n\n\t Character %c is Consonant.",vow);
			 break;
	}
	
	
	
	
	
	
}
