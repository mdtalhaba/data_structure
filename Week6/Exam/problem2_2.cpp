#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    cin.ignore();

    while (t--)
    {
        map<string,int> mp;
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;

        int cnt = 0;
        string tmp;
        while (ss >> word)
        {
            mp[word]++;
            if(mp[word]>cnt)
            {
                cnt++;
                tmp=word;
            }
        }
        cout<<tmp<<" "<<cnt<<endl;
    }
    

    return 0;
}