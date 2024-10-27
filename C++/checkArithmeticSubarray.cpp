//  COMPLETE
//  41 sheet

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
  {
    vector<bool> result;
    int n = l.size();
    for (int i = 0; i < n; i++)
    {
      vector<int> subarray(nums.begin() + l[i], nums.begin() + r[i] + 1);
      sort(subarray.begin(), subarray.end());
      bool isArithmetic = true;
      int diff = subarray[1] - subarray[0]; 

      for (int j = 2; j < subarray.size(); j++)
      {
        if (subarray[j] - subarray[j - 1] != diff)
        {
          isArithmetic = false;
          break;
        }
      }

      result.push_back(isArithmetic);
    }

    return result;
  }
};

int main()
{
  vector<int> arr = {4,6,5,9,3,7};
  vector<int> l = {0,0,2};
  vector<int> r = {2,3,5};
  Solution s;
  vector<bool> result = s.checkArithmeticSubarrays(arr,l,r);
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
  }
  return 0;
}