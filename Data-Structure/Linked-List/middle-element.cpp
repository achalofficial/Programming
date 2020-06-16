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
void appendNode ( int data ){
  
  // Make new Node 
  Node *new_node = new Node();
  new_node->data = data ;
  new_node->next = NULL ;

  // If the new node is the first node
  if ( head == NULL ){
    head = new_node;
    return ; 
  }

  // Find the last node 
  Node *last = head ;
  
  while ( last->next != NULL){
    last = last->next;
  }

  // last node-> new node->next se replace krna h 
  last->next = new_node ;
}
// find Size 
int sizeNode (){
  Node *temp = head ;
  int count = 0 ;

  while (temp->next != NULL){
    count++;
    temp = temp->next ;
  }
  return count ;
}
// find middle Element
int middleNode ( int size ){
    Node *temp = head ;
    int count = 0 ;
    while ( count < (size/2)){
      temp = temp->next;
      count++;
    }
    return temp->data ;
}

int main(int argc, char const *argv[])
{
  appendNode(1);
  appendNode(2);
  appendNode(3);
  appendNode(4);
  appendNode(5);
  //displayNode();
  int size = sizeNode();
  cout << middleNode(size);
  return 0;
}
