// C++ program to show inserting a node
// after a given node in given Linked List
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node {
public:
	int data;
	Node* next;
};

// Given a node prev_node, insert a new
// node after the given prev_node
void insertAfter(Node* prev_node, int new_data)
{
	// 1. check if the given prev_node
	// is NULL
	if (prev_node == NULL) {
		cout << "The given previous node cannot be NULL";
		return;
	}

	// 2. allocate new node
	Node* new_node = new Node();

	// 3. put in the data
	new_node->data = new_data;

	// 4. Make next of new node
	// as next of prev_node
	new_node->next = prev_node->next;

	// 5. move the next of prev_node
	// as new_node
	prev_node->next = new_node;
}

// Function to insert element in LL
void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
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

	push(&head, 6);
	push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);

	cout << "Created Linked list is: ";
	printList(head);

	// Insert 1 at the beginning.
	insertAfter(head->next, 1);

	cout << "After inserting 1 after 2: ";
	printList(head);

	return 0;
}

