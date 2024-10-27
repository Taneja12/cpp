// Both the function are running and passing all the test cases

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubstrDistinctCharsMyMethod(string s)
    {
        vector<int> temp(26, 0);
        int start = 0, Max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            temp[s[i] - 'a'] += 1;
            if (temp[s[i] - 'a'] > 1)
            {
                while (temp[s[i] - 'a'] != 1)
                {
                    temp[s[start] - 'a']--;
                    start++;
                }
            }
            Max = max(Max, i - start + 1);
        }
        return Max;
    }
    int longestSubstrDistinctChars(string s)
    {
        unordered_map<char, int> charCount;
        int start = 0, Max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            charCount[s[i]]++; // Increment the count of the current character

            // If a character repeats, move the start pointer
            while (charCount[s[i]] > 1)
            {
                charCount[s[start]]--; // Decrement the count of the char at 'start'
                start++;               // Move the start of the window forward
            }

            // Update the maximum length
            Max = max(Max, i - start + 1);
        }
        return Max;
    }
};

int main()
{

    string s;
    cin >> s;
    Solution obj;
    cout << obj.longestSubstrDistinctChars(s) << endl;
    return 0;
}
