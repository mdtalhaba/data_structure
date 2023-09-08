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

void insertAtTail(Node * &head, Node * &tail, int val)
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

void insertAtHead(Node *&head, Node *&tail, int val)
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

void insertAtAnyPosition(Node * &head, Node * &tail, int pos, int val)
{
    if(pos > size(head)+1)
    {
        cout<<"Invalid Position"<<endl;
        return;
    }
    else if (pos == 1)
    {
        insertAtHead(head,tail,val);
        return;
    }
    else if (pos == size(head)+1)
    {
        insertAtTail(head,tail,val);
        return;
    }


    Node * newNode = new Node(val);
    Node * temp = head;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
    
}

void print(Node * head)
{
    Node * temp = head;

    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

void printReverse(Node * tail)
{
    Node * temp = tail;

    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    while (true)
    {
        int val; cin>>val;
        if(val == -1) break;
        insertAtTail(head,tail,val);
    }

    int pos,val; cin>>pos>>val;
    insertAtAnyPosition(head,tail,pos,val);

    print(head);
    cout<<endl;
    printReverse(tail);
    cout<<endl<<size(head);
    
    
    
       
    return 0;
}