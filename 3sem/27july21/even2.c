#include<stdio.h>
int main()
{
	int i,n;
	printf("enter size");
	scanf("%d",&n);
	int a[n];
	printf("enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
	{
		printf("%d ",a[i]);
	}
	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		printf("%d ",a[i]);
	}
}
