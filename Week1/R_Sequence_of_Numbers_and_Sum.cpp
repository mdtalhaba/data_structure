#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;

    while (true)
    {
        cin>>n>>m;
        if(n<=0 || m<=0) break;
        int bg,sm;
        (n>m)? bg=n : bg=m;
        (m>n)? sm=n : sm=m;

        int sum = 0;

        for (int i = sm; i <= bg; i++)
        {
            sum+=i;
            cout<<i<<" ";
        }
        cout<<"sum ="<<sum<<endl;
        
    }
    
    return 0;
}