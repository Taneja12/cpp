#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    void moveZeroes(vector<int> &nums){
    int i=0;
    for(int j=0;j<nums.size();j++){
      if(nums[j] != 0){
        nums[i++] = nums[j];
      }
    }
    for(;i<nums.size();i++){
      nums[i] = 0;
    }
  }
};

int main(){
  vector<int> nums = {1,2,0,3,2,0,2,1};
  Solution s;
  s.moveZeroes(nums);
  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
  }
}