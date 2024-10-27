#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
  void binSort(int Arr[], int N)
  {
    int j = -1;
    for(int i = 0; i<N; i++){
      if(Arr[i]<1){
        j++;
        swap(Arr[i],Arr[j]);
      }
    }
  }
};

int main(){
  int arr[]= {1,1,1,1};
  int N = sizeof(arr)/sizeof(arr[0]);
  Solution s;
  s.binSort(arr,N);
  for(int i=0;i<N;i++){
    cout<<arr[i]<<" ";
  }
}