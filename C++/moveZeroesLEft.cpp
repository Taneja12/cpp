#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        int pos = n-1;
        for(int i =n-1;i>=0;i--){
            if(nums[i]!=0){
                nums[pos] = nums[i];
                pos--;
            }
        }
        for(int i=0;i<pos+1;i++){
            nums[i]=0;
        }
    }
};

int main()
{
    vector<int> nums = {1, 2, 3, 0, 4, 0};
    Solution s;
    s.moveZeroes(nums);
    for(int val: nums){
        cout << val << " ";
    }

}