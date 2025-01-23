#include<bits/stdc++.h>
using namespace std;

struct node{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item){
    struct node *temp = (struct node* )malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
};

struct node *insertt(struct node *node, int value){
   if(node==NULL) return newNode(value);

   if(value < node->key)
        node->left = insertt(node->left, value);
   else
        node->right = insertt(node->right, value);


   return node;
};

void inorderTra(struct node *temp){
    if(temp==nullptr) return;

    inorderTra(temp->left);
    cout<< temp->key<<" ";
    inorderTra(temp->right);

}

struct node *minValue(struct node *root){
    struct node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp;
};

struct node *maxValue(struct node *root){
    struct node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
};

int height(node *root ){
    if(root == nullptr)
        return -1;

    int lh = height(root->left);

    int rh = height(root->right);

    return max(lh, rh)+1;
}

int main(){

    struct node *root = NULL;
    root = insertt(root, 8);
    root = insertt(root, 3);
     root = insertt(root, 1);
    root = insertt(root, 6);
    /// root = insertt(root, 7);
    root = insertt(root, 10);
     root = insertt(root, 14);
    ///root = insertt(root, 4);

   cout<<"Inorder traversal: ";
   inorderTra(root);

   cout<<"\n Minimum value of BST: "<< minValue(root)->key <<endl;

    cout<<" Maximum value of BST: "<< maxValue(root)->key <<endl;

    cout<<"Max height: " << height(root) <<endl;

return 0;
}
