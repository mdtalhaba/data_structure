#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j && n/2 == j) cout<<"X";
            else if (i+j == n-1) cout<<"/";
            else if (i==j) cout<<"\\";
            else cout<<" ";
            
        }
        cout<<endl;
        
    }
    
    return 0;
}