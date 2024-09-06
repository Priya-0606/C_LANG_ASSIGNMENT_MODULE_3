//1. Write a program to find out the max number from given array using function

#include<stdio.h>

int Max_Array(int arr[], int n);

main()
{
	int arr[50], n, i;
	
	printf("\n\n\n\t Enter the size of Array : ");
	scanf("%d",&n);
	
	if(n>50)
		printf("\n\n\t Array size exeeds the limits of 50.");
	
	printf("\n\n--------------Array Element------------------");
	
	for (i=0;i<n;i++)
	{
		printf("\n\n\t Array[%d]: ", i+1);
		scanf("%d",&arr[i]);
	}
	
	int max = Max_Array(arr, n);
    printf("\n\nThe maximum element in the array is: %d", max);
	
}

int Max_Array(int arr[], int n)
{ 	
	int	max = arr[0];
	int i;
	
	for (i=1;i<n;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	
	return max;
}

