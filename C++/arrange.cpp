#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void arrange(long long arr[], int n)
  {
    // Step 1: Modify the array to store both new and old values
    for (int i = 0; i < n; i++)
    {
      arr[i] = arr[i] + (arr[arr[i]] % n) * n;
    }

    // Step 2: Update the array with the new values
    for (int i = 0; i < n; i++)
    {
      arr[i] = arr[i] / n;
    }
  }
};

int main()
{
  long long A[] = {4, 0, 2, 1, 3};
  int n = sizeof(A) / sizeof(A[0]);
  Solution ob;
  ob.arrange(A, n);
  for (int i = 0; i < n; i++)
  {
    cout << A[i] << " ";
  }
  cout << endl;

  return 0;
}
