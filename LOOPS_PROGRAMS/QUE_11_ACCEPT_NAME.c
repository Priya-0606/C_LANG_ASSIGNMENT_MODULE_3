//11. Accept 5 names from user at run time.

#include<stdio.h>
main()
{
	int i;
	char A[15];
	
	printf("-------------------------Enter Five Name----------------------------------");
	
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t Enter Name(%d) : ",i);
		scanf("%s",&A);
		
		printf("\t Your Name is %s",A);
	}

}
