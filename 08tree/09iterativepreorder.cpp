#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
    Node (int  val)
    {
        data = val;
        left =right=null;
    }
}

vector iterativepreorder(Node* root)
{
     vector <int> preorder;
     if(root==null)
     {
         return preorder;
     }
     
     stack<Node*> st;
     st.push(root);
     while(!st.empty())
     {
         root = st.top();
         st.pop();
         preorder.push_back(root -> val);
         if(root->right!=null)
         {
             st.push_back(root->right);
         }
         if(root->left!=null)
         {
             st.push_back(root->left);
         }
     }
     return preorder;
}
int main()
{
        struct Node *root=new Node(1);
        root->left=new Node(2);
        root->right=new Node(5);
        root->right->left=new Node(6);  
    return 0;
}