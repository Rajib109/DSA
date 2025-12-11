#include <bits/stdc++.h>
using namespace std;

// Definition of a binary tree node

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

// Functions for tree traversals

// 1. Preorder Traversal RootLR
void preorder(Node* root){
    if(root==nullptr) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// 2. Inorder Traversal LRootR
void inorder(Node* root){
    if(root==nullptr) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// 3. Postorder Traversal LRRoot
void postorder(Node* root){
    if(root==nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

// Driver code 

using namespace std;

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

    return 0;
}