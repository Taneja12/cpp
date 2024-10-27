//{ Driver Code Starts
// Initial template for C++
//MAM
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
      int n = arr.size();
      if(arr[n-1]==1){
        return 0;
      }
      if(arr[0]==0){
        return n;
      }
      int low = 0,high = n-1,mid = 0;
      while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==0 && arr[mid-1]!=0){
          return n-mid;
        }
        else if(arr[mid]==1){
          low = mid+1;
        }
        else if(arr[mid]==0 && arr[mid-1]==0){
          high = mid-1;
        }
      }
    }
};

//{ Driver Code Starts.
int main() {
        vector<int> arr = {1,0};
        Solution ob;
        cout << ob.countZeroes(arr) << endl;


    return 0;
}

// } Driver Code Ends