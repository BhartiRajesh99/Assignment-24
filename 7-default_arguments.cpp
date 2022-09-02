#include<iostream>
using namespace std;
void add(int,int=0,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    add(a,b);
    cout<<"\nEnter three numbers:";
    cin>>a>>b>>c;
    add(a,b,c);
    return 0;
}
void add(int x,int y,int z)
{
    cout<<"Sum is "<<x+y+z;
}