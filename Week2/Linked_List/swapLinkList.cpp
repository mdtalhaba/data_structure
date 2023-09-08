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

void insertTell(Node * &head, int val)
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

void swapPosition(Node * &head, int pos)
{
    Node * temp = head;
    if (pos == 1)
    {
        Node * swapTmp = temp->next;
        temp->next = temp->next->next;
        swapTmp->next = temp;
        head = swapTmp;
        return;
    }
    
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    Node * swapTmp = temp->next->next;
    temp->next->next = temp->next->next->next;
    swapTmp->next = temp->next;
    temp->next = swapTmp;
    
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

    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val; cin>>val;
        insertTell(head,val);

    }

    Node * temp = head;

    for (int i = 0; i < n; i++)
    {
        while (temp->next != NULL)
        {
            if (temp->val > temp->next->val)
            {
                swap(temp->val,temp->next->val);
            }
            temp = temp->next;
        }
        temp = head;
    }
    

    // Reverse Link List

    // for (int i = n-1; i >=1 ; i--)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         swapPosition(head,j);
    //     }
        
    // }
    
    print(head);
       
    return 0;
}