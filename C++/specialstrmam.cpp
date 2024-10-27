#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
  vector<char> special(string s)
  {
    vector<char> s2;
    vector<int> temp(26, 0);
    for (char val : s)
    {
      temp[val - 'a'] += 1;
    }
    for (int i = 0; i < temp.size(); i++)
    {
      if (temp[i] > 0)
      {
        s2.push_back(i + 'a');
        string freq = to_string(temp[i]);
        for (char f : freq) // Convert frequency to characters
        {
          s2.push_back(f);
        }
      }
    }
    return s2;
  }
};

int main()
{
  string s = "aabbcc";
  Solution s1;
  vector<char> temp = s1.special(s);
  for (char val : temp)
  {
    cout << val;
  }
}
