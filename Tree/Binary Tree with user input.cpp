#include<bits/stdc++.h>
using namespace std;

struct treeNode{
    struct treeNode *left, *right;
    int data;

   /* treeNode(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }*/
};

struct treeNode* create(){

    struct treeNode* newNode = new treeNode;

    cout << "\nEnter data ( -1 for no insertion or for null/leaf node): ";
    int value;
    cin>>value;

    if(value == -1) return 0;

    newNode->data = value;

    cout<<"\n Enter data for left Node of "<< value <<": ";
    newNode->left = create();

     cout<<"\n Enter data for right Node of "<< value <<": ";
    newNode->right = create();


    cout<<"\n before last call \n";

    return newNode;
};

void inOrderTraversal(struct treeNode* temp){
    if(temp == nullptr) return;

    inOrderTraversal(temp->left);
    cout<< temp->data <<" ";
    inOrderTraversal(temp->right);
}

void preOrderTraversal(struct treeNode* temp){
    if(temp == nullptr) return;

      cout<< temp->data <<" ";
    preOrderTraversal(temp->left);
    preOrderTraversal(temp->right);
}

int main(){

 struct treeNode* root = nullptr;
    root = create();

    cout<<"\n In order Traversal : ";
    inOrderTraversal(root);

    cout<<"\n Pre order Traversal: ";
    preOrderTraversal(root);

return 0;
}


