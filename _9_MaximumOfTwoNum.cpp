/*Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.
*/
#include<iostream>
using namespace std;
float max(float,float);
int max(int,int);
int main()
{
    int x,y;
    cout<<"Enter Two Numbers:";
    cin>>x>>y;
    cout<<"Maximum is :"<<max(x,y)<<endl;
    float a,b;
    cout<<"Enter two Float Numbers:";
    cin>>a>>b;
    cout<<"Maximum is :"<<max(a,b);
    return 0;
}
//for float number
float max(float a,float b)
{
    if(a>b)
    return a;
    else
    return b;
}
//for int number
int max(int x,int y)
{
    if(x>y)
    return x;
    else
    return y;
}