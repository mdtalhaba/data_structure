#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q; cin>>n>>q;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    vector<long long int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = v[i]+pre[i-1];
    }
    
    while (q--)
    {
        long long int l,r;
        cin>>l>>r;
        l--;
        r--;
        long long int sum = 0;
        if (l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r]-pre[l-1];
        }
        
        cout<<sum<<endl;
    }
    
    return 0;
}