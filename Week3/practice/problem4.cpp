#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * next;
        Node * prev;

        Node(int val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insertAtTail(Node * &head, Node *&tail, int val)
{
    Node * newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertPosition(Node * head,int pos, int val)
{
    Node * newNode = new Node(val);
    Node * temp = head;
    for (int i = 0; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

void insertHead(Node * &head, Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

int size(Node * head)
{
    Node * temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}


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

void printReverse(Node * tail)
{
    Node * temp = tail;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    int q; cin>>q;

    while (q--)
    {
        int pos,val; cin>>pos>>val;
        if (pos > size(head))
        {
            cout<<"Invalid"<<endl;
        }
        else if (pos == 0)
        {
            insertHead(head,tail,val);
            print(head);
            printReverse(tail);
        }
        else if (pos == size(head))
        {
            insertAtTail(head,tail,val);
            print(head);
            printReverse(tail);
        }
        else
        {
            insertPosition(head,pos,val);
            print(head);
            printReverse(tail);
        }
        
    }
    
    
       
    return 0;
}