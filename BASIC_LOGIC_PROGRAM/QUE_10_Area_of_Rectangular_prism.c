//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>

main()
{
	int w,h,l,A;
	
	printf("\n\tEnter Width = ",w);
	scanf("%d",&w);
	
	printf("\n\tEnter Heigth =  ",h);
	scanf("%d",&h);
	
	printf("\n\tEnter length =  ",l);
	scanf("%d",&l);
	
	A = 2*(w*l + h*l + h*w);
	
	printf("\n\t\nArea of a rectangular prism = %d");
	
}
