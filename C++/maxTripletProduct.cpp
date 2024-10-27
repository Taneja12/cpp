#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long maxTripletProduct(long long arr[], int n)
    {
        // Sort the array in ascending order
        sort(arr, arr + n);

        // Case 1: Product of three largest numbers
        long long product1 = arr[n - 1] * arr[n - 2] * arr[n - 3];

        // Case 2: Product of two smallest (most negative) and the largest number
        long long product2 = arr[0] * arr[1] * arr[n - 1];

        // Return the maximum of both cases
        return max(product1, product2);
    }
};

int main()
{
    int n = 7;
    long long arr[] = {-3, -5, 1, 0, 8, 3, -2};
    Solution ob;
    cout << ob.maxTripletProduct(arr, n) << endl;
    return 0;
}
