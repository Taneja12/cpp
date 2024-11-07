#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int singleNonDuplicate(vector<int> &nums)
  {
    int low = 0;
    int high = nums.size() - 1;

    while (low < high)
    {
      int mid = low + (high - low) / 2;

      // Ensure mid is even for checking pairs correctly
      if (mid % 2 == 1)
        mid--;

      // Check if the pair is broken at mid
      if (nums[mid] == nums[mid + 1])
        low = mid + 2;
      else
        high = mid;
    }

    return nums[low];
  }
};

int main()
{
  vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 8, 8};
  Solution s;
  cout << s.singleNonDuplicate(nums);
  return 0;
}
