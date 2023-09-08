#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; cin>>q;

    while (q--)
    {
        int n,m; cin>>n>>m;

        int bg = max(n,m);
        int sm = min(n,m);

        int sum = 0;

        for (int i = sm+1; i < bg; i++)
        {
            if(i%2==1) sum+=i;
        }
        cout<<sum<<endl;

    }
    
       
    return 0;
}