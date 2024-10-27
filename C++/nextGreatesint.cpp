#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<int> nextGreatest(vector<int> &arr)
  {
    int n = arr.size();
    if (n == 0)
      return arr;

    int max_from_right = arr[n - 1];
    arr[n - 1] = -1;

    for (int i = n - 2; i >= 0; --i)
    {
      int temp = arr[i];
      arr[i] = max_from_right;
      max_from_right = max(max_from_right, temp);
    }
    return arr;
  }
};

int main()
{
  vector<int> arr;
  cout << "Enter elements of array: ";
  string input;
  getline(cin, input);
  stringstream ss(input);
  int number;
  while (ss >> number)
  {
    arr.push_back(number);
  }
  Solution s;
  vector<int> result = s.nextGreatest(arr);
  for (int i = 0; i < result.size(); i++)
  {
    cout << result[i] << " ";
    }

    

}