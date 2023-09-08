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

void incertTell(Node * &head, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
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

int main()
{
    Node * head = NULL;

    while (true)
    {
        int val; cin>>val;
        if(val == -1) break;
        incertTell(head,val);
    }
    
    int sizeLL = 0;
    Node * temp = head;
    while (temp != NULL)
    {
        sizeLL++;
        temp = temp->next;
    }

    temp = head;
    if (sizeLL%2 == 1)
    {
        for (int i = 1; i < (sizeLL/2+1); i++) temp = temp->next;
        cout<<temp->val;
    }
    else
    {
        for (int i = 1; i < (sizeLL/2); i++) temp = temp->next;
        cout<<temp->val<<" "<<temp->next->val;
    }
    
    return 0;
}