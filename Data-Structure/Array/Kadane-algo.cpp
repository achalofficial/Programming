#include <iostream>
#include <array>

using namespace std ;

int max_sum ( array<int,5> &arr ) {
  
  int max_sum , currSum , i ;

  max_sum = currSum = arr.at(0) ;
  for ( i = 1 ; i < arr.size() ; ++i){

    currSum += arr[i];

    if ( max_sum < currSum) 
      max_sum = currSum ;
  } 

  return max_sum ;
}

int main(int argc, char const *argv[])
{
  array<int,5> arr = { 1,2,3,-2,5};
  cout << max_sum(arr);

  return 0;
}
