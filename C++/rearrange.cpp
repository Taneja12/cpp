#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void rearrange(int arr[], int n)
  {
    vector<int> pos, neg;
    for(int i=0; i<n; i++){
      if(arr[i] < 0 ){
        neg.push_back(arr[i]);
      }
      else{
        pos.push_back(arr[i]);
      }
    }

    int i=0, j=0, k=0;
    while(i<pos.size() && j<neg.size()){
      if(k%2==0) arr[k++] = pos[i++];
      else arr[k++] = neg[j++];
    }
    while(i<pos.size()) arr[k++] = pos[i++];
    while(j<neg.size()) arr[k++] = neg[j++];
  }
};

int main()
{

  int i;
  int arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  Solution ob;
  ob.rearrange(arr, n);
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";

  return 0;
}
