#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *prev, *next;
};

struct Node *getNode(int data)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->prev = newNode->next = NULL;
  return newNode;
}

void printList(struct Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

class Solution
{
public:
  Node *sortedInsert(Node *head, int x)
  {
    Node *ptr = head;
    Node *newNode = getNode(x);
    if (head == NULL)
    {
      return newNode;
    }
    // Case 2: Insert at the beginning
    if (x < head->data)
    {
      newNode->next = head;
      head->prev = newNode;
      return newNode;
    }
    while (ptr->next != NULL && ptr->next->data < x)
    {
      ptr = ptr->next;
    }
    // Insert newNode after ptr
    newNode->next = ptr->next;
    newNode->prev = ptr;

    if (ptr->next != NULL)
    {
      ptr->next->prev = newNode;
    }
    ptr->next = newNode;
    return head;
  }
};

int main()
{
  int t;
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
      head = getNode(x);
      tail = head;
    }

    while (ss >> x)
    {
      tail->next = getNode(x);
      tail->next->prev = tail;
      tail = tail->next;
    }

    int valueToInsert;
    cin >> valueToInsert;
    cin.ignore(); // Ignore the newline character after the value

    Solution obj;
    head = obj.sortedInsert(head, valueToInsert);
    printList(head);
  }

  return 0;
}
