#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
void display(struct node *p)
{
	while(p)
	{
		printf("%d-->" ,p->data);
		p=p->next;
	}
	printf("NULL\n");
	return ;
}
int main()
{
int a;
printf("enter the value of 1st node\n");
struct node *head=NULL,*t,*p;
t=(struct node*)malloc(sizeof(struct node));
scanf("%d" ,&t->data);
t->next=NULL;
head=t;
do
{
	t=(struct node*)malloc(sizeof(struct node));
	scanf("%d" ,&t->data);
	t->next=NULL;
	p=head;
	while(p->next)
	        p=p->next;
	p->next=t;
	printf("do you want to add more node press 1 fpr yes, 0 for no");
	scanf("%d" ,&a);
}
while(a);
display(head);
return 0;
}
