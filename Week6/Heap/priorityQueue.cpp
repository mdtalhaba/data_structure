#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Sorted Large To Small
    priority_queue<int> pqLgToSm;

    //Sorted Small To Large
    priority_queue<int, vector<int>, greater<int>> pqSmToLg;

    pqLgToSm.push(10);
    pqLgToSm.push(50);
    pqLgToSm.push(120);
    pqLgToSm.push(30);
    pqLgToSm.push(75);

    cout<<pqLgToSm.top()<<endl;
    pqLgToSm.pop();
    cout<<pqLgToSm.top()<<endl;

    pqSmToLg.push(10);
    pqSmToLg.push(50);
    pqSmToLg.push(120);
    pqSmToLg.push(30);
    pqSmToLg.push(75);

    cout<<pqSmToLg.top()<<endl;
    pqSmToLg.pop();
    cout<<pqSmToLg.top()<<endl;
       
    return 0;
}