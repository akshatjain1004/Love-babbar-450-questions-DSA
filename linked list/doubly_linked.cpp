#include <iostream>

using namespace std;

class node{
    public:
    node* next;
    node* prev;
    int data;
    node(int val){
        data = val;
        next= NULL;
        prev= NULL;
    }
};

void insertAtTail(node* &head,int val){
    node*n = new node(val);
    if(head==NULL){
        head=n ;
    }
    else{
        node* temp= head;
        while(temp->next!=NULL){
            temp= temp->next;
        }
        temp->next= n;
        n->prev= temp;
    }
}

void show(node* head){
    node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}
void reverseShow(node* head){
    node* temp= head;
    while(temp->next!= NULL){
        temp= temp->next;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->prev;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    node* head= NULL;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        insertAtTail(head,val);
    }
    // show(head);
    reverseShow(head);
    return 0;
}
