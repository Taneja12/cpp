#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int low = 0, high = arr.size() - 1;

        // Binary Search for the peak
        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            // Check boundaries to avoid out-of-bounds access
            if (mid > 0 && mid < arr.size() - 1)
            {
                // Check if mid is the peak
                if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                {
                    return mid;
                }
                // If the mid element is part of the increasing slope
                else if (arr[mid] > arr[mid - 1] && arr[mid] < arr[mid + 1])
                {
                    low = mid + 1;
                }
                // If the mid element is part of the decreasing slope
                else
                {
                    high = mid - 1;
                }
            }
            else if (mid == 0) // Special case for first element
            {
                return (arr[0] > arr[1]) ? 0 : 1; // Peak must be at index 0 or 1
            }
            else if (mid == arr.size() - 1) // Special case for last element
            {
                return arr.size() - 2; // Peak must be at the second last element
            }
        }
        return -1; // Shouldn't reach here in a valid mountain array
    }
};

int main()
{
    vector<int> arr = {0, 2, 1, 0};
    Solution s;
    cout << s.peakIndexInMountainArray(arr);
    return 0;
}
