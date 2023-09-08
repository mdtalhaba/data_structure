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

void reverse(Node * head,Node * & head2,Node * &tail2)
{
    if(head == NULL) return;
    reverse(head->next,head2,tail2);
    insertAtTail(head2,tail2,head->val);
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

    Node * head2 = NULL;
    Node * tail2 = NULL;

    while (true)
    {
        int val; cin>>val;
        if(val == -1) break;
        insertAtTail(head,tail,val);
    }
    
    reverse(head,head2,tail2);

    Node * temp = head;
    Node * temp2 = head2;

    bool flag = true;

    while (temp != NULL)
    {
        if (temp->val == temp2->val)
        {
            temp = temp->next;
            temp2 = temp2->next;
        }
        else
        {
            flag = false;
            break;
        }
        
    }

    flag == true ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    
       
    return 0;
}