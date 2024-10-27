//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}
class Solution
{

public:
  bool check_elements(int arr[], int n, int A, int B)
  {
    int k = B - A + 1;
    if (k > n)
    {
      return false;
    }
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = 0; j < n - i - 1; j++)
      {
        if (arr[j] > arr[j + 1])
        {
          swap(&arr[j], &arr[j + 1]);
        }
      }
    }
    for (int i = 0; i < n; i++)
    {
      cout << arr[i] << " ";
    }
  }
};

//{ Driver Code Starts.

int main()
{
  int n, A, B;
  cin >> n >> A >> B;
  int a[n];
  for (int i = 0; i < n; ++i)
    cin >> a[i];

  Solution ob;
  if (ob.check_elements(a, n, A, B))
    cout << "Yes";
  else
    cout << "No";

  cout << "\n";
  return 0;
}