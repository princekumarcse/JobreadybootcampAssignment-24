//Define a function to print Pascal Triangle up to N lines.
#include<iostream>
void pascaltrangle(int);
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number Of Line :";
    cin>>n;
    pascaltrangle(n);
    return 0;
}
void pascaltrangle(int x)
{
    int i,r,value;
    for(i=1;i<=x;i++)
    {
        for(r=1;r<=x-i+1;r++)
        cout<<"  ";
        value=1;
        for(r=1;r<=i;r++)
        {
            cout<<value<<"   ";
            value=value*(i-r)/r;
        }
        cout<<endl;
    }
}