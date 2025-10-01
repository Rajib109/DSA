#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
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
    newnode->prev = temp;
}

void printforward(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << "null" << endl;
}
void prinbackward(Node *head)
{
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    while (temp)
    {
        cout << temp->data << "<->";
        temp = temp->prev;
    }
    cout << "null";
}
int main()
{
    Node *head = nullptr;
    insertatend(head, 1);
    insertatend(head, 2);
    printforward(head);
    prinbackward(head);
    return 0;
}