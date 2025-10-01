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

void printlist(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void reverse(Node *&head) {
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node* current = head;
    Node* prev = nullptr;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;   // save next
        current->next = prev;   // reverse pointer
        prev = current;         // move prev forward
        current = next;         // move current forward
    }

    head = prev; // new head is prev
}


int main()
{

    Node *head = NULL;

    insertatend(head, 1);
    insertatend(head, 2);
    insertatend(head, 3);
    insertatend(head, 4);
    printlist(head);

    cout << endl;

    reverse(head);
    printlist(head);

    return 0;
}