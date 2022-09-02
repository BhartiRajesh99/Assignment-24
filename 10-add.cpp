#include<iostream>
using namespace std;
int add(int,int);
float add(float,float);
int main()
{
    int a,b;
    float c,d;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"sum is "<<add(a,b);
    cout<<"\nEnter two numbers:";
    cin>>c>>d;
    cout<<"sum is "<<add(c,d);
    return 0;
}
int add(int x,int y)
{
    return (x+y);
}
float add(float q,float w)
{
    return (q+w);
}