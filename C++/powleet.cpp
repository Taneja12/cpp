// 50 LEET

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  double myPow(double x, int n)
  {
    // storing in long as long is 64 bit and int is 34 bit
    long binForm = n;

    // For Negative power we have to convert them into positive by reciprocate them
    if (binForm < 0)
    {
      x = 1 / x;
      binForm = -binForm;
    }

    // ans is calculated only when the bin digit is 1 otherwise only
    // current_product which is the power of x like x^1,x^2,x^4,.. in binary form until the binForm become less than 0
    double ans = 1.0, current_product = x;

    while (binForm > 0)
    {
      if (binForm % 2 == 1)
      {
        ans *= current_product;
      }
      current_product *= current_product; // it is like a pointer which is to be moved after operation
      binForm /= 2;
    }
    return ans;
  }
};

int main()
{
  Solution s;
  cout << s.myPow(2.0, -10);
}