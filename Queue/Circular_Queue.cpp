#include <iostream>
using namespace std;

class CircularQueue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool enqueue(int data)
    {
        if ((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1)))
        {
            cout << "Queue is full!" << endl;
            return false;
        }
        else if (front == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        arr[rear] = data;
        return true;
    }

    int dequeue()
    {
        if (front == -1)
        {
            cout << "Queue is empty!";
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;
        if (front == rear)
        {

            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ans;
    }
    int qfront()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};
int main()
{
    CircularQueue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout << q.qfront() << endl;
    q.dequeue();
    cout << q.qfront() << endl;
    q.dequeue();
    cout << q.qfront() << endl;

    return 0;
}
