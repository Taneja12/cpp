#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> firstAndLast(int x, vector<int> &arr)
  {
    vector<int> temp;
    int last_occur = -1;
    for (int i = 0; i < arr.size(); i++)
    {
      if (arr[i] == x)
      {
        if (temp.empty())
          temp.push_back(i); // First occurrence
        last_occur = i;      // Keep updating last occurrence
      }
    }
    if (temp.empty())
    {
      return {-1}; // If x is not found, return -1
    }
    temp.push_back(last_occur);
    return temp;
  }
};


int main()
{

  int x;
  cin >> x;
  cin.ignore();

  vector<int> arr;
  string input;
  getline(cin, input); // Read the entire line for the array elements
  stringstream ss(input);
  int number;
  while (ss >> number)
  {
    arr.push_back(number);
  }

  Solution obj;
  vector<int> ans = obj.firstAndLast(x, arr);
  for (int i : ans)
  {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}

// } Driver Code Ends