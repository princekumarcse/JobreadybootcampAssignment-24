/*8. Define overloaded functions to calculate area of circle, area of rectangle and area of
triangle
*/
#include<iostream>
float area(int);
int area(int,int);
double tarea(int,int);
using namespace std;
int main()
{
    int r;
    cout<<"Enter Radious of Circle:";
    cin>>r;
    cout<<"Area of Circle is: "<<area(r)<<endl;
    int l,b;
    cout<<"Enter Length & width of Rectengle:";
    cin>>l>>b;
    cout<<"Area Of Rectengle is: "<<area(l,b)<<endl;
    int base,hight;
    cout<<"Enter Base & Hight of Triangle:";
    cin>>base>>hight;
    cout<<"Area of Triangle is: "<<tarea(base,hight)<<endl;
    return 0;
}
float area(int r)
{
 return 3.14*r*r;//area of circle
}
int area(int l,int b)
{
    return l*b;//area of rectengle
}
double tarea(int base,int hight)
{
    return (0.5*(base*hight));
}