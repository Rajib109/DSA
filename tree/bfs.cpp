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
// Function for Breadth-First Search (BFS) or Level Order Traversal
void bfs(Node* root){
    if(root==nullptr) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left) q.push(curr->left);
        if(curr->right) q.push(curr->right);
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
    cout<<"BFS Traversal: ";
    bfs(root);
    cout << endl;
    
    return 0;
}