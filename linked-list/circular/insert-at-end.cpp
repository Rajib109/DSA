#include<iostream>
using namespace std;

class CLLNode {
public:
    int data;
    CLLNode* next;
    CLLNode(int val) {
        data = val;
        next = nullptr;
    }
};

void cll_insert_end(CLLNode*& head, int val) {
    CLLNode* newNode = new CLLNode(val);
    if (!head) {
        head = newNode;
        newNode->next = head;
        return;
    }
    CLLNode* temp = head;
    while (temp->next != head) temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

void cll_print(CLLNode* head) {
    if (!head) return;
    CLLNode* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << "\n";
}

int main(){

    CLLNode*head=nullptr;
    cll_insert_end(head,1);
    cll_insert_end(head,2);

    cll_print(head);
    return 0;
}