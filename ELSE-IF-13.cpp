#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout << "Enter side 1: ";
    cin >> a;
    cout << "Enter side 2: ";
    cin >> b;
    cout << "Enter side 3: ";
    cin >> c;
    
    if (a == b && b == c)
    {
        cout << "Equilateral";
    }
    else if (a == b || b == c || a == c) 
    {
        cout << "Isosceles";
    }
    else if (a + b > c && b + c > a && a + c > b) 
    {
        cout << "Scalene";
    }
    else 
    {
        cout << "Invalid Triangle";
    }
    return 0;
}