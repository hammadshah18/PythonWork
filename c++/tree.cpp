#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* left;
    Node* right;

    Node(char value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

void preOrderTraversal(Node* node) {
    if (node == nullptr) return;
    
    cout << node->data << " ";   
    preOrderTraversal(node->left);  
    preOrderTraversal(node->right); 
}

void inOrderTraversal(Node* node) {
    if (node == nullptr) return;
    
    inOrderTraversal(node->left); 
    cout << node->data << " ";   
    inOrderTraversal(node->right); 
}

void postOrderTraversal(Node* node) {
    if (node == nullptr) return;
    
    postOrderTraversal(node->left);  
    postOrderTraversal(node->right);  
    cout << node->data << " ";      
}

int main() {
    Node* root = new Node('a');
    root->left = new Node('b');
    root->right = new Node('c');
    
    root->left->left = new Node('d');
    root->left->right = new Node('e');
    
    root->right->left = new Node('f');
    root->right->left->left = new Node('g');
    root->right->left->right = new Node('h');
    
    cout << " 23CS036 " << endl;
    
    cout << "Pre-order Traversal: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "In-order Traversal: ";
    inOrderTraversal(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    postOrderTraversal(root);
    cout << endl;

    return 0;
}