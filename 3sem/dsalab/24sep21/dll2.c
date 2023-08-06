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
printf("\nTHE DOUBLY LINKED LIST IS :\n\n");

while(temp != NULL)
{
printf("%d\t", temp->data);
n++;

temp = temp->next;
}}}


void insertAtBeginning(int data)
{
struct node * newNode;
if(head == NULL)
{
printf("Error, List is Empty!\n");
}
else
{
newNode = (struct node *)malloc(sizeof(struct node));
newNode->data = data;
newNode->next = head; 
newNode->prev = NULL; 

head->prev = newNode;

head = newNode;
}
}
int main()
{
int n, data, choice=1;
head = NULL;
last = NULL;
printf("\nEnter the total number of nodes in list : "); 
scanf("%d", &n);
createList(n);
displayList();
printf("\n\nEnter data of first node : ");
scanf("%d", &data);
insertAtBeginning(data);
displayList();
return 0;
}
