#include <iostream>
using namespace std;

int main() 
{
    int units;
    cout<<"ENTER YOUR UNITS : ";
    cin >> units;
    if (units <= 100) 
    {
        cout << units * 10;
    }
    else 
    {
        if (units <= 300)
        {
            cout << (100 * 10) + ((units - 100) * 15);
        } 
        else
        {
            cout << (100 * 10) + (200 * 15) + ((units - 300) * 20);
        }
    }
    return 0;
}