// 242 Leetcode
#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.length()!=t.length()){
        return false;
      }
        vector<int> temp(26,0);
        for(char val : s){
          temp[val-'a'] += 1;
        }
        for(char val : t){
          temp[val - 'a'] -=1;
          if(temp[val-'a']<0){
            return false;
          }
        }
        return true;
    }
};

int main(){
  string s1 = "rat";
  string s2 = "rat";
  Solution s;
  cout<<s.isAnagram(s1,s2);
}