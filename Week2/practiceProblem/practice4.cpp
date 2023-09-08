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

void print(Node * head)
{
    Node * temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void incertTell(Node * &head, int val)
{
    Node * newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node * temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
}

void incertPosition(Node * &head, int pos, int val)
{
    Node * newNode = new Node(val);
    if (pos == 0)
    {
        newNode->next = head;
        head = newNode;
        print(head);
        return;
    }
    
    Node * temp = head;
    for (int i = 0; i < pos-1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout<<"Invalid"<<endl;
            return;
        }
        
    }
    newNode->next = temp->next;
    temp->next = newNode;
    print(head);
    
}

int main()
{
    Node * head = NULL;

    while (true)
    {
        int val; cin>>val;
        if(val == -1) break;
        incertTell(head,val);
    }

    int q; cin>>q;

    while (q--)
    {
        int pos,val; cin>>pos>>val;
        incertPosition(head,pos,val);
    }
  
       
    return 0;
}