#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target)
  {
    for (int i = 0; i < matrix.size(); i++)
    {
      for (int j = 0; j < matrix[0].size(); j++)
      {
        if (matrix[i][j] == target)
        {
          return true;
        }
      }
    }
    return false;
  }
};

int main()
{
  vector<vector <int>> matrix = {{ 1, 3, 5, 7 }, { 10, 11, 16, 20 }, { 23, 30, 34, 60 }};
  Solution s;
  cout<<s.searchMatrix(matrix,3);

}