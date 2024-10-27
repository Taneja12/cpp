#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
   void printPerm(string s1, string perm, int idx)
  {
    if (s1.length() == 0)
    {
      cout << perm << " ";
      return;
    }
    for (int i = 0; i < s1.length(); i++)
    {
      char currChar = s1[i];
      string newStr = s1.substr(0, i) + s1.substr(i + 1);
      printPerm(newStr, perm + currChar, idx + 1);
    }
  }
};

int main()
{
  Solution s;
  s.printPerm("ABC", "", 0);
}
