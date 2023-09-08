#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++) cin>>ar[i];

        vector<int> srt(n);
        srt = ar;

        sort(srt.begin(),srt.end());

        (ar == srt) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        
    }
    
       
    return 0;
}