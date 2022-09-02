#include<iostream>
using namespace std;
int max(int,int);
double max(double,double);
int main()
{
    int a,b;
    double c,d;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Greater is "<<max(a,b);
    cout<<"\nEnter two numbers:";
    cin>>c>>d;
    cout<<"Greater is "<<max(c,d);
    return 0;
}
int max(int x,int y)
{
    return x>y?x:y;
}
double max(double p,double q)
{
    return p>q?p:q;
}