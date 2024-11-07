#include <bits/stdc++.h>
#include <map>
using namespace std;

struct Node
{
  int data;
  Node *next;

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
  Node *pairWiseSwap(Node *head)
  {
    if (!head || !head->next)
      return head; // No nodes or only one node

    // New head will be the second node
    Node *newHead = head->next;

    Node *prev = NULL;
    Node *curr = head;

    while (curr && curr->next)
    {
      Node *next = curr->next;
      curr->next = next->next;
      next->next = curr;

      // If there was a previous pair, link it to the current pair
      if (prev)
        prev->next = next;

      // Move prev and curr pointers to the next pair
      prev = curr;
      curr = curr->next;
    }

    return newHead;
  }
};

//{ Driver Code Starts.
int main()
{

  int t;
  cin >> t;
  cin.ignore(); // Ignore the newline character after t input

  while (t--)
  {
    vector<int> arr;
    string input;

    // Read the array of linked list elements
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number)
    {
      arr.push_back(number);
    }

    if (arr.empty())
    {
      cout << -1 << endl; // handle empty input
      continue;
    }

    Node *head = new Node(arr[0]);
    Node *tail = head;
    map<Node *, int> mp;
    mp[head] = head->data;
    for (int i = 1; i < arr.size(); ++i)
    {
      tail->next = new Node(arr[i]);
      tail = tail->next;
      mp[tail] = tail->data;
    }

    Node *failure = new Node(-1);
    Solution ob;
    head = ob.pairWiseSwap(head);
    int flag = 0;
    Node *temp = head;
    while (temp)
    {
      if (mp[temp] != temp->data)
      {
        flag = 1;
        break;
      }
      temp = temp->next;
    }
    if (flag)
      printList(failure);
    else
      printList(head);
    cout << "~" << endl;
  }
  return 0;
}
