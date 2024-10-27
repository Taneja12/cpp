#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string removeDuplicates(string str)
    {
        vector<int> temp(128, 0);
        string s;
        for (char val : str)
        {
            temp[val] += (temp[val] == 0) ? 1 : 0;
        }
        for (int i = 0; i < str.length(); i++)
        {
            if (temp[str[i]] != 0)
            {
                s += str[i];
                temp[str[i]] = 0;
            }
        }
        return s;
    }
};

int main()
{
    string str;
    cin >> str;
    Solution ob;
    auto ans = ob.removeDuplicates(str);
    cout << ans << "\n";
    return 0;
}