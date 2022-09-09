//Define function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
void checkfib(int);
using namespace std;
int main()
{
    int num;
    cout<<"Enter A Number:";
    cin>>num;
    checkfib(num);
    return 0;
}
void checkfib(int x)
{
    int a=-1,b=1,c=0,i,y;
    y=x;//copy of original number
    for(i=0;i<=x;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==y)
        break;
    }
    if(c==y)
        cout<<y<<" Is Fibonacci Term"<<endl;
    else
    cout<<y<<" Is Not A Fibonaaci Term"<<endl;
}