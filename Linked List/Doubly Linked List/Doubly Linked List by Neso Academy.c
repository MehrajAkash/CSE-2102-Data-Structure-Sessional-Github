#include<stdio.h>
#include<stdlib.h>
struct node{
 struct node* prev;
 int data;
 struct node* next;
};

struct node* addToEmpty(struct node* head,int data){
   struct node* temp = malloc(sizeof(struct node));
   temp->prev = NULL;
   temp->data = data;
   temp->next = NULL;
   head = temp;
   return head;
};

struct node* addAtBeginning(struct node* head,int data){
   struct node* temp = malloc(sizeof(struct node));
    temp->prev = NULL;
   temp->data = data;
   temp->next = NULL;

   temp->next = head;
   head->prev = temp;
   head = temp;
   return head;
};

struct node* addAtEnd(struct node* head,int data){
   struct node *tp,*temp;
   temp = malloc(sizeof(struct node));
   temp->prev = NULL;
   temp->data = data;
   temp->next = NULL;

   tp=head;
   while(tp->next!=NULL){
    tp = tp->next;
   }
   tp->next = temp;
   temp->prev = tp;
   return head;
};

void addAfterPosition(struct node* head_ref,int data){
  struct node* newp = malloc(sizeof(struct node));
  struct node *temp=NULL;

   newp->data = data;

  if(head_ref->next == NULL){
     head_ref->next == newp;
     newp->next = NULL;
     newp->prev = head_ref;
     return;
  }
   temp = head_ref->next;
  temp->prev = newp;
  newp->prev = head_ref;

  newp->next = temp;
  head_ref->next = newp;

};

void print(struct node* head_ref){
   while(head_ref!=NULL){
    printf("%d ",head_ref->data);
    head_ref = head_ref->next;
   }
   printf("\n");
}

int main(){
struct node* head = NULL;
struct node* ptr;

head = addToEmpty(head,45);
print(head);
head = addAtBeginning(head,55);
head = addAtEnd(head,35);
print(head);
addAfterPosition(head->next,40);
print(head);
return 0;
}
