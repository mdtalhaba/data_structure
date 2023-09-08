#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;

    for (int i = 2; i <= n; i++)
    {
        int flag = 0;
        if (i != 2 || i != 3)
        {
            for (int j = 2; j < i; j++)
            {
                if (i%j == 0)
                {
                    flag = 1;
                    break;
                }
                
            }
        }

        if (flag == 0) cout<<i<<" ";
        
    }
    
       
    return 0;
}