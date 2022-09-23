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
    cout << "Enter node data:" << endl;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter data for left of node " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for right of node " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void preOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout << "Preorder Traversal of Binary Tree" << endl;
    preOrderTraversal(root);
    return 0;
}