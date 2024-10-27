// Sieve of Eratosthenes(optimize way to find prime numbers)
// Time Complexity = N*log(logN)

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int countPrimes(int n)
  {
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < n; i++)
    {
      if (isPrime[i])
      {
        for (int j = i * i; j < n; j += i)
        {
          isPrime[j] = false;
        }
      }
    }
    return count(isPrime.begin(), isPrime.end(), true);
  }
};

int main()
{
  Solution s;
  cout << s.countPrimes(100);
  return 0;
}