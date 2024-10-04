#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *Node1 = new Node(10);
    // cout<<Node1->data<<endl;
    // cout<<Node1->next<<endl;
    Node *head = Node1;
    printList(head);
    insertAtHead(head, 9);
    printList(head);

    return 0;
}