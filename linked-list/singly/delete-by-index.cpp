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
        this->next = NULL;
    }
};

void insertatend(Node *&head, int data)
{
    Node *Newnode = new Node(data);

    if (head == NULL)
    {
        head = Newnode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = Newnode;
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

void deletebyindex(Node * &head, int index)
{
    if (head == nullptr)
    {
        cout << "list is empty";
        return;
    }
    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node *temp = head;
    int count = 0;
    while (temp != nullptr && count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp == nullptr || temp->next == nullptr)
    {
        cout << "index out of range";
        return;
    }
    Node *toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
}
int main()
{

    Node *head = NULL;

    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    printlist(head);

    deletebyindex(head, 0);
    cout << endl;

    printlist(head);

    return 0;
}