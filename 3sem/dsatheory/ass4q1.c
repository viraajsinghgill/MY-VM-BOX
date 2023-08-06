#include <stdio.h>
#include <stdlib.h>
#define MAX 4
#define MIN 2
int BtreeSearch(root, key){
i = 1
while( i ≤ n[root] and key > keyi[root] )// n[root] means number of keys in root
do (i = i + 1)
if( i ≤ n[root] and key == keyi[root])
 return (root, i)
//else return NULL;
else
return BtreeSearch(childi[root], key);
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
 case 1: printf("Enter your input:");
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
 BtreeSearch(val343, &ch343, root);
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
 
 
