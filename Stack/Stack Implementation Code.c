#include<stdio.h>
#include<stdlib.h>
#define Max 4
int stack_arr[Max];
int top=-1;

int isFull(){
 if(top==Max-1)
   return 1;
   else
    return 0;
}

int isEmpty(){
  if(top==-1)
    return 1;
  else
    return 0;
}

void push(int data){
 if(isFull()){
    printf("Stack is Full, No space left\n");
    return;
 }
 else{
    top = top+1;
    stack_arr[top] = data;
    printf("%d item is added\n",data);
 }
}

int pop(){
  if(isEmpty()){
    printf("Stack is Empty, Pop not possible.\n");
    return -1;
  }
 int value = stack_arr[top];
 top = top-1;
 printf("Pop value: %d \n",value);
 return value;
}

int peek(){
    if(isEmpty()){
    printf("Stack is Empty, Peek not possible.\n");
    return -1;
  }
  int value=stack_arr[top];
  printf("Peek value: %d \n",value);
  return value;
}

void print(){
  printf("Present stack condition: ");
  for(int i=0;i<Max;i++)
    printf("%d ",stack_arr[i]);
  printf("\n");
}

int main(){
printf("****Welcome to stack implementation**** \n");
pop();
push(2);
push(4);
peek();
print();
pop();
push(8);
push(10);
push(12);
push(14);
print();

return 0;
}


