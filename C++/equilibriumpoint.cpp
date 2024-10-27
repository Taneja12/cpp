#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int equilibriumpoint(vector<long long> arr){
      int currentsum = 0;
      long long totalsum = accumulate(arr.begin(),arr.end(),0LL);
      for(int i=0;i<arr.size();i++){
        totalsum -= arr[i];
        if(totalsum == currentsum){
          return i+1;
        }
        currentsum += arr[i];
      }
      return -1;
    }
};

int main(){
  vector<long long> arr = {1,2,3,4};
  Solution s;
  if(s.equilibriumpoint(arr)==-1){
    cout<<"No equilibrium point found";
  }
  else{
  cout<<"Equilibrium at "<<s.equilibriumpoint(arr)<<" position";
  }
  return 0;

}