#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};
int tree[10];
void root(int key)
{
   tree[0]=key;
   
}
 void setleft(int key , int parent)
 {
   tree[parent*2+1]=key;
 }
 void setright(int key , int parent)
 {
   tree[2*i+2]=key;
 
 }
 int main()
 {
   root(5);
   setleft(7,0);
   setright(6,0);
   setleft(2,1);
   setright(8.1);
   setleft(3,2);
   setright(4.2);
   return 0;
   
 }
