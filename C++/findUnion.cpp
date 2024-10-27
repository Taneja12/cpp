#include <bits/stdc++.h>
using namespace std;

// MY CODE
// class Solution
// {
// public:
//   vector<int> findUnion(int arr1[], int arr2[], int n, int m)
//   {
//     vector<int> arr;
//     for (int i = 0; i < n; i++)
//     {
//       arr.push_back(arr1[i]);
//     }
//     for (int i = 0; i < m; i++)
//     {
//       arr.push_back(arr2[i]);
//     }
//     sort(arr.begin(),arr.end());
//     int j=0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//       if (arr[i] != arr[j])
//       {
//         ++j;
//         arr[j] = arr[i];
//       }
//     }
//     while(j+1<arr.size()){
//       arr.pop_back();
//     }
//     return arr;
//   }
// };


//OPTIMIZED
class Solution
{
public:
  vector<int> findUnion(int arr1[], int arr2[], int n, int m)
  {
    vector<int> arr;
    int i = 0, j = 0;

    while (i < n && j < m)
    {
      if (arr1[i] < arr2[j])
      {
        if (arr.empty() || arr.back() != arr1[i])
        {
          arr.push_back(arr1[i]);
        }
        i++;
      }
      else if (arr2[j] < arr1[i])
      {
        if (arr.empty() || arr.back() != arr2[j])
        {
          arr.push_back(arr2[j]);
        }
        j++;
      }
      else
      {
        if (arr.empty() || arr.back() != arr1[i])
        {
          arr.push_back(arr1[i]);
        }
        i++;
        j++;
      }
    }
    while (i < n)
    {
      if (arr.empty() || arr.back() != arr1[i])
      {
        arr.push_back(arr1[i]);
      }
      i++;
    }
    while( j<m){
      if(arr.empty() || arr.back() != arr2[j]){
        arr.push_back(arr2[j]);
      }
      j++;
    }
    return arr;
  }
};

int main()
{
  int n = 5, arr1[] = {1, 2, 3, 4, 5};
  int m = 5, arr2[] = {1, 2, 3, 6, 7};
  Solution ob;
  vector<int> ans = ob.findUnion(arr1, arr2, n, m);
  for (int i : ans)
    cout << i << ' ';
  cout << endl;

  return 0;
}