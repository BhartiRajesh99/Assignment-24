#include<iostream>
#include<conio.h>
using namespace std;
void pascal(int);
int factorial(int);
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    pascal(a);
    getch();
    return 0;
}
void pascal(int x)
{
    int i,j,k,v;
    for(i=0;i<x;i++)
    {
        for(k=1;k<x-i;k++)
            cout<<" ";
        for(j=0;j<=i;j++)
        {
            v=factorial(i)/(factorial(j)*factorial(i-j));
            cout<<v<<" "; 
        }
        cout<<endl;
    }
}
int factorial(int c)
{
    int i,m=1;;
    for(i=1;i<=c;i++)
        m=m*i;
    return m;
}