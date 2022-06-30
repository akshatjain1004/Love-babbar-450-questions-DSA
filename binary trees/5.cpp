#include <iostream>
#include <algorithm>
#include <queue>
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

void mirror(node*&root){
    if(root==NULL){
        return;
    }
    else if(root->left==NULL && root->right==NULL){
        return;
    }
    else{
        node* temp= root->left;
        root->left= root->right;
        root->right= temp;
        mirror(root->left);
        mirror(root->right);
    }
}
void preOrder(node* root){
    cout<<root->data<<" ";
    if(root->left!=NULL){
        preOrder(root->left);
    }
    if(root->right!=NULL){
        preOrder(root->right);
    }
}
void inOrder(node* root){
    
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
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
    cout<<endl;
    mirror(root);
    inOrder(root);
    return 0;
}