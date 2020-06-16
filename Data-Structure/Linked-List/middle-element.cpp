#include <iostream>

using namespace std ;

class Node {
  public:
    int data ;
    Node *next ;
} ;

Node *head = NULL ;

// Display
void displayNode() {
  Node *temp = head;
  while ( temp->next != NULL){
    cout << temp->data << "->" ;
    temp = temp->next;
  }
  cout << "NULL";
}

// append
void appendNode ( int data){

  // make new node 
  Node *new_node = new Node();
  new_node->data = data ;
  new_node->next = NULL ;

  // For the initial element
  if ( head == NULL){
    *head = *new_node ;
    return ;
  }

  // finding the last Node
  Node *last_node = head ;
  while ( last_node->next != NULL){
    last_node = last_node->next ;
  } 

  last_node = new_node ;
}
// find Size 
// find middle Element

int main(int argc, char const *argv[])
{
  appendNode(1);
  displayNode();
  appendNode(2);
  appendNode(3);
  appendNode(4);
  appendNode(5);
  displayNode();

  return 0;
}
