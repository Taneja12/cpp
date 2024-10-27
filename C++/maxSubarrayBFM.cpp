#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int arr[] = {3, -4, 5, 4, -1, 7, -8};
  int n = sizeof(arr) / sizeof(arr[0]);

  // printing all subarray
  // All Subarray starting from one position and go to end
  for (int strt = 0; strt < n; strt++)
  {
    for (int end = strt; end < n; end++)
    {
      for (int k = strt; k <= end; k++)
      {
        cout << "(" << arr[k] << ")";
      }
      cout << "\t";
    }
    cout << endl;
  }

  // FIDNING MAX_SUBARRAY sum USING BRUTE FORCE METHOD
  int MaxSum = INT8_MIN;
  for (int strt = 0; strt < n; strt++)
  {
    int CurrentSum = 0;
    for (int end = strt; end < n; end++)
    { 
      CurrentSum += arr[end];
      MaxSum = max(MaxSum,CurrentSum);
    }
  }
  cout<<"Max SubArray Sum: "<<MaxSum;

  //BUT this approach is O(n^3)



}