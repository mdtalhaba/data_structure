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

void duplicateDelete(Node * head)
{
    if(head == NULL || head->next == NULL) return;
    Node * temp = head;
    while (temp->next != NULL)
    {
        if (temp->val == temp->next->val)
        {
            Node * del = temp->next;
            temp->next = del->next;
            delete del;
        }
        if(temp->next != NULL && temp->val != temp->next->val)
        {
            temp = temp->next;
        }
        
        
    }
    
}

void sortedList(Node * head)
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

    sortedList(head);
    duplicateDelete(head);
    
    print(head);
       
    return 0;
}