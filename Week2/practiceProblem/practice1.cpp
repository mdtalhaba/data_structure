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
    if (head == NULL)
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
    

    int cnt = 0;
    Node * temp = head;
    
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    cout<<cnt<<endl;
       
    return 0;
}