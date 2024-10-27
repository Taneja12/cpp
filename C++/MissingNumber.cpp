#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int missingNumber(int n, vector<int> arr){
      unordered_set<int> set{arr.begin(), arr.end()};
      for(int j=1; j<=n;++j){
        if(set.find(j) == set.end()){
          return j;
        }
      }
    }
};

int main(){
  Solution s;
  vector<int> arr = {1,2, 4,5};
  cout<< "Missing Element: "<<s.missingNumber(5, arr);
}