#include <stdio.h>
#include <stdlib.h>


struct node {
int data;
struct node * prev;
struct node * next;
}*head, *last;



void createList(int n)
{
int i, data;
struct node *newNode;
if(n >= 1)
{
head = (struct node *)malloc(sizeof(struct node));
printf("\nEnter data of node 1 : ");
scanf("%d", &data);
head->data = data;
head->prev = NULL; 
head->next = NULL; 
last = head;
for(i=2; i<=n; i++)
{
newNode = (struct node *)malloc(sizeof(struct node));
printf("\nEnter data of node %d : ", i);
scanf("%d", &data);
newNode->data = data;
newNode->prev = last; 
newNode->next = NULL;
last->next = newNode; 
last = newNode; 
}}}
void displayList()
{
struct node * temp;
int n = 1;
if(head == NULL)
{
printf("\nList is empty.\n");
}
else
{
temp = head;

while(temp != NULL)
{
printf("%d\t", temp->data);
n++;

temp = temp->next;
}}}


void delete_given_position(int position)
{
struct node *temp;
int i;
temp = head;
for(i=0; i<position /*&& current!=NULL*/; i++)
{
temp = temp->next;
}
if(temp != NULL)
{
temp->prev->next = temp->next;   
temp->next->prev = temp->prev;  
free(temp); 
}
else
{
printf("Invalid position!\n");
}}
int main()
{
int n, pos;
head = NULL;
last = NULL;
printf("\nEnter the total number of nodes in list : "); 
scanf("%d", &n);
createList(n);
printf("\n\nTHE DOUBLY LINKED LIST IS :\n\n");
displayList();
printf("\n\nEnter the position : ");
scanf("%d",&pos);
delete_given_position(pos);
printf("\n\nAFTER DELETION, THE DOUBLY LINKED LIST IS :\n\n");
displayList();
return 0;
}
