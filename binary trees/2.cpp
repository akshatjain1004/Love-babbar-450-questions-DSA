#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <stack>

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

void reverseLevelOrder(node* root){
    queue <node*> q;
    q.push(root);
    stack <int> s;
    while (!q.empty())
    {
        node* curr= q.front();
        if(curr->right!=NULL){
            q.push(curr->right);
        }
        if(curr->left!= NULL){
            q.push(curr->left);
        }
        
        s.push(curr->data);
        q.pop();
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
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
    reverseLevelOrder(root);
    return 0;
}
