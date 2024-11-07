#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> removeDuplicate(vector<int> &arr)
  {
    int n = arr.size();
    vector<int> temp;
    unordered_set<int> seen;
    for (int i = 0; i < n; i++)
    {
      if (seen.find(arr[i]) == seen.end())
      {
        temp.push_back(arr[i]);
        seen.insert(arr[i]);
      }
    }
    return temp;
  }
};

int main()
{
  string ts;
  getline(cin, ts);
  int t = stoi(ts);
  while (t--)
  {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number)
    {
      arr.push_back(number);
    }
    Solution obj;
    vector<int> ans = obj.removeDuplicate(arr);
    for (int i = 0; i < ans.size(); i++)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
    cout << "~" << endl;
  }
  return 0;
}
