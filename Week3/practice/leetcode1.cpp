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

void removeElements(Node* &head, int val) 
{
        if(head == NULL) return;
        while (head->val == val)
        {
            Node * deleteNode = head;
            head = head->next;
            delete deleteNode;
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
    int val; cin>>val;
    removeElements(head,val);
    print(head);
           
    return 0;
}