#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(int row, int n, vector<int> &board, vector<vector<int>> &solutions)
    {
        if (row == n)
        {
            solutions.push_back(board);
            return;
        }
        for (int col = 0; col < n; col++)
        {
            if (isSafe(row, col, board, n))
            {
                board[row] = col + 1;
                solve(row + 1, n, board, solutions);
                board[row] = 0;
            }
        }
    }

    bool isSafe(int row, int col, vector<int> &board, int n)
    {
        // For Upper Column
        if (row == 0)
        {
            return true;
        }
        else
        {
            for(int i=0;i<row;i++){
                if(board[i]==col+1){
                    return false;
                }
                else if(board[i]==col+1+(row-i)){
                    return false;
                }
                else if(board[i]==col+1- (row-i)){
                    return false;
                }
            }

    
            return true;
        }
    }

public:
    vector<vector<int>> nQueen(int n)
    {
        vector<vector<int>> solutions;
        vector<int> board(n, 0);
        solve(0, n, board, solutions);
        return solutions;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution ob;
    vector<vector<int>> ans = ob.nQueen(n);
    if (ans.size() == 0)
        cout << -1 << "\n";
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << "[";
            for (int u : ans[i])
                cout << u << " ";
            cout << "] ";
        }
        cout << endl;
    }

    return 0;
}