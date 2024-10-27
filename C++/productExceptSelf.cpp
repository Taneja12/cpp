#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<int> BFproductExceptSelf(vector<int> nums)
  {
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
      int product = 1;
      for (int j = 0; j < nums.size(); j++)
      {
        if (i != j)
        {
          product *= nums[j];
        }
      }
      temp.push_back(product);
    }
    return temp;
  }
  vector<int> productExceptSelf(vector<int> &nums)
  {
    int n = nums.size();
    vector<int> result(n, 1); // Initialize result array with 1

    // Step 1: Compute the left products
    for (int i = 1; i < n; i++)
    {
      result[i] = result[i - 1] * nums[i - 1];
    }

    // Step 2: Compute the right products and multiply with the result
    int rightProduct = 1;
    for (int i = n - 2; i >= 0; i--)
    {
      rightProduct *= nums[i + 1];
      result[i] *= rightProduct;
    }

    return result;
  }
};

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5};
  Solution s;
  vector<int> temp = s.productExceptSelf(nums);
  for (int val : temp)
  {
    cout << val << " ";
  }
}