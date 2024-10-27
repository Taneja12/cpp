#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
  long long countTriplets(int n, long long sum, long long arr[])
  {
    long long count = 0;
    sort(arr, arr + n);
    for (int i = 0; i < n - 2; i++)
    {
      int low = i + 1, high = n - 1;
      while (low < high)
      {
        if (arr[i] + arr[low] + arr[high] < sum)
        {
          count += (high-low);
          low++;
        }
        else
        {
          high--;
        }
      }
    }
    return count;
  }
};

int main()
{

  int n = 4;
  long long sum = 2;
  long long arr[n] = {1, 3, -2, 0};

  Solution ob;
  cout << ob.countTriplets(n, sum, arr);

  cout << "\n";

  return 0;
}
