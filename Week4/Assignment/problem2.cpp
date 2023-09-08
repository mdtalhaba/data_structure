#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;

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
        queue<int> newQ;
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