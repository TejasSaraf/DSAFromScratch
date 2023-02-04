#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *link;

    Node(int data)
    {
        this->data = data;
        this->link = NULL;
    }
};

class stack
{
    Node *top;

public:
    stack()
    {
        top == NULL;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        if (!temp)
        {
            cout << "Stack Overflow!";
            exit(1);
        }
        temp->data = data;
        temp->link = top;
        top = temp;
    }

    void pop()
    {
        Node *temp;
        if (top == NULL)
        {
            cout << "Stack Underflow!";
            exit(1);
        }
        else
        {
            temp = top;
            top = top->link;
            free(temp);
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    int peek()
    {
        if (!isEmpty())
        {
            return top->data;
        }
        else
        {
            exit(1);
        }
    }

    void display()
    {
        Node *temp;
        if (top == NULL)
        {
            cout << "Stack Underflow";
            exit(1);
        }
        else
        {
            temp = top;
            while (temp != NULL)
            {
                cout << temp->data;
                temp = temp->link;
                if (temp != NULL)
                {
                    cout << " -> ";
                }
            }
        }
    }
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    cout << "Top element:" << s.peek() << endl;
    s.pop();
    s.display();
    s.peek();

    return 0;
}