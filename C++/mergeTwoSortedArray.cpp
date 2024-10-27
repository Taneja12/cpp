#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    int p1 = m - 1;
    int p2 = n - 1;
    int p = m + n - 1;

    while (p1 >= 0 && p2 >= 0)
    {
      if (nums1[p1] > nums2[p2])
      {
        nums1[p--] = nums1[p1--];
      }
      else
      {
        nums1[p--] = nums2[p2--];
      }
    }

    // For remaining element of nums2 as if p1 becomes zero then above loop will stop
    while (p2 >= 0)
    {
      nums1[p--] = nums2[p2--];
    }
  }
};

int main()
{
  vector<int> nums1 = {0};
  vector<int> nums2 = {1};
  int n = nums2.size();
  int m = nums1.size() - n;
  Solution s;
  s.merge(nums1, m, nums2, n);
  for (int num : nums1)
  {
    cout << num << " ";
  }
}