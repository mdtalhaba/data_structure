#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        int a; cin>>a;
        long long int fact = 1;
        for (int j = 1; j <= a; j++)
        {
            fact =fact * j;
        }
        cout<<fact<<endl;

    }
    
    return 0;
}