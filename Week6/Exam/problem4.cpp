#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int val; cin>>val;
        pq.push(val);
    }

    int t; cin>>t;
    while (t--)
    {
        int x; cin>>x;
        if(x==0)
        {
            int val; cin>>val;
            pq.push(val);
            cout<<pq.top()<<endl;
        }
        else if(x==1)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else
            {
                cout<<pq.top()<<endl;
            }
        }
        else
        {
            if(!pq.empty())
            {
                pq.pop();
                if(pq.empty())
                {
                    cout<<"Empty"<<endl;
                }
                else
                {
                    cout<<pq.top()<<endl;
                }
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }
    
    return 0;
}