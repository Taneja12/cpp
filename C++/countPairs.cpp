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

void printList(struct Node *head)
{
  struct Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << ' ';
    temp = temp->next;
  }
  cout << '\n';
}

class Solution
{
public:
  int countPairs(struct Node *head1, struct Node *head2, int x)
  {
    Node *ptr = head1;
    unordered_set<int> set1;
    int count = 0;
    while (ptr!=NULL)
    {
      set1.insert(ptr->data);
      ptr = ptr->next;
    }

    ptr = head2;
    while(ptr!=NULL){
      if(set1.find(x-ptr->data)!=set1.end()){
        count++;
      }
      ptr = ptr->next;
    }
    return count;
  }
};

int main()
{
  int T;
  cin >> T;
  cin.ignore();
  while (T--)
  {
    int n1, n2, tmp;
    Node *head1 = nullptr, *tail1 = nullptr;
    Node *head2 = nullptr, *tail2 = nullptr;
    string input1, input2;

    getline(cin, input1); // Read the entire line for the LL1 elements
    stringstream ss1(input1);
    while (ss1 >> tmp)
    {
      Node *new_node = new Node(tmp);
      if (head1 == nullptr)
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

    getline(cin, input2); // Read the entire line for the LL2 elements
    stringstream ss2(input2);
    while (ss2 >> tmp)
    {
      Node *new_node = new Node(tmp);
      if (head2 == nullptr)
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

    int x;
    cin >> x;
    cin.ignore();
    Solution obj;
    int result = obj.countPairs(head1, head2, x);
    cout << result << "\n~\n"; // Print the number of pairs found
  }
  return 0;
}
