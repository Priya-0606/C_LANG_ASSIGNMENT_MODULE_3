//18. Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
main()
{
    float Cost, Sell, profit, loss;

    printf("Enter the cost price: ");
    scanf("%f", &Cost);

    printf("Enter the selling price: ");
    scanf("%f", &Sell);

    if (Sell > Cost)
	{
		profit = Sell - Cost;
		printf("Profit : %.2f",profit);
	} 
    else if (Sell < Cost) 
    {
        loss = Cost - Sell;
        printf("Loss : %.2f", loss);
	}
    else 
        printf("No profit or loss.");
       
}
