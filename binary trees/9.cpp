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

void leftView(node*&root){
    if(root==NULL){
        return;
    }
    queue <node*> q;
    q.push(root);
    while(!q.empty()){
        int n= q.size();
        for(int i=0;i<n;i++){
            node*curr= q.front();
            q.pop();
            if(i==0){
                cout<<curr->data<<" ";
            }
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
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
    leftView(root);
    return 0;
}
