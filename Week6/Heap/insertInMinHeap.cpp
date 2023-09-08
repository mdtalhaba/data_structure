#include<bits/stdc++.h>
using namespace std;
void insertHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int curIdx = v.size()-1;
    while (curIdx != 0)
    {
        int parIdx = (curIdx-1)/2;
        if(v[parIdx]>v[curIdx]) swap(v[parIdx],v[curIdx]);
        else break;
        
        curIdx = parIdx;
    }
}
int main()
{
    vector<int> v;

    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        insertHeap(v,x);
    }

    for(int val:v) cout<<val<<" ";
    
       
    return 0;
}