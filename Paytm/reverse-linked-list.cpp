#include<iostream>
#include<list>

using namespace std ;

void showlist(list <int> linkedList) 
{ 
    list <int> :: iterator it; 
    cout << "head" ;
    for(it = linkedList.begin(); it != linkedList.end(); ++it) 
        cout << " -> " << *it; 
    cout << " -> end\n"; 
} 

void reverseList(list <int> linkedList){
    auto current = linkedList.front();
    auto temp = NULL ;
    auto previous = NULL ;

    cout << current ;


}

int main(int argc, char const *argv[])
{
  list<int> linkedList ;

  for(int i = 0 ; i < 5 ; ++i){
    linkedList.push_back(rand()%100);
  }
  cout << "\nOriginal Linked List \n\n" ;
  showlist(linkedList);
  reverseList (linkedList);
  cout << "\nNew Linked list\n\n" ;
  showlist(linkedList);
  cout << endl ;

  return 0;
}
