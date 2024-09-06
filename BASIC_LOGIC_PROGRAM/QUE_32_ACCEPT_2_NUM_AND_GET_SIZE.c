//32. Accept 2 numbers and find out its sum check it size

#include<stdio.h>
main()
{
 
int A, B, Sum, S;

printf("\n\n\n\t Enter Number A : ");
scanf("%d",&A);

printf("\n\n\t Enter Number B : ");
scanf("%d", &B);

Sum = A + B;

printf("\n\n\t Sum : %d ",Sum);

printf("\n\n\t Size of Sum : %d byets",sizeof(Sum));

}


