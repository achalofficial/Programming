#include <iostream>
 
using namespace std; 

/* Link list node */
class Node 
{ 
	public: 
	int data; 
	Node* next; 
} *head = NULL ; 

/* Function to print linked list */
void printList() 
{  
   Node *node ;
   node = head ;
	while (node != NULL) 
	{ 
		cout<<node->data<<" "; 
		node = node->next; 
	} 
} 

/* Reverses the linked list in groups 
of size k and returns the pointer 
to the new head node. */
Node *reverse (Node *head) 
{ 
	Node *next, *prev ;
  next = head ;
  prev = NULL ;

  while (head->next != NULL){
    head->next = prev;
    prev = head ;
    head = next ;
  }

  return prev ;
} 

void reverseNode() 
    { 
        // Initialize current, previous and 
        // next pointers 
        Node* current = head; 
        Node *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            // Store next 
            next = current->next; 
  
            // Reverse current node's pointer 
            current->next = prev; 
  
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
        } 
        head = prev;
		
		cout << " \n In Reversece function : " ; 
        printList();
    } 

/* UTILITY FUNCTIONS */
/* Function to push a node */
void push( int new_data) 
//void push(Node** head_ref, int new_data) 
{ 
	/* allocate node */
	Node* new_node = new Node(); 

	/* put in the data */
	new_node->data = new_data; 

	/* link the old list off the new node */
	new_node->next = head;	 

	/* move the head to point to the new node */
	head = new_node; 
} 



/* Driver code*/
int main() 
{ 
	/* Start with the empty list */
//	Node* head = NULL; 

	/* Created Linked list is 1->2->3->4->5->6->7->8->9 */
//	push(&head, 9); 
//	push(&head, 8); 
//	push(&head, 7); 
//	push(&head, 6); 
//	push(&head, 5); 
//	push(&head, 4); 
//	push(&head, 3); 
//	push(&head, 2); 
//	push(&head, 1);	 
	push(9); 
	push(8); 
	push(7); 
	push( 6); 
	push(5); 
	push( 4); 
	push(3); 
	push( 2); 
	push(1);	

	cout<<"Given linked list \n"; 
	printList(); 
	//head = reverse(head); 
    reverseNode();

	cout<<"\nReversed Linked list \n"; 
	printList(); 

	return(0); 
} 
