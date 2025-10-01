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

int main()
{

    Node *head = nullptr;
    insertatbegin(head, 1);
    insertatbegin(head, 2);
    insertatbegin(head, 3);
    insertatbegin(head, 4);

    printlist(head);

    return 0;
}