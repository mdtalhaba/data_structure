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

void palindrom(Node * head, Node * tail)
{
    Node * i = head;
    Node * j = tail;

    int flag = 1;

    while (i != j && j->next != i)
    {
        if (i->val == j->val)
        {
            i = i->next;
            j = j->prev;
        }
        else
        {
            flag = 0;
            break;
        }
        
    }

    flag == 1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
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

    palindrom(head,tail);
           
    return 0;
}