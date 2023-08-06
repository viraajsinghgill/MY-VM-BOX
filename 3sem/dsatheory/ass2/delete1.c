#include<stdio.h>
#include<limits.h>
#include <stdlib.h>
struct Node{
int data;
struct Node* next;
struct Node* prev;
}*head, *tail;
//this is mainly a helper function, specific to this approach only.
void deleteNode(struct Node** head_ref, struct Node* del){
if(*head_ref == NULL || del == NULL)
return;
if(*head_ref == del)
*head_ref = del->next;
if(del->next != NULL)
del->next->prev = del->prev;
if(del->prev != NULL)
del->prev->next = del->next;
free(del);
}
void deleteX(struct Node** head_ref, int x){
if((*head_ref) == NULL)
return;
struct Node* current = *head_ref;
struct Node* next;
while(current != NULL){
if(current->data == x){
next = current->next;
deleteNode(head_ref, current);
current = next;
}
else
current = current->next;
}
}
struct Node *createList(int n){
int data;
for(int i=0; i<n;
i++){
struct Node *newNode = (struct Node*)malloc(sizeof(struct
Node));
printf("Enter data for node_%d : ", i);
scanf("%d", &data);
newNode->data = data;
if(i == 0){
head = tail = newNode;
head->prev = NULL;
tail->next = NULL;
}
else{
tail->next = newNode;
newNode->prev = tail;
tail = newNode;
tail->next = NULL;
}
}
return head;
}
void display(struct Node *ptr){
struct Node *temp = ptr ;
if(temp == NULL){
printf("Empty list ");
}
while(temp != NULL){
printf("%d ", temp->data);
temp = temp->next ;
}
}
int small(struct Node* head){
int min = INT_MAX;
while (head != NULL) {
if (min > head->data)
min = head->data;
head = head->next;
}
return min;
}
int main(){
int na, min;
struct Node *a;
printf("Enter the size of linked_list A : ");
scanf("%d", &na);
a = createList(na);
printf("Initial linked_list :-\n");
display(a);
min = small(a);
printf("\nSmallest element is : %d\n", min);
deleteX(&a, min);
printf("\nAfter deletion :- \n");
display(a);
}
