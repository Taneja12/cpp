#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  // Function to find the maximum occurring character in a string.
  char getMaxOccuringChar(string str)
  {
    // Create a frequency array for only lowercase English letters
    int freq[26] = {0};

    // Iterate through the string and populate the frequency array
    for (char c : str)
    {
      freq[c - 'a']++;
    }

    // Find the maximum frequency character (lexicographically smallest in case of ties)
    int maxFreq = 0;
    char maxChar = 'a';
    for (int i = 0; i < 26; i++)
    {
      if (freq[i] > maxFreq)
      {
        maxFreq = freq[i];
        maxChar = 'a' + i;
      }
    }

    // Return the character with the maximum frequency
    return maxChar;
  }
};

int main()
{
  string str;
  cin >> str;
  Solution obj;
  cout << obj.getMaxOccuringChar(str) << endl;
  return 0;
}
