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
    cout <<'\n';
}

node *reverse(node *head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    int count = 0;
    node *temp = head;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
        count++;
    }
    if (next == NULL)
    {
        return prev;
    }
    temp = reverse(next, k);
    head->next = temp;
    return prev;
}

int main(int argc, char const *argv[])
{
    int n,k;
    cin>>n;
    node*head= NULL;
    for(int i=0;i<n;i++){
        int r;
        cin>>r;
        insert(head,r);
    }
    cin>>k;
    head= reverse(head,k);
    show(head);
    return 0;
}
