//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
  int numOfSubset(vector<int> &arr)
  {
    if (arr.empty())
      return 0;
    sort(arr.begin(), arr.end());
    int count = 1;
    for (int i = 1; i < arr.size(); i++)
    {
      if (arr[i] != arr[i - 1] + 1)
      {
        count++;
      }
    }
    return count;
  }
};

int main()
{
  vector<int> nums = {10, 100, 105};
  Solution ob;
  cout << ob.numOfSubset(nums) << endl; // Corrected the function name and argument
  return 0;
}

// } Driver Code Ends