#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    swap(a,b);
    cout<<"After swap a="<<a<<" b="<<b;
    return 0;
}
void swap(int &i,int &j)
{
    int l;
    l=i;
    i=j;
    j=l;
}