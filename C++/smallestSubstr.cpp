// TLE(Time Limit Exceed) when used unordered_map but this work fine gfg sheet 66 

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int smallestSubstring(string S)
    {
        int n = S.length();
        int count0 = 0, count1 = 0, count2 = 0; // Variables to track counts of '0', '1', and '2'
        int left = 0;                           // Left pointer for the sliding window
        int minLength = INT_MAX;                // Initialize minimum length as maximum possible

        // Traverse the string with the 'right' pointer
        for (int right = 0; right < n; right++)
        {
            // Increment count based on the current character
            if (S[right] == '0')
                count0++;
            else if (S[right] == '1')
                count1++;
            else if (S[right] == '2')
                count2++;

            // Check if the current window contains all three characters
            while (count0 > 0 && count1 > 0 && count2 > 0)
            {
                // Update the minimum length if the current window is valid
                minLength = min(minLength, right - left + 1);

                // Shrink the window from the left
                if (S[left] == '0')
                    count0--;
                else if (S[left] == '1')
                    count1--;
                else if (S[left] == '2')
                    count2--;

                left++; // Move the left pointer to the right
            }
        }

        // If no valid window was found, return -1
        return minLength == INT_MAX ? -1 : minLength;
    }
};

int main()
{
    string S;
    cin >> S;
    Solution ob;
    cout << ob.smallestSubstring(S);
    cout << endl;
}