#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout << "Enter angle 1: ";
    cin >> a;
    cout << "Enter angle 2: ";
    cin >> b;
    cout << "Enter angle 3: ";
    cin >> c;
    
    if (a + b + c == 180 && a > 0 && b > 0 && c > 0) 
    {
        if (a == 90 || b == 90 || c == 90) 
        {
            cout << "Right Angled Triangle";
        }
        else if (a > 90 || b > 90 || c > 90) 
        {
            cout << "Obtuse Angled Triangle";
        } 
        else
        {
            cout << "Acute Angled Triangle";
        }
    }
    else 
    {
        cout << "Invalid Triangle, angles must sum to 180";
    }
    return 0;
}