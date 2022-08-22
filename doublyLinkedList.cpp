#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int val)
    {
        prev = NULL;
        next = NULL;
        data = val;
    }
};
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}
void deletion(node *&head, int pos)
{
    if (pos == 1)
    {

        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (temp != NULL && count != pos) //count jo hai position tak nhi pauch jaiyenge

    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
        // last node ko jb delete karna hoga tb
        //  temp ke next ke prev ko access nhi kar paiyenge isley

        temp->next->prev = temp->prev;

    delete temp;
}
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);

    n->next = head; // agar head ==NUll hua to v to  n->next me NULL hi jaiyega
    if (head != NULL)
    {
        head->prev = n; // kyuki agar head ==NULL rha to prev ko access nhi kar paiyenge isley
    }
    head = n;
}
void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 0);
    display(head);
   // deletion(head,2);
    // deletion(head,3);
    deletion(head,1);
    
    display(head);

    return 0;
}
