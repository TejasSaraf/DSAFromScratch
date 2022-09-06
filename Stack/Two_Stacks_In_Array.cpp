#include <iostream>
using namespace std;

class TwoStack
{
    int *arr;
    int top1;
    int top2;
    int size;

public:
    TwoStack(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }
    void push1(int element)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = element;
        }
    }
    void push2(int element)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = element;
        }
    }
    void pop1()
    {
        if (top1 >= 0)
        {
            top1--;
        }
    }
    void pop2()
    {
        if (top2 >= 0)
        {
            top2++;
        }
    }
    int peek1()
    {
        if (top1 >= 0)
        {
            return arr[top1];
        }
        else
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }
    int peek2()
    {
        if (top2 >= 0)
        {
            return arr[top2];
        }
        else
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }
};
int main()
{
    TwoStack s(5);
    s.push1(1);
    s.push1(2);
    s.push2(3);
    s.push2(4);

    cout << s.peek1() << endl;
    s.pop1();
    cout << s.peek1() << endl;
    cout << s.peek2() << endl;
    s.pop2();
    cout << s.peek2() << endl;
    return 0;
}