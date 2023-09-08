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

void incertAtTail(Node * &head, Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void printRecurtion(Node * head)
{
    if (head == NULL) return;
    cout<<head->val<<" ";
    printRecurtion(head->next);
    
}


int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val; cin>>val;
        incertAtTail(head,tail,val);
    }

    // for (Node * i = head; i->next != NULL; i=i->next)
    // {
    //     for (Node * j = i->next; j != NULL; j=j->next)
    //     {
    //         if (i->val > j->val) swap(i->val,j->val);
    //     }
        
    // }

    

    Node * i = head;
    while (i->next != NULL)
    {
        Node * j = i->next;
        while (j != NULL)
        {
            if (i->val < j->val) swap(i->val,j->val);
            j = j->next;
        }
        i = i->next;
    }
    
    
    
    printRecurtion(head);

 
    return 0;
}