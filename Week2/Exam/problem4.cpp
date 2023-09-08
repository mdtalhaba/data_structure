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

void insertAtTail(Node * &head, Node * &tail, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
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
    if(head == NULL) return;
    cout<<head->val<<" ";
    printRecurtion(head->next); 
}


void printRecurtionReverse(Node * head)
{
    if(head == NULL) return;
    printRecurtionReverse(head->next); 
    cout<<head->val<<" ";
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    while (true)
    {
        int val; cin>>val;
        if(val==-1) break;
        insertAtTail(head,tail,val);
    }

    printRecurtionReverse(head);
    cout<<endl;
    printRecurtion(head);
           
    return 0;
}