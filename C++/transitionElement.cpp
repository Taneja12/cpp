//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int transitionPoint(int arr[], int n)
  {
    // If the first Element if One then No zeroes in the array
    if (arr[0] == 1)
      return 0;

    // If Last element is 0 then No ones in the array
    if (arr[n - 1] == 0)
      return -1;

    // In the middle
    for (int i = 1; i < n; i++)
    {
      if (arr[i] == 1)
      {
        return i;
      }
    }
  }
};

int transitionPoint(int arr[], int n);

int main()
{
  int n;
  cout << "Enter size of Array: ";
  cin >> n;
  int a[n], i;
  cout << "Enter elements of array: ";
  for (i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  Solution ob;
  cout << ob.transitionPoint(a, n) << endl;
  return 0;
}