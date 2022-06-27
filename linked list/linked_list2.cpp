#include <iostream>
#include <list>
#include <algorithm>


using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data= val;
        next= NULL;
    }
};

void insert(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
    }
    else{
        node* temp= head;
        while(temp->next!=NULL){
            temp= temp->next;
        }
        temp->next= n;
    }
}

void insertAtHead(node*&head,int val){
    node*n = new node(val);
    n->next= head;
    head= n;
}

void deleteNode(int val,node*&head){
    node*temp= head;
    while(temp->next->data!=val && temp->next!=NULL){
        temp= temp->next;
    }
    if(temp->next==NULL){
        cout<<"No such node"<<'\n';
    }
    else{
        node*n= temp->next->next;
        temp->next= n;
    }
}

void show(node* head){
    node* temp= head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<"->";
    cout<<"NULL";
}

int main(int argc, char const *argv[])
{
    node* head= NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        insert(head,r);
    }
    insertAtHead(head,5);
    deleteNode(2,head);
    show(head);
    
    cout<<'\n'<<head->data;
    return 0;
}
