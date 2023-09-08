#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> reDuplicate;

    while (true)
    {
        int val; cin>>val;
        if(val == -1) break;
        reDuplicate.push_back(val);
    }
    reDuplicate.sort();
    reDuplicate.unique();
    
    for(auto it:reDuplicate)
    {
        cout<<it<<" ";
    }
       
    return 0;
}