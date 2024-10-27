#include <bits/stdc++.h>
using namespace std;


long long maxArea(long long A[], int len)
{
  int i = 0;
  int j = len-1;
  long long max_area = 0;

  while (i < j)
  {
    long long h = min(A[i], A[j]);
    long long width = j - i;
    long long current_area = h * width;
    max_area = max(max_area, current_area);

    if (A[i] < A[j])
    {
      i++;
    }
    else
    {
      j--;
    }
  }
  return max_area;
}

//{ Driver Code Starts.

// Driver code
int main()
{

  int n;
  cin >> n;
  long long arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << maxArea(arr, n) << endl;

  return 0;
}

// } Driver Code Ends