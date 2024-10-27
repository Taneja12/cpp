#include <iostream>
using namespace std;
class Solution{   
public:
    int findMissing(int arr[], int n) {
        int x = (arr[n-1]-arr[0])/n;
        for(int i=0;i<n;++i){
            if(arr[i+1]-arr[i]!=x){
                arr[i] = arr[i]+x;
                return arr[i];
            }
        }
    }
};

int main(){
  Solution s;
  int arr[] = {1,2,4,5,6,7};
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<s.findMissing(arr,n);
  return 0;
}