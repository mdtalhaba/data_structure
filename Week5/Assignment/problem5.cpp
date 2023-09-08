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

int treeHeight(Node * root)
{
    if(root==NULL) return 0;

    int l = treeHeight(root->left);
    int r = treeHeight(root->right);
    return max(l,r)+1;
}

int countNode(Node * root)
{
    if(root==NULL) return 0;

    int l = countNode(root->left);
    int r = countNode(root->right);
    return l+r+1;
}

Node* inputTree()
{
    int val; cin>>val;
    Node * root;
    if(val==-1) root=NULL;
    else root= new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node * f = q.front();
        q.pop();

        int l,r; cin>>l>>r;
        Node * left;
        Node * right;

        if(l==-1) left=NULL;
        else left = new Node(l);

        if(r==-1) right=NULL;
        else right = new Node(r);

        f->left=left;
        f->right=right;

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return root;
}

int main()
{
    Node* root = inputTree();

    int level = treeHeight(root);
    int cnt = countNode(root);

    int ans = pow(2,level)-1;
    if(ans == cnt) cout<<"YES";
    else cout<<"NO";       
    return 0;
}