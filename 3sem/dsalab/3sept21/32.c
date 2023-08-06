#include <stdio.h>
#include <stdlib.h>
  
//A structure of linked list node 
struct node {
  int data;
  struct node *next;
} *head;
 
void initialize(){
    head = NULL;
}
 
// Given a Inserts a node in front of a singly linked list. 

void insert(int num) {
    // Create a new Linked List node 
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    // Next pointer of new node will point to head node of linked list  
    newNode->next = head;
    // make new node as new head of linked list 
    head = newNode;
    printf("Inserted Element : %d\n", num);
}
 
// It Prints alternate nodes of a Linked List 
void printAlternateNodes(struct node *head) {
    int counter = 0;
    printf("\nPrinting Alernate nodes of Linked List\n");
    while(head != NULL) {
        if (counter%2 == 0) {
           printf(" %d ", head->data);
        }
        counter++;
        head = head->next;
    }
}
 
//Prints a linked list from head node till tail node 
void printLinkedList(struct node *nodePtr) {
  while (nodePtr != NULL) {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != NULL)
         printf("-->");
  }
}
  
int main() {
    initialize();
    /* Creating a linked List*/
    insert(7);  
    insert(6); 
    insert(5); 
    insert(4);
    insert(3);
    insert(2);
    insert(1);
     
    printf("\nLinked List\n");
    printLinkedList(head);
 
    printAlternateNodes(head);
     
    return 0;
}
