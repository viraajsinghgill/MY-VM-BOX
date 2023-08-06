#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
	int main()
	{
	int k,i,count=1;
	struct node *p,*head,*newnode;
	printf("Enter the number of nodes you want to enter: ");
	scanf("%d",&k);
	
	if(k%2==0)
	{
	for(i=0;i<k;i++)
		{
		printf("Enter the number to node no.%d: ",i+1);
		if(i==0)
			{
			head=(struct node *)malloc(sizeof(struct node));
			p=head;
			
			}
		else
			{
			p->next=(struct node *)malloc(sizeof(struct node));
			p=p->next;
			}
			scanf("%d",&p->data);
		
		}
		}
		else
		{
		printf("Enter even number of input ");
		}
	p->next=NULL;
	struct node *a;
	a=head;
	while(a!=NULL)
		{
		printf("\n%d is data to node number %d",a->data,count);
		count=count+2;
		a=a->next->next;
		}
	
	return 0;
	}
