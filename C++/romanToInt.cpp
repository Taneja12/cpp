#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int sum = 0;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            // Check if the next character represents a larger value (subtractive case)
            if (i + 1 < n && roman[s[i]] < roman[s[i + 1]])
            {
                sum -= roman[s[i]];  // Subtract if it's a subtractive pair
            }
            else
            {
                sum += roman[s[i]];  // Add the value otherwise
            }
        }
        return sum;
    }
};

int main()
{
    string s1 = "MIX";
    Solution s;
    cout << s.romanToInt(s1) << endl;  // Expected output: 1009 (M=1000, IX=9)
    return 0;
}