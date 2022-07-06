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

void solve(Node *root, int h, int &ma, int &ans)
{
    if (!root)
    {
        return;
    }
    if (ans == 0)
    {
        return;
    }
    if (!root->left && !root->right)
    {
        if (ma == -1)
        {
            ma = h;
            return;
        }
        else if (ma != h)
        {
            ans = 0;
            return;
        }
        return;
    }
    solve(root->left, h + 1, ma, ans);
    solve(root->right, h + 1, ma, ans);
}
bool check(Node *root)
{
    int ma = -1;
    int h = 0;
    int ans = 1;
    solve(root, h, ma, ans);
    return ans;
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
    cout<<check(root)<<'\n';
    return 0;
}
