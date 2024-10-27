// Incomplete 36 sheet
#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
  int Maximum_Sum(vector<vector<int>> &mat, int N, int K)
  {
    int row = 0,col = 0,max=0,sum=0;
    for(int i=row;i<K;i++){
      for(int j=row;j<K;j++){
        sum += mat[i][j];
      }
    }
    row += K;
    
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