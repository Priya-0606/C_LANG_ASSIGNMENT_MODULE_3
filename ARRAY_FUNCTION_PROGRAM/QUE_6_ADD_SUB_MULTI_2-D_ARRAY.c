//6. WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include<stdio.h>
main()
{
	int mat1[2][2], mat2[2][2], mul[2][2], r, c, k;
	
	printf("\n\n\n\t Matrix - 1 --------------------");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("\n\n\t Enter mat1[%d][%d] : ",r, c );
			scanf("%d",&mat1[r][c]);
		}
	}
	
	printf("\n\n\n\t Matrix - 2 --------------------");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("\n\n\t Enter mat2[%d][%d] : ",r, c );
			scanf("%d",&mat2[r][c]);
		}
	}
	
	printf("\n\n\n\t Matrix:1 --------------------\n\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",mat1[r][c]);
			
		}
		printf("\n");
	}
	
	printf("\n\n\n\t Matrix:2 --------------------\n\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",mat2[r][c]);
			
		}
		printf("\n");
	}
	
	printf("\n\n\n\t Addition -------------------------------\n\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d ", mat1[r][c]+mat2[r][c]);
		}
		printf("\n");
	}
	printf("\n\n\n\t Substraction -------------------------------\n\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("  %d ", mat1[r][c] - mat2[r][c]);
		}
		printf("\n");
	}
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			mul[r][c]=0;
			for(k=0;k<2;k++)
			{
				mul[r][c]+=mat1[r][k]*mat2[k][c];
			}
		}
	}	
	
	printf("\n\n\n\t Matrix Multiplication --------------------\n\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf(" %d",mul[r][c]);
			
		}
		printf("\n");
	}
	
}




