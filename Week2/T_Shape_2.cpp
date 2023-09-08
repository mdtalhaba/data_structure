#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;

    int s=n-1,t=1;

    for (int i = 0; i < n; i++)
    {
        for (int j = s; j >= 1; j--)
        {
            cout<<" ";
        }
        for (int j = 0; j < t; j++)
        {
            cout<<"*";
        }
        t+=2;
        s--;
        cout<<endl;
        
    }
    
    return 0;
}