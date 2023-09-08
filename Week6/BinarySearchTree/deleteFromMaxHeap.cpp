#include<bits/stdc++.h>
using namespace std;
void insertHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int curIdx = v.size()-1;
    while (curIdx != 0)
    {
        int parIdx = (curIdx-1)/2;
        if(v[parIdx]<v[curIdx]) swap(v[parIdx],v[curIdx]);
        else break;
        
        curIdx = parIdx;
    }
}

void deleteMaxHeap(vector<int> &v)
{
    int i = 0;

    v[i] = v.back();
    v.pop_back();
    while(true)
    {
        int first = (i*2)+1;
        int second = (i*2)+2;
        int lastIdx = v.size()-1;
        if(first<=lastIdx && second<=lastIdx)
        {
            if(v[first]>=v[second] && v[first]>v[i])
            {
                swap(v[i],v[first]);
                i=first;
            }
            else if(v[second]>=v[first] && v[second]>v[i])
            {
                swap(v[i],v[second]);
                i=second;
            }
            else break;
        }
        else if(first<=lastIdx)
        {
            if(v[first]>v[i])
            {
                swap(v[i],v[first]);
                i=first;
            }
            else break;
        }
        else if(second<=lastIdx)
        {
            if(v[second]>v[i])
            {
                swap(v[i],v[second]);
                i=second;
            }
            else break;
        }
        else break;
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
    for (int i = 0; i < 9; i++)
    {
        cout<<endl;
        deleteMaxHeap(v);
        for(int val:v) cout<<val<<" ";
    }
    
    
       
    return 0;
}