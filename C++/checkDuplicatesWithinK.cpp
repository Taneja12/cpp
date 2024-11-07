#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool checkDuplicatesWithinK(vector<int> &arr, int k)
  {
    int n = arr.size();
    unordered_set<int> set1;

    for (int i = 0; i < n; i++)
    {
      if (set1.find(arr[i]) != set1.end())
      {
        return true;
      }

      set1.insert(arr[i]);

      if (i >= k)
      {
        set1.erase(arr[i - k]);
      }
    }
    return false;
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
    string ks;
    getline(cin, ks);
    int k = stoi(ks);
    Solution obj;
    bool res = obj.checkDuplicatesWithinK(arr, k);
    if (res)
      cout << "true" << endl;
    else
      cout << "false" << endl;
    // cout << res << endl;
    cout << "~" << endl;
  }
  return 0;
}