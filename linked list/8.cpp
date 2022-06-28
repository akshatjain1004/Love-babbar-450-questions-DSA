#include <iostream>
#include <unordered_map>

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

node * move( node *head) 
    {
        node* curr= head;
        while(curr->next->next!=NULL){
            curr= curr->next;
        }
        curr->next->next= head;
        head= curr->next;
        curr->next= NULL;
        return head;
    }

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        int r;
        cin >> r;
        insert(head, r);
    }
    head = move(head);
    show(head);
    return 0;
}
