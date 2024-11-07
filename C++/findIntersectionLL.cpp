#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;

  Node(int x)
      : data(x), next(nullptr) {}
};

void printList(Node *head)
{
  while (head != nullptr)
  {
    cout << head->data << ' ';
    head = head->next;
  }
  cout << '\n';
}

class Solution
{
public:
  Node *findIntersection(Node *head1, Node *head2)
  {
    Node *ptr = head2;
    if (!head1 || !head2)
    {
      return ptr;
    }
    unordered_set<int> set1;
    Node *head3 = NULL;
    Node *temp = NULL;
    while (ptr != NULL)
    {
      set1.insert(ptr->data);
      ptr = ptr->next;
    }

    ptr = head1;
    while (ptr != NULL)
    {
      if (set1.find(ptr->data) != set1.end())
      {
        Node *newNode = new Node(ptr->data);
        if (head3 == NULL)
        {
          head3 = newNode;
          temp = head3;
        }
        else
        {
          temp->next = newNode;
          temp = temp->next;
        }
      }
      ptr = ptr->next;
    }
    return head3;
  }
};

int main()
{
  int T;
  cin >> T;
  cin.ignore();

  while (T--)
  {
    Node *head1 = nullptr, *tail1 = nullptr;
    Node *head2 = nullptr, *tail2 = nullptr;
    int tmp;
    string input1, input2;

    getline(cin, input1);
    stringstream ss1(input1);
    while (ss1 >> tmp)
    {
      Node *new_node = new Node(tmp);
      if (!head1)
      {
        head1 = new_node;
        tail1 = new_node;
      }
      else
      {
        tail1->next = new_node;
        tail1 = new_node;
      }
    }

    getline(cin, input2);
    stringstream ss2(input2);
    while (ss2 >> tmp)
    {
      Node *new_node = new Node(tmp);
      if (!head2)
      {
        head2 = new_node;
        tail2 = new_node;
      }
      else
      {
        tail2->next = new_node;
        tail2 = new_node;
      }
    }

    Solution obj;
    Node *result = obj.findIntersection(head1, head2);
    printList(result);
  }
  return 0;
}
