#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
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

/* A utility function to insert a node at the beginning of linked list */
void push(struct Node *&head_ref, int new_data)
{
  struct Node *new_node = new Node(new_data);
  new_node->next = head_ref;
  head_ref = new_node;
}

void printList(struct Node *node)
{
  while (node != NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
  printf("\n");
}

class Solution
{
public:
  // Function to get the last node of the linked list
  Node *getTail(Node *curr)
  {
    while (curr != NULL && curr->next != NULL)
      curr = curr->next;
    return curr;
  }

  Node *partition(Node *head, Node *end, Node **newHead, Node **newEnd)
  {
    Node *pivot = end;
    Node *prev = nullptr, *cur = head, *tail = pivot;

    while (cur != pivot)
    {
      if (cur->data < pivot->data)
      {
        if ((*newHead) == nullptr)
          (*newHead) = cur;
        prev = cur;
        cur = cur->next;
      }
      else
      {
        if (prev)
          prev->next = cur->next;
        Node *temp = cur->next;
        cur->next = nullptr;
        tail->next = cur;
        tail = cur;
        cur = temp;
      }
    }
    if ((*newHead) == nullptr)
      (*newHead) = pivot;
    *newEnd = tail;
    return pivot;
  }

  
  Node *quickSortRecur(Node *head, Node *end)
  {
    if (!head || head == end)
      return head;

    Node *newHead = nullptr, *newEnd = nullptr;
    Node *pivot = partition(head, end, &newHead, &newEnd);

    if (newHead != pivot)
    {
      Node *temp = newHead;
      while (temp->next != pivot)
        temp = temp->next;
      temp->next = nullptr;

      newHead = quickSortRecur(newHead, temp);
      temp = getTail(newHead);
      temp->next = pivot;
    }

    pivot->next = quickSortRecur(pivot->next, newEnd);

    return newHead;
  }

  // Main QuickSort function
  Node *quickSort(struct Node *head)
  {
    head = quickSortRecur(head, getTail(head));
    return head;
  }
};

int main()
{
  int t;
  cin >> t;
  cin.ignore(); // Ignore the newline character after reading t

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

    if (arr.empty())
    {
      cout << -1 << endl;
      continue;
    }

    int data = arr[0];
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 1; i < arr.size(); ++i)
    {
      data = arr[i];
      tail->next = new Node(data);
      tail = tail->next;
    }

    Solution ob;
    head = ob.quickSort(head);

    printList(head);
    cout << "~" << endl;
  }
  return 0;
}
