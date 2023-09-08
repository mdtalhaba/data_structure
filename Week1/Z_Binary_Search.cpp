#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *v, int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r-l)/2;

        if(v[m]==x) return m;

        if (v[m] < x)
        {
            l = m+1;
        }
        else
        {
            r = m-1;
        }
        
    }
    return -1;
    
}
int main()
{
    int n,q; cin>>n>>q;

    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sort(v,v+n);

    while (q--)
    {
        int x; cin>>x;
        int a = binarySearch(v,0,n-1,x);
        (a == -1) ? cout<<"not found"<<endl : cout<<"found"<<endl;
    }
    
    return 0;
}