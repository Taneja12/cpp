//{ Driver Code Starts
#include <bits/stdc++.h>
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

void print(Node *root)
{
  Node *temp = root;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

class Solution
{
public:
  Node *removeDuplicates(Node *head)
  {
    Node *ptr = head;
    while (ptr != NULL && ptr->next != NULL)
    {
      if(ptr->data == ptr->next->data){
        Node * toDelete = ptr->next;
        ptr->next = ptr->next->next;
        delete toDelete;
      } 
      else{
        ptr = ptr->next;
      }
    }
    return head;
  }
};

//{ Driver Code Starts.

int main()
{

  int T;
  cin >> T;
  cin.ignore();
  while (T--)
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
    Solution obj;
    int data = arr[0];
    Node *head = new Node(data);
    Node *tail = head;
    for (int i = 1; i < arr.size(); ++i)
    {
      data = arr[i];
      tail->next = new Node(data);
      tail = tail->next;
    }
    Solution ob;
    Node *result = ob.removeDuplicates(head);
    print(result);
    cout << endl;

    cout << "~"
         << "\n";
  }
  return 0;
}