#include<stdio.h>
struct node{
  int data;
  struct node* next;
  struct node* prev;
};

struct node* addEmpty(struct node* head,int value){
  struct node* temp=malloc(sizeof(struct node));
  temp->next = NULL;
  temp->data = value;
  temp->prev = NULL;
  head = temp;
   return head;
};
struct node* addAtEnd(struct node* head,int value){
   struct node* temp=head;
   struct node* newnode=malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;
    if(temp->next==NULL){
        temp->next = newnode;
        newnode->prev = temp;
       return head;
    }

    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    return head;
};

struct node* addAtBeginning(struct node* head,int value){
   struct node* temp = malloc(sizeof(struct node));
   temp->data = value;
   temp->next = head;
   head->prev = temp;

    head = temp;
  return head;
};

struct node* createLinkedList(struct node* head){
    int n,i,value;
    printf("Enter number of Nodes: ");
    scanf("%d",&n);
    struct node* tp = head;

     printf("Enter Nodes value: ");
    for(int i=1;i<=n;i++){
      scanf("%d",&value);

    struct node* temp=malloc(sizeof(struct node));
    if(tp==NULL){
        tp=addEmpty(head,value);
    }
    else{
           while(tp->next!=NULL){
            tp=tp->next;
           }
     temp->data = value;
     tp->next = temp;
     temp->prev = tp;
     temp->next = NULL;
      tp=temp;
     }

    }

    return head;
};

void print(struct node* head){
 struct node* temp=head;
 printf("Linked List: ");
 while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
 }
 printf("\n");
}

int main(){
struct node* head=NULL;
head = addEmpty(head,2);
head = addAtEnd(head,4);
print(head);
head = createLinkedList(head);
print(head);
head = addAtBeginning(head,1);
print(head);


return 0;
}
