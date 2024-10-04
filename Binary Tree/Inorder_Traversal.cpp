#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{
    int data;
    cout << "Enter node data:";
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for left of node " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for rigth of node " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void inOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout << "Inorder Traversal of Binary Tree" << endl;
    inOrder(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    return 0;
}