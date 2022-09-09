//7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
int sum(int ,int,int=0);
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter Two Numbers:";
    cin>>num1>>num2;
    cout<<"Sum Of "<<num1 <<" And " <<num2<<" Is:"<<sum(num1,num2)<<endl;
    cout<<"Enter Three Number:";
    cin>>num1>>num2>>num3;
    cout<<"Sum Of "<<num1<<","<<num2<<" And "<< num3 <<" Is:"<<sum(num1,num2,num3)<<endl;
    return 0;
}
int sum(int x,int y,int z)
{
    return x+y+z;
}