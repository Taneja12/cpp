//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int matSearch(vector<vector<int>> &mat, int N, int M, int X)
  {
    int i = 0, j = M - 1; // Start from the top-right corner

    while (i < N && j >= 0)
    {
      if (mat[i][j] == X)
      {
        return 1; // Element found
      }
      else if (mat[i][j] > X)
      {
        j--; // Move left
      }
      else
      {
        i++; // Move down
      }
    }

    return 0; // Element not found
  }
};

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> arr(n, vector<int>(m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> arr[i][j];

  int x;
  cin >> x;
  Solution ob;
  cout << ob.matSearch(arr, n, m, x) << endl;
}