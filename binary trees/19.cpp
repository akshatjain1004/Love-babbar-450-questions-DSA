#include <iostream>
#include <vector>
#include <queue>

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

vector<Node *> inOrder(Node *root)
{
    vector<Node *> ans;
    if (root == NULL)
    {
        return ans;
    }
    if (!(root->left && root->right))
    {
        ans.push_back(root);
        return ans;
    }
    else
    {
        auto temp = inOrder(root->left);
        for (int i = 0; i < temp.size(); i++)
        {
            ans.push_back(temp[i]);
        }
        ans.push_back(root);
        temp = inOrder(root->right);
        for (int i = 0; i < temp.size(); i++)
        {
            ans.push_back(temp[i]);
        }
        return ans;
    }
}

int sum(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int a = sum(root->left);
        int b = sum(root->right);
        int x = root->data;
        root->data = a + b;
        return a + b + x;
    }
}
void toSumTree(Node *root)
{
    sum(root);
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
    toSumTree(root);
    auto ans = inOrder(root);
    for (auto x : ans)
    {
        cout << x->data << " ";
    }
    return 0;
}
