#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * Next;

        Node(int val)
        {
            this->val = val;
            this->Next = NULL;
        }
};
void incertValue(Node * &head, int v)
{
    Node * newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node * temp = head;

    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNode;
    
}
int main()
{
    Node * head = NULL;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int v; cin>>v;
        incertValue(head,v);
    }

    Node * temp = head;
    
    while (temp != NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->Next;
    }
    
       
    return 0;
}