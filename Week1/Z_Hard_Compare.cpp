#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    long double x = pow(a*1.0,b*1.0);
    long double y = pow(c*1.0,d*1.0);

    if (a > c && b >= d)
    {
        cout<<"YES";
    }
    else if (a+b < c+d)
    {
        cout<<"NO";
    }
    
    else if (x > y)
    {
        cout<<"YES";
    } else
    {
        cout<<"NO";
    }
    
        
    return 0;
}