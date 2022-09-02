#include<iostream>
using namespace std;
void power(int,int);
int main()
{
    int a,b;
    cout<<"Enter the number And power:";
    cin>>a>>b;
    power(a,b);
    return 0;
}
void power(int x,int y)
{
    int i,c=1;
    for(i=1;i<=y;i++)
        c=c*x;
    cout<<c;
}