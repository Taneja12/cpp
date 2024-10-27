#include <bits/stdc++.h>
using namespace std;

int main(){
  string s1 = "IAmACompetetiveDeveloper";
  for(int i=0;i<s1.length();i++){
    cout<<s1[i];
    if(isupper(s1[i+1])){
    cout<<endl;

    }
    
  }
  return 0; 
}