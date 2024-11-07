#include <iostream>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display (Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

void insertAtbeginning(Node* &head, int val){
    Node *temp = new Node(val);
    temp->next = head;
    head = temp;
}

void insertAttheend(Node* &head, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head= newNode;
        return ;
    }

    Node *temp = head;
    while(temp->next!=NULL){
        temp  = temp->next;
    }
    temp->next = newNode;

}

// void insertAtPos(Node *&head, int val , int pos){
//     if(pos==1){
//         insertAtbeginning(head,val);
//         return ;
//     }
//     int count =1 ;
//     Node * ptr = head;
//     while(count<pos){

//     }
// }

int main()
{
    Node node1(5);
    Node node2(4);

    Node *head = &node1;
    node1.next = &node2;
    cout<<"Before insertion: ";
    display(head);
    cout<<endl<<"After  insertion: ";
    insertAtbeginning(head,2);
    insertAttheend(head,7);
    // insertAtPos(head,9,2);
    display(head);
}
