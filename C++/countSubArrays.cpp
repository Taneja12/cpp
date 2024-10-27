#include <iostream>
#include <vector>
using namespace std;

// BRUTE FORCE APPROACH BUT ORDER O(N^2)
//  class Solution
//  {
//  public:
//    long long countSubarray(int N, vector<int> A, long long L, long long R)
//    {
//      long long count=0;
//      for(int strt=0; strt<N; strt++){
//        int Current_Sum = 0;
//        for(int end=strt; end<N; end++){
//          Current_Sum += A[end];
//          if(Current_Sum>=L && Current_Sum<=R){
//            count++;
//          }
//        }
//      }
//      return count;
//    }
//  };

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  // Helper function to count subarrays with sum <= X
  long long countSubarrayWithSumLessThanOrEqual(int N, vector<int> &A, long long X)
  {
    long long CurrentSum = 0;
    long long count = 0;
    int start = 0;

    for (int end = 0; end < N; end++)
    {
      CurrentSum += A[end];

      while (CurrentSum > X && start <= end)
      {
        CurrentSum -= A[start];
        start++;
      }

      count += (end - start + 1);
    }
    return count;
  }

  // Function to count subarrays with sum in the range [L, R]
  long long countSubarray(int N, vector<int> &A, long long L, long long R)
  {
    return countSubarrayWithSumLessThanOrEqual(N,A,R) - countSubarrayWithSumLessThanOrEqual(N,A,L-1);
  }
};

int main()
{
  int N = 4;
  long long L = 4, R = 13;
  vector<int> A = {2, 3, 5, 8};
  Solution obj;
  auto ans = obj.countSubarray(N, A, L, R);
  cout << ans << endl;
}
// } Driver Code Ends