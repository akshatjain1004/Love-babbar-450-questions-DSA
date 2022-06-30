#include <iostream>

using namespace std;

class node{
    public:
    node* left;
    node* right;
    int data;
    node(int val){
        left= NULL;
        right= NULL;
        data= val;
    }
};

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

void postOrder(node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
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
    node* temp= root;
    // while(temp!=NULL){
    //     cout<<temp->data<<" ";
    //     temp= temp->left;
    // }
    // preOrder(root);
    // inOrder(root);
    postOrder(root);
    return 0;
}
