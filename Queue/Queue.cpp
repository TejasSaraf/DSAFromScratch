#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int qfront;
    int rear;
    int size;

    Queue(int size)
    {
        this->size = size;
        qfront = 0;
        rear = 0;
        arr = new int[size];
    }

    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full!" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if (qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if (qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }

    bool isempty()
    {
        if (qfront == rear)
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
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    cout << "Front:" << q.front() << endl;
    q.dequeue();
    cout << "Front:" << q.front() << endl;
    bool ans = q.isempty();
    if (ans == true)
    {
        cout << "Queue Empty!" << endl;
    }
    else
    {
        cout << "Queue Not Empty!" << endl;
    }

    return 0;
}