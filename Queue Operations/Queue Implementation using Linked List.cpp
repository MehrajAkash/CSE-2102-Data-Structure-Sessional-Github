
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int new_data)
    {
        this->data = new_data;
        this->next = nullptr;
    }
};

class Queue {

    public:

        Node *front, *rear;

        Queue() { front = rear = nullptr; }

        bool isEmpty()
        {
            if (front == nullptr) {
                return true;
            }

            return false;
        }


        void enqueue(int new_data) {

            Node* new_node = new Node(new_data);

            if (this->isEmpty()) {
                front = rear = new_node;
                return;
            }

            rear->next = new_node;
            rear = new_node;
        }


        void dequeue() {

            if (this->isEmpty()) {
                cout << "Queue Underflow\n";
                return;
            }


            Node* temp = front;
            front = front->next;

            if (front == nullptr)
                rear = nullptr;

            delete temp;
        }


        int getFront() {

            if (this->isEmpty()) {
                cout << "Queue is empty\n";
                return INT_MIN;
            }
            return front->data;
        }


        int getRear() {

            if (this->isEmpty()) {
                cout << "Queue is empty\n";
                return INT_MIN;
            }

            return rear->data;
        }


        void print(){
            Node *p = front;

            while( p ){
                cout<< p->data <<" ";
                p = p->next;
            }
            cout<<endl;
        }

};



int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);

    cout<< INT_MIN <<endl;

    cout << "Queue Front: " << q.getFront() << endl;
    cout << "Queue Rear: " << q.getRear() << endl;

    q.print();

    q.dequeue();
    q.dequeue();

    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.dequeue();

    q.print();

    cout << "Queue Front: " << q.getFront() << endl;
    cout << "Queue Rear: " << q.getRear() << endl << endl;

    q.print();

    return 0;
}
