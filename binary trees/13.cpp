#include <iostream>
#include <algorithm>
#include <stack>
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

vector <int> zigZagTraversal(node* root)
    {
    	bool temp= true;
    	queue <node*> q;
    	vector <int> ans;
    	q.push(root);
    	while(!q.empty()){
    	    int n= q.size();
    	    stack <int> s;
    	    for(int i=0;i<n;i++){
    	        node* curr= q.front();
    	        q.pop();
    	        if(curr->left){
    	           q.push(curr->left);
    	        }
    	        if(curr->right){
    	           q.push(curr->right); 
    	        }
    	        if(temp){
    	            ans.push_back(curr->data);
    	        }
    	        else{
    	            s.push(curr->data);
    	        }
    	        
    	    }
    	    temp= !temp;
    	    while(!s.empty()){
    	        ans.push_back(s.top());
    	        s.pop();
    	    }
    	}
    	return ans;
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
    zigZagTraversal(root);
    return 0;
}
