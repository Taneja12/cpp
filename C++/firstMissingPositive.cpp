#include <bits/stdc++.h>
using namespace std;
//Not complete
class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
      vector<int> temp;
      for(int i=0;i<arr.size();i++){
        if(arr[i]>=0)
            temp.push_back(arr[i]);
      }

      for(int i=0;i<arr.size();i++){
        if(arr[i]<0)
          temp.push_back(arr[i]);
      }
      if((temp[0]-1)<0){
        return temp[0]-1;
      }
      for(int i=0;i<temp.size();i++){
        if(temp[i+1]<0){
          return temp[i]+1;
        }
      }
    }
};

int main(){
  vector<int> nums = {3,1,-1,-1};
  Solution s;
  cout<<s.firstMissingPositive(nums);

}