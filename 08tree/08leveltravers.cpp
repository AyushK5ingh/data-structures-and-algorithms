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

vector<vector<int>> levelorder(Node* root)
{
    vector<vector<int>> ans;
    if(root == null)
    {
        return ans;
    }
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        int size=q.size()
        vector<int> level;
        for(int i=0;u<size;i++)
        {
            Node *nod=q.front();
            q.pop();
            if(nod->left!=null) q.push(nod->left);
            if(nod->right !=null) q.push(nod->right);
            level.psuh_back(nod->val);
        }
        ans.push_back(nod->val);
    }
    return ans;
}
int main()
{
        struct Node *root=new Node(1);
        root->left=new Node(2);
        root->right=new Node(5);
        root->right->left=new Node(6);  
    return 0;
}