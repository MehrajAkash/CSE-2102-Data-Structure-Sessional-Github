#include<bits/stdc++.h>
using namespace std;

class Queue{
public:
    vector<int> arr;
    int size, capacity, front;

    Queue(int qSize){
        size =0;
        front = 0;
        capacity = qSize;
        arr.resize(qSize);
    }

    void enqueue(int x){
        if(size == capacity) return;

        arr[size] = x;
        size++;
    }

    void dequeue(){
        if(size==0) return;

        for(int i=1; i<size; i++ ){
            arr[i-1] = arr[i];
        }

        size--;
    }

    int getFront(){
        if(size == 0) return -1;

        return arr[front];
    }

    void display(){
        for(int i=front; i<size; i++){
            cout<< arr[i] <<" ";
        }
        cout<<endl;
    }

};

int main(){
    Queue *q = new Queue(4);

    q->enqueue(1);
    q->enqueue(2);
    q->enqueue(3);

    q->display();
    cout<< q->getFront() <<endl;

    q->dequeue();
    q->enqueue(4);

    q->display();

 return 0;
}
