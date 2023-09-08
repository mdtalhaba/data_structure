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

Node * reverse(Node * &head)
{
    if(head == NULL || head->next == NULL) 
    {
        return head;
    }
    Node * newHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;

}
// void reverse(Node * &head, Node * cur)
// {
//     if(cur->next == NULL) 
//     {
//         head = cur;
//         return;
//     }
//     reverse(head,cur->next);
//     cur->next->next = cur;
//     cur->next = NULL;

// }

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
    Node * ans = reverse(head);
    // reverse(head,head);
    print(ans);
           
    return 0;
}