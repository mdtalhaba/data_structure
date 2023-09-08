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

void print(Node * head)
{
    Node * temp = head;
    cout<<"L ->";
    while (temp != NULL)
    {
        cout<<" "<<temp->val;
        temp = temp->next;
    }
    cout<<endl;
}

void printReverse(Node * tail)
{
    Node * temp = tail;
    cout<<"R ->";
    while (temp != NULL)
    {
        cout<<" "<<temp->val;
        temp = temp->prev;
    }
    cout<<endl;
}

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
    if(pos > size(head))
    {
        cout<<"Invalid"<<endl;
        return;
    }
    else if (pos == 0)
    {
        insertAtHead(head,tail,val);
        print(head);
        printReverse(tail);
        return;
    }
    else if (pos == size(head))
    {
        insertAtTail(head,tail,val);
        print(head);
        printReverse(tail);
        return;
    }


    Node * newNode = new Node(val);
    Node * temp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
    print(head);
    printReverse(tail);
    
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    int q; cin>>q;

    while (q--)
    {
        int pos,val; cin>>pos>>val;
        insertAtAnyPosition(head,tail,pos,val);
    }

    
    
    
    
       
    return 0;
}