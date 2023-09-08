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
void levelOrder(Node * root)
{
    int x; cin>>x;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while (!q.empty())
    {
        pair<Node*,int> tmp = q.front();
        Node * node = tmp.first;
        int level = tmp.second;
        q.pop();

        if(level==x) v.push_back(node->val);

        if(node->left) q.push({node->left,level+1});
        if(node->right) q.push({node->right,level+1});
    }
    
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

   levelOrder(root);

   if(v.empty()) cout<<"Invalid";
   else for(int i:v) cout<<i<<" ";
       
    return 0;
}