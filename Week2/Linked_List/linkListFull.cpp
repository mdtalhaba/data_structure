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

void incertTell(Node * &head, int val)
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

void insertHead(Node * &head, int val)
{
    Node * newNode = new Node(val);
    Node * temp = head;
    newNode->Next = temp;
    head = newNode;
}

void incertPosition(Node * &head, int pos, int val)
{
    Node * newNode = new Node(val);
    Node * temp = head;
    if (pos == 1)
    {
        insertHead(head,val);
        return;
    }
    else if (pos <= 0)
    {
        cout<<"Invalid Incert Position"<<endl;
        return;
    }

    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->Next;
        if (temp == NULL)
        {
            cout<<"Invalid Incert Position"<<endl;
            return;
        }
        
    }
    newNode->Next = temp->Next;
    temp->Next = newNode;
    
}

void deletePosition(Node * &head, int pos)
{
    if (pos == 1)
    {
        Node * deleteNode = head;
        head = head->Next;
        delete deleteNode;
        return;
    }
    else if (pos <= 0)
    {
        cout<<"Invalid Delete Position"<<endl;
        return;
    }
    
    
    Node * temp = head;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->Next;
        if (temp->Next == NULL)
        {
            cout<<"Invalid Delete Position"<<endl;
            return;
        }
        
    }
    Node * deleteNode = temp->Next;
    temp->Next = temp->Next->Next;
    delete deleteNode;
    
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
        int val; cin>>val;
        incertTell(head,val);
    }

    int pos; cin>>pos;
    int val; cin>>val;
    incertPosition(head,pos,val);

    int delPos; cin>>delPos;
    deletePosition(head,delPos);
    
    printValue(head);
       
    return 0;
}