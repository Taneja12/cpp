#include <iostream>
using namespace std;
#include <vector>

class Solution
{
public:
  void rotate(vector<int> &arr)
  {
    int size = arr.size();
    int last = arr[size - 1];
    for (int i = size - 1; i > 0; i--)
    {
      arr[i] = arr[i - 1];
    }
    arr[0] = last;
  }
};

int main()
{
  Solution s;
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  s.rotate(arr);
  for (int i = 0; i < arr.size(); i++)
  {
    cout << arr[i] << " ";
  }
}