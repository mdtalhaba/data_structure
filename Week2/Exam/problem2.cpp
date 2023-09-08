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

    Node * temp1 = head_1;
    Node * temp2 = head_2;

    int flag = 0;

    if (listSize(head_1) == listSize(head_2))
    {
        while (temp1 != NULL || temp2 != NULL)
        {
            if (temp1->val == temp2->val)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
            
        }
        flag==1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO";
    }
    
    
    
       
    return 0;
}