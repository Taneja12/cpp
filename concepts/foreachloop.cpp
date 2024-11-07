#include<iostream>
#include <vector>
using namespace std;

int main(){

  //vector<int>, for loop int should be same datatype

  vector<char> arr = {'a','b','c','d'};

  vector<int> arr1(3,0); //arr = {0,0,0}
  for(char val : arr){
    cout<<val<<" ";
  }

  //vector size and capacity
  //The capacity of the vector get doubled when no space left in the array when push_back

  vector<int> vec;
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  cout<<"Size: "<<vec.size()<<endl; // 5
  cout<<"Capacity: "<<vec.capacity()<<endl; //8
  
}
