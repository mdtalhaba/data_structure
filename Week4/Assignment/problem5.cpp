#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; cin>>q;
    while (q--)
    {
        stack<char> st;
        int n; cin>>n;
        for (int i = 0; i < n; i++)
        {
            char c; cin>>c;
            if(st.empty()) st.push(c);
            else if(st.top()=='Y' || st.top()=='P' || st.top()=='C') st.push(c);
            else
            {
                if(c==st.top()) st.pop();
                else if(st.top()=='R')
                {
                    st.pop();
                    if(c=='G')
                    {
                        if(!st.empty() && st.top()=='Y') st.pop();
                        else st.push('Y');
                    }
                    else if (c=='B')
                    {
                        if(!st.empty() && st.top()=='P') st.pop();
                        else st.push('P');
                    }
                    
                }
                else if(st.top()=='G')
                {
                    st.pop();
                    if(c=='R')
                    {
                        if(!st.empty() && st.top()=='Y') st.pop();
                        else st.push('Y');
                    }
                    else if (c=='B')
                    {
                        if(!st.empty() && st.top()=='C') st.pop();
                        else st.push('C');
                    }
                    
                }
                else if(st.top()=='B')
                {
                    st.pop();
                    if(c=='R')
                    {
                        if(!st.empty() && st.top()=='P') st.pop();
                        else st.push('P');
                    }
                    else if (c=='G')
                    {
                        if(!st.empty() && st.top()=='C') st.pop();
                        else st.push('C');
                    }
                    
                }
            }
            
        }
        stack<char> re;
        while (!st.empty())
        {
            re.push(st.top());
            st.pop();
        }

        while (!re.empty())
        {
            cout<<re.top();
            re.pop();
        }
        cout<<endl;
    }
    
       
    return 0;
}