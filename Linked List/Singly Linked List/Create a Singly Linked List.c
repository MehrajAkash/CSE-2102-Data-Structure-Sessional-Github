#include<stdio.h>

struct node{
   int data;
   struct node* next;
};

int main(){
    int i,n,item;
    struct node *nptr,*tptr,*head;
    head=NULL;

    printf("Enter number of NOdes: ");
    scanf("%d",&n);
    printf("Enter data with space: ");

    for(i=1;i<=n;i++){
        scanf("%d",&item);
        struct node *nptr = malloc(sizeof(struct node));

        nptr->data = item;
        nptr->next = NULL;
        if(head==NULL){
            head = nptr;
            tptr = nptr;
        }
        else{
            tptr->next = nptr;
            tptr = nptr;
        }
    }

    tptr=head;
    for(i=1;i<=n;i++){
        printf("%d->",tptr->data);
        tptr = tptr->next;
    }
    printf("NULL \n");

}

