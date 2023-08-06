#include<stdio.h>
int main()
{
	int n,arr[100],i,temp=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter array elements: \n");
	for(i=0;i<n;i++)
	{
		printf("Element %d =",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i!=0)
		{
			if(i%2!=0)
			{
				temp=arr[i];
				arr[i]=arr[i-1];
				arr[i-1]=temp;
			}
		}
	}
	printf("The sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
