#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        set<int, greater<int>> s;
        int n; cin>>n;
        for (int i = 0; i < n; i++)
        {
            int val; cin>>val;
            s.insert(val);
        }

        for(int i:s) cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}