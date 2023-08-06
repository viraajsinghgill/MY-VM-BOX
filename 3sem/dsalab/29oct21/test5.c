#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void concatenate(struct node *a,struct node *b)
{
    if( a != NULL && b!= NULL )
    {
        if (a->next == NULL)
            a->next = b;
        else
            concatenate(a->next,b);
    }
  
}
void display(struct node *head)
{
    if(head != NULL)
 
    {
        printf("%d,", head -> data);
        display(head->next);
    }
}

int main()
{
    struct node *prev,*h1, *h2, *p;
    int n,i;
    printf ("number of elements in a:");
    scanf("%d",&n);
    h1=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(h1==NULL)
            h1=p;
        else
            prev->next=p;
        prev=p;
    }
    printf ("number of elements in b:");
    scanf("%d",&n);
    h2=NULL;
    for(i=0;i<n;i++)
    {
        p=malloc(sizeof(struct node));
        scanf("%d",&p->data);
        p->next=NULL;
        if(h2==NULL)
            h2=p;
        else
            prev->next=p;
        prev=p;
    }
    concatenate(h1,h2);
    display(h1);
    return 0;
}

