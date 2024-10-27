#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void print(vector<vector<int>> arr)
  {
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
      if (i % 2 == 0)
      {
        for (int j = 0; j < n; j++)
        {
          cout << arr[i][j] << " ";
        }
        cout << endl;
      }
      else
      {
        for (int j = n - 1; j >= 0; j--)
        {
          cout << arr[i][j] << " ";
        }
        cout << endl;
      }
    }
    return;
  }
};

int main()
{
  int n = 4;
  vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  Solution s;
  s.print(arr);
  return 0;
}