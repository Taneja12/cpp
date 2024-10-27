/*
Boyer-Moore Voting Algorithm

Step 1: Candidate Selection – Iterate through the array and maintain a count for a potential
majority element. If the count is zero, select the current element as the majority candidate.
Increment the count if the current element is the same as the candidate, otherwise decrement
the count.
Step 2: Majority Verification – Since the problem guarantees that a majority element exists,
 the candidate selected in the first step is the majority element.

Time Complexity : O(n)
Space Complexity: O(1)

*/



#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    int candidate = 0;
    int count =0;
    for(int num: nums){
      if(count==0){
        candidate = num;
      }
      count += (num==candidate) ? 1 : -1;
    }
    return candidate;
  }
};

int main()
{
  vector<int> arr = {2, 2, 1, 1, 1, 1, 2};
  Solution s;
  cout << s.majorityElement(arr);
}