#include <bits/stdc++.h>
using namespace std;

// class Solution{
// public:
//     void threeWayPartition(vector<int>& array,int a, int b)
//     {
//         vector<int> arr;
//         for(int i=0; i<array.size();i++){
//           if(array[i]<a){
//             arr.push_back(array[i]);
//           }
//         }
//         for(int i=0; i<array.size();i++){
//           if(array[i]>=a && array[i]<=b){
//             arr.push_back(array[i]);
//           }
//         }
//         for(int i=0; i<array.size();i++){
//           if(array[i]>b){
//             arr.push_back(array[i]);
//           }
//         }
//         array = arr;
//     }
// };

class Solution
{
public:
  void threeWayPartition(vector<int> &array, int a, int b)
  {
    int mid = 0, low = 0, high = array.size() - 1;
    while (mid <= high)
    {
      if(array[mid]<a){
        swap(array[mid++],array[low++]);
      }
      else if(array[mid]>b){
        swap(array[mid],array[high--]);
      }
      else{
        mid++;
      }
    }
  }
};

int main()
{
  vector<int> array = {1, 4, 3, 6, 2, 1};
  Solution s;
  s.threeWayPartition(array, 1, 3);
  for (int i : array)
  {
    cout << i << ' ';
  }
  return 0;
}