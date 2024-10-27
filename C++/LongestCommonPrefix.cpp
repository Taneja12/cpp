#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string longestCommonPrefixOptimized(vector<string> &arr)
  {
    if (arr.empty())
      return "-1";

    string prefix = arr[0];

    for (int i = 1; i < arr.size(); i++)
    {
      int j = 0;
      // Compare characters of the current prefix and arr[i]
      while (j < prefix.size() && j < arr[i].size() && prefix[j] == arr[i][j])
      {
        j++; // Increment as long as characters match
      }
      // Update the prefix to the common part found so far
      prefix = prefix.substr(0, j);

      // If at any point the prefix becomes empty, return "-1" (no common prefix)
      if (prefix.empty())
        return "-1";
    }

    return prefix.empty() ? "-1" : prefix;
  }


  string longestCommonPrefix(vector<string> &strs)
  {
    int n = strs.size();
    string temp;
    sort(strs.begin(), strs.end());
    for (int i = 0; i < strs[0].length(); i++)
    {
      if (strs[0][i] == strs[n - 1][i])
      {
        temp += strs[0][i];
      }
      else
      {
        return temp;
      }
    }
    return temp;
  }
  
};

int main()
{
  vector<string> strs = {"car", "car", "car"};
  Solution s;
  cout << s.longestCommonPrefixOptimized(strs);
  return 0;
}