#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    if (prices.empty())
      return 0;
    int buy = prices[0];
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
      if (prices[i] < buy)
      {
        buy = prices[i];
      }
      if (prices[i] - buy > profit)
      {
        profit = prices[i] - buy;
      }
      //IN place of above if conditions 
      /*buy = min(prices[i],buy);
      profit = max(profit,prices[i] - buy);*/
    }
    return profit;
  }
};

int main()
{
  vector<int> prices = {7,1,5,3,6,4};
  Solution s;
  cout << "Max Profit: " << s.maxProfit(prices);
  return 0;
}