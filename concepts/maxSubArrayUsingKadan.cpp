// LEETCODE 53

#include <iostream>
using namespace std;

int main()
{
  int arr[] = {-3, -4, -5, -4, -1, -7, -8};
  int n = sizeof(arr) / sizeof(arr[0]);

  int MaxSum = INT8_MIN;
  int Current_Sum = 0;
  for (int i = 0; i < n; i++)
  {
    Current_Sum += arr[i];
    MaxSum = max(MaxSum, Current_Sum); // This statement is above because if all numbers are negative then the number which is max should be printed not 0
    if (Current_Sum < 0)
    { // To check if the Current sum become negative by adding that element then reintialize the current sum to 0
      Current_Sum = 0;
    }
  }
  cout << "Max Subarray Sum :" << MaxSum;
}