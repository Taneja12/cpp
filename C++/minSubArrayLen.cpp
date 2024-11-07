#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

class Solution
{
public:
  int minSubArrayLen(int target, vector<int> &nums)
  {
    int n = nums.size();
    int low = 0, high = 0, currentsum = 0;
    int minLength = INT_MAX;

    while (high < n)
    {
      // Add current element to currentsum
      currentsum += nums[high];

      // Check if current window meets or exceeds the target
      while (currentsum >= target)
      {
        minLength = min(minLength, high - low + 1);
        currentsum -= nums[low];
        low++;
      }

      high++;
    }

    return (minLength == INT_MAX) ? 0 : minLength;
  }
};

int main()
{
  vector<int> nums = {2, 3, 1, 2, 4, 3};
  Solution s;
  cout << s.minSubArrayLen(9, nums); // Changed target to 7 for example clarity
  return 0;
}
