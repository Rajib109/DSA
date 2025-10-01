#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertatend(Node *&head, int data)
{
    Node *newnode = new Node(data);
    if (head == nullptr)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void printlist(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void reverselist(Node *&head)
{
    Node *prev = nullptr;
    Node *curr = head;
    Node *next = nullptr;

    while (curr != nullptr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head=prev;
}

using namespace std;
int main()
{

    Node *head = nullptr;
    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    insertatend(head, 5);

    printlist(head);
    cout << endl;

    reverselist(head);
    printlist(head);

    return 0;
}