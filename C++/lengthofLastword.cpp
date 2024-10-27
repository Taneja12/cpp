#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int lengthOfLastWord(string s)
  {
    vector<string> words;
    stringstream ss(s);
    string word;

    while (getline(ss, word, ' '))
    {
      if (!word.empty())
      {
        words.push_back(word);
      }
    }
    return words[words.size() - 1].length();
  }
};

int main()
{
  string s = "Hello World";
  Solution s1;
  cout<<s1.lengthOfLastWord(s);
  return 0;
}