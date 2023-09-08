#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        int val; cin>>val;
        ar.push_back(val);
    }

    vector<int> pre1;
    pre1.push_back(0);
    for (int i = 1; i < ar.size(); i++)
    {
        pre1.push_back(pre1[i-1]+ar[i-1]);
    }

    vector<int> pre2;
    reverse(ar.begin(),ar.end());
    pre2.push_back(0);
    for (int i = 1; i < ar.size(); i++)
    {
        pre2.push_back(pre2[i-1]+ar[i-1]);
    }
    reverse(pre2.begin(),pre2.end());

    ar.clear();

    for (int i = 0; i < n; i++)
    {
        if(pre1[i]>pre2[i])
        {
            ar.push_back(pre1[i]-pre2[i]);
        }
        else
        {
            ar.push_back(pre2[i]-pre1[i]);
        }
    }
    
    
    for(int i:ar)
    {
        cout<<i<<" ";
    }
    
    
    
    
       
    return 0;
}