#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node * Next;

        Node(int val)
        {
            this->val = val;
            this->Next = NULL;
        }
};
int main()
{
    Node * head = new Node(100);
    Node * a = new Node(200);
    Node * b = new Node(300);
    Node * c = new Node(400);

    head->Next = a;
    a->Next = b;
    b->Next = c;

    Node * temp = head;

    while (temp != NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->Next;
    }
    

    // head->Next = a;

    // cout<<head->val<<endl;
    // cout<<head->Next->val;
       
    return 0;
}