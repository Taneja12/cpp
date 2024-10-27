//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  long long countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
  {
    if (k <= 1)
      return 0;
    long long CurrentProduct = 1;
    long long count = 0;
    int start = 0;

    for (int end = 0; end < n; end++)
    {
      CurrentProduct *= a[end];

      while (CurrentProduct >= k && start <= end)
      {
        CurrentProduct /= a[start];
        start++;
      }

      count += (end - start + 1);
    }
    return count;
  }
};

int main()
{

  int n = 3;
  long long int k = 1;
  vector<int> arr = {1, 1, 1};
  Solution obj;
  cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;

  return 0;
}
// } Driver Code Ends