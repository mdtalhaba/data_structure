#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node * next;
        Node * prev;

        Node(string val)
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

void insertAtTail(Node * &head, Node * &tail, string val)
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

void address(Node * head, Node * &tail, string word)
{
    if(word == "visit") return;
    Node * temp = head;
    while (temp != NULL)
    {
        if(temp->val == word)
        {
            tail = temp;
            cout<<word<<endl;
            return;
        }
        temp = temp->next;
    }
    
    if(word == "prev" && tail->prev != NULL)
    {
        tail = tail->prev;
        cout<<tail->val<<endl;
    }
    else if (word == "next" && tail->next != NULL)
    {
        tail = tail->next;
        cout<<tail->val<<endl;
    }
    else
    {
        cout<<"Not Available"<<endl;
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
        string val; cin>>val;
        if(val == "end") break;
        insertAtTail(head,tail,val);
    }
    int q; cin>>q;
    cin.ignore();
    while (q--)
    {
        string addr; getline(cin,addr);
        stringstream ss(addr);
        string word;
        while (ss>>word)
        {
            address(head,tail,word);
        }
    }
           
    return 0;
}