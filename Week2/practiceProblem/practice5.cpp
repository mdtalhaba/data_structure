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

int main()
{
    Node * head = NULL;

    while (true)
    {
        int val; cin>>val;
        if(val == -1) break;
        incertTell(head,val);
    }

    Node * temp = head;

    int flag = 1;

    while (temp->next != NULL)
    {
        if (temp->val <= temp->next->val)
        {
            
            temp = temp->next;
        }
        else
        {
            flag = 0;
            break;
        }
        
    }
    
    (flag == 1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    
    return 0;
}