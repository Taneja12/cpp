#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string reverseWords(string s)
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

    reverse(words.begin(), words.end());

    string result;
    for (int i = 0; i < words.size(); ++i)
    {
      if (i > 0)
      {
        result += ' ';
      }
      result += words[i];
    }

    return result;
  }
};

int main()
{
  string s1 = "I am  Deepanshu taneja";
  Solution s;
  string str2 = s.reverseWords(s1);
  for(int i=0;i<str2.length();i++){
    cout<<str2[i];
  }
  return 0;
}