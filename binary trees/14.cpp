#include <iostream>
#include <algorithm>

using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int height(Node *root)
{
    int h = 0;
    if (root == NULL)
    {
        return h;
    }
    else
    {
        h = max(height(root->left), height(root->right)) + 1;
    }
    return h;
}
bool isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (!isBalanced(root->left) || !isBalanced(root->right))
    {
        return false;
    }
    if (abs(height(root->left) - height(root->right)) > 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main(int argc, char const *argv[])
{
    Node* root = new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    cout<<isBalanced(root);
    return 0;
}
