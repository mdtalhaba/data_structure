#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node * next;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
        }
};

int main()
{
    Node * head = new Node(0);
    Node * tail = new Node(0);
    head->next = tail;

    int q; cin>>q;
    
    while (q--)
    {
        int pos,val; cin>>pos>>val;
        if (head->val == 0 && tail->val == 0)
        {
            head->val = val;
            tail->val = val;
        }
        else if (pos == 0)
        {
            head->val = val;
        }
        else
        {
            tail->val = val;
        }
 
        cout<<head->val<<" "<<tail->val<<endl;
    }
    
    return 0;
}