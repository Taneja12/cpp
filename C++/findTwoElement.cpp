#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n)
    {
        vector<int> result(2, 0);
        vector<int> count(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            count[arr[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (count[i] == 2)
            {
                result[0] = i;
            }
            else if (count[i] == 0)
            {
                result[1] = i;
            }
        }
        return result;
    }
};

int main()
{
    int n = 47;
    vector<int> a = {13, 33, 43, 16, 25, 19, 23, 31, 29, 35, 10, 2, 32, 11, 47, 15, 34, 46, 30, 26, 41, 18, 5, 17, 37, 39, 6, 4, 20, 27, 9, 3, 8, 40, 24, 44, 14, 36, 7, 38, 12, 1, 42, 12, 28, 22, 45};
    Solution ob;
    auto ans = ob.findTwoElement(a, n);
    cout << "Repeating: " << ans[0] << ", Missing: " << ans[1] << "\n";
    return 0;
}