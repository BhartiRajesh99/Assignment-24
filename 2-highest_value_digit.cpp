#include<iostream>
using namespace std;
void highest_value(int);
int main()
{
    int a;
    cout<<"Enter a number:";
    cin>>a;
    highest_value(a);
    return 0;
}
void highest_value(int x)
{
    int i,digit,highest=0;
    for(i=0;x;i++)
    {
        digit=x%10;
        if(highest<digit)
            highest=digit;
        x/=10;
    }
    cout<<"Highest digit = "<<highest;
}