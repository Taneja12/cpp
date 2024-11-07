#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<vector<string>> solveNQueens(int n)
  {
    vector<vector<string>> solutions;
    vector<string> board(n, string(n, '.'));
    solve(0, n, board, solutions);
    return solutions;
  }

private:
  void solve(int row, int n, vector<string> &board, vector<vector<string>> &solutions)
  {
    if (row == n)
    {
      solutions.push_back(board);
    }
    for (int col = 0; col < n; col++)
    {
      if (isSafe(row, col, board, n))
      {
        board[row][col] = 'Q';
        solve(row + 1, n, board, solutions);
        board[row][col] = '.';
      }
    }
  }

  bool isSafe(int row, int col, vector<string> &board, int n)
  {

    // Upper column
    for (int i = 0; i < row; i++)
    {
      if (board[i][col] == 'Q')
        return false;
    }

    // Upper Left Diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
      if (board[i][j] == 'Q')
        return false;
    }

    // Upper Right Diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
      if (board[i][j] == 'Q')
        return false;
    }

    return true;
  }
};

int main()
{
  Solution s;
  vector<vector<string>> temp = s.solveNQueens(4);
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << temp[i][j] << ", ";
    }
    cout << endl;
  }
  return 0;
}