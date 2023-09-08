#include<bits/stdc++.h>
using namespace std;
void fun(int * &p)
{
    cout<<&p<<endl;
    // p = NULL;
}
int main()
{
    int a = 10;
    int * ptr = &a;
    // cout<<*ptr<<endl;
    // fun(ptr);
    int ** p = &ptr;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*&p<<endl;
    // cout<<*ptr<<endl;
       
    return 0;
}