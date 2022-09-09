// Define a function to find the highest value digit in a given number.
#include <iostream>
void hightdigit(int x);
using namespace std;
int main()
{
    int num;
    cout << "Enter A Number:" << endl;
    cin >> num;
    hightdigit(num);
    return 0;
}
void hightdigit(int x)
{
    int y=x;
    int r, high = 0;
    while (x !=0)
    {
        r = x % 10;
        if (r > high)
        {
            high = r;
        }
        x = x / 10;
    }
    cout<<"Highet Digit of "<< y<< " is: "<< high <<endl;
}