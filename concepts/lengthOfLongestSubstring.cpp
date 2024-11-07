#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> temp(128, 0);
        int maxlength = 0;
        int l = 0, r = 0;

        for (r = 0; r < s.length(); r++) {
            temp[s[r]]++;  
            while (temp[s[r]] > 1) {
                temp[s[l]]--;
                l++;
            }
            maxlength = max(maxlength, r - l + 1);
        }
        
        return maxlength;
    }
};


int main()
{
  string s1 = "bbbbb";
  Solution s;
  cout << s.lengthOfLongestSubstring(s1);
  return 0;
}