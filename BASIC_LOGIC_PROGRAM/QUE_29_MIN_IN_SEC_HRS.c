// 29.Convert minutes into seconds and hours

#include<stdio.h>
main()
{
	
	int Min, Sec, Hrs, H;
	
	printf("\n\n\n\t Enter Time Minutes : ");
	scanf("%d",&Min);
	
	Hrs = Min / 60;
	Sec = Min * 60;
	H = Min - 60;
	
	printf("\n\n\t Time in Hours is : %d Hour and %d Minutes",Hrs, H);
	printf("\n\n\t Time in Seconds is : %d",Sec);
	
}
