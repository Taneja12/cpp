// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution
// {
// public:
//     void sortIt(vector<long long> &arr)
//     {
//         vector<long long> odd, even;
//         int n = arr.size();

//         // Separate odd and even numbers
//         for (int i = 0; i < n; i++)
//         {
//             if (arr[i] % 2 != 0)
//             {
//                 odd.push_back(arr[i]);  // odd numbers
//             }
//             else
//             {
//                 even.push_back(arr[i]); // even numbers
//             }
//         }

//         // Sort odd numbers in descending order
//         sort(odd.begin(), odd.end(), greater<long long>());

//         // Sort even numbers in ascending order
//         sort(even.begin(), even.end());

//         // Merge odd and even lists
//         odd.insert(odd.end(), even.begin(), even.end());

//         // Assign back to the original array
//         arr = odd;
//     }
// };

// //{ Driver Code Starts.
// int main()
// {
//     vector<long long> arr = {1, 2, 3, 5, 4, 7, 10};
//     Solution ob;
//     ob.sortIt(arr);

//     for (int i = 0; i < arr.size(); i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }
// // } Driver Code Ends


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortIt(vector<long long> &arr)
    {
        int n = arr.size();

        // Partition odd numbers at the beginning and even numbers at the end
        int oddIdx = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)  // Odd number
            {
                swap(arr[i], arr[oddIdx]); // Move odd number to the front
                oddIdx++;
            }
        }

        // Sort odd part in descending order
        sort(arr.begin(), arr.begin() + oddIdx, greater<long long>());

        // Sort even part in ascending order
        sort(arr.begin() + oddIdx, arr.end());
    }
};

int main()
{
    vector<long long> arr = {1, 2, 3, 5, 4, 7, 10};
    Solution ob;
    ob.sortIt(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
