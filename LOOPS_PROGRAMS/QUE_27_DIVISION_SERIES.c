//27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 ..........n

#include<stdio.h>
main()
{
	int i, num;
	float Sum = 0.0;
	
	printf("\t Enter a number for Division series : ");
	scanf("%d",&num);
	
	for(i=1; i<=num; i++)

    {
		if(i % 2 == 0)
			Sum -= (float)i / (i + 1);
		else
			Sum += (float)i / (i + 1);
			
		printf("\n\n\t Division %d / %d : %.2f", i, i+1, Sum);
	}
	
}


