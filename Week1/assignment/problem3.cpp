#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; cin>>q;

    while (q--)
    {
        int n; cin>>n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin>>ar[i];
        }
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] > ar[i+1])
            {
                flag = false;
                break;
            }
            
        }
        if (flag == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
    }
    
    
    return 0;
}