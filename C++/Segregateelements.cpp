#include <iostream>
using namespace std;
#include <vector>

class Solution{
  public:
    void segregateelements(vector <int> &arr){
      vector<int> temp;
      for(int i=0;i<arr.size();i++){
        if(arr[i]>=0)
            temp.push_back(arr[i]);
      }

      for(int i=0;i<arr.size();i++){
        if(arr[i]<0)
          temp.push_back(arr[i]);
      }
      arr = temp;
    }
};

int main(){
  vector<int> arr = {1, -1, 2, -5, -6, 5};
  Solution s;
  s.segregateelements(arr);
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
}