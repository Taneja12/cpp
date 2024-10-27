//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int findFloor(vector<long long> &v, long long n, long long x)
  {
    int left = 0, right = n - 1;
    int min_indx = -1;

    while (left <= right)
    {
      int mid = left + (right - left) / 2;

      if (v[mid] <= x)
      {
        min_indx = mid; // update min_indx and continue searching in the right half
        left = mid + 1;
      }
      else
      {
        right = mid - 1; // search in the left half
      }
    }

    return min_indx;
  }
};

int main()
{
  long long n;
  cin >> n;
  long long x;
  cin >> x;

  vector<long long> v;

  for (long long i = 0; i < n; i++)
  {
    long long temp;
    cin >> temp;
    v.push_back(temp);
  }
  Solution obj;
  cout << obj.findFloor(v, n, x) << endl;

  return 0;
}