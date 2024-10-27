
#include <iostream>
#include <sstream>
#include <stdio.h> // For freopen function
#include <string>
#include <vector>

using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* buildList() {
    vector<int> arr;
    string input;
    getline(cin, input);    // Read the entire line as input
    stringstream ss(input); // Use stringstream to split the input into integers
    int number;
    while (ss >> number) {
        arr.push_back(number); // Add each number to the vector
    }
    if (arr.empty()) {
        return NULL; // Return NULL if the vector is empty
    }

    // Create the head node
    Node* head = new Node(arr[0]);
    Node* tail = head;

    // Create remaining nodes
    for (size_t i = 1; i < arr.size(); i++) {
        tail->next = new Node(arr[i]);
        tail = tail->next;
    }

    return head;
}


class Solution {
  public:
    bool areIdentical(struct Node *head1, struct Node *head2) {
        Node *ptr1 = head1;
        Node *ptr2 = head2;
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->data !=ptr2->data){
                return false;
            }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        if(ptr1!=NULL || ptr2!=NULL){
            return false;
        }
        return true;
    }
};


int main() {

    int T;
    cin >> T;
    cin.ignore(); // Ignore newline after reading T to use getline properly

    while (T--) {
        Node* head1 = buildList(); // Build first list from input
        Node* head2 = buildList(); // Build second list from input
        Solution ob;               // Directly create the object (no need for `new`)
        ob.areIdentical(head1, head2) ? cout << "true" << endl
                                      : cout << "false" << endl;

        cout << "~" << endl;
    }

    return 0;
}
