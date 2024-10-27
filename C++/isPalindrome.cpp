
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int isPalindrome(string S)
    {
        int low = 0;
        int high = S.length() - 1;
        while(low<=high){
            if(S[low]==S[high]){
                low++;
                high--;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    Solution ob;

    cout << ob.isPalindrome(s) << "\n";

    return 0;
}
// } Driver Code Ends