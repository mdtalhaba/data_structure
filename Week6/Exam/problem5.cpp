#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int marks;
        Student(string name, int roll, int marks)
        {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

class cmp
{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.marks == b.marks) return a.roll > b.roll;
            else return a.marks < b.marks;
        }
};

int main()
{
    priority_queue<Student, vector<Student>,cmp> pq;
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        int marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }

    int q; cin>>q;
    while (q--)
    {
        int x; cin>>x;
        if(x==0)
        {
            string name;
            int roll;
            int marks;
            cin>>name>>roll>>marks;
            Student obj(name,roll,marks);
            pq.push(obj);
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(x==1)
        {
            if(pq.empty())
            {
                cout<<"Empty"<<endl;
            }
            else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else
        {
            if(!pq.empty())
            {
                pq.pop();
                if(pq.empty())
                {
                    cout<<"Empty"<<endl;
                }
                else cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
    }
    
    return 0;
}