#include<iostream>
using namespace std;

class DCLLNode {
public:
    int data;
    DCLLNode* next;
    DCLLNode* prev;
    DCLLNode(int val) {
        data = val;
        next = prev = nullptr;
    }
};

void dcll_insert_end(DCLLNode*& head, int val) {
    DCLLNode* newNode = new DCLLNode(val);
    if (!head) {
        head = newNode;
        newNode->next = newNode->prev = newNode;
        return;
    }
    DCLLNode* tail = head->prev;
    tail->next = newNode;
    newNode->prev = tail;
    newNode->next = head;
    head->prev = newNode;
}

void dcll_print(DCLLNode* head) {
    if (!head) return;
    DCLLNode* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << "\n";
}

int main(){

    return 0;
}