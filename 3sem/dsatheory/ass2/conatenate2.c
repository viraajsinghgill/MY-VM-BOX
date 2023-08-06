#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
}*head;
struct node *createNode(int n){
struct node *newNode, *temp, *curr;
int i, info;
head = (struct node*)malloc(sizeof(struct node)) ;
printf("Enter data of node_0 : ");
scanf("%d", &info);
head->data = info;
head->next = NULL ;
temp = head;
for(i=1; i<n; i++){
newNode = (struct node*)malloc(sizeof(struct node)) ;
printf("Enter data of node_%d : ", i);
scanf("%d", &info);
newNode->data = info ;
newNode->next = NULL ;
temp->next = newNode ;
temp = temp->next;
}
return head;
}
void display(struct node *ptr){
struct node *temp = ptr;
if(ptr == NULL){
printf("Empty linked_list");
return ;
}
while(temp != NULL){
printf("%d ", temp->data);
temp = temp->next ;
}
}
void duplicate(struct node* ptr){
struct node *ptr1, *ptr2, *dup;
ptr1 = ptr;
while(ptr1 != NULL && ptr1->next != NULL){
ptr2 = ptr1;
while (ptr2->next != NULL){
if(ptr1->data == ptr2->next->data){
dup = ptr2->next;
ptr2->next = ptr2->next->next;
free(dup);
}
else
ptr2 = ptr2->next;
}
ptr1 = ptr1->next;
}
}
struct node* merge(struct node* a, struct node* b){
struct node dummy;
struct node* tail = &dummy;
dummy.next = NULL;
while (1){
if (a == NULL)
{
tail->next = b;
break;
}
else if (b == NULL)
{
tail->next = a;
break;
}
else {
tail->next = a;
tail = a;
a = a->next;
tail->next = b;
tail = b;
b = b->next;
}
}
a = dummy.next ;
return a ;
}
int main(){
struct node *a, *b, *result ;
int na, nb, i, j;
printf("Enter the size of linked_list a : ");
scanf("%d", &na);
a = createNode(na);
printf("\nEnter the size of linked_list b : ");
scanf("%d", &nb);
b = createNode(nb);
printf("\nInitial A linked_list :-\n");
display(a);
printf("\nInitial B linked_list :-\n");
display(b);
printf("\nLinked_list A after alternate merger :-\n");
result = merge(a, b);
display(result);
duplicate(result);
printf("\nAfter removing duplicates :-\n");
display(result);
return 0;
}
