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
            next = NULL;
        }
        cout << "Memory free for data at Node" << value << endl;
    }
};
void insertAtNode(Node *&tail, int element, int data)
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

void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if (curr == prev)
        {
            tail = NULL;
        }
        else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
void print(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
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
    insertAtNode(tail, 3, 3);
    print(tail);

    insertAtNode(tail, 3, 4);
    print(tail);

    insertAtNode(tail, 4, 5);
    print(tail);

    deleteNode(tail, 4);
    print(tail);
    return 0;
}