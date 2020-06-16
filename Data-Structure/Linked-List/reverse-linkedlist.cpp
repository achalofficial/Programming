#include <iostream>

using namespace std ;

class Node {
  public :
    int data ;
    Node *next ;
} ;

Node *head = NULL ;

void displayNode (){
  Node *temp = head ;
  while (temp != NULL){
    cout << temp->data << "->" ;
    temp = temp->next;
  }
  cout << "NULL";
}

void appendNode ( int data){

  // Make new Node
  Node *new_node = new Node();
  new_node->data = data ;
  new_node->next = NULL ;

  // If the first Node
  if (head == NULL){
    head = new_node ;
    return ;
  }

  //Finding the last Node
  Node *last = head ;
  while (last->next != NULL){
    last = last->next ;
  }
  last->next = new_node ;
}

void reverseNode () {
  Node *next, *prev, *curr ;
  curr = head ;
  next = NULL ;
  prev = NULL ;

  while ( curr != NULL){
    next = curr->next ;
    curr->next = prev ;
    prev = curr ;
    curr = next ;
  }

  head = prev ;

}
int main(int argc, char const *argv[])
{ 
  appendNode(1);
  appendNode(2);
  appendNode(3);
  appendNode(4);
  appendNode(5);
  cout << "Original List :\n";
  displayNode();
  cout << "\nReversed List :\n";
  reverseNode();
  displayNode();
  return 0;
}