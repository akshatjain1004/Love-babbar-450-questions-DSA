#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
}

void show(node *head)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
    cout << '\n';
}

bool detectLoop(node *head)
{
    node *t = head;
    node *h = head->next;
    bool temp = false;

    if (h == NULL)
    {
        return 0;
    }

    while (h->next != NULL && h->next->next != NULL)
    {
        t = t->next;
        h = h->next->next;
        if (h == t)
        {
            return 1;
        }
        else
        {
            continue;    
        }
    }
    return 0;
}
void makeCycle(node*&head){
    node*temp= head;
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next= head;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    node* head= NULL;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        insert(head,r);
    }
    makeCycle(head);
    cout<<detectLoop(head);
    return 0;
}
