#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;

    int ar[n];
    for (int i = 0; i < n; i++) cin>>ar[i];

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (ar[i]==ar[j])
            {
                flag = 1;
                break;
            }
            
        }
        
    }

    (flag == 1) ? cout<<"YES" : cout<<"NO";
    
    return 0;
}