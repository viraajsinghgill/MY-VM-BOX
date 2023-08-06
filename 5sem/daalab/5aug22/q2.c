#include<stdio.h>
#include<stdlib.h>
void udf1(int a[],int s)
{
	int flag=0;
	int cnt;
	for(int i=0;i<s-1;i++)
	{
		cnt=1;
		for(int j=i+1;j<1;j++)
		{
			if(a[i]==a[j])
			{
				cnt++;
			}
		}
		if(cnt>s/2)
		{
			printf("the list contains an item that occurs more than n/2 times");
			flag=1 ;
			break;
		}
	}
	if(flag==0)
	{
		printf("the list does not contain an item that occurs more than n/2 times");
	}
}

void udf2(int a[],int s)
{
	int flag=0;
	int i=0;
	while(i<1)
	{
		if(a[i]<=0)
		{
			i++;
			continue;
		}
		int elementindex=a[i]-1;
		if(a[elementindex]>0)
		{
			a[i]=a[elementindex];
			a[elementindex]=-1;
			
		}
		else
		{
			a[elementindex]--;
			a[i]=0;
			i++;
			
					}
	}
	for(int i=0;i<s;i++)
	{
		if(abs(a[i])>s/2)
		{
			printf("the list contains an item that occurs more than n/2 times");
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("the list does not contain an item that occurs more than n/2 times");
	}
}
int main()
{
	 int list[100];
	 int lim;
	 printf("enter the size of the list");
	 scanf("%d",&lim);
	 int opt=0;
	 printf("\nenter the elements of the list");
	 for(int i=0;i<lim;i++)
	 {
	 	scanf("%d",&list[i]);
	 }
	 printf("\nenter 1 to use UDF which take O(n^2) time");
	 printf("\nenter 2 to use UDF which take O(n) time");
	 printf("enter 3 to exit");
	 while(opt!=3)
	 {
	 	printf("\n\nenter  your choice:");
	 	scanf("%d",&opt);
	 	switch(opt)
	 	{
	 	case 1:
	 	udf1(list,lim);
	 	break;
	 	case 2:
	 	udf2(list,lim);
	 	break;
	 	case 3:
	 	break;
	 	default:
	 	printf("please enter a valid choice");
	 	break;
	 	}
	 }
}

