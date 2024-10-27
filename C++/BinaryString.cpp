//Correct but gfg is not working

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long binarySubstring(int n, string a) {
      long count  = 0;
      int onecount = 0;
      for(int i=0;i<n;i++){
        if(a[i]=='1'){
          onecount++;
        }
      }
      count += onecount*(onecount-1)/2;
      return count;
    }
};

int main() {
    string a = "1111";
    int n = a.length();
    Solution obj;
    cout << obj.binarySubstring(n, a) << endl; // Output: 10
}
