#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;

  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

void printList(Node *node)
{
  while (node != NULL)
  {
    cout << node->data << " ";
    node = node->next;
  }
  cout << "\n";
}

class Solution
{
public:
  int fractional_node(struct Node *head, int k)
  {
    Node *ptr = head;
    int n = 0;
    while (ptr != NULL)
    {
      n++;
      ptr = ptr->next;
    }

    ptr = head;
    int p = (n+k-1)/k;
    while (p > 1)
    {
      ptr = ptr->next;
      p--;
    }
    return ptr->data;
  }
};

int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number)
    {
      arr.push_back(number);
    }
    int k;
    cin >> k;
    cin.ignore();
    struct Node *head = new Node(arr[0]);
    struct Node *tail = head;
    for (int i = 1; i < arr.size(); ++i)
    {
      tail->next = new Node(arr[i]);
      tail = tail->next;
    }
    Solution ob;
    int res = ob.fractional_node(head, k);
    cout << res << endl;
  }
  return 0;
}
// } Driver Code Ends