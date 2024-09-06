//5. WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include<stdio.h>
main()
{
	int arr1[50], arr2[50], i, j, temp, n;
	char Choice[10];
	
	printf("\n\n\t Enter a size of array : ");
	scanf("%d",&n);
	
	printf("\n\n\t Enter elements of array 1: ");

    for(i=0; i<n; i++) 
	{
		printf("\n\n\t Enter arr1[%d]: ", i);
		scanf("%d", &arr1[i]);
    }
	printf("\n\n\t Enter elements of array 2: ");
	for(i=0; i<n; i++) 
	{
        printf("\n\n\t Enter arr2[%d]: ", i);
        scanf("%d", &arr2[i]);
    }	
	printf("\n\n\t Enter your choice (Des for Descending order and Asc for Ascending order) : ");
	scanf("%s",&Choice);
	
	if(strcmp(Choice, "Asc") == 0 || strcmp(Choice, "asc") == 0) {

        // Sort array 1 in ascending order

        for(i=0; i<n; i++)
		{
            for(j=i+1; j<n; j++) 
			{
                if(arr1[i] > arr1[j])
				{
                    temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
        // Sort array 2 in ascending order
        for(i=0; i<n; i++) 
		{
            for(j=i+1; j<n; j++) 
			{
                if(arr2[i] > arr2[j]) 
				{
                    temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
    } 
	else if(strcmp(Choice, "Des") == 0 || strcmp(Choice, "des") == 0) 
	{
        // Sort array 1 in descending order
        for(i=0; i<n; i++) 
		{
            for(j=i+1; j<n; j++)
			{
                if(arr1[i] < arr1[j]) 
				{
                    temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
        // Sort array 2 in descending order

        for(i=0; i<n; i++)
		{
            for(j=i+1; j<n; j++) 
			{
                if(arr2[i] < arr2[j]) 
				{
                    temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
    }
    printf("\n\n\t Sorted array 1: ");

    for(i=0; i<n; i++) 
	{
        printf("%d ", arr1[i]);
    }
    printf("\n");
    printf("\n\n\t Sorted array 2: ");

    for(i=0; i<n; i++) 
	{
        printf("%d ", arr2[i]);
    }
    printf("\n");

}
