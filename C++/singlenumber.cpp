/*

LEETCODE ques 136

XOR is bitwise operator which give true if both bit are diff otherwise false
here to find that number which occur only one time while other occur twice
we take XOR of all the number and we will get the value which occur only once

n^n = 0
n^0 = n

*/


#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    int ans = 0;
    for(int num: nums){
      ans ^= num;
    }
    return ans;
  }
};


int main(){
  vector<int> nums = {4,1,2,1,2};
  Solution s;
  cout<<s.singleNumber(nums);
  return 0;
}