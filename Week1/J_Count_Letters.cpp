#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a; cin>>a;

    vector<int> v(26);

    for (int i = 0; i < a.size(); i++)  v[a[i]-97]++;
    
    for (int i = 0; i < 26; i++)
    {
        if (v[i] > 0)
        {
            char c = i+97;
            cout<<c<<" : "<<v[i]<<endl;
        }
        
    }
    
       
    return 0;
}