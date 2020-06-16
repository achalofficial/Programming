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
  while (temp->next != NULL){
    cout << temp->data << "->" ;
    temp = temp->next;
  }
  cout << " NULL";
}

void appendNode ( int data){

  // Make new Node
  Node *new_node = new Node();
  new_node->data = data ;
  new_node->next = NULL ;

  //Finding the last Node
  Node *last = head ;
  while (last->next != NULL){
    last = last->next ;
  }

  last->next = new_node ;

}

int main(int argc, char const *argv[])
{
  
  return 0;
}