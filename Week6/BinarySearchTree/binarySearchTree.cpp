#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * left;
        Node * right;

        Node(int val)
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void printLevelOrder(Node * root)
{
    queue<Node *> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node * tmp = q.front();
        q.pop();

        cout<<tmp->val<<" ";

        if(tmp->left) q.push(tmp->left);
        if(tmp->right) q.push(tmp->right);
    }
    
}

bool binarySearchTree(Node * root, int x)
{
    if(root==NULL) return false;
    if(root->val==x) return true;

    if(x<root->val)
    {
        return binarySearchTree(root->left,x);
    }
    else
    {
        return binarySearchTree(root->right,x);
    }
}

Node * inputTree()
{
    int val; cin>>val;
    Node * root;
    if(val==-1) root=NULL;
    else root = new Node(val);
    queue<Node *> q;
    if(root) q.push(root);
    while (!q.empty())
    {
        Node * tmp = q.front();
        q.pop();

        int l,r; cin>>l>>r;

        Node * left;
        Node * right;

        if(l==-1) left = NULL;
        else left = new Node(l);

        if(r==-1) right = NULL;
        else right = new Node(r);

        tmp->left = left;
        tmp->right = right;

        if(tmp->left) q.push(tmp->left);
        if(tmp->right) q.push(tmp->right);
    }
    return root;
}
int main()
{
    Node * root = inputTree();
    printLevelOrder(root);
    cout<<endl;
    bool ans = binarySearchTree(root,32);
    if(ans) cout<<"Found";
    else cout<<"Not Found";
       
    return 0;
}