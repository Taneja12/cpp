#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//       int i;
//         for(i=0;i<nums.size();i++){
//           if(nums[i]>target || nums[i]==target){
//             return i;
//           }
//         }
//         return i;
//     }
// };


//OPTIMAL CODE

class Solution{
  public:
    int searchInsert(vector<int> &nums, int target){
      int l = 0;
      int h = nums.size()-1;
      int m = 0;
      while(l<=h){
        m = (l+h)/2;
        if(nums[m]==target){
          return m;
        }
        if(nums[m]>target){
          h = m-1;
        }
        if(nums[m]<target){
          l = m+1;
        }
      }
      return nums[m]>target ? m:m+1;
    }
};


int main(){
  vector<int> nums = {1,3,5,6};
  Solution s;
  cout<<s.searchInsert(nums,7);
  return 0; 
}