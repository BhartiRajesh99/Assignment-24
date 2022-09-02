#include<iostream>
using namespace std;
int fibonacci(int);
int main()
{
    int a,t;
    cout<<"Enter a number:";
    cin>>a;
    t=fibonacci(a);
    cout<<(t==1?"yes":"no");
    return 0;
}
int fibonacci(int x)
{
    int i,a=0,b=1,z;
    for(i=1;a<x;i++)
    {
        z=a;
        a=a+b;
        b=z;
        if(a==x)
            return 1;
    }
    if(x==0)
        return 1;
    else
        return 0;
}