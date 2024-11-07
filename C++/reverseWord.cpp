#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string reverseWord(string s)
  {
    int n = s.length();
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
      swap(s[left], s[right]);
      left++;
      right--;
    }

    return s;
  }
};

//{ Driver Code Starts.

int main()
{

  string s;
  cin >> s;
  Solution ob;
  cout << ob.reverseWord(s) << endl;
  return 0;
}

// } Driver Code Ends