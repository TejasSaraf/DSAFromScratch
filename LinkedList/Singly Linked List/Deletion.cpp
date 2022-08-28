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
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory free for Node with data  " << value << endl;
    }
};
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
void insertAtMiddle(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    Node *NodeToInsert = new Node(data);
    NodeToInsert->next = temp->next;
    temp->next = NodeToInsert;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {

        Node *current = head;
        Node *previous = NULL;
        int count = 1;
        while (count < position)
        {
            previous = current;
            current = current->next;
            count++;
        }
        previous->next = current->next;
        current->next = NULL;
        delete current;
    }
}
void print(Node *&head)
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
    Node *Node1 = new Node(5);
    Node *head = Node1;
    Node *tail = Node1;
    print(head);
    insertAtHead(head, 4);
    print(head);
    insertAtTail(tail, 7);
    print(head);
    insertAtMiddle(tail, head, 3, 6);
    print(head);
    deleteNode(3, head);
    print(head);
    return 0;
}