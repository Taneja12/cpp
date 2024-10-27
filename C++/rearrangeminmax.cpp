#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void rearrange(long long *arr, int n)
    {
        int max_idx = n - 1;
        int min_idx = 0;
        long long max_elem = arr[n - 1] + 1; // Store a number greater than the max element in the array

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0) // Even index, put the maximum element
            {
                arr[i] += (arr[max_idx] % max_elem) * max_elem; //arr[4] = 5 + (4%7)*7 = 33
                max_idx--; // 2
            }
            else // Odd index, put the minimum element
            {
                arr[i] += (arr[min_idx] % max_elem) * max_elem; // arr[5] = 6 + (3%7)*7 = 27
                min_idx++; // 3
            }
        }

        // Final step: Divide each element by max_elem to get the actual values
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i] / max_elem;
        }
    }
};

int main()
{
    int n = 6;
    long long arr[] = {1, 2, 3, 4, 5, 6};
    Solution ob;

    ob.rearrange(arr, n);

    // Printing the elements
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
    return 0;
}
