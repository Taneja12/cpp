#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};

int main(){
  string s1 = "sadbutsad";
  string s2 = "leet";
  Solution s;
  cout<<s.strStr(s1,s2);
  return 0; 
}