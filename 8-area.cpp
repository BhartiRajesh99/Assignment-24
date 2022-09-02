#include<iostream>
using namespace std;
float area(int);
int area(int,int);
float area(float,float);
int main()
{
    int r,l,b;
    float base,height;
    cout<<"Enter the radius:";
    cin>>r;
    cout<<"area is "<<area(r)<<endl;
    cout<<"Enter the length and breadth:";
    cin>>l>>b;
    cout<<"area is "<<area(l,b)<<endl;
    cout<<"Enter the base and height:";
    cin>>base>>height;
    cout<<"area is "<<area(base,height);
    return 0;
}
float area(int x)
{
    return 3.14*x*x;
}
int area(int l,int b)
{
    return l*b;
}
float area(float base,float height)
{
    return (0.5*base*height);
}