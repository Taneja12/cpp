#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash; // map value to index
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            if (hash.find(complement) != hash.end()) {
                // Found the complement, return the indices
                return {hash[complement], i};
            }
            
            // Store the current number and its index in the hashmap
            hash[nums[i]] = i;
        }
        
        // No solution found (which should not happen per problem statement)
        return {}; // Returning an empty vector
    }
};

int main() {
    // Example usage of the twoSum function
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Solution solution;
    vector<int> result = solution.twoSum(nums, target);
    for (auto it = nums.begin(); it != nums.end(); ++it)
        cout << ' ' << *it;
    // Print the result
    cout <<endl<< "Indices are: " << result[0] << " and " << result[1] << endl;
    
    return 0;
}
