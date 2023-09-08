#include<bits/stdc++.h>
using namespace std;
class HighestVal
{
    public:
        int val;
        int count;
        HighestVal(int val,int count)
        {
            this->val = val;
            this->count = count;
        }
};

class cmp
{
    public:
        bool operator()(HighestVal a, HighestVal b)
        {
            if(a.count==b.count) return a.val < b.val;
            else return a.count < b.count;
        }
};
int main()
{
    int t; cin>>t;
    while (t--)
    {
        priority_queue<HighestVal, vector<HighestVal>,cmp> pq;
        map<int,int> mp;
        int n; cin>>n;

        for (int i = 0; i < n; i++)
        {
            int val; cin>>val;
            mp[val]++;
        }
        
        for(auto i:mp)
        {
            HighestVal obj(i.first,i.second);
            pq.push(obj);
        }
        
        cout<<pq.top().val<<" "<<pq.top().count<<endl;
        
    }
    
    return 0;
}