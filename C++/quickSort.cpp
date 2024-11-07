#include <iostream>
#include <vector>
using namespace std;

class Solution
{
  private:
    int partition(vector<int> &arr,int low,int high){
      int pivot = arr[high];
      int i = low-1;

      for(int j = low;j<high;j++){
        if(arr[j]<pivot){
          i++;
          swap(arr[i],arr[j]);
        }
      }
      swap(arr[i+1],arr[high]);
      return i+1;
    }

    void quick(vector<int> &arr, int low, int high){
      if(low<high){
        int pi = partition(arr,low,high);
        quick(arr,0,pi-1);
        quick(arr,pi+1,high);
      }
    }

    
  public:
    void quickSort(vector<int> &arr)
    {
      quick(arr, 0, arr.size() - 1);
    }
};

int main()
{
  vector<int> arr = {1, 5, 3, 2, 7,4,0};
  Solution s;
  s.quickSort(arr);

  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}