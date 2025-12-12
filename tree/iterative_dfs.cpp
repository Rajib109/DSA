#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node*left;
    Node*right;
    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }
};

void preorder(Node* root) {
    if (!root) return;

    stack<Node*> st;
    st.push(root);

    while (!st.empty()) {
        Node* node = st.top(); st.pop();
        cout << node->data << " ";

        if (node->right) st.push(node->right);
        if (node->left)  st.push(node->left);
    }
}


void postorder(Node* root) {
    if (!root) return;

    stack<Node*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
        Node* node = st1.top();
        st1.pop();
        st2.push(node);

        if (node->left) st1.push(node->left);
        if (node->right) st1.push(node->right);
    }

    while (!st2.empty()) {
        cout << st2.top()->data << " ";
        st2.pop();
    }
}


 void inorder(Node* root) {
    stack<Node*> st;
    Node* curr = root;

    while (curr || !st.empty()) {
        while (curr) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top(); st.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}


int main() {

    Node * root = new Node(1);
    Node * n1 = new Node(2);
    Node * n2 = new Node(3);
    root->left = n1;
    root->right = n2;
    Node * n3 = new Node(4);
    Node * n4 = new Node(5);
    n1->left = n3;
    n1->right = n4;
    Node * n5 = new Node(6);
    Node * n6 = new Node(7);
    n2->left = n5;
    n2->right = n6;
    cout<<"Preorder Traversal: ";
    preorder(root);
    cout << endl;
    cout<<"Postorder Traversal: ";
    postorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    
    return 0;
}