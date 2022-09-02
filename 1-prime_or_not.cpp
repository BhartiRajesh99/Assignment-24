#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int a,pr;
    cout<<"Enter a number:";
    cin>>a;
    pr=prime(a);
    cout<<(pr==1?"prime":"not prime");
    return 0;
}
int prime(int x)
{
    int i;
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
            break;
    }
    if(i==x)
        return 1;
    else 
        return 0;
}