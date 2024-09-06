//14.Perform 2D matrix array.

#include<stdio.h>
main()
{
	int Matrix[50][50], Row, Col, Row_Size, Col_Size;
	
	printf("\n\n\t Enter a Raw size for Matrix : ");
	scanf("%d",&Row_Size);
	
	printf("\n\n\t Enter a Column Size for Matrix : ");
	scanf("%d",&Col_Size);
	
	for(Row=0;Row<Row_Size;Row++)
	{
		for(Col=0;Col<Col_Size;Col++)
		{
			printf("\n\n\t Enter an element mat[%d][%d]: ", Row,Col);
			scanf("%d",&Matrix[Row][Col]);
		}
	}
	
	for(Row=0;Row<Row_Size;Row++)
	{
		for(Col=0;Col<Col_Size;Col++)
		{
			printf(" %d", Matrix[Row][Col]);
		}
		printf("\n");
	}
	
}
