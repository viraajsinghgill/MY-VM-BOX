#include<stdio.h>
#define SIZE 5

typedef struct queue {
int cque[SIZE];
int rear;
int front;
}CQueue;
void insert(CQueue *cq) {
int item;
if(cq->front == (cq->rear+1) % SIZE) {
printf("CQueue Overflow...\n");
return;
}
printf("Enter the item : ");
scanf("%d"

, &item);

if(cq->front == -1) {
cq->front = 0;
cq->rear = 0;
}
else
cq->rear = (cq->rear+1) % SIZE;
cq->cque[cq->rear] = item;
}
void del(CQueue *cq) {
if(cq->front == -1) {
printf("CQueue Underflow...\n");
return;
}
printf("Item : %d\n"
, cq->cque[cq->front]);
if(cq->front == cq->rear) {
cq->front = -1;
cq->rear = -1;
}
else
cq->front = (cq->front+1) % SIZE;

}

void display(CQueue cq) {
int i;
if(cq.front == -1) {
printf("CQueue is Empty...\n");
return;
}
printf("Front -> %d\n"

, cq.front);

printf("Elements -> ");
for(i = cq.front; i != cq.rear; i= (i+1) %

SIZE)
printf("%d "

, cq.cque[i]);

printf("%d\n"

, cq.cque[i]);

printf("Rear -> %d\n"

, cq.rear);

}
int main() {
CQueue cq;
int choice;
cq.rear = cq.front = -1;
do {
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Display\n");
printf("4.Quit\n");
printf("Enter your choice : ");
scanf("%d"

, &choice);

switch(choice) {
case 1 :
insert(&cq);
break;
case 2 :
del(&cq);
break;
case 3:
display(cq);
break;
case 4:
break;
default:
printf("Wrong choice\n");

}
}while(choice!=4);
return 0;
}
