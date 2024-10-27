// META Strings - Meta strings are the strings which can be made equal
// by exactly one swap in any of the strings. Equal string are not considered
// here as Meta strings.

#include <bits/stdc++.h>
using namespace std;
bool metaStrings(string s1, string s2);
int main()
{
  string s1;
  cin >> s1;
  string s2;
  cin >> s2;
  cout << metaStrings(s1, s2) << endl;
}

bool metaStrings(string S1, string S2)
{
  if (S1.length() != S2.length())
  {
    return false;
  }

  int first = -1, second = -1;

  for (int i = 0; i < S1.length(); i++)
  {
    if (S1[i] != S2[i])
    {
      if (first == -1)
      {
        first = i;
      }
      else if (second == -1)
      {
        second = i;
      }
      else
      {
        return false;
      }
    }
  }

  if (second == -1)
  {
    return false;
  }

  return (S1[first] == S2[second] && S1[second] == S2[first]);
}