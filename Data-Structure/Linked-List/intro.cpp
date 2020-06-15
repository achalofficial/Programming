#include<iostream>

using namespace std ;

class Node {
  public:
    int data ;
    Node *next ;
};

Node *head = NULL ;

void push_front ( int data){
  Node *new_node = new Node() ;
  new_node->data = data ;
  new_node->next = head ;
  head = new_node ;
}

void pushBack ( int data ){
  
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

void display() { 
   Node *ptr;
   ptr = head;
   while (ptr != NULL) { 
      cout << ptr->data << '|' << &ptr->next <<"| -> "; 
      ptr = ptr->next; 
   } 
   cout << "NULL\n";
} 

void deleteNode ( int key ) {
    Node *temp = head , *prev ;
    
    // if the Head holds the key 
    if ( head != NULL && head->data == key ) {
      head = temp->next ;
      free(temp) ;
      return ;
    }

    // Search for prev node of key
    while ( temp != NULL && temp->data != key){
      prev = temp ;
      temp = temp->next ;
    }

    // IF key is not present 
    if (temp->next == NULL ) return ;

    // IF we found the key
    prev->next = temp->next;

    free(temp);
}

void deleteNode_pos( int pos ){  
  Node *temp = head ;

  if (head->next == NULL) {
    cout << "Empty List" ;
    return;
  }

  if ( pos == 1 ){
    head = temp->next;
    return ;
  }

  
}

int main(int argc, char const *argv[])
{
  
  pushBack(1);
  pushBack(2);
  pushBack(3);
  pushBack(4);
  display();
  deleteNode(2);
  display();
  return 0;
}
