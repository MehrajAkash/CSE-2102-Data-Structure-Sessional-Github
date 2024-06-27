// C++ program to show inserting a node
// at front of given Linked List
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node {
public:
	int data;
	Node* next;
};

// Given a reference (pointer to pointer) to the head of a list and an int, inserts a new node on the front of the list.
void insertAtFront(Node** head_ref, int new_data)
{

	// 1. allocate node
	Node* new_node = new Node();

   cout<<"head "<<*head_ref<<endl;
   cout<<"newnode "<<new_node<<endl;
	// 2. put in the data
	new_node->data = new_data;

	// 3. Make next of new node as head
	new_node->next = (*head_ref);

	// 4. move the head to point
	// to the new node
	(*head_ref) = new_node;
}

// This function prints contents of
// linked list starting from head
void printList(Node* node)
{
	while (node != NULL) {
		cout << " " << node->data;
		node = node->next;
	}
	cout << "\n";
}

// Driver code
int main()
{
	// Start with the empty list
	Node* head = NULL;

	// Insert 1 at the beginning.
	insertAtFront(&head, 1);
	insertAtFront(&head, 2);
	insertAtFront(&head, 3);
	insertAtFront(&head, 4);
	insertAtFront(&head, 5);
	insertAtFront(&head, 6);

	cout << "After inserting Nodes at their front: ";
// The nodes will be : 6 5 4 3 2 1
	printList(head);

	return 0;
}
