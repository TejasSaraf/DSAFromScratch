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

class Queue
{
public:
    Node *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }

    void enQueue(int data)
    {
        Node *temp = new Node(data);
        if (rear == NULL)
        {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void deQueue()
    {
        if (front == NULL)
        {
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        delete (temp);
    }
};
int main()
{
    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.deQueue();
    q.deQueue();
    q.enQueue(30);
    q.enQueue(40);
    cout << "Front:" << q.front->data << endl;
    cout << "Rear:" << q.rear->data << endl;
    return 0;
}