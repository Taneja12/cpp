#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Solution
{
public:
  int candy(vector<int> &ratings)
  {
    int n = ratings.size();
    if (n == 1)
      return 1;

    vector<int> count(n, 1); // Initialize each child with at least 1 candy

    // Left to right pass
    for (int i = 1; i < n; i++)
    {
      if (ratings[i] > ratings[i - 1])
        count[i] = count[i - 1] + 1;
    }

    // Right to left pass
    for (int i = n - 2; i >= 0; i--)
    {
      if (ratings[i] > ratings[i + 1])
        count[i] = max(count[i], count[i + 1] + 1);
    }

    return accumulate(count.begin(), count.end(), 0);
  }
};

int main()
{
  vector<int> ratings = {1, 2, 1};
  Solution s;
  cout << s.candy(ratings); // Output should be 4
  return 0;
}
