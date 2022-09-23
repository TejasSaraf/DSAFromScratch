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
    cout << "Enter Node data:" << endl;
    cin >> data;
    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data for Left of node " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for Right of node " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void postOrderTraversal(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    cout << "Post Order Traversal of Binary Tree" << endl;
    postOrderTraversal(root);
    return 0;
}