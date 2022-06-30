#include <iostream>
#include <algorithm>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(struct Node *node)
{
    int h = 0;
    if (node == NULL)
    {
        return h;
    }
    else if (node->right == NULL && node->left == NULL)
    {
        h += 1;
        return h;
    }
    else
    {
        h += 1;
        h += max(height(node->left), height(node->right));
        return h;
    }
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout<<height(root)<<'\n';
    return 0;
}
