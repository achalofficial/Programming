#include<iostream>
#include<vector>

using namespace std ;

void subarrayWithSum(vector<int> arr , int sum){
    int currSum = 0 ;
    for (int i = 0 ; i < arr.size() ; ++i){
      currSum = arr[i];
      for ( int j  = i + 1 ; j < arr.size() ; ++j  ){
        if(currSum == sum ){
          cout << '[' << i << ',' << j-1 << ']';
          break ; 
        }
        else if ( currSum > sum){
          currSum = 0 ;
          break ;
        }
        currSum += arr[j];
      }
    }
}

int main(int argc, char const *argv[])
{
  vector<int> arr ;
  int sum = 33 ;

  arr.push_back(1);
  arr.push_back(4);
  arr.push_back(20);
  arr.push_back(3);
  arr.push_back(10);
  arr.push_back(5);
  //arr.push_back(7);


  subarrayWithSum( arr , sum);

  return 0;
}
