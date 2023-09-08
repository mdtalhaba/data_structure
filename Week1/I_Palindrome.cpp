#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a; cin>>a;

    string b = a;

    int i = 0, j=b.size()-1;

    while (i<j)
    {
        swap(b[i],b[j]);
        i++;
        j--;
    }

    while (b.front()=='0')
    {
        b.erase(0,1);
    }
    
    cout<<b<<endl;
    b==a ? cout<<"YES" : cout<<"NO";
    
       
    return 0;
}