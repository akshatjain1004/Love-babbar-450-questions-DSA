#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    node(int val){
        data= val;
        left= NULL;
        right= NULL;
    }
};

void levelOrder(node* root){
    queue <node*> q;
    q.push(root);
    while (!q.empty())
    {
        node* curr= q.front();
        if(curr->left!= NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
        cout<<curr->data<<" ";
        q.pop();
    }
    
}

int main(int argc, char const *argv[])
{
    node* root = new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left= new node(4);
    root->left->right= new node(5);
    root->right->left= new node(6);
    root->right->right= new node(7);
    levelOrder(root);
    return 0;
}
