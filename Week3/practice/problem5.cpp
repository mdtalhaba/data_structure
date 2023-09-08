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

void sortList(Node * head)
{
    Node * i = head;
    while (i->next != NULL)
    {
        Node * j = i->next;
        while (j != NULL)
        {
            if (i->val > j->val)
            {
                swap(i->val,j->val);
            }
            j = j->next;
        }
        i = i->next;
    }
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

    sortList(head);
    
    print(head);

    return 0;
}