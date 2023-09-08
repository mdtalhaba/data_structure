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

int size(Node * head)
{
    Node * temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void twoListEqual(Node * head1, Node * head2)
{
    Node * temp1 = head1;
    Node * temp2 = head2;

    int flag = 1;
    
    if (size(temp1) == size(temp2))
    {
        while (temp1 != NULL)
        {
            if (temp1->val == temp2->val)
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    else flag = 0;

    flag == 1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
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

void printReverse(Node * tail)
{
    Node * temp = tail;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    
}

int main()
{
    Node * head1 = NULL;
    Node * tail1 = NULL;

    Node * head2 = NULL;
    Node * tail2 = NULL;

    while (true)
    {
        int val; cin>>val;
        if(val == -1) break;
        insertAtTail(head1,tail1,val);

    }

    while (true)
    {
        int val; cin>>val;
        if(val == -1) break;
        insertAtTail(head2,tail2,val);

    }

    twoListEqual(head1,head2);
       
    return 0;
}