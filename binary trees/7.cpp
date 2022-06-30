#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

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

void preOrder(node* root){
    node* curr= root;
    stack <node*> s;
    s.push(curr);
    if(curr==NULL){
        return;
    }
    while(!s.empty()){
        curr= s.top();
        s.pop();
        cout<<curr->data<<" ";
        if(curr->right!=NULL){
            s.push(curr->right);
        }
        if(curr->left!=NULL){
            s.push(curr->left);
        }
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
    preOrder(root);
    return 0;
}
