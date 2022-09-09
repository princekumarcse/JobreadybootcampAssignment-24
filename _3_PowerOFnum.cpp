//Define a function to calculate x raised to the power y.
#include<iostream>
#include<cmath>
int powerofnum(int,int);
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter Number:"<<endl;
    cin>>x;
    cout<<"Enter Power For Number:"<<endl;
    cin>>y;
    cout<<x <<" To The Power "<< y<<" is: "<<powerofnum(x,y);
    return 0;
}
int powerofnum(int a,int b)
{
     return pow(a, b)+1;
}