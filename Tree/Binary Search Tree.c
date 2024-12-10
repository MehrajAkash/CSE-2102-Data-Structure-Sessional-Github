#include<stdio.h>
typedef struct node Node;

struct node{
    Node *left;
    Node *right;
    int data;
};

Node *create_node(int item){
    Node *new_node = (Node*)malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Memory NOt allocated");
        exit(1);
    }
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

void preOrder(Node *node){

    printf("%d ",node->data);

    if(node->left != NULL){
        preOrder(node->left);
    }
    if(node->right != NULL){
        preOrder(node->right);
    }
}

Node *create_tree(){
    Node *eight = create_node(8);
    Node *three = create_node(3);
    Node *ten = create_node(10);
    Node *one = create_node(1);
    Node *six = create_node(6);
    Node *fourteen = create_node(14);

    add_left_child(eight,three);
    add_right_child(eight,ten);

    add_left_child(three,one);
    add_right_child(three,six);

    add_right_child(ten,fourteen);

    return eight;
}

void add_left_child(Node *node, Node *child){
    node->left = child;
}
void add_right_child(Node *node, Node *child){
    node->right = child;
}

Node *bst_insert(Node *root, int item){

     Node *newnode = create_node(item);

     if(newnode != NULL){
        printf("\n memory allocated.\n");
     }

    Node *parent_node, *current_node;

    if(root == NULL){
        root = newnode;
        return root;
    }
    parent_node = NULL;
    current_node = root;

    while(current_node != NULL){
        parent_node = current_node;
        if(newnode->data < current_node->data){
            current_node = current_node->left;
        }
        else{
            current_node = current_node->right;
        }
    }

    if(newnode->data < parent_node->data){
        add_left_child(parent_node,newnode);
    }
    else{
        add_right_child(parent_node,newnode);
    }
    return root;
}

int main(){
    Node *root = create_tree();
    preOrder(root);



    root = bst_insert(root,13);
    preOrder(root);

    return 0;
}
