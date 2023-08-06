#include<stdio.h>
#include<stdlib.h>
struct Node {
int data;
struct Node* next;
};
void createList() {
int k, n;
struct Node *p, *head;
printf ("Number of nodes: ");
scanf ("%d", &n);
for (k=0; k<n; k++) {
if (k == 0) {
head = (struct Node *) malloc(sizeof(struct Node));
p = head;
}
else {
p->next = (struct Node *) malloc(sizeof(struct Node));
p = p->next;
}
scanf ("%d", &p->data);
}
p->next = NULL;
}
 void display() {
int count = 1;
struct Node *p,*head;
if(head == NULL) {

printf("\nempty list ...");
//return;
}
p = head;
while (p != NULL) {
printf ("\nNode: %d: %d", count, p->data);
count++;
p = p->next;
}
printf ("\n");
}
   void alternate()
   {  struct Node* head;
    int count=0;
    
    printf("\nalternate node");
    while(head!=NULL)
    {
      if(count%2==0){
      printf("%d",head->data);
      }
      
      count ++;
      head=head->next;
   }
}
int main()
{  //struct Node n1;

  createList();
 display();
 alternate();
  
  return 0; 
}
