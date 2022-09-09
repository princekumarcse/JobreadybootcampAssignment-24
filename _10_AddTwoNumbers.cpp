/*Write functions using function overloading to add two numbers having different data
types.
*/
#include<iostream>
int sum(int,int);
float sum(float,float);
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter Two Numbers:";
    cin>>x>>y;
    cout<<"Sum is :"<<sum(x,y)<<endl;
    float num1,num2;
    cout<<"Enter Two Float types Number:";
    cin>>num1>>num2;
    cout<<"Sum is :"<<sum(num1,num2)<<endl;
    return 0;
}
int sum(int x,int y)
{
    return x+y;//sum of int type
}
float sum(float num1,float num2)
{
    return num1+num2;
}