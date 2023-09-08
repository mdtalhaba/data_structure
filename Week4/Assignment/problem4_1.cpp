#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; cin>>q;
    while (q--)
    {
        stack<char> st;
        string s; cin>>s;
        for(char c:s)
        {
            if(st.empty())
            {
                st.push(c);
            }
            else if(st.top()=='A' && c=='B')
            {
                st.pop();
            }
            else if(st.top()=='B' && c=='A')
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
            
        }
        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}