#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
	int main()
	{
	int k,count=1;
	struct node *head,*p,*newnode;
	printf("Number of nodes :");
	scanf("%d",&k);
	int i;
	for(i=0;i<k;i++)
		{
		printf("Enter data for node %d :",i);
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
	struct node *b;
	b=head;
	while(b!=NULL)
		{
		printf("\n%d is data to node number %d",b->data,count);
		count++;
		b=b->next;
		}
		return 0;
		}
