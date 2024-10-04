#include <iostream>
using namespace std;

class Node
{
public:
    int data1, data2;
    Node *next;

    Node(int data1, int data2)
    {
        this->data1 = data1;
        this->data2 = data2;
        this->next = NULL;
    }
};
int main()
{
    Node *Node1 = new Node(10, 12);
    cout << Node1->data1 << " " << Node1->data2 << endl;
    cout << Node1->next << endl;

    return 0;
}