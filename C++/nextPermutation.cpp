#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void nextPermutation(vector<int> &nums)
  {
    int n = nums.size(), index = -1;
    
    // Step 1: Find the first decreasing element from the end
    for (int i = n - 2; i >= 0; i--)
    {
      if (nums[i] < nums[i + 1])
      {
        index = i;
        break;
      }
    }
    
    // Step 2: If no such element is found, reverse the entire array
    if (index == -1)
    {
      reverse(nums.begin(), nums.end());
      return;
    }
    
    // Step 3: Find the element just larger than nums[index]
    for (int i = n - 1; i > index; i--)
    {
      if (nums[i] > nums[index])
      {
        swap(nums[i], nums[index]);
        break;
      }
    }
    
    // Step 4: Reverse the elements after index
    reverse(nums.begin() + index + 1, nums.end());
  }
};

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5};
  Solution s;
  s.nextPermutation(nums);
  for (int num : nums)
  {
    cout << num << " ";
  }
  return 0;
}
