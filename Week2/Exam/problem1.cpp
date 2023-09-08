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

    Node * temp1 = head;
    int large = INT_MIN;

    while (temp1 != NULL)
    {
        if (temp1->val > large)
        {
            large = temp1->val;
        }
        temp1 = temp1->next;
    }

    Node * temp2 = head;
    int small = INT_MAX;

    while (temp2 != NULL)
    {
        if (temp2->val < small)
        {
            small = temp2->val;
        }
        temp2 = temp2->next;
    }
    cout<<large<<" "<<small<<endl;
    
    
       
    return 0;
}