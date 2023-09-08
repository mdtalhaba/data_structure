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

void incertTell(Node * &head, int val)
{
    Node * newNode = new Node(val);
    if(head == NULL)
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

void duplicateValue(Node * head)
{
    Node * temp = head;
    int cnt[101] ={0};

    while (temp != NULL)
    {
        cnt[temp->val]++;
        temp = temp->next;
    }

    int flag = 0;

    for (int i = 0; i < 101; i++)
    {
        if (cnt[i] > 1)
        {
            flag = 1;
            break;
        }
        
    }
    
    flag == 1 ? cout<<"YES"<<endl : cout<<"NO"<<endl;
}

int main()
{
    Node * head = NULL;

    while (true)
    {
        int val; cin>>val;
        if(val == -1) break;
        incertTell(head,val);
    }
    
    duplicateValue(head);
    
           
    return 0;
}