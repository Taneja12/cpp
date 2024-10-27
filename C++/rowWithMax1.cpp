#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int rowWithMax1s(vector<vector<int>> &arr)
  {
    int n = arr.size();
    if (n == 0)
      return -1;
    int m = arr[0].size();

    vector<int> ones(n, 0);

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (arr[i][j] == 1)
        {
          ones[i]++;
        }
      }
    }

    auto maxIt = max_element(ones.begin(), ones.end());

    if (maxIt != ones.end() && *maxIt > 0)
    {
      return distance(ones.begin(), maxIt);
    }
    return -1;
  }
};

int main()
{
  vector<vector<int>> arr = {{0, 1, 1, 1},
                             {0, 0, 1, 1},
                             {1, 1, 1, 1},
                             {0, 0, 0, 0}};

  Solution ob;
  int ans = ob.rowWithMax1s(arr);
  cout << "Row with maximum 1s: " << ans << "\n";

  return 0;
}
