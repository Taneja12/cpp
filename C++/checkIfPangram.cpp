// 242 Leetcode
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  bool checkIfPangram(string s)
  {
    if (s.length() < 26)
    {
      return false;
    }
    vector<int> temp(26, 0);
    for (char val : s)
    {
      temp[val - 'a'] += 1;
    }
    for (int val : temp)
    {
      if (val == 0)
      {
        return false;
      }
    }
    return true;
  }
};

int main()
{
  string s1 = "thequickbrownfoxjumpsoverthelazydog";
  Solution s;
  cout << s.checkIfPangram(s1);
  return 0;
}