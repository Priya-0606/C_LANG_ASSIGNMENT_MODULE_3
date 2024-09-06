//15.Store 5 numbers in array and sort it in ascending order.
#include<stdio.h>
main()
{
	int arr[50], i, j, temp, n;
	
	printf("\n\n\t Enter a size of array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n\n\t Enter arr[%d] : ", i);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n\n\t arr[%d] : %d", i, arr[i]);
	
	}	
}
