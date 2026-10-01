#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Enter a number : ";
    cin>> b; 
    cout << "Enter a number : ";
    cin>> c;

    if (a >= b) 
    {
        if (a >= c)
        {
            cout << "The largest number is: " << a;
        }
        else 
        {
            cout << "The largest number is: " << c;
        }
    }
    else 
    {
        if (b >= c)
        {
            cout << "The largest number is: " << b;
        } 
        else 
        {
            cout << "The largest number is: " << c;
        }
    }
    return 0;
}