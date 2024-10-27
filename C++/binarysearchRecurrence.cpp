#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int BinarySearch(vector<int> arr,int low,int high, int element){
      if(low>high){
        return -1;
      }
      int mid = (low+high)/2;
      if(arr[mid] == element){
        return mid;
      }
      else if(arr[mid]>element){
        return BinarySearch(arr,low,mid-1,element);
      }
      else if(arr[mid]<element){
        return BinarySearch(arr, mid+1, high,element);
      }
    }
};

int main(){
  vector<int> arr = {1,2,3,4,5};
  Solution s;
  cout<<s.BinarySearch(arr,0,arr.size()-1,4);
  return 0; 
}