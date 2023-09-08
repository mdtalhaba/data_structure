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

void incertValue(Node * &head, int val)
{
    Node * newNode = new Node(val);
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

void incertPosition(Node * &head, int pos, int val)
{
    Node * newNode = new Node(val);
    Node * temp = head;
    if (pos==1)
    {
        newNode->Next=temp;
        head = newNode;
        return;
    }
    
    
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->Next;
    }
    newNode->Next = temp->Next;
    temp->Next = newNode;
    
}

void printValue(Node * head)
{
    Node * temp = head;
    
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->Next;
    }
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

    int pos; cin>>pos;
    int val; cin>>val;
    incertPosition(head,pos,val);

    
    printValue(head);
       
    return 0;
}