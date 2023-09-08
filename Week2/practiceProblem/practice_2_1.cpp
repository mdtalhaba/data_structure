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

void printRecurtion(Node * head)
{
    if(head == NULL) return;
    cout<<head->val<<" ";
    printRecurtion(head->next);
}
int main()
{
    Node * head_1 = NULL;
    Node * tail_1 = NULL;

    Node * head_2 = NULL;
    Node * tail_2 = NULL;
    
    while (true)
    {
        int val; cin>>val;
        if(val==-1) break;
        insertAtTail(head_1,tail_1,val);
    }

    while (true)
    {
        int val; cin>>val;
        if(val==-1) break;
        insertAtTail(head_2,tail_2,val);
    }

    (listSize(head_1) == listSize(head_2)) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    
       
    return 0;
}