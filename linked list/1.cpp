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

void iterReverse(node* &head){
    node* prev= NULL;
    node* curr= head;
    node* nextptr;
    while(curr!=NULL){
        nextptr= curr->next;
        curr->next= prev;
        prev= curr;
        curr= nextptr;
    }
    head= prev;
}

node* recReverse(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newHead= recReverse(head->next);
    head->next->next= head;
    head->next= NULL;
    return newHead;
}

void show(node* head){
    node* temp= head;
    while(temp->next!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<"->";
    cout<<"NULL"<<'\n';
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
    iterReverse(head);
    show(head);
    head= recReverse(head);
    show(head);
    cout<<head->data;
    return 0;
}
