// 1941 LEETCODE

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
  bool areOccurrencesEqual(string s)
  {
    vector<int> temp(26, 0);

    // Count frequency of each character
    for (char val : s)
    {
      temp[val - 'a'] += 1;
    }

    // Find the first non-zero count
    int count = 0;
    for (int val : temp)
    {
      if (val != 0)
      {
        count = val;
        break;
      }
    }

    // Compare all non-zero counts with the first count
    for (int val : temp)
    {
      if (val != 0 && val != count)
      {
        return false;
      }
    }

    return true;
  }
};

int main()
{
  Solution s;
  string s1 = "ababcc";
  cout << (s.areOccurrencesEqual(s1) ? "true" : "false");
  return 0;
}
