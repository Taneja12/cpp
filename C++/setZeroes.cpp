#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
      int m = matrix.size();
      int n = matrix[0].size();
      vector<vector<int>> temp = matrix;
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
          if(matrix[i][j]==0){
            
          }
        }
      }
        
    }
};

int main()
{
    vector<vector<int>> matrix = {{0, 2, 3, 0}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    Solution s;
    s.setZeroes(matrix);
}