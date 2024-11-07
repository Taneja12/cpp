#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <ios>
#include <iostream>
#include <random>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
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

class Solution
{
public:
  struct Node *reverseList(struct Node *head)
  {
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    while (current != NULL)
    {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    head = prev;
    return head;
  }
};

void printList(struct Node *head)
{
  struct Node *temp = head;
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}

int main()
{
  int T, n, l, firstdata;
  cin >> T;
  cin.ignore();
  while (T--)
  {
    struct Node *head = NULL, *tail = NULL;

    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number)
    {
      arr.push_back(number);
    }
    int index = 0;
    n = arr.size();
    if (n != 0)
    {

      head = new Node(arr[0]);
      tail = head;
    }

    for (int i = 1; i < n; i++)
    {
      l = arr[i];
      tail->next = new Node(l);
      tail = tail->next;
    }

    Solution ob;
    head = ob.reverseList(head);

    printList(head);
    cout << endl;
    cout << "~" << endl;
  }
  return 0;
}