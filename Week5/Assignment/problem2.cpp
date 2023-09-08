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
vector<int> v;
void preOrder(Node * root)
{
    if(root==NULL) return;

    if(root->left==NULL && root->right==NULL)
    {
        v.push_back(root->val);
    }
    preOrder(root->left);
    preOrder(root->right);
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

    preOrder(root);

    int mx=INT_MIN;
    int mn=INT_MAX;

    for(int i:v)
    {
        if(i>mx) mx=i;
        if(i<mn) mn=i;
    }

    cout<<mx<<" "<<mn;
       
    return 0;
}