//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
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

void printList(Node *node)
{
  while (node != NULL)
  {
    cout << node->data << " ";
    node = node->next;
  }
  cout << "\n";
}

void freeList(struct Node *head)
{
  struct Node *temp;
  while (head != NULL)
  {
    temp = head;
    head = head->next;
    delete temp;
  }
}

class Solution
{
public:
  Node *segregate(Node *head)
  {
    Node *ptr = head;
    int count[3] = {0};
    while (ptr != NULL)
    {
      count[ptr->data]++;
      ptr = ptr->next;
    }

    ptr = head;
    int index = 0;
    while (ptr != NULL)
    {
      if (count[index] == 0)
      {
        index++;
      }
      else
      {
        ptr->data = index;
        count[index]--;
        ptr = ptr->next;
      }
    }
    return head;
  }
};

int main()
{
  int t, k;
  cin >> t;
  cin.ignore(); // Ignore the newline character after t

  while (t--)
  {
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

    Solution ob;
    Node *newHead = ob.segregate(head);
    printList(newHead);
  }

  return 0;
}