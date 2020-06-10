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

int main(int argc, char const *argv[])
{
  //cout << head->data << '\n';
  pushBack(1);
  pushBack(2);
  pushBack(3);
  cout << head->data << '\n';
  display();
  return 0;
}
