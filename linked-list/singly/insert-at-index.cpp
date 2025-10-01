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

void insertAtIndex(Node* &head, int data, int index) {
    Node* newNode = new Node(data);

    // Inserting at head (index 0)
    if (index == 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 0;

    while (temp != nullptr && count < index - 1) {
        temp = temp->next;
        count++;
    }

    if (temp == nullptr) {
        cout << "Index out of bounds" << endl;
        delete newNode; // cleanup
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
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