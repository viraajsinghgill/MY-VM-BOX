#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};


struct node *largest_node(struct node *p)
{
  struct node *t;
  t=(struct node*)malloc(sizeof(struct node));
  //t->data=*data;
  //t->next=(*p);
  t->next=null;
  *p=t;
  
  
  
  while(p!=null)
 {//int max=-1;
   if(t<p->data)
   t=p->data;
    p=p->next;
  }

  return t;
};

void display(struct node *p)
{
  while(p!=null)
  {
    printf("%d->",p->data);
    p=p->next;
  }
  printf("null\n");
  return ;
}
void main()
{
  struct node *q;
  q=largest_node(head);
  printf("%d",q->data);
  display(head);
  }
