#include <bits/stdc++.h>
#include <iostream>
#include <set>
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

struct Node *buildList()
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

  int data = arr[0];
  Node *head = new Node(data);
  Node *tail = head;
  for (int i = 1; i < arr.size(); ++i)
  {
    data = arr[i];
    tail->next = new Node(data);
    tail = tail->next;
  }
  return head;
}

void printList(Node *n)
{
  while (n)
  {
    cout << n->data << " ";
    n = n->next;
  }
  cout << endl;
}

class Solution
{
public:
  struct Node *makeUnion(struct Node *head1, struct Node *head2)
  {
    set<int> set1;
    Node *ptr = head1;
    while (ptr != NULL)
    {
      set1.insert(ptr->data);
      ptr = ptr->next;
    }

    ptr = head2;
    while (ptr != NULL)
    {
      set1.insert(ptr->data);
      ptr = ptr->next;
    }

    Node *head = NULL;
    Node *tail = NULL;

    for(int val : set1){
      if(!head){
        head = new Node(val);
        tail = head;
      }
      else{
        tail->next = new Node(val);
        tail = tail->next;
      }
    }
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

    Node *first = buildList();

    Node *second = buildList();
    Solution obj;
    Node *head = obj.makeUnion(first, second);
    printList(head);
    cout << "~" << endl;
  }
  return 0;
}
