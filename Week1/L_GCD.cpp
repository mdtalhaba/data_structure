#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin>>a>>b;

    int temp;
    (a > b) ? temp=a : temp=b;

    int big;

    for (int i = 1; i <= temp; i++)
    {
        if (a%i==0 && b%i == 0) big = i;
        
    }

    cout<<big;
    
    return 0;
}