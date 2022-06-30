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

void postOrder(node* root){
    node* curr= root;
    stack <node*> s;
    s.push(curr);
    if(curr==NULL){
        return;
    }
    stack <int> o;
    while(!s.empty()){
        curr= s.top();
        s.pop();
        o.push(curr->data);
        if(curr->left!=NULL){
            s.push(curr->left);
        }
        if(curr->right!=NULL){
            s.push(curr->right);
        }
        
    }
    while(!o.empty()){
        cout<<o.top()<<" ";
        o.pop();
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
    postOrder(root);
    return 0;
}
