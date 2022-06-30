#include <iostream>
#include <stack>
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

void inOrder(node* root){
    node* curr= root;
    stack <node*> s;
    while(!s.empty()||curr!=NULL){
        if(curr!=NULL){
            s.push(curr);
            curr= curr->left;
        }
        else{
            curr= s.top();
            cout<<curr->data<<" ";
            s.pop();
            curr= curr->right;
            
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
    inOrder(root);
    return 0;
}
