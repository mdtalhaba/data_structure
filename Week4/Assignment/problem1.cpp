#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        list<int> l;
        void push(int val)
        {
            l.push_back(val);
        }
        void pop()
        {
            l.pop_back();
        }
        int top()
        {
            return l.back();
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            if(l.size()== 0) return true;
            else return false;
        }
};

class myQueue
{
    public:
        list<int> l;
        void push(int val)
        {
            l.push_back(val);
        }
        void pop()
        {
            l.pop_front();
        }
        int front()
        {
            return l.front();
        }
        int size()
        {
            return l.size();
        }
        bool empty()
        {
            if(l.size()== 0) return true;
            else return false;
        }
};

int main()
{
    myStack st;
    myQueue q;

    int n,m; cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        int val; cin>>val;
        st.push(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val; cin>>val;
        q.push(val);
    }
    
    if(st.size()!=q.size())
    {
        cout<<"NO";
    }
    else
    {
        myQueue newQ;
        while (!st.empty())
        {
            newQ.push(st.top());
            st.pop();
        }
        int flag = 1;
        while (!q.empty())
        {
            if(q.front()==newQ.front())
            {
                q.pop();
                newQ.pop();
            }
            else
            {
                flag =0;
                break;
            }
        }
        flag == 1 ? cout<<"YES" : cout<<"NO";
    }
       
    return 0;
}