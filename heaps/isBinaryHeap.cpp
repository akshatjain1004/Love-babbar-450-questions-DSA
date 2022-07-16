#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
//{ Driver Code Starts

using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User Function template for C++

// Structure of node
/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    bool isComplete(struct Node* root, int count ,int ind) {
        if(root==NULL){
            return true;
        }
        else if(ind>=count){
            return false;
        }
        else{
            return isComplete(root->left,count, 2*ind+1) && isComplete(root->right,count,2*ind+2);
        }
        
    }
    int NodeCount(struct Node* root){
        if(root==NULL){
            return 0;
        }
        else{
            return 1+ NodeCount(root->left) + NodeCount(root->right);
        }
    }
    bool isMax(struct Node* root){
        if(root==NULL){
            return true;
        }
        else if((!root->left)&&(!root->right)){
            return true;
        }
        else if(!root->left && root->right){
            return isMax(root->right);
        }
        else if(root->left && !root->right){
            return isMax(root->left);
        }
        else if((root->data < root->left->data) || (root->data < root->right->data)){
            return false;
        }
        else{
            return isMax(root->left) && isMax(root->right);
        }
    }
    
    bool isHeap(struct Node* root) {
        int ind=0;
        int count= NodeCount(root);
       return isComplete(root,count,ind) && isMax(root);
    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        if (ob.isHeap(root))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
// } Driver Code Ends
