#include <iostream>
using namespace std;

int getbit(int n, int k){
    return ((n&(1<<k))!=0);
}

int setbit(int n, int k){
    return (n|(1<<k));
}

int clearbit(int n, int k){
    return (~(1<<k) & n);
}

int updatebit(int n, int k, int p){
    int t = (~(1<<k) & n);
    return (t | (p<<k));
}

int main(){
    cout<<getbit(5,2)<<endl;
    cout<<setbit(5,1)<<endl;
    cout<<clearbit(5,2)<<endl;
    cout<<updatebit(5,1,1)<<endl;
}