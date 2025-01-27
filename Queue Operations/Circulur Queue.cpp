#include<iostream>
#include<stdbool.h>
#define capacity 5
using namespace std;
int queue[capacity],front=-1,rear=-1,totalItem=0;

bool isFull(){
 if(totalItem==capacity){
    return true;
 }
 return false;
}

int isEmpty(){
  if(totalItem==0) return true;

  return false;
}

void enqueue(int item){
 if(isFull()){
    cout<<"\n Queue is Full \n";
    return;
 }
    rear = (rear+1)%capacity;
    queue[rear] = item;
    cout<<item<<" is added"<<endl;
    totalItem++;
}

int dequeue(){
   if(isEmpty()){
    cout<<"\n Queue is Empty"<<endl;
    return -1;
   }
    front = (front+1)%capacity;
    int frontItem = queue[front];
    queue[front] = -1;
    totalItem--;

    cout<<frontItem<<" is removed"<<endl;
   return frontItem;
}

void print(){
    cout<<"\n Queue: ";
 for(int i=0;i<capacity;i++)
    cout<<queue[i]<<" ";
    cout<<endl;
}

int main(){
 cout<<"*******Queue Operations********"<<endl;
 dequeue();
 enqueue(10);
 enqueue(20);
 enqueue(30);
 enqueue(40);
 print();
 dequeue();
 enqueue(50);
 enqueue(60);
 print();
 enqueue(70);
 print();
 return 0;
}



