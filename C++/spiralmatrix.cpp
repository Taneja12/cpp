#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void spiralMatrix(vector<vector<int>> arr)
  {
    int sr = 0, er = arr.size() - 1, sc = 0, ec = arr[0].size() - 1;
    while (sr <= er && sc <= ec)
    {
      // Traverse right
      for (int i = sc; i <= ec; i++)
      {
        cout << arr[sr][i] << " ";
      }
      sr++;

      // Traverse down
      for (int i = sr; i <= er; i++)
      {
        cout << arr[i][ec] << " ";
      }
      ec--;

      // Traverse left, if remaining
      if (sr <= er)
      {
        for (int i = ec; i >= sc; i--)
        {
          cout << arr[er][i] << " ";
        }
        er--;
      }

      // Traverse up, if remaining
      if (sc <= ec)
      {
        for (int i = er; i >= sr; i--)
        {
          cout << arr[i][sc] << " ";
        }
        sc++;
      }
    }
    cout << endl;
  }
};

int main()
{
  vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
  Solution s;
  s.spiralMatrix(arr);
  return 0;
}
