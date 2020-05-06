// Bubble Sort ( TC = n^2 )
// Dutch National Flag Algorithm

#include<iostream>
#include<array>

using namespace std ;

void swap (int &x , int &y ){
    int t = x;
    x = y;
    y = t;
}

void dutchNationFlagAlgo( array<int,8> &arr , int size){
  int low, high,mid;
  low = mid = 0 ;
  high = size-1;

  while (mid <= high ){
    switch(arr[mid]) {
        case 0 :
                  swap(arr[low], arr[mid]);
                  low++ ; mid++;
                  break;
        case 1 :
                  mid++;
                  break;
        case 2 :
                  swap(arr[mid], arr[high]);
                  high--;
                  break;
    }
  }
}

int main(int argc, char const *argv[])
{
  array<int, 8> arr = {0,1,2,0,1,2,0,0} ;

  dutchNationFlagAlgo(arr,arr.size());

  for (int i = 0 ; i < arr.size();++i){
    cout << arr.at(i);
  }
  return 0;
}


