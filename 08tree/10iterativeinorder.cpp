#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; // Added semicolon

vector<int> iterativeInorder(Node* root) {
    vector<int> inorder;
    stack<Node*> st;
    Node* curr = root;

    // Logic: Move to the leftmost node, pushing to stack along the way.
    // When you hit nullptr, pop, record data, and move to the right child.
    while (curr != nullptr || !st.empty()) {
        while (curr != nullptr) {
            st.push(curr);
            curr = curr->left;
        }

        curr = st.top();
        st.pop();
        
        inorder.push_back(curr->data); // Used .data instead of .val
        curr = curr->right;
    }
    return inorder;
}

int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->right->left = new Node(6);

    vector<int> result = iterativeInorder(root);

    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}