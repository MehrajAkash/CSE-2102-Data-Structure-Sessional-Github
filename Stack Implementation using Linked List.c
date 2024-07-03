#include<stdio.h>
struct node{
   int data;
   struct node* link;
}*top=NULL;

int isEmpty(){
    if(top==NULL)
        return 1;
    else
        return 0;
}

void push(int value){

    struct node* newnode = malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("Stack is Full\n");
        return;
    }
    newnode->data = value;
    newnode->link = NULL;

    newnode->link = top;
    top = newnode;
   printf("Push item is: %d \n",value);
}

void pop(){
 if(isEmpty()){
    printf("Stack is Empty. Pop not possible \n");
    return;
 }
 struct node* temp=top;
   top = top->link;
    printf("Pop item is %d \n",temp->data);
   free(temp);
}

void peek(){
  int value = top->data;
  printf("Peek item is %d",value);
}

void print(){
  struct node* current = top;
  while(current!=NULL){
    printf("%d->",current->data);
    current = current->link;
  }
  printf("NULL \n");
}

int main(){

pop();
push(2);
print();
push(4);
push(6);
print();
pop();
print();



return 0;
}




