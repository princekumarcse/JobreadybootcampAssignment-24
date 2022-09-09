// 1. Define a function to check whether a given number is a Prime number or not.
#include <iostream>
int checkprime(int);
using namespace std;
int main()
{
    int num;
    cout << "Enter The Number:\n";
    cin >> num;
    int x = checkprime(num);
    if (x == 1)
    cout <<num<<" Is Not Prime Number";
    else
    cout<<num << " Is Prime Number:";
   return 0;
}
int checkprime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % 2 == 0)
            return 1;
        else
            return 0;
    }
}