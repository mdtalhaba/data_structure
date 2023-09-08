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

Node * convert(int ar[],int l,int r)
{
    if(l>r) return NULL;
    int mid = (l+r)/2;
    Node * root = new Node(ar[mid]);
    Node * leftRoot = convert(ar,l,mid-1);
    Node * rightRoot = convert(ar,mid+1,r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}

int main()
{
    int n; cin>>n;
    int ar[n];
    for (int i = 0; i < n; i++) cin>>ar[i];

    Node * root = convert(ar,0,n-1);
    printLevelOrder(root);
    
       
    return 0;
}