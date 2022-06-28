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

node *removeDuplicates(node *head)
{

    node *curr = head;
    node *next;
    if (curr == NULL)
    {
        return head;
    }
    while (curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        {
            next = curr->next->next;
            curr->next = next;
        }
        else
        {
            curr = curr->next;
        }
    }
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
    head = removeDuplicates(head);
    show(head);
    return 0;
}
