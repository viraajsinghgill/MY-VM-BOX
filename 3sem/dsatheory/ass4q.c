/*#include <stdio.h>
#include <stdlib.h>
#define MAX 4
#define MIN 2

struct btreeNode {
    int val[MAX + 1], count;
    struct btreeNode343 *link[MAX + 1];
};

struct btreeNode *root;

/* creating new node */
/*struct btreeNode343 * createNode(int val, struct btreeNode *child) {
    struct btreeNode *newNode;
    newNode = (struct btreeNode *)malloc(sizeof(struct btreeNode));
    newNode->val[1] = val;
    newNode->count = 1;
    newNode->link[0] = root;
    newNode->link[1] = child;
    return newNode;
}

/* Places the value in appropriate position */
/*void addValToNode(int val, int pos, struct btreeNode *node, struct btreeNode *child) {
    int j = node->count;
    while (j > pos) {
        node->val[j + 1] = node->val[j];
        node->link[j + 1] = node->link[j];
        }
        }*/
//DSA ACTIVITY-4
#include <stdio.h>
#include <stdlib.h>
#define MAX 4
#define MIN 2
 struct btreeNode343 {
 int val343[MAX + 1], count343;
 struct btreeNode343 *link[MAX + 1];
 };
 struct btreeNode343 *root;
 struct btreeNode343 * createNode(int val343, struct btreeNode343 *child343) {
 struct btreeNode343 *newNode;
 newNode = (struct btreeNode343 *)malloc(sizeof(struct btreeNode343));
 newNode->val343[1] = val343;
 newNode->count343 = 1;
 newNode->link[0] = root;
 newNode->link[1] = child343;
 return newNode;
 }
 void addValToNode(int val343, int pos343, struct btreeNode343 *node,
 struct btreeNode343 *child343) {
 int j343 = node->count343;
 while (j343 > pos343) {

 node->val343[j343 + 1] = node->val343[j343];
 node->link[j343 + 1] = node->link[j343];
 j343--;
 }
 node->val343[j343 + 1] = val343;
 node->link[j343 + 1] = child343;
 node->count343++;
 }
 void splitNode (int val343, int *pval, int pos343, struct btreeNode343 *node,
 struct btreeNode343 *child343, struct btreeNode343 **newNode) {
 int median343, j343;
 if (pos343 > MIN)
 median343 = MIN + 1;
 else
 median343 = MIN;
 *newNode = (struct btreeNode343 *)malloc(sizeof(struct btreeNode343));
 j343 = median343 + 1;
 while (j343 <= MAX) {
 (*newNode)->val343[j343 - median343] = node->val343[j343];
 (*newNode)->link[j343 - median343] = node->link[j343];
 j343++;
 }
 node->count343 = median343;
 (*newNode)->count343 = MAX - median343;
 if (pos343 <= MIN) {
 addValToNode(val343, pos343, node, child343);
 } else {
 addValToNode(val343, pos343 - median343, *newNode, child343);
 }
 *pval = node->val343[node->count343];
 (*newNode)->link[0] = node->link[node->count343];
 node->count343--;
 }
 int setValueInNode(int val343, int *pval, struct btreeNode343 *node, struct btreeNode343 **child343) {
 int pos343;
 if (!node) {
 *pval = val343;
 *child343 = NULL;
 return 1;
 }
 if (val343 < node->val343[1]) {
 pos343 = 0;
 } else {
 for (pos343 = node->count343;
 (val343 < node->val343[pos343] && pos343 > 1); pos343--);
 if (val343 == node->val343[pos343]) {
 printf("Duplicates not allowed\n");
 return 0;
 }
 }
 if (setValueInNode(val343, pval, node->link[pos343], child343)) {
 if (node->count343 < MAX) {
 addValToNode(*pval, pos343, node, *child343);
 } else {
 splitNode(*pval, pval, pos343, node, *child343, child343);
 return 1;
 }
 }
 return 0;
 }
 void insertion(int val343) {
 int flag343, i;
 struct btreeNode343 *child343;
 flag343 = setValueInNode(val343, &i, root, &child343);
 if (flag343)
 root = createNode(i, child343);
 }
 void copySuccessor(struct btreeNode343 *myNode, int pos343) {
 struct btreeNode343 *dummy;
 dummy = myNode->link[pos343];
 for (;dummy->link[0] != NULL;)
 dummy = dummy->link[0];
 myNode->val343[pos343] = dummy->val343[1];
 }
 void removeVal(struct btreeNode343 *myNode, int pos343) {
 int i = pos343 + 1;
 while (i <= myNode->count343) {
 myNode->val343[i - 1] = myNode->val343[i];
 myNode->link[i - 1] = myNode->link[i];
 i++;
 }
 myNode->count343--;
 }
 void doRightShift(struct btreeNode343 *myNode, int pos343) {
 struct btreeNode343 *x343= myNode->link[pos343];
 int j343 = x343->count343;
 while (j343 > 0) {
 x343->val343[j343 + 1] = x343->val343[j343];
 x343->link[j343 + 1] = x343->link[j343];
 }
 x343->val343[1] = myNode->val343[pos343];
 x343->link[1] = x343->link[0];
 x343->count343++;
 x343 = myNode->link[pos343 - 1];
 myNode->val343[pos343] = x343->val343[x343->count343];
 myNode->link[pos343] = x343->link[x343->count343];
 x343->count343--;
 return;
 }
 void doLeftShift(struct btreeNode343 *myNode, int pos343) {
 int j343 = 1;
 struct btreeNode343 *x343 = myNode->link[pos343 - 1];
 x343->count343++;
 x343->val343[x343->count343] = myNode->val343[pos343];
 x343->link[x343->count343] = myNode->link[pos343]->link[0];
 x343 = myNode->link[pos343];
 myNode->val343[pos343] = x343->val343[1];
 x343->link[0] = x343->link[1];
 x343->count343--;
 while (j343 <= x343->count343) {
 x343->val343[j343] = x343->val343[j343 + 1];
 x343->link[j343] = x343->link[j343 + 1];
 j343++;
 }
 return;
 }
 void mergeNodes(struct btreeNode343 *myNode, int pos343) {
 int j343 = 1;
 struct btreeNode343 *x1 = myNode->link[pos343], *x2 = myNode->link[pos343 - 1];
 x2->count343++;
 x2->val343[x2->count343] = myNode->val343[pos343];
 x2->link[x2->count343] = myNode->link[0];
 while (j343 <= x1->count343) {
 x2->count343++;
 x2->val343[x2->count343] = x1->val343[j343];
 x2->link[x2->count343] = x1->link[j343];
 j343++;
 }
 j343 = pos343;
 while (j343 < myNode->count343) {
 myNode->val343[j343] = myNode->val343[j343 + 1];
 myNode->link[j343] = myNode->link[j343 + 1];
 j343++;
 }
 myNode->count343--;
 free(x1);
 }
 void adjustNode(struct btreeNode343 *myNode, int pos343) {
 if (!pos343) {
 if (myNode->link[1]->count343 > MIN) {
 doLeftShift(myNode, 1);
 } else {
 mergeNodes(myNode, 1);
 }
 } else {
 if (myNode->count343 != pos343) {
 if(myNode->link[pos343 - 1]->count343 > MIN) {
 doRightShift(myNode, pos343);
 } else {
 if (myNode->link[pos343 + 1]->count343 > MIN) {
 doLeftShift(myNode, pos343 + 1);
 } else {
 mergeNodes(myNode, pos343);
 }
 }
 } else 
{
 if (myNode->link[pos343 - 1]->count343 > MIN)
 doRightShift(myNode, pos343);
 else
 mergeNodes(myNode, pos343);
 }
 }
 }
 int delValFromNode(int val343, struct btreeNode343 *myNode) {
 int pos343, flag343 = 0;
 if (myNode) {
 if (val343 < myNode->val343[1]) {
 pos343 = 0;
 flag343 = 0;
 } else {
 for (pos343 = myNode->count343;
 (val343 < myNode->val343[pos343] && pos343 > 1); pos343--);
 if (val343 == myNode->val343[pos343]) {
 flag343 = 1;
 } else {
 flag343 = 0;
 }
 }
 if (flag343) {
 if (myNode->link[pos343 - 1]) {
 copySuccessor(myNode, pos343);
 flag343 = delValFromNode(myNode->val343[pos343], myNode->
link[pos343]);
 if (flag343 == 0) {
 printf("Given data is not present in B-Tree\n");
 }
 } else {
 removeVal(myNode, pos343);
 }
 } else {
 flag343 = delValFromNode(val343, myNode->link[pos343]);
 }
 if (myNode->link[pos343]) {
 if (myNode->link[pos343]->count343 < MIN)
 adjustNode(myNode, pos343);
 }
 }
 return flag343;
 }
 void deletion(int val343, struct btreeNode343 *myNode) {
 struct btreeNode343 *tmp;
 if (!delValFromNode(val343, myNode)) {
 printf("Given value is not present in B-Tree\n");
 return;
 } else {
 if (myNode->count343 == 0) {
 tmp = myNode;
 myNode = myNode->link[0];
 free(tmp);
 }
 }
 root = myNode;

 return;
 }
 void searching(int val343, int *pos343, struct btreeNode343 *myNode) {
 if (!myNode) {
 return;
 }
 if (val343 < myNode->val343[1]) {
 *pos343 = 0;
 } else {
 for (*pos343 = myNode->count343;
 (val343 < myNode->val343[*pos343] && *pos343 > 1); (*pos343)--);
 if (val343 == myNode->val343[*pos343]) {
 printf("Given data %d is present in B-Tree", val343);
 return;
 }
 }
 searching(val343, pos343, myNode->link[*pos343]);
 return;
 }
 void traversal(struct btreeNode343 *myNode) {
 int i;
 if (myNode) {
 for (i = 0; i < myNode->count343; i++) {
 traversal(myNode->link[i]);
 printf("%d ", myNode->val343[i + 1]);
 }
 traversal(myNode->link[i]);
 }
 }
 int main() {
 int val343, ch343;
 while (1) {
 printf("1. Insertion\n2. Deletion\n");
 printf("3. Searching\n4. Traversal\n");
 printf("5. Exit\nEnter your choice:");
 scanf("%d", &ch343);
 }
 switch (ch343) {
 case 1:
 printf("Enter your input:");
 scanf("%d", &val343);
 insertion(val343);
 break;
 case 2:
 printf("Enter the element to delete:");
 scanf("%d", &val343);
 deletion(val343, root);
 break;
 case 3:
 printf("Enter the element to search:");
 scanf("%d", &val343);
 searching(val343, &ch343, root);
 break;
 case 4:
 traversal(root);
 break;
 case 5:
 exit(0);
 default:
 printf("U have entered wrong option!!\n");
 break;
 }
 printf("\n");
 
 }
 
 
