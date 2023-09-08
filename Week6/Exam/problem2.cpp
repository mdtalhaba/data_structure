#include<bits/stdc++.h>
using namespace std;
class HighestWord
{
    public:
        string word;
        int count;
        HighestWord(string word,int count)
        {
            this->word = word;
            this->count = count;
        }
};

class cmp
{
    public:
        bool operator()(HighestWord a, HighestWord b)
        {
            return a.count < b.count;
        }
};

int main()
{
    int t; cin>>t;
    cin.ignore();

    while (t--)
    {
        priority_queue<HighestWord, vector<HighestWord>,cmp> pq;

        map<string,int> mp;
        string s;
        getline(cin,s);

        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            mp[word]++;
        }
        
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            HighestWord obj(it->first,it->second);
            pq.push(obj);
        }

        queue<pair<string,int>> q;

        while (!pq.empty())
        {
            if(q.empty()) q.push({pq.top().word,pq.top().count});
            else if(q.front().second==pq.top().count)
            {
                q.push({pq.top().word,pq.top().count});
            }
            else break;
            pq.pop();
        }

        while (!q.empty())
        {
            cout<<q.front().first<<" "<<q.front().second<<endl;
            q.pop();
        }
        stringstream s2(s);
        string w;
        while (s2 >>w)
        {
            cout<<w<<endl;
        }
        
        
        

    }
    

    return 0;
}