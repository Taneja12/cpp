#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int peakElement(int arr[], int n)
  {
    // if there is only one element present in the array
    if (n == 1)
      return 0;

    // If peak element is the first element
    if (arr[0] >= arr[1])
      return 0;

    // If Peak element is present at the last
    if (arr[n - 1] >= arr[n - 2])
      return n - 1;

    // If peak element is in the middle
    for (int i = 0; i < n - 1; i++)
    {
      if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
      {
        return i;
      }
    }
    return -1;
  }
};

int main()
{
  int arr[] = {1,1,1,2,1,1,1};
  int n = sizeof(arr)/sizeof(arr[0]);
  Solution s;
  cout<<s.peakElement(arr,n);
  return 0;
}