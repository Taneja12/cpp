// Incomplete 36 sheet
#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
  int Maximum_Sum(vector<vector<int>> &mat, int N, int K)
  {
    vector<vector<int>> prefix(N + 1, vector<int>(N + 1, 0));
    for (int i = 1; i <= N; i++)
    {
      for (int j = 1; j <= N; j++)
      {
        prefix[i][j] = mat[i - 1][j - 1] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
      }
    }

    int maxSum = INT_MIN;

    for (int i = K; i <= N; i++)
    {
      for (int j = K; j <= N; j++)
      {
        int currentSum = prefix[i][j] - prefix[i-K][j] - prefix[i][j-K] + prefix[i-K][j-K];
        maxSum = max(maxSum,currentSum);
      }
    }
    return maxSum;
  }
};

int main()
{

  int N;
  cin >> N;
  vector<vector<int>> mat(N, vector<int>(N, 0));

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> mat[i][j];
    }
  }

  int k;
  cin >> k;
  Solution obj;
  cout << obj.Maximum_Sum(mat, N, k) << "\n";

  return 0;
}