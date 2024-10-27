#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;

  Node(int x)
  {
    data = x;
    next = nullptr;
  }
};

class Solution
{
public:
  bool isCircular(Node *head)
  {
    if (head == NULL)
    {
      return true;
    }
    bool cl = false;
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast)
      {
        cl = true;
        break;
      }
    }
    return cl;
  }
};

int main()
{
  int k;

  cin >> k;
  cin.ignore(); // Ignore the newline character after k

  string input;
  getline(cin, input); // Read the entire line for the array elements

  stringstream ss(input);
  Node *head = nullptr, *tail = nullptr;
  int x;

  if (ss >> x)
  {
    head = new Node(x);
    tail = head;

    while (ss >> x)
    {
      tail->next = new Node(x);
      tail = tail->next;
    }

    // Link the last node to the head if k is 1 to make it circular
    if (k == 1)
    {
      tail->next = head;
    }
  }

  Solution obj;
  cout << (obj.isCircular(head) ? "true" : "false") << endl;
  cout << '~' << endl;
  return 0;
}
