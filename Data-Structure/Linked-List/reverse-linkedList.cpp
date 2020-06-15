#include <iostream>

using namespace std ;

class Node {
  public :
    int data ;
    Node *next ;
} ;

Node *head = NULL ;

void appendNode (int data){
  // Made  a New Node
  Node *new_node = new Node();
  new_node->data = data ;
  new_node->next = NULL ;

 if (head->next == NULL){
    head = new_node ;
    return ;
  }

  // find the last Node
  Node *last = head ;
  while (last->next != NULL)
  {
    last = last->next ;
  }

  last->next = new_node ;
}

void display() {
  Node *temp = head ;
  while (temp->next != NULL){
    cout << temp->data << "->";
    temp = temp->next ;
  }
}

int main(int argc, char const *argv[])
{ 
  appendNode(1);
  appendNode(2);
  appendNode(3);
  appendNode(4);
  display();
  return 0;
}
