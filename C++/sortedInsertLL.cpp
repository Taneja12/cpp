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

void printList(Node *head)
{
  if (head == NULL)
    return;

  Node *temp = head;
  do
  {
    cout << temp->data << " ";
    temp = temp->next;
  } while (temp != head);

  cout << "\n";
}

class Solution
{
public:
  Node *sortedInsert(Node *head, int data)
  {
    Node *ptr = head;
    Node *newNode = new Node(data);
    // Case 1: Empty list
    if (!head)
    {
      newNode->next = newNode;
      return newNode;
    }

    // Case 2: Insert before head (new smallest element)
    if (head->data >= data)
    {
      // Find the last node
      while (ptr->next != head)
      {
        ptr = ptr->next;
      }
      // Insert newNode before head and update the last node's next
      ptr->next = newNode;
      newNode->next = head;
      return newNode;
    }

    // Case 3: Insert somewhere after the head
    while (ptr->next != head && ptr->next->data < data)
    {
      ptr = ptr->next;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;

    return head;
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
    int x;
    cin >> x;
    cin.ignore();
    Node *head = new Node(arr[0]);
    Node *tail = head;
    for (int i = 1; i < arr.size(); ++i)
    {
      tail->next = new Node(arr[i]);
      tail = tail->next;
    }
    tail->next = head; // Make it circular
    Solution ob;
    Node *ans = ob.sortedInsert(head, x);
    printList(ans);
  }
  return 0;
}