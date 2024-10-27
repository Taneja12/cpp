#include <bits/stdc++.h>
using namespace std;
const int CHARS = 26;

int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
  string str1, str2;
  cin >> str1 >> str2;
  cout << remAnagram(str1, str2);
  cout << endl;
  return 0;
}

int remAnagram(string str1, string str2)
{
  int count = 0;
    vector<int> temp(26, 0);
    for (char val : str1)
    {
      temp[val - 'a'] += 1;
    }
    for (char val : str2)
    {
      temp[val - 'a'] -= 1;
    }

    for (int val : temp)
    {
      count += abs(val);
    }
    return count;
}