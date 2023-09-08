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

int listSize(Node * head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void findMiddle(Node * head)
{
    Node * temp = head;

    if (listSize(head)%2 == 1)
    {
        for (int i = 1; i <= listSize(head)/2; i++)
        {
            temp = temp->next;
        }
        cout<<temp->val<<endl;
    }
    else
    {
        for (int i = 1; i < listSize(head)/2; i++)
        {
            temp = temp->next;
        }
        cout<<temp->val<<" "<<temp->next->val<<endl;
    }
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

    Node * i = head;
    while (i->next != NULL)
    {
        Node * j = i->next;
        while (j != NULL)
        {
            if (i->val < j->val)
            {
                swap(i->val,j->val);
            }
            j = j->next;
        }
        i = i->next;
    }

    findMiddle(head);
           
    return 0;
}