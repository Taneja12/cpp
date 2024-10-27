#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> generateCode(int N)
    {
        vector<string> temp;
        temp.push_back("0");
        temp.push_back("1");
        for (int i = 2; i <= N; i++)
        {
            int currentSize = temp.size();
            for (int j = currentSize-1; j >= 0; j--)
            {
                temp.push_back("1" + temp[j]);
            }
            for (int j = 0; j < currentSize; j++)
            {
                temp[j] = "0" + temp[j];
            }
        }
        return temp;
    }
};

int main()
{
    int n;
    cin >> n;
    Solution obj;
    vector<string> res = obj.generateCode(n);
    for (string i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}
