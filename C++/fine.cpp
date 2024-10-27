#include <iostream>
using namespace std;

class Solution
{
public:
  long long int totalFine(int n, int date, int car[], int fine[])
  {
    long long int total = 0;
    if (date % 2 == 0)
    {
      for (int i = 0; i < n; i++)
      {
        if (car[i] % 2 != 0)
        {
          total += fine[i];
        }
      }
    }
    else
    {
      for (int i = 0; i < n; i++)
      {
        if (car[i] % 2 == 0)
        {
          total += fine[i];
        }
      }
    }
    return total;
  }
};

int main()
{
  int n;
  cin >> n;
  int date;
  cin >> date;
  int car[n];
  int fine[n];
  cout << "Enter the elements of car array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> car[i];
  }
  cout << "Enter the elements of fine array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> fine[i];
  }
  Solution s;
  cout << "Total Fine on Date " << date << " is " << s.totalFine(n, date, car, fine);
}