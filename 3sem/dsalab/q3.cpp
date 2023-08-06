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

void preorder_print(struct Node *root) {
  if (!root) return;
  printf("%d ", root->data);
  inorder_print(root->left);
  inorder_print(root->right);
}

void postorder_print(struct Node *root) {
  if (!root) return;
  inorder_print(root->left);
  inorder_print(root->right);
  printf("%d ", root->data);
}

struct Node *search_tree(int q, struct Node *root) {
  if (!root || root->data == q) return root;
  if (q < root->data) return search_tree(q, root->left);
  return search_tree(q, root->right);
}


int count_leaf_nodes(struct Node *root) {
  if (root == NULL) 
  return 0;
  if (root->left == NULL && root->right == NULL) 
  return 1;
  int leftLeafCount = count_leaf_nodes(root->left);
  int rightLeafCount = count_leaf_nodes(root->right);
 
 printf("count=%d",leftLeafCount + rightLeafCount);
 return 0;
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
  count_leaf_nodes(root);
  
}
