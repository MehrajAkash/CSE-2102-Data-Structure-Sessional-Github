#include<stdio.h>
typedef struct node Node;

struct node{
    int data;
    Node *left;
    Node *right;
};

Node *create_node(int item){
    Node *new_node = (Node*)malloc(sizeof(Node));
    if(new_node ==NULL){
        printf("Error! Memory not allocated");
        exit(1);
    }

    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

void add_left_child(Node *node, Node *child){
    node->left = child;
}

void add_right_child(Node *node, Node *child){
    node->right = child;
}

Node *create_tree()
{
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child(two,seven);
    add_right_child(two,nine);

    Node *one = create_node(1);
    Node *six = create_node(6);
    add_left_child(seven, one);
    add_right_child(seven, six);

    return two; // here....two is the root
}


// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;

  inorderTraversal(root->left);
  printf("%d ->",root->data);
  inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;

  printf("%d ->", root->data);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;

  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ->", root->data);
}

int main(){
    Node *root = create_tree();

      printf("Inorder traversal \n");
      inorderTraversal(root);

      printf("\nPreorder traversal \n");
      preorderTraversal(root);

      printf("\nPostorder traversal \n");
      postorderTraversal(root);

    return 0;
}
