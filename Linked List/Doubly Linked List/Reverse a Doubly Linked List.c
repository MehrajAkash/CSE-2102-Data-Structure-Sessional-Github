#include<stdio.h>
struct node{
  int data;
  struct node* link;
  struct node* prev;
};

struct node* addAtEmpty(struct node* head,int value){
  struct node* temp = malloc(sizeof(struct node));
  temp->data = value;
  temp->prev = NULL;
  temp->link = NULL;
  head = temp;
  return head;
};

struct node* addAtBeginning(struct node* head,int value){
  struct node* temp = malloc(sizeof(struct node));
  temp->data = value;
  temp->prev = NULL;
  temp->link = NULL;

  temp->link = head;
  head->prev = temp;
  head = temp;
  return head;
};

struct node* addAtEnd(struct node* head,int value){
  struct node* temp = malloc(sizeof(struct node));
  temp->data = value;
  temp->prev = NULL;
  temp->link = NULL;

  struct node* head_ref = head;

  while(head_ref->link!=NULL){
    head_ref = head_ref->link;
  }

  head_ref->link = temp;
  temp->prev = head_ref;
  temp->link = NULL;

  return head;
};

struct node* reverseLinkedList(struct node* head){
  struct node *next=NULL,*pre=NULL,*head_ref=head;

 while(head_ref!=NULL){
  next = head_ref->link;
  head_ref->link = pre;
  head_ref->prev = next;

  pre = head_ref;
  head_ref = next;
 }
 head_ref = pre;
  return head_ref;
};

void print(struct node* temp){
  while(temp!=NULL){
    printf("%d ",temp->data);
    temp = temp->link;
  }
  printf("\n");
}

int main(){
 struct node* head=NULL;
 head=addAtEmpty(head,6);
 head=addAtBeginning(head,4);
 head=addAtEnd(head,8);
 printf("Before reversing Linked List: ");
 print(head);
 head=reverseLinkedList(head);
 printf(" Reverse Linked List: ");
 print(head);

return 0;
}

