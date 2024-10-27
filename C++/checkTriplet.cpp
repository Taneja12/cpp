//{ Driver Code Starts
//NOT ACCEPTED BUT RUNNING

#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
  bool checkTriplet(int arr[], int n)
  {
    for (int i = 0; i < n; i++)
    {
      arr[i] = arr[i] * arr[i];
    }
    sort(arr, arr + n);
    for (int i = n - 1; i >= 2; i--)
    {
      int low = 0;
      int high = i - 1;
      while (low <= high)
      {
        if (arr[low] + arr[high] == arr[i])
        {
          return true;
        }
        else if (arr[low] + arr[high] < arr[i])
        {
          low++;
        }
        else
        {
          high--;
        }
      }
    }
    return false;
  }
};

//{ Driver Code Starts.

int main()
{
  int n = 5;
  int arr[] = {3, 2, 4, 6, 5};
  Solution ob;
  auto ans = ob.checkTriplet(arr, n);
  if (ans)
  {
    cout << "Yes\n";
  }
  else
  {
    cout << "No\n";
  }
  return 0;
}

// } Driver Code Ends