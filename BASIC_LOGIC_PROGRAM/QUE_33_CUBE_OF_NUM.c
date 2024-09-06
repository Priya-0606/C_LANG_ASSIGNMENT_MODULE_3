//33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)

#include<stdio.h>
main()
{
	
	int P;
	
	printf("\n\n\tEnter any Num : ");
	scanf("%d",&P);
	
	printf("\n\n\tFirst three powers of %d: ", P);
    printf("\n\n\t %d^1 = %d\n", P, P);
    printf("\n\n\t %d^2 = %d\n", P, P * P);
    printf("\n\n\t %d^3 = %d\n", P ,P * P* P);
	
}
