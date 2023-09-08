#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin>>a>>b;

    if (a+1==b) cout<<"YES";
    else if (b+1==a) cout<<"YES";
    else if (a==b && a>0 && b>0) cout<<"YES";
    else cout<<"NO";
       
    return 0;
}