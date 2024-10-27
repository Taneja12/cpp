#include <iostream>
using namespace std;
#include <vector>
#include <sstream>


class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(vector<int>& arr, int x) {
        int i;
        for(i=0;i<arr.size();++i){
            if(x==arr[i]){
                return i;
            }
        }
        if(i==arr.size()){
            return -1;
        }
        // Your code here
    }
};

int main(){
  Solution s;
  vector<int> arr;
  int x;
  string input;
  cout<<"Enter elements of array :";
  getline(cin,input);
  stringstream ss(input);
    int number;
    
    while (ss >> number) {
        arr.push_back(number);
    }
  cout<<"Enter element to be searched :";
  cin>>x;
  
  
  
  cout<<s.search(arr,x)<<endl;

}