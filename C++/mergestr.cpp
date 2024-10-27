#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
}


string merge (string S1, string S2)
{
    string temp;
    int l1 = S1.length()-1;
    int l2 = S2.length()-1;
    int i=0;
    while(i<=l1 && i<=l2){
        temp += S1[i];
        temp += S2[i];
        i++;
    }
    
    while(i<=l1){
        temp += S1[i];
        i++;
    }
    
    while(i<=l2){
        temp += S2[i];
        i++;
    }
    return temp;
}