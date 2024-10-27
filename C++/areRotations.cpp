#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool areRotations(string s1, string s2)
  {
    if (s1.length() != s2.length())
    {
      return false;
    }
    
    // Concatenate s1 with itself
    string temp = s1 + s1;
    
    // Check if s2 is a substring of the concatenated string
    return (temp.find(s2) != string::npos);
  }
};

int main()
{
  string s1;
  string s2;
  cin >> s1 >> s2;
  Solution obj;
  cout << (obj.areRotations(s1, s2) ? "Yes" : "No") << endl;
  return 0;
}
