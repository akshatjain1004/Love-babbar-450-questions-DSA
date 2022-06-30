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

int main(int argc, char const *argv[])
{
    node* root = new node(1);
    root->left= new node(2);
    root->right= new node(3);
    root->left->left= new node(4);
    root->left->right= new node(5);

    node* temp= root;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->left;
    }
    return 0;
}
