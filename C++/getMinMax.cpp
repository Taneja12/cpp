#include <iostream>
using namespace std;
#include <vector>


class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
            long max = arr[0];
            long min = arr[0];
        for(int i=1;i<arr.size();++i){
            if(arr[i]>max){
               
                max = arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
            }
        }
        return {min,max};
        // code here
    }
};

int main(){
  vector<long long int> arr ={1,2,3,4,5};
  Solution s;
  pair<long long, long long> ans = s.getMinMax(arr);
  cout<<ans.first<<" "<<ans.second<<endl;
  return 0;
}