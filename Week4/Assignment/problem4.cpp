#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; cin>>q;
    while (q--)
    {
        stack<char> st1,st2;
        string s; cin>>s;
        for(char c:s)
        {
            if(c=='A')
            {
                st1.push(c);
            }
            else
            {
                st2.push(c);
            }
        }
        if(st1.size()==st2.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
       
    return 0;
}