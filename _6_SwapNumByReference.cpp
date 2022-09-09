// 6. Define a function to swap data of two int variables using call by reference
#include <iostream>
void swap(int &, int &);
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter Two Numbers:";
    cin >> num1 >> num2;
    swap(num1, num2);
    return 0;
}
void swap(int &x, int &y)
{
    int tem;
    tem = x;
    x = y;
    y = tem;
    cout << "Swapped Value : ";
    cout<<x<<" "<<y;
}