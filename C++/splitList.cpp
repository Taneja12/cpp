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

//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

class Solution
{
public:
  pair<Node *, Node *> splitList(Node *head)
  {
    if (!head || head->next == head)
    {
      return {head, NULL};
    }

    Node *last = head;
    int count = 1;
    while (last->next != head)
    {
      count++;
      last = last->next;
    }

    int firstHalfCount = (count + 1) / 2;

    Node *ptr = head;
    for (int i = 1; i < firstHalfCount; i++)
    {
      ptr = ptr->next;
    }
    Node *head2 = ptr->next;
    ptr->next = head;
    last->next = head2;
    return {head,head2};
  }
};

void printList(struct Node *head)
{
  struct Node *temp = head;
  if (head != NULL)
  {
    do
    {
      printf("%d ", temp->data);
      temp = temp->next;
    } while (temp != head);
    printf("\n");
  }
}

struct Node *newNode(int key)
{
  struct Node *temp = new Node(key);

  return temp;
}

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

    // Read numbers from the input line
    while (ss >> number)
    {
      arr.push_back(number);
    }
    struct Node *temp, *head = NULL;

    // Check if the array is empty
    if (!arr.empty())
    {
      head = new Node(arr[0]);
      temp = head;
      for (size_t i = 1; i < arr.size(); ++i)
      {
        temp->next = new Node(arr[i]);
        temp = temp->next;
      }
    }
    temp->next = head;
    Solution ob;
    auto result = ob.splitList(head);
    struct Node *head1 = result.first;
    struct Node *head2 = result.second;
    printList(head1);
    printList(head2);
    cout << "~" << endl;
  }

  return 0;
}
