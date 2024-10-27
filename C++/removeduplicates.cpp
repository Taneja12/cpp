#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0; 
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) { 
                i++; 
                nums[i] = nums[j];
            }
        }
        return i + 1; 
    }
};

int main() {
    // Write C++ code here
    vector<int> nums={0,0,1,1,2,2};
    Solution s;
    cout<<"Number of elements: "<<s.removeDuplicates(nums);
    return 0;
}