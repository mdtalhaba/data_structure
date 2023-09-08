#include<bits/stdc++.h>
using namespace std;
// void func(int j)
// {
//     if(j==0) return;
//     int mod = j%10;
//     func(j/10);
//     if(mod == 4 || mod == 7) cout<<mod;
    
// }
int main()
{
    int a,b; cin>>a>>b;

    int sm,bg;

    (a>b) ? bg=a  : bg=b;
    (a<b) ? sm=a  : sm=b;

    for (int i = sm; i <= bg; i++)
    {
        vector<int> v;
        int j = i;
        while (j != 0)
        {
            int mod = j%10;
            cout<<mod<<" ";
            if (mod == 4 || mod == 7)
            {
                j=j/10;
                v.push_back(mod);
            }
            else
            {
                v.erase(v.begin(),v.end());
                break;
            }
            
        }
        if(j == 0) for(int x:v) cout<<x<<" ";
        
        
        
    }
           
    return 0;
}