// A PROGRAM THAT tells bigger number out of two numbers

#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << a << " is bigger" << endl;
    else
        cout << b << " is bigger" << endl;

    return 0;
}