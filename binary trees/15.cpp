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

vector<int> diagonal(Node *root)
{
   vector<int> ans;
   if(root==NULL){
       return ans;
   }
   queue <Node*> q;
   q.push(root);
   while(!q.empty()){
       Node* curr= q.front();
       ans.push_back(curr->data);
       if(curr->left){
           q.push(curr->left);
       }
       Node*temp= curr;
       while(temp->right){
           temp= temp->right;
           ans.push_back(temp->data);
           if(temp->left){
               q.push(temp->left);
           }
       }
       q.pop();
   }
   return ans;
}

int main(int argc, char const *argv[])
{
    Node* root = new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    auto ans= diagonal(root);
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}
