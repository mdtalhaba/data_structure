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

void incertTail(Node * &head, Node * &tail, int val)
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

void recurtion(Node * head)
{
    if(head == NULL) return;
    recurtion(head->next);
    cout<<head->val<<" ";
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

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val; cin>>val;
        incertTail(head,tail,val);
    }

    // print(head);
    recurtion(head);
    
       
    return 0;
}