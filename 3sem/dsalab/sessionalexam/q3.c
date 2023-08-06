#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
  
};

struct Node *create_node(int d) {
  struct Node *tmp =(struct Node *)malloc(sizeof(struct Node));
  tmp->data = d;
  tmp->left = tmp->right = NULL;
  return tmp;
}

struct Node *insert_node(int d, struct Node *root) {
  if (root == NULL) {
    return create_node(d);
  }

  if (d < root->data) {
    root->left = insert_node(d, root->left);
  } else {
    root->right = insert_node(d, root->right);
  }
  return root;
}

void inorder_print(struct Node *root) {
  if (!root) return;
  inorder_print(root->left);
  printf("%d ", root->data);
  inorder_print(root->right);
}
void count(Node *root)
{
  if(root==null)
  return 0;
  return 0;
  return 1+count(root->left)+count(root->right);
 /*int c=0;
  if(root->left==null && root->left==null)
{ c=1+count(root->left)+count(root->right);
 printf("number of node%d",c);
 }
/* if(root->left!=null)
 {
   n=n+1;
   n=count(root->left);
 }
 if(root->right!=null)
 {
   n=n+1;
   n=count(root->right);
 }
 return n;*/
  return count()
}
int main() {
  struct Node *root = insert_node(10, root);
  insert_node(20, root);
  insert_node(15, root);
  insert_node(30, root);
  insert_node(9, root);
  insert_node(1, root);
  inorder_print(root);
  printf("\n");
  count(root);
  //delete_node(20, root);
  //inorder_print(root);
}

