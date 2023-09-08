#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> st;

    int q; cin>>q;
    while (q--)
    {
        int a; cin>>a;
        if(a==0)
        {
            string s; cin>>s;
            st.push(s);
        }
        else
        {
            if(a==1 && st.empty())
            {
                cout<<"Invalid"<<endl;
            }
            else
            {
                cout<<st.front()<<endl;
                st.pop();
            }
        }
    }
    
       
    return 0;
}