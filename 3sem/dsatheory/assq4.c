#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node *create_node(int d) {
  struct Node *tmp = malloc(sizeof(struct Node));
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

int find_max(struct Node *root) {
  if (!root) return -1;
  int res = root->data;
  int lres = find_max(root->left);
  int rres = find_max(root->right);
  if (lres > res) res = lres;
  if (rres > res) res = rres;
  return res;
}

int find_min(struct Node *root) {
  if (!root) return -1;
  int res = root->data;
  int lres = find_min(root->left);
  int rres = find_min(root->right);
  if (lres < res) res = lres;
  if (rres < res) res = rres;
  return res;
}

int height(struct Node *root) {
  if (root == NULL) return 0;
  int leftHeight = height(root->left);
  int rightHeight = height(root->right);
  return (rightHeight > leftHeight) ? rightHeight + 1 : leftHeight + 1;
}

int count_leaf_nodes(struct Node *root) {
  if (root == NULL) return 0;
  if (root->left == NULL && root->right == NULL) return 1;
  int leftLeafCount = count_leaf_nodes(root->left);
  int rightLeafCount = count_leaf_nodes(root->right);
  return leftLeafCount + rightLeafCount;
}

struct Node *min_value_node(struct Node *root) {
  struct Node *tmp = root;
  while (tmp && tmp->left != NULL) tmp = tmp->left;
  return tmp;
}

struct Node *delete_node(int q, struct Node *root) {
  if (root == NULL) return root;
  if (q < root->data)
    root->left = delete_node(q, root->left);
  else if (q > root->data)
    root->right = delete_node(q, root->right);
  else {
    if (root->left == NULL && root->right == NULL)
      return NULL;
    else if (root->left == NULL) {
      struct Node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct Node *temp = root->left;
      free(root);
      return temp;
    }
    struct Node *temp = min_value_node(root->right);
    root->data = temp->data;
    root->right = delete_node(temp->data, root->right);
  }
  return root;
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
  delete_node(20, root);
  inorder_print(root);
}
