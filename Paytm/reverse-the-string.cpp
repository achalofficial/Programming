// abc.def -> def.abc

#include<iostream>
#include<vector>
#include<stack>
#include<string>

using namespace std ;

int main(int argc, char const *argv[])
{
  string str = "This is a pen.";
  vector<char> word ;
  stack < vector<char> > wordstack ;
  int i = 0 ;
  while(i <= str.size()-1){
    if (str.at(i) != '.'){
        word.push_back(str.at(i)) ;
    }
    
    if (str.at(i) == ' ' || str.at(i) == '.'){
      wordstack.push(word);
      word.clear();
    }
    i++;
  }

  string str_rev ;
  while (!wordstack.empty()){
    vector<char> demo = wordstack.top();
    for (auto i = demo.begin(); i != demo.end(); ++i) {
        str_rev += *i ;
    }
    str_rev += ' ';
    wordstack.pop();
  }
  cout << str_rev ;
  return 0;
}
