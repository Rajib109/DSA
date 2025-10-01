#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void insertatbegin(Node *&head, int data)
{
    Node *newnode = new Node(data);
    newnode->next = head;
    head = newnode;
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

void deletenode(Node *&head, int value)
{
    if (head == nullptr)
    {
        cout << "list is empty";
        return;
    }
    if (head->data == value)
    {
        Node *todelete = head;
        head = head->next;
        delete todelete;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr && temp->next->data != value)
    {
        temp = temp->next;
    }
    if (temp->next == nullptr)
    {
        cout << "value not found";
        return;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main()
{

    Node *head = nullptr;
    insertatbegin(head, 1);
    insertatbegin(head, 2);
    insertatbegin(head, 3);
    insertatbegin(head, 4);

    printlist(head);

    deletenode(head,3);

    printlist(head);

    return 0;
}