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

void preorder (Node)
{
    if(Node == null)
    {
        return;
    }
    print(Node->data);
    preorder(Node->left);
    preorder(Node->right);
}

void inorder (Node)
{
    if(Node == null)
    {
        return;
    }
    inorder(Node->left);
    print(Node->data);
    inorder(Node ->right);
}

void postorder (Node)
{
    if(Node==null)
    {
        return ;
    }
    postorder (Node->left);
    postorder (Node->right);
    print (Node->data)
}
int main()
{
        struct Node *root=new Node(1);
        root->left=new Node(2);
        root->right=new Node(5);
        root->right->left=new Node(6);  
    return 0;
}