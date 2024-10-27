#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Solution {
  public:
    // Function to check if two arrays are equal or not.
    bool check(vector<int>& arr1, vector<int>& arr2) {
        if(arr1.size()!=arr2.size()){
            return false;
        }
        
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        
        for(int i=0; i < arr1.size();++i){
                if(arr1[i]!=arr2[i]){
                    return false;
                }
        }
        return true;
        // code here
    }
};

int main(){
  Solution s;
  vector<int> arr1 = {1, 2, 3, 4};
  vector<int> arr2 = {1, 2, 3, 4};
  cout << s.check(arr1,arr2) << endl;
  return 0;
}