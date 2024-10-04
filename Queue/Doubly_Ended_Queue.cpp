#include <iostream>
using namespace std;

class Dequeue
{
public:
    int *arr;
    int front;
    int rear;
    int size;

    Dequeue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool pushFront(int data)
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == 0 && rear != size - 1)
        {
            front = size - 1;
        }
        else
        {
            front--;
        }
        arr[front] = data;
        return true;
    }

    bool pushRear(int data)
    {
        if ((front == 0 && rear == size - 1) || (front != 0 && rear == (front - 1) % (size - 1)))
        {
            return false;
        }
        else if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear = size - 1 && front != 0)
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

    int popFront()
    {
        if (isEmpty())
        {
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

    int popRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = size - 1;
        }
        else
        {
            rear--;
        }
        return ans;
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }

    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Dequeue dq(5);
    dq.pushFront(1);
    dq.pushFront(2);
    dq.pushFront(3);
    dq.pushRear(4);
    cout << dq.getFront() << " ";
    cout << dq.getRear() << endl;
    dq.popFront();
    dq.popRear();
    cout << dq.getFront() << " ";
    cout << dq.getRear() << endl;
    return 0;
}