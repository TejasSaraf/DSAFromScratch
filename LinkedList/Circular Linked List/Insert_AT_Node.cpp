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

void insertATNode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;
    insertATNode(tail, 3, 3);
    print(tail);

    insertATNode(tail, 3, 4);
    print(tail);

    insertATNode(tail, 4, 5);
    print(tail);

    insertATNode(tail, 3, 2);
    print(tail);
    return 0;
}